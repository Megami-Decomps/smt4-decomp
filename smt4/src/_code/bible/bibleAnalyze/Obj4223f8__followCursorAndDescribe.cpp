/* NON_MATCHING: the custom-name branch now matches apart from literal offsets; retail keeps r3 live across the
 * linker-inlined shopListItemGetId and explicitly zero-extends its result before the tail call. */
#include "common.h"
#include "runtime/Stdio.h"
#include "classes/Obj4223f8.h"
#include <stddef.h>
#include "status/StatusCamera.h"
#include "bible/bibleAnalyze.h"
#include "ui/UiSpriteApi.h"

/* This analysis screen extends beyond the shared BibleScreen work area. */
struct BibleAnalyzeEntryView {
    u32 unk00;
    u16 demonId; /* 0x04 */
    u8 unk06[0x1a];
};
struct BibleAnalyzeWorkView {
    u8 unk000[0x14];
    s32 state;
    s32 stateArg;
    u8 unk01c[0x4];
    u8 selection[0xa8];
    u8 position[0x34];
    UiSpriteState cursor; /* 0x0fc */
    u8 unk188[0x41c];
    u8 customName; /* 0x5a4 */
    u8 unk5a5[3];
    BibleAnalyzeEntryView entries[1280]; /* 0x5a8 */
    u8 unka5a8[0xc];
    u32 nameId; /* 0xa5b4 */
};
struct BibleAnalyzeTextView {
    u8 unk00[8];
    const char *suffix;
};
typedef char BibleAnalyzeCursorOffset[offsetof(BibleAnalyzeWorkView, cursor) == 0xfc ? 1 : -1];
typedef char BibleAnalyzeNameOffset[offsetof(BibleAnalyzeWorkView, nameId) == 0xa5b4 ? 1 : -1];

extern "C" {
u16 shopListItemGetId(const BibleAnalyzeEntryView *entry);
void pointConvertToFloat(void *, s32, s32);
s32 flaggedValueHolderGetTotal(void *);
void FUN_0029da34(s32, s32, u16, s32);
const char *dataLookupDisplayName(u8 *, u32);
void buttonHelpSetText(const char *, u32);
extern const char DAT_0040226c[];
extern const char DAT_00402274[];
extern BibleAnalyzeTextView g_btlDevilListCallbackContext;

}

/* Follow the cursor, then open the selected demon's description on confirmation. */
void Obj4223f8::followCursorAndDescribe()
{
    BibleAnalyzeWorkView *work = (BibleAnalyzeWorkView *)this;
    UiSpriteState *cursor = &work->cursor;
    uiSlidingSpriteAdvance(cursor, 0);
    s32 y = vec2GetYInt(cursor);
    s32 x = vec2GetXInt(cursor);
    pointConvertToFloat(work->position, x, y);
    if (uiSpriteGetCompletionState(cursor) && buttonHelpIsNotActive()) {
        gameGlobalsSetSubScreenActive(0);
        work->state = 2;
        work->stateArg = 0;
        pointConvertToFloat(work->position, 0, 0);
        if (work->customName) {
            char text[64];
            u8 nameBuffer[8];
            const char *fallback = DAT_0040226c;
            const char *name = dataLookupDisplayName(nameBuffer, work->nameId);
            if (name == NULL) {
                name = fallback;
            }
            __2sprintf(text, DAT_00402274, name, g_btlDevilListCallbackContext.suffix);
            buttonHelpSetText(text, 0x323232ff);
        } else {
            BibleAnalyzeEntryView *entries = work->entries;
            s32 selected = flaggedValueHolderGetTotal(work->selection);
            FUN_0029da34(0, 1, shopListItemGetId(&entries[selected]), 0);
        }
    }
}
