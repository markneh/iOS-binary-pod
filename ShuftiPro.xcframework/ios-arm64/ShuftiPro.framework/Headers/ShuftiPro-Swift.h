// Generated by Apple Swift version 5.5.1 (swiftlang-1300.0.31.4 clang-1300.0.29.6)
#ifndef SHUFTIPRO_SWIFT_H
#define SHUFTIPRO_SWIFT_H
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wgcc-compat"

#if !defined(__has_include)
# define __has_include(x) 0
#endif
#if !defined(__has_attribute)
# define __has_attribute(x) 0
#endif
#if !defined(__has_feature)
# define __has_feature(x) 0
#endif
#if !defined(__has_warning)
# define __has_warning(x) 0
#endif

#if __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <Foundation/Foundation.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus)
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if __has_attribute(ns_consumed)
# define SWIFT_RELEASES_ARGUMENT __attribute__((ns_consumed))
#else
# define SWIFT_RELEASES_ARGUMENT
#endif
#if __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if __has_attribute(noreturn)
# define SWIFT_NORETURN __attribute__((noreturn))
#else
# define SWIFT_NORETURN
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif
#if !defined(SWIFT_RESILIENT_CLASS)
# if __has_attribute(objc_class_stub)
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME) __attribute__((objc_class_stub))
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_class_stub)) SWIFT_CLASS_NAMED(SWIFT_NAME)
# else
#  define SWIFT_RESILIENT_CLASS(SWIFT_NAME) SWIFT_CLASS(SWIFT_NAME)
#  define SWIFT_RESILIENT_CLASS_NAMED(SWIFT_NAME) SWIFT_CLASS_NAMED(SWIFT_NAME)
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM_ATTR)
# if defined(__has_attribute) && __has_attribute(enum_extensibility)
#  define SWIFT_ENUM_ATTR(_extensibility) __attribute__((enum_extensibility(_extensibility)))
# else
#  define SWIFT_ENUM_ATTR(_extensibility)
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name, _extensibility) enum _name : _type _name; enum SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# if __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_ATTR(_extensibility) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME, _extensibility) SWIFT_ENUM(_type, _name, _extensibility)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_WEAK_IMPORT)
# define SWIFT_WEAK_IMPORT __attribute__((weak_import))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if __has_feature(attribute_diagnose_if_objc)
# define SWIFT_DEPRECATED_OBJC(Msg) __attribute__((diagnose_if(1, Msg, "warning")))
#else
# define SWIFT_DEPRECATED_OBJC(Msg) SWIFT_DEPRECATED_MSG(Msg)
#endif
#if !defined(IBSegueAction)
# define IBSegueAction
#endif
#if __has_feature(modules)
#if __has_warning("-Watimport-in-framework-header")
#pragma clang diagnostic ignored "-Watimport-in-framework-header"
#endif
@import AVFoundation;
@import CoreGraphics;
@import CoreMedia;
@import Foundation;
@import MessageUI;
@import ObjectiveC;
@import UIKit;
@import WebKit;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
#if __has_warning("-Wpragma-clang-attribute")
# pragma clang diagnostic ignored "-Wpragma-clang-attribute"
#endif
#pragma clang diagnostic ignored "-Wunknown-pragmas"
#pragma clang diagnostic ignored "-Wnullability"

#if __has_attribute(external_source_symbol)
# pragma push_macro("any")
# undef any
# pragma clang attribute push(__attribute__((external_source_symbol(language="Swift", defined_in="ShuftiPro",generated_declaration))), apply_to=any(function,enum,objc_interface,objc_category,objc_protocol))
# pragma pop_macro("any")
#endif

@class NSNumber;
@class UIColor;
@class NSCoder;

