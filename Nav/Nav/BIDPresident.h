//
//  BIDPresident.h
//  Nav
//
//  Created by Maria Alice C. Lim on 12/3/13.
//  Copyright (c) 2013 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

#define kPresidentNumberKey     @"President"
#define kPresidentNameKey       @"Name"
#define kPresidentFromKey       @"FromYear"
#define kPresidentToKey         @"ToYear"
#define kPresidentPartyKey      @"Party"

@interface BIDPresident : NSObject <NSCoding>

@property int number;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *fromYear;
@property (nonatomic, copy) NSString *toYear;
@property (nonatomic, copy) NSString *party;

@end
