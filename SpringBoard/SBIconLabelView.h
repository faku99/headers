#import <UIKit/_UILegibilityView.h>

@class SBIconLabelImageParameters, _UILegibilitySettings;

@interface SBIconLabelView : _UILegibilityView

+ (void)updateIconLabelView:(SBIconLabelView *)labelView withSettings:(_UILegibilitySettings *)settings imageParameters:(SBIconLabelImageParameters *)params;

- (void)setImageParameters:(SBIconLabelImageParameters *)params;

@end
