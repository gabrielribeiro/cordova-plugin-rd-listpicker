#import <Foundation/Foundation.h>
#import <Cordova/CDVPlugin.h>

@interface ListPicker : CDVPlugin <UIActionSheetDelegate, UIPopoverControllerDelegate, UIPickerViewDelegate> {
}

#pragma mark - Properties

@property (nonatomic, copy) NSString* callbackId;
@property (nonatomic, strong) NSArray *items;

#pragma mark - Instance methods

- (void)showPicker:(CDVInvokedUrlCommand*)command;

@end
