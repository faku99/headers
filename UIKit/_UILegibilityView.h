#import <UIKit/UIView.h>

@class UIImage;

@interface _UILegibilityView : UIView

@property (nonatomic, retain) UIImage *image;

- (UIImage *)image;

- (void)setImage:(UIImage *)image;

@end