/// Computed properties, based on the backing CALayer property, that are visible in Interface Builder.
IB_DESIGNABLE
SWIFT_CLASS("_TtC9ShuftiPro12ANCustomView")
@interface ANCustomView : UIView
/// When positive, the background of the layer will be drawn with rounded corners. Also effects the mask generated by the `masksToBounds’ property. Defaults to zero. Animatable.
@property (nonatomic) IBInspectable double cornerRadius;
/// The width of the layer’s border, inset from the layer bounds. The border is composited above the layer’s content and sublayers and includes the effects of the `cornerRadius’ property. Defaults to zero. Animatable.
@property (nonatomic) IBInspectable double borderWidth;
/// The color of the layer’s border. Defaults to opaque black. Colors created from tiled patterns are supported. Animatable.
@property (nonatomic, strong) IBInspectable UIColor * _Nullable borderColor;
/// The color of the shadow. Defaults to opaque black. Colors created from patterns are currently NOT supported. Animatable.
@property (nonatomic, strong) IBInspectable UIColor * _Nullable shadowColor;
/// The opacity of the shadow. Defaults to 0. Specifying a value outside the [0,1] range will give undefined results. Animatable.
@property (nonatomic) IBInspectable float shadowOpacity;
/// The shadow offset. Defaults to (0, -3). Animatable.
@property (nonatomic) IBInspectable CGSize shadowOffset;
/// The blur radius used to create the shadow. Defaults to 3. Animatable.
@property (nonatomic) IBInspectable double shadowRadius;
@property (nonatomic) IBInspectable CGFloat leftTopRadius;
@property (nonatomic) IBInspectable CGFloat rightTopRadius;
@property (nonatomic) IBInspectable CGFloat rightBottomRadius;
@property (nonatomic) IBInspectable CGFloat leftBottomRadius;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end



SWIFT_CLASS("_TtC9ShuftiPro7CallApi")
@interface CallApi : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end

@class UILabel;
@class UIButton;
@class UIImageView;
@class AVCaptureFileOutput;
@class NSURL;
@class AVCaptureConnection;
@class NSString;
@class NSBundle;

SWIFT_CLASS("_TtC9ShuftiPro8CameraVc")
@interface CameraVc : UIViewController <AVCaptureFileOutputRecordingDelegate, NSURLSessionTaskDelegate>
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified cameraView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified titleView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified recordingView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified countDownLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleOnCamera;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified recordButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified backButton;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified switchCameraBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified flashBtn;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified flashImg;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified backBtnImg;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (IBAction)capture:(UIButton * _Nonnull)sender;
- (IBAction)switchCameraBtnPressed:(id _Nonnull)sender;
- (IBAction)backBtnPressedOnCamera:(id _Nonnull)sender;
- (IBAction)torchSwitch:(id _Nonnull)sender;
- (void)switchCamera;
- (void)captureOutput:(AVCaptureFileOutput * _Nonnull)output didFinishRecordingToOutputFileAtURL:(NSURL * _Nonnull)outputFileURL fromConnections:(NSArray<AVCaptureConnection *> * _Nonnull)connections error:(NSError * _Nullable)error;
- (void)cameraErrorMessageWithCamErrMsg:(NSString * _Nonnull)camErrMsg;
- (void)zoomIn;
- (void)zoomOut;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class AVCapturePhotoOutput;
@class AVCaptureResolvedPhotoSettings;
@class AVCaptureBracketedStillImageSettings;

@interface CameraVc (SWIFT_EXTENSION(ShuftiPro)) <AVCapturePhotoCaptureDelegate>
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)captureOutput didFinishProcessingPhotoSampleBuffer:(CMSampleBufferRef _Nullable)photoSampleBuffer previewPhotoSampleBuffer:(CMSampleBufferRef _Nullable)previewPhotoSampleBuffer resolvedSettings:(AVCaptureResolvedPhotoSettings * _Nonnull)resolvedSettings bracketSettings:(AVCaptureBracketedStillImageSettings * _Nullable)bracketSettings error:(NSError * _Nullable)error;
@end


@class UISwipeGestureRecognizer;

SWIFT_CLASS("_TtC9ShuftiPro9CameraVc2")
@interface CameraVc2 : UIViewController <AVCaptureFileOutputRecordingDelegate>
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified errorView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified guideLblView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified titleView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified recordingView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified bottomView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified captureFrontSideLbl;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified previewView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified flashImg;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified flashBtn;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleOnCamera;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified recordButton;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified captureGuideLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified captureGuideTopLbl;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified switchCameraBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified backButton;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified backBtnImg;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified countDownLabel;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified innerCameraView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (IBAction)backBtnPressedOnCamera:(id _Nonnull)sender;
- (IBAction)onTapTakePhoto:(id _Nonnull)sender;
- (IBAction)torchSwitch:(id _Nonnull)sender;
- (IBAction)switchCameraBtnPressed:(id _Nonnull)sender;
- (void)handleGestureWithGesture:(UISwipeGestureRecognizer * _Nonnull)gesture;
- (void)cameraErrorMessageWithCamErrMsg:(NSString * _Nonnull)camErrMsg;
- (void)switchCamera;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface CameraVc2 (SWIFT_EXTENSION(ShuftiPro)) <UIGestureRecognizerDelegate>
@end

