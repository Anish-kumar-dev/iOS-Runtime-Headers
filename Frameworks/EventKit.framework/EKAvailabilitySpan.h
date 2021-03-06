/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/EventKit.framework/EventKit
 */

@class NSDate;

@interface EKAvailabilitySpan : NSObject {
    NSDate *_endDate;
    NSDate *_startDate;
    int _type;
}

@property(readonly) NSDate * endDate;
@property(readonly) NSDate * startDate;
@property(readonly) int type;

- (id)description;
- (id)endDate;
- (id)init;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 type:(int)arg3;
- (id)startDate;
- (int)type;

@end
