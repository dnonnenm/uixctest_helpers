#import <XCTest/XCUIApplication.h>
#import <XCTest/XCUIElement.h>

@interface XCUIApplication (Private)
- (id)initPrivateWithPath:(NSString *)path bundleID:(NSString *)bundleID;
- (void)resolve;
@end

@interface XCUIDevice (Private)
- (void)holdHomeButtonForDuration:(double)arg1;
@end