@class AVCaptureMetadataOutput;
@class AVMetadataObject;

@interface CameraVc2 (SWIFT_EXTENSION(ShuftiPro)) <AVCaptureMetadataOutputObjectsDelegate>
- (void)captureOutput:(AVCaptureMetadataOutput * _Nonnull)captureOutput didOutputMetadataObjects:(NSArray<AVMetadataObject *> * _Nonnull)metadataObjects fromConnection:(AVCaptureConnection * _Nonnull)connection;
@end


@class AVCapturePhoto;

@interface CameraVc2 (SWIFT_EXTENSION(ShuftiPro)) <AVCapturePhotoCaptureDelegate>
- (void)captureOutput:(AVCapturePhotoOutput * _Nonnull)output didFinishProcessingPhoto:(AVCapturePhoto * _Nonnull)photo error:(NSError * _Nullable)error;
- (void)captureOutput:(AVCaptureFileOutput * _Nonnull)output didFinishRecordingToOutputFileAtURL:(NSURL * _Nonnull)outputFileURL fromConnections:(NSArray<AVCaptureConnection *> * _Nonnull)connections error:(NSError * _Nullable)error;
@end

@class NSLayoutConstraint;
@class UIStackView;

SWIFT_CLASS("_TtC9ShuftiPro14ConfirmPhotoVc")
@interface ConfirmPhotoVc : UIViewController
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified faceImagePreview;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified imagePreview;
@property (nonatomic, weak) IBOutlet NSLayoutConstraint * _Null_unspecified imagePreviewHeight;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLabel;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified confirmImageLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified previewPlayBtn;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified playVideoView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified retakeBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified yesContinueBtn;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified powerdByLbl;
@property (nonatomic, weak) IBOutlet UIStackView * _Null_unspecified bottomButtonsStackView;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (IBAction)backBtnPressed:(id _Nonnull)sender;
- (IBAction)previewPlayBtnPressed:(id _Nonnull)sender;
- (IBAction)retakeBtnPressed:(id _Nonnull)sender;
- (IBAction)yesContinueBtnPressed:(id _Nonnull)sender;
- (void)handleGestureWithGesture:(UISwipeGestureRecognizer * _Nonnull)gesture;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UISearchBar;
@class UITableView;

SWIFT_CLASS("_TtC9ShuftiPro18CountrySelectionVc")
@interface CountrySelectionVc : UIViewController
@property (nonatomic, weak) IBOutlet UISearchBar * _Null_unspecified searchBar;
@property (nonatomic, weak) IBOutlet UITableView * _Null_unspecified tableView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified powerdByLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified supportedTypeSubHeading;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified supportedTypesUIView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLbl;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)backBtnPreesed:(id _Nonnull)sender;
- (void)handleGestureWithGesture:(UISwipeGestureRecognizer * _Nonnull)gesture;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface CountrySelectionVc (SWIFT_EXTENSION(ShuftiPro)) <UISearchBarDelegate>
- (void)searchBarCancelButtonClicked:(UISearchBar * _Nonnull)searchBar;
- (void)searchBarTextDidEndEditing:(UISearchBar * _Nonnull)searchBar;
- (void)searchBar:(UISearchBar * _Nonnull)searchBar textDidChange:(NSString * _Nonnull)searchText;
@end

@class NSIndexPath;
@class UITableViewCell;

