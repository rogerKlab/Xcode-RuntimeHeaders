/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@protocol DSADownloaderDelegate
- (void)downloaderDidFinish:(id)arg1;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2;

@optional
- (void)downloaderWillResumeDownload:(id)arg1;
- (void)downloader:(id)arg1 willDownloadFile:(id)arg2 ofSize:(long long)arg3;
- (void)downloader:(id)arg1 needsCredentialForChallenge:(id)arg2 completionBlock:(id)arg3;
- (void)downloader:(id)arg1 didMakeProgress:(float)arg2;
@end
