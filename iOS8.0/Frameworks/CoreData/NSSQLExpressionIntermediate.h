//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/NSSQLIntermediate.h>

@class NSExpression;

__attribute__((visibility("hidden")))
@interface NSSQLExpressionIntermediate : NSSQLIntermediate
{
    NSExpression *_expression;
    BOOL _allowToMany;
}

- (id)initWithExpression:(id)arg1 allowToMany:(BOOL)arg2 inScope:(id)arg3;

@end