@interface CountrySelectionVc (SWIFT_EXTENSION(ShuftiPro)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
@end

@class UIWindow;
@class UIApplication;

SWIFT_CLASS("_TtC9ShuftiPro17CustomAppDelegate")
@interface CustomAppDelegate : UIResponder <UIApplicationDelegate>
@property (nonatomic, strong) UIWindow * _Nullable window;
- (UIInterfaceOrientationMask)application:(UIApplication * _Nonnull)application supportedInterfaceOrientationsForWindow:(UIWindow * _Nullable)window SWIFT_WARN_UNUSED_RESULT;
- (void)application:(UIApplication * _Nonnull)application handleEventsForBackgroundURLSession:(NSString * _Nonnull)handleEventsForBackgroundURLSessionidentifier completionHandler:(void (^ _Nonnull)(void))completionHandler;
- (void)applicationDidEnterBackground:(UIApplication * _Nonnull)application;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


IB_DESIGNABLE
SWIFT_CLASS("_TtC9ShuftiPro14DesignableView")
@interface DesignableView : UIView
@property (nonatomic) IBInspectable CGFloat cornerRadius;
@property (nonatomic, strong) IBInspectable UIColor * _Nonnull borderColor;
@property (nonatomic) IBInspectable CGFloat borderWidth;
- (void)layoutSubviews;
- (nonnull instancetype)initWithFrame:(CGRect)frame OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class WKWebView;
@class UITextView;

SWIFT_CLASS("_TtC9ShuftiPro14InstructionsVc")
@interface InstructionsVc : UIViewController <UIGestureRecognizerDelegate, UITextViewDelegate>
@property (nonatomic, copy) IBOutletCollection(UILabel) NSArray<UILabel *> * _Null_unspecified instructionsTitle;
@property (nonatomic, copy) IBOutletCollection(UILabel) NSArray<UILabel *> * _Null_unspecified setLineSpaceLbl;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified instructionsView;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified bckBtnImage;
@property (nonatomic, weak) IBOutlet WKWebView * _Null_unspecified instructionsImgWebview;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified instructionsLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified serviceInstructionsLabel1;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified serviceInstructionsLabel2;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified serviceInstructionsLabel3;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified serviceInstructionsLabel4;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified serviceInstructionsLabel5;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified instructionsText1;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified instructionsText2;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified instructionsText3;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified instructionsText4;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified instructionsText5;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified declarationOfConsentUIView;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified agreeToPrivacyBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified continueBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified cancelBtn;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified aggreeToPrivacyPolicyImageview;
@property (nonatomic, weak) IBOutlet UITextView * _Null_unspecified lblTermsAndConditions;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (IBAction)proceedBtnPressed:(id _Nonnull)sender;
- (IBAction)cancelInstructionBtnPressed:(id _Nonnull)sender;
- (void)handleGestureWithGesture:(UISwipeGestureRecognizer * _Nonnull)gesture;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIGestureRecognizer;
@class UITapGestureRecognizer;

@interface InstructionsVc (SWIFT_EXTENSION(ShuftiPro))
- (BOOL)gestureRecognizer:(UIGestureRecognizer * _Nonnull)gestureRecognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(UIGestureRecognizer * _Nonnull)otherGestureRecognizer SWIFT_WARN_UNUSED_RESULT;
- (BOOL)textView:(UITextView * _Nonnull)textView shouldInteractWithURL:(NSURL * _Nonnull)URL inRange:(NSRange)characterRange interaction:(UITextItemInteraction)interaction SWIFT_WARN_UNUSED_RESULT;
- (void)tapTextViewWithSender:(UITapGestureRecognizer * _Nonnull)sender;
- (IBAction)continueBtnPressed:(id _Nonnull)sender;
- (IBAction)cancelBtnPressed:(id _Nonnull)sender;
- (IBAction)agreeToPrivacyPressed:(id _Nonnull)sender;
@end


SWIFT_CLASS("_TtC9ShuftiPro18LocalizationSystem")
@interface LocalizationSystem : NSObject
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


@class UIActivityIndicatorView;
@class WKNavigation;

SWIFT_CLASS("_TtC9ShuftiPro22PrivacyPolicyWebviewVc")
@interface PrivacyPolicyWebviewVc : UIViewController <UIScrollViewDelegate, UIWebViewDelegate, WKNavigationDelegate, WKUIDelegate>
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activity;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified privacyPolicyView;
- (void)viewDidLoad;
- (IBAction)cancelWebViewBtnWithSender:(id _Null_unspecified)sender;
- (void)handleGestureWithGesture:(UISwipeGestureRecognizer * _Nonnull)gesture;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didCommitNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFailNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIVisualEffectView;

SWIFT_CLASS("_TtC9ShuftiPro8ResultVc")
@interface ResultVc : UIViewController <NSURLSessionTaskDelegate, MFMailComposeViewControllerDelegate>
@property (nonatomic, weak) IBOutlet UIVisualEffectView * _Null_unspecified loadingView;
@property (nonatomic, weak) IBOutlet WKWebView * _Null_unspecified loadingIndicatorImageView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified waitingMessageLabel;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified resultsView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified verifiedLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified verifiedDescLbl;
@property (nonatomic, weak) IBOutlet WKWebView * _Null_unspecified verifiedImageWebView;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified lblTermsAndConditions;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewWillDisappear:(BOOL)animated;
- (IBAction)resultsProceedBtnPressed:(id _Nonnull)sender;
- (void)authenticate;
- (void)checkRequestStatusApi;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class NSURLSession;

@interface ResultVc (SWIFT_EXTENSION(ShuftiPro)) <NSURLSessionDelegate>
- (void)URLSessionDidFinishEventsForBackgroundURLSession:(NSURLSession * _Nonnull)session;
@end

@class MFMailComposeViewController;

@interface ResultVc (SWIFT_EXTENSION(ShuftiPro))
- (void)tappedOnLabel:(UITapGestureRecognizer * _Nonnull)gesture;
- (void)mailComposeController:(MFMailComposeViewController * _Nonnull)controller didFinishWithResult:(MFMailComposeResult)result error:(NSError * _Nullable)error;
@end

@class NSURLSessionTask;
@class NSURLSessionDownloadTask;

@interface ResultVc (SWIFT_EXTENSION(ShuftiPro)) <NSURLSessionDownloadDelegate>
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didCompleteWithError:(NSError * _Nullable)error;
- (void)URLSession:(NSURLSession * _Nonnull)session downloadTask:(NSURLSessionDownloadTask * _Nonnull)downloadTask didFinishDownloadingToURL:(NSURL * _Nonnull)location;
- (void)URLSession:(NSURLSession * _Nonnull)session task:(NSURLSessionTask * _Nonnull)task didSendBodyData:(int64_t)bytesSent totalBytesSent:(int64_t)totalBytesSent totalBytesExpectedToSend:(int64_t)totalBytesExpectedToSend;
@end


SWIFT_CLASS("_TtC9ShuftiPro9ShuftiPro")
@interface ShuftiPro : NSObject
- (void)shuftiProVerificationWithRequestObject:(NSDictionary<NSString *, id> * _Nonnull)dataObjectObj authKeys:(NSDictionary<NSString *, NSString *> * _Nonnull)authKeys parentVC:(UIViewController * _Nonnull)pvc configs:(NSDictionary<NSString *, id> * _Nullable)configs completion:(void (^ _Nonnull)(id _Nonnull))completion;
- (nonnull instancetype)init OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9ShuftiPro18SupportedTypesCell")
@interface SupportedTypesCell : UITableViewCell
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified supportedTypes;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified supportedTypesImage;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified containerView;
- (void)awakeFromNib;
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;
- (nonnull instancetype)initWithStyle:(UITableViewCellStyle)style reuseIdentifier:(NSString * _Nullable)reuseIdentifier OBJC_DESIGNATED_INITIALIZER SWIFT_AVAILABILITY(ios,introduced=3.0);
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9ShuftiPro16SupportedTypesVc")
@interface SupportedTypesVc : UIViewController
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLbl;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified supportedTypesUIView;
@property (nonatomic, strong) IBOutlet UITableView * _Null_unspecified supportedTypesTableview;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified supportedTypeSubHeading;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)animated;
- (void)viewWillAppear:(BOOL)animated;
- (IBAction)backBtnPreesed:(id _Nonnull)sender;
- (void)handleGestureWithGesture:(UISwipeGestureRecognizer * _Nonnull)gesture;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


