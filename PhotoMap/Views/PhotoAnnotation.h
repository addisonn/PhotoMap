//
//  PhotoAnnotation.h
//  PhotoMap
//
//  Created by addisonz on 7/8/19.
//  Copyright © 2019 Codepath. All rights reserved.
//

#import <MapKit/MapKit.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@import MapKit;

@interface PhotoAnnotation : NSObject <MKAnnotation>

@property (strong, nonatomic) UIImage *photo;

@end

NS_ASSUME_NONNULL_END
