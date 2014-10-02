//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"

@interface _UIFilteredDataSource : NSObject <UITableViewDataSource>
{
    BOOL _limitingWithSections;
    int _maxVisibleSection;
    int _numberOfVisibleItemsInLastSection;
    int _filterType;
    id <UITableViewDataSource> _tableDataSource;
}

@property(nonatomic) id <UITableViewDataSource> tableDataSource; // @synthesize tableDataSource=_tableDataSource;
@property(nonatomic) int filterType; // @synthesize filterType=_filterType;
- (BOOL)respondsToSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (int)numberOfSectionsInTableView:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (int)_filteredNumberOfItemsGivenSection:(int)arg1 numberOfItems:(int)arg2;

@end
