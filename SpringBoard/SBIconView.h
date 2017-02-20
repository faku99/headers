@class SBIcon, SBIconLabelView, SBIconLabelImageParameters, _UILegibilitySettings;

@interface SBIconView : UIView

@property (nonatomic, readonly) long long currentLabelAccessoryType;

- (SBIcon *)icon;

- (SBIconLabelImageParameters *)_labelImageParameters;

- (SBIconLabelView *)labelView;

- (void)prepareDropGlow;
- (void)removeDropGlow;
- (void)setLabelHidden:(BOOL)hide;
- (void)showDropGlow:(BOOL)show;

- (void)_updateAccessoryViewWithAnimation:(BOOL)animated;
- (void)_updateLabel;

- (_UILegibilitySettings *)legibilitySettings;

@end
