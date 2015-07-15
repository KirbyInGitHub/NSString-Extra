//
//  NSString+Hash.h
//
//  Created by 大白菜 on 15/07/15.
//  Copyright (c) 2015年 itcast. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSString (Extra)

#pragma mark - 散列函数
/**
 *  计算MD5散列结果
 *
 *  终端测试命令：
 *  @code
 *  md5 -s "string"
 *  @endcode
 *
 *  <p>提示：随着 MD5 碰撞生成器的出现，MD5 算法不应被用于任何软件完整性检查或代码签名的用途。<p>
 *
 *  @return 32个字符的MD5散列字符串
 */
- (NSString *)md5String;

/**
 *  计算SHA1散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha1
 *  @endcode
 *
 *  @return 40个字符的SHA1散列字符串
 */
- (NSString *)sha1String;

/**
 *  计算SHA256散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha256
 *  @endcode
 *
 *  @return 64个字符的SHA256散列字符串
 */
- (NSString *)sha256String;

/**
 *  计算SHA 512散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha512
 *  @endcode
 *
 *  @return 128个字符的SHA 512散列字符串
 */
- (NSString *)sha512String;

#pragma mark - HMAC 散列函数
/**
 *  计算HMAC MD5散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl dgst -md5 -hmac "key"
 *  @endcode
 *
 *  @return 32个字符的HMAC MD5散列字符串
 */
- (NSString *)hmacMD5StringWithKey:(NSString *)key;

/**
 *  计算HMAC SHA1散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha1 -hmac "key"
 *  @endcode
 *
 *  @return 40个字符的HMAC SHA1散列字符串
 */
- (NSString *)hmacSHA1StringWithKey:(NSString *)key;

/**
 *  计算HMAC SHA256散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha256 -hmac "key"
 *  @endcode
 *
 *  @return 64个字符的HMAC SHA256散列字符串
 */
- (NSString *)hmacSHA256StringWithKey:(NSString *)key;

/**
 *  计算HMAC SHA512散列结果
 *
 *  终端测试命令：
 *  @code
 *  echo -n "string" | openssl sha -sha512 -hmac "key"
 *  @endcode
 *
 *  @return 128个字符的HMAC SHA512散列字符串
 */
- (NSString *)hmacSHA512StringWithKey:(NSString *)key;

/**
 *  HMAC + SeverTime 散列结果
 *
 *  @param key 自定义的key
 *  @param url 提供time的服务器URL
 *
 *  @return 32个字符的HMAC MD5散列字符串
 */
- (NSString *)hmacMD5StringWithKey:(NSString *)key andSeverTimeWithSever:(NSURL *)url;

#pragma mark - 文件散列函数

/**
 *  计算文件的MD5散列结果
 *
 *  终端测试命令：
 *  @code
 *  md5 file.dat
 *  @endcode
 *
 *  @return 32个字符的MD5散列字符串
 */
- (NSString *)fileMD5Hash;

/**
 *  计算文件的SHA1散列结果
 *
 *  终端测试命令：
 *  @code
 *  openssl sha -sha1 file.dat
 *  @endcode
 *
 *  @return 40个字符的SHA1散列字符串
 */
- (NSString *)fileSHA1Hash;

/**
 *  计算文件的SHA256散列结果
 *
 *  终端测试命令：
 *  @code
 *  openssl sha -sha256 file.dat
 *  @endcode
 *
 *  @return 64个字符的SHA256散列字符串
 */
- (NSString *)fileSHA256Hash;

/**
 *  计算文件的SHA512散列结果
 *
 *  终端测试命令：
 *  @code
 *  openssl sha -sha512 file.dat
 *  @endcode
 *
 *  @return 128个字符的SHA512散列字符串
 */
- (NSString *)fileSHA512Hash;

#pragma mark - base64加密解密

/**
 *  用base64的方式给字符串进行编码
 *
 *  @param str 需要编码的字符串
 *
 *  @return 编码完成的字符串
 */
- (NSString *)base64EncodeStr:(NSString *)str;

/**
 *  用base64的方式给字符串进行解码
 *
 *  @param str 需要解码的字符串
 *
 *  @return 解码完成的字符串
 */
- (NSString *)base64DecodeStr:(NSString *)str;

#pragma mark - URL特殊字符编码解码
#pragma mark IOS9以下适用

/**
 *  URL里面的特殊字符的编码
 *
 *  @param str 需要编码的URL字符串
 *
 *  @return 编码完成的URL字符串
 */
- (NSString *)URLencodeToPercentEscapeString:(NSString *)str;

/**
 *  经过特殊字符编码的字符串的解码
 *
 *  @param str 需要解码的URL字符串
 *
 *  @return 解码完成的URL字符串
 */
- (NSString *)URLdecodeFromPercentEscapeString:(NSString *)str;

#pragma mark - 返回文件在沙盒路径

/**
 *  返回文件在沙盒中的路径
 *
 *  @return 当前文件在沙盒中的保存路径
 */
- (NSString *)documentsPath;

#pragma mark - 写入系统偏好设置

/**
 *  把NSString类型的obj写入系统偏好设置
 *
 *  @param key 写入的key值
 */
- (void)saveToNSDefaultsWithKey:(NSString *)key;

#pragma mark - 判断是否是空字符串

- (BOOL)isEmptyString;

@end
