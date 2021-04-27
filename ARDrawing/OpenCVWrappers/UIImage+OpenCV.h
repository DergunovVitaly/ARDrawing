//
//  UIImage+OpenCV.h
//  ARDrawing
//
//  Created by Vitaliy Dergunov on 27.04.2021.
//

#import <UIKit/UIKit.h>

@interface UIImage (OpenCV)

+ (UIImage *)imageFromCVMat:(cv::Mat)mat;

- (cv::Mat)cvMatRepresentationColor;
- (cv::Mat)cvMatRepresentationGray;

@end

