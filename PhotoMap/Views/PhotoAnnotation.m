//
//  PhotoAnnotation.m
//  PhotoMap
//
//  Created by addisonz on 7/8/19.
//  Copyright © 2019 Codepath. All rights reserved.
//

#import "PhotoAnnotation.h"

@interface PhotoAnnotation()

@property (nonatomic) CLLocationCoordinate2D coordinate;

@end

@implementation PhotoAnnotation

- (NSString *)title {
    return [NSString stringWithFormat:@"%f", self.coordinate.latitude];
}
@end
