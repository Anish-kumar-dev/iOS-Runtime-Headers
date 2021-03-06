/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssetsLibraryServices.framework/AssetsLibraryServices
 */

@class NSMutableDictionary, NSURL;

@interface PLFileSystemPersistenceBatchItem : NSObject {
    NSMutableDictionary *attributes;
    NSURL *fileURL;
}

@property(retain) NSMutableDictionary * attributes;
@property(retain) NSURL * fileURL;

- (id)attributes;
- (void)dealloc;
- (id)description;
- (id)fileURL;
- (id)init;
- (void)persist;
- (void)setAttributes:(id)arg1;
- (void)setData:(id)arg1 forKey:(id)arg2;
- (void)setFileURL:(id)arg1;
- (void)setString:(id)arg1 forKey:(id)arg2;
- (void)setUInt16:(unsigned short)arg1 forKey:(id)arg2;
- (void)setUUIDString:(id)arg1 forKey:(id)arg2;

@end