@interface SupportedTypesVc (SWIFT_EXTENSION(ShuftiPro)) <UITableViewDataSource, UITableViewDelegate>
- (NSInteger)tableView:(UITableView * _Nonnull)tableView numberOfRowsInSection:(NSInteger)section SWIFT_WARN_UNUSED_RESULT;
- (UITableViewCell * _Nonnull)tableView:(UITableView * _Nonnull)tableView cellForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
- (void)tableView:(UITableView * _Nonnull)tableView didSelectRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath;
- (CGFloat)tableView:(UITableView * _Nonnull)tableView heightForRowAtIndexPath:(NSIndexPath * _Nonnull)indexPath SWIFT_WARN_UNUSED_RESULT;
@end














SWIFT_CLASS("_TtC9ShuftiPro19UploadOrTakePhotoVc")
@interface UploadOrTakePhotoVc : UIViewController
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified cameraImg;
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified uploadImg;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified cameraProceedImg;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified uploadProceedImg;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified takePhotoLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified bottomHeadingLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified uploadPhotoLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified powerdByLbl;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified cameraView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified uploadView;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified recordView;
- (void)viewDidLoad;
- (IBAction)takePhotoBtnPressed:(id _Nonnull)sender;
- (IBAction)uploadFromGalleryBtnPressed:(id _Nonnull)sender;
- (IBAction)recordVideoBtnPressed:(id _Nonnull)sender;
- (IBAction)backBtnPressed:(id _Nonnull)sender;
- (void)handleGestureWithGesture:(UISwipeGestureRecognizer * _Nonnull)gesture;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end


