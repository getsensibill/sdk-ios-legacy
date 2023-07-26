//
//  SBDictionaryHelper.h
//  Pods
//
//  Created by Nik Sawtschuk on 2017-04-11.
//
//

#import <Foundation/Foundation.h>

@interface SBDictionaryHelper : NSObject

+ (BOOL)stringHasValue:(NSString *)string;

+ (id)objectOrNilForKey:(id)aKey fromDictionary:(NSDictionary *)dict;

@end
