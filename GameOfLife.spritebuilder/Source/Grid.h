//
//  Grid.h
//  GameOfLife
//
//  Created by LinLee on 2/1/15.
//  Copyright (c) 2015 Apportable. All rights reserved.
//

#import "CCSprite.h"

@interface Grid : CCSprite

@property (nonatomic, assign) int totalAlive;
@property (nonatomic, assign) int generation;

-(void)evolveStep;

-(void)countNeighbors;

- (BOOL)isIndexValidForX:(int)x andY:(int)y;

-(void)updateCreatures;



@end