SWIFT_CLASS("_TtC9ShuftiPro13UploadVideoVc")
@interface UploadVideoVc : UIViewController
@property (nonatomic, strong) IBOutlet UIImageView * _Null_unspecified imagePreview;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified titleLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified powerdByLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified instructionsLbl;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified instructionsLbl1;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified instructionsLbl2;
@property (nonatomic, weak) IBOutlet UILabel * _Null_unspecified confirmImageLabel;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified retakeBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified yesContinueBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified uploadBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified previewPlayBtn;
@property (nonatomic, weak) IBOutlet UIButton * _Null_unspecified backButton;
@property (nonatomic, weak) IBOutlet UIImageView * _Null_unspecified backBtnImg;
@property (nonatomic, weak) IBOutlet UIView * _Null_unspecified playVideoView;
@property (nonatomic, weak) IBOutlet UIStackView * _Null_unspecified retakeStackViewBtns;
- (void)viewDidLoad;
- (IBAction)uploadVideoBtnPressed:(id _Nonnull)sender;
- (IBAction)retakeBtnPressed:(id _Nonnull)sender;
- (IBAction)continueBtnPressed:(id _Nonnull)sender;
- (IBAction)playVideoBtnPressed:(id _Nonnull)sender;
- (IBAction)backBtnPressed:(id _Nonnull)sender;
- (void)imageTappedWithTapGestureRecognizer:(UITapGestureRecognizer * _Nonnull)tapGestureRecognizer;
- (void)handleGestureWithGesture:(UISwipeGestureRecognizer * _Nonnull)gesture;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class UIImagePickerController;

@interface UploadVideoVc (SWIFT_EXTENSION(ShuftiPro)) <UIImagePickerControllerDelegate, UINavigationControllerDelegate>
- (void)imagePickerController:(UIImagePickerController * _Nonnull)picker didFinishPickingMediaWithInfo:(NSDictionary<UIImagePickerControllerInfoKey, id> * _Nonnull)info;
@end

@class UINavigationBar;
@class UIBarButtonItem;

SWIFT_CLASS("_TtC9ShuftiPro17WebViewController")
@interface WebViewController : UIViewController <WKNavigationDelegate>
@property (nonatomic, strong) IBOutlet UIView * _Null_unspecified containerView;
@property (nonatomic, weak) IBOutlet UIVisualEffectView * _Null_unspecified loadingView;
@property (nonatomic, weak) IBOutlet UIActivityIndicatorView * _Null_unspecified activity;
@property (nonatomic, weak) IBOutlet WKWebView * _Null_unspecified loadingIndicatorWebView;
@property (nonatomic, weak) IBOutlet UINavigationBar * _Null_unspecified navBar;
@property (nonatomic, weak) IBOutlet UIBarButtonItem * _Null_unspecified navBarCancelBtn;
- (void)viewWillAppear:(BOOL)animated;
- (void)viewDidLoad;
- (void)viewDidDisappear:(BOOL)animated;
- (void)webView:(WKWebView * _Nonnull)webView didStartProvisionalNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFinishNavigation:(WKNavigation * _Null_unspecified)navigation;
- (void)webView:(WKWebView * _Nonnull)webView didFailNavigation:(WKNavigation * _Null_unspecified)navigation withError:(NSError * _Nonnull)error;
- (IBAction)navBarCancelBtnPressed:(id _Nonnull)sender;
- (nonnull instancetype)initWithNibName:(NSString * _Nullable)nibNameOrNil bundle:(NSBundle * _Nullable)nibBundleOrNil OBJC_DESIGNATED_INITIALIZER;
- (nullable instancetype)initWithCoder:(NSCoder * _Nonnull)coder OBJC_DESIGNATED_INITIALIZER;
@end

@class WKNavigationAction;

@interface WebViewController (SWIFT_EXTENSION(ShuftiPro))
/// When a navigation action occurs for a link to wikipedia, ensure it gets
/// Moved out to the default browser.
- (void)webView:(WKWebView * _Nonnull)_ decidePolicyForNavigationAction:(WKNavigationAction * _Nonnull)decidePolicyFor decisionHandler:(void (^ _Nonnull)(WKNavigationActionPolicy))decisionHandler;
@end

#if __has_attribute(external_source_symbol)
# pragma clang attribute pop
#endif
#pragma clang diagnostic pop
#endif
