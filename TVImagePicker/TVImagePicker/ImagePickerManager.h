#import <React/RCTBridgeModule.h>
#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, RNImagePickerTarget) {
    RNImagePickerTargetCamera = 1,
    RNImagePickerTargetLibrarySingleImage,
};

@interface ImagePickerManager : NSObject <RCTBridgeModule, UINavigationControllerDelegate, UIActionSheetDelegate, UIImagePickerControllerDelegate>

@end
