//
//  FISReposDataStore.h
//  github-repo-list
//
//  Created by Joe Burgess on 5/5/14.
//  Copyright (c) 2014 Joe Burgess. All rights reserved.
//

#import <Foundation/Foundation.h>

@class FISGithubRepository;
@interface FISReposDataStore : NSObject

@property (strong, nonatomic) NSMutableArray *repositories;

+ (instancetype)sharedDataStore;

- (void)getRepositoriesWithCompletion:(void (^)(BOOL success))completionBlock;
- (void)getUserRepositoriesWithCompletion:(void (^)(BOOL))completionBlock;
- (void)toggleStarForRepo:(FISGithubRepository *)repo CompletionBlock:(void(^)(BOOL starred))completionBlock;
@end
