/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSSPropertySet : NSObject <NSCopying, NSMutableCopying> {
    id mIndexSet;
}

+ (id)p_mutableIndexSetWithFirstProperty:(int)arg1 argumentList:(void*)arg2;
+ (id)propertySet;
+ (id)propertySetFromUnionOfPropertySets:(id)arg1;
+ (id)propertySetWithArray:(id)arg1;
+ (id)propertySetWithProperties:(int)arg1;
+ (id)propertySetWithProperty:(int)arg1;

- (BOOL)containsProperties:(id)arg1;
- (BOOL)containsProperty:(int)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned int)count;
- (void)dealloc;
- (void)enumeratePropertiesUsingBlock:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithFirstProperty:(int)arg1 argumentList:(void*)arg2;
- (id)initWithIndexSet:(id)arg1;
- (id)initWithProperties:(int)arg1;
- (id)initWithPropertySet:(id)arg1;
- (BOOL)intersectsProperties:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)propertySetByAddingProperties:(int)arg1;
- (id)propertySetByAddingPropertiesFromSet:(id)arg1;
- (id)propertySetByAddingProperty:(int)arg1;
- (id)propertySetByIntersectingWithPropertySet:(id)arg1;
- (id)propertySetByRemovingProperties:(int)arg1;
- (id)propertySetByRemovingPropertiesFromSet:(id)arg1;
- (id)propertySetByRemovingProperty:(int)arg1;
- (id)propertyStrings;

@end
