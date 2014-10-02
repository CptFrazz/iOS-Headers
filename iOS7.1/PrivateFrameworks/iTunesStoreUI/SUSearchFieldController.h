//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ISStoreURLOperationDelegate.h"
#import "SUScriptTextFieldDelegate.h"
#import "UISearchDisplayDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class ISStoreURLOperation, NSArray, SUClientInterface, SUScriptTextFieldDelegate, SUSearchDisplayController, SUSearchFieldConfiguration, UIControl, UISearchBar;

@interface SUSearchFieldController : NSObject <ISStoreURLOperationDelegate, SUScriptTextFieldDelegate, UISearchDisplayDelegate, UITableViewDataSource, UITableViewDelegate>
{
    SUClientInterface *_clientInterface;
    NSArray *_completions;
    ISStoreURLOperation *_completionsOperation;
    SUSearchFieldConfiguration *_configuration;
    UIControl *_dimmerView;
    UISearchBar *_searchBar;
    SUSearchDisplayController *_searchController;
    int _searchFieldStyle;
    SUScriptTextFieldDelegate *_textFieldDelegate;
}

@property(nonatomic) int searchFieldStyle; // @synthesize searchFieldStyle=_searchFieldStyle;
@property(copy, nonatomic) SUSearchFieldConfiguration *searchFieldConfiguration; // @synthesize searchFieldConfiguration=_configuration;
- (void)_tearDownDimmerView;
- (id)_targetViewController;
- (void)_showDimmerView;
- (void)_saveSearchTermToDefaults:(id)arg1;
- (void)_resizeSearchBarForOrientation:(int)arg1;
- (void)_reloadSearchBar;
- (void)_reloadCompletionsForSearchString:(id)arg1;
- (id)_newTransientViewController;
- (id)_newSearchDisplayControllerWithContentsController:(id)arg1;
- (id)_newSearchBar;
- (id)_newBlankStorePageViewController;
- (BOOL)_focusTransientViewController;
- (void)_fetchResultsForURLRequestProperties:(id)arg1;
- (void)_fetchResultsForURL:(id)arg1;
- (void)_fetchResultsForTerm:(id)arg1;
- (void)_fetchCompletions;
- (id)_defaultSearchTerm;
- (void)_cancelCompletionsOperation;
- (id)_cancelButtonView;
- (void)_savedSearchTermChangedNotification:(id)arg1;
- (void)_dimmerViewAction:(id)arg1;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (BOOL)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchBarWillRemoveFromSuperview:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (BOOL)searchBarShouldEndEditing:(id)arg1;
- (BOOL)searchBarShouldBeginEditing:(id)arg1;
- (void)searchBarSearchButtonClicked:(id)arg1;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)scriptDidChangeTextForField:(id)arg1;
- (void)operationDidFinish:(id)arg1;
- (void)operation:(id)arg1 finishedWithOutput:(id)arg2;
- (void)operation:(id)arg1 failedWithError:(id)arg2;
- (void)willRotateToInterfaceOrientation:(int)arg1;
@property(readonly, nonatomic) UISearchBar *searchBar;
- (id)newRequestPropertiesWithSearchTerm:(id)arg1;
@property(readonly, nonatomic, getter=isActive) BOOL active;
- (void)handleSearchURL:(id)arg1 withSourceApplication:(id)arg2 sourceURL:(id)arg3;
- (void)dealloc;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2 style:(int)arg3;
- (id)initWithContentsController:(id)arg1 clientInterface:(id)arg2;
- (id)initWithContentsController:(id)arg1 style:(int)arg2;
- (id)initWithContentsController:(id)arg1;
- (id)init;

@end
