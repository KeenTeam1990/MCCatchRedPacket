//
//  KTGIFImage.h
//  KTGIFImage
//
//  Created by keenteam on 2017/12/30.
//  Copyright © 2017年 keenteam. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface KTGIFImage : UIImage
/**
 *array containing the frame durations
 */
@property (nonatomic , readonly)NSTimeInterval *frameDurations;
/**
 *Total duration of the animated image
 */
@property (nonatomic , readonly)NSTimeInterval totalDuration;

/**
 Number of loops the image can do before it stops
 */
@property (nonatomic, readonly) NSUInteger loopCount;

- (UIImage*)getFrameWithIndex:(NSUInteger)idx;

@end
