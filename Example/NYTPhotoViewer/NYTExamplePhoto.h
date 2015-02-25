//
//  NYTExamplePhoto.h
//  ios-photo-viewer
//
//  Created by Brian Capps on 2/11/15.
//  Copyright (c) 2015 Brian Capps. All rights reserved.
//

@import Foundation;

#import <NYTPhotoViewer/NYTPhoto.h>

@interface NYTExamplePhoto : NSObject <NYTPhoto>

// Redclare all the properties as readwrite for sample/testing purposes.
@property (nonatomic) UIImage *image;
@property (nonatomic) UIImage *placeholderImage;
@property (nonatomic) NSAttributedString *attributedCaptionTitle;
@property (nonatomic) NSAttributedString *attributedCaptionSummary;
@property (nonatomic) NSAttributedString *attributedCaptionCredit;
@property (nonatomic) NSString *identifier;

@end
