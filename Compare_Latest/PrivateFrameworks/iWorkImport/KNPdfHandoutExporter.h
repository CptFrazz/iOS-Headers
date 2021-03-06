//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNPdfExporter.h>

__attribute__((visibility("hidden")))
@interface KNPdfHandoutExporter : KNPdfExporter
{
    BOOL mPrintingRuledLines;
    BOOL mPrintingNotes;
    BOOL mPrintingDivider;
    BOOL mIsPrintingNote;
}

@property(nonatomic, getter=isPrintingDivider) BOOL printingDivider; // @synthesize printingDivider=mPrintingDivider;
@property(nonatomic, getter=isPrintingNotes) BOOL printingNotes; // @synthesize printingNotes=mPrintingNotes;
@property(nonatomic, getter=isPrintingRuledLines) BOOL printingRuledLines; // @synthesize printingRuledLines=mPrintingRuledLines;
- (void)p_drawNotesForNode:(id)arg1 index:(unsigned int)arg2 forRect:(struct CGRect)arg3 unscaledClipRect:(struct CGRect)arg4 scaledClipRect:(struct CGRect)arg5 context:(struct CGContext *)arg6;
- (void)p_drawRuledLinesForRect:(struct CGRect)arg1 pageRect:(struct CGRect)arg2 numberOfLines:(unsigned int)arg3 context:(struct CGContext *)arg4;
- (void)p_drawDividerLineForRect:(struct CGRect)arg1 pageRect:(struct CGRect)arg2 context:(struct CGContext *)arg3;
- (BOOL)drawCurrentPageInContext:(struct CGContext *)arg1 viewScale:(float)arg2 unscaledClipRect:(struct CGRect)arg3 createPage:(BOOL)arg4;
- (BOOL)incrementPage;
- (id)currentInfos;
- (id)initWithDocumentRoot:(id)arg1;

@end

