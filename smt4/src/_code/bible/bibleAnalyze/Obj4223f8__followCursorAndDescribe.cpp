/* NON_MATCHING: confirmation signed-byte load, fallback selection and description tail-call differ. */
#include "common.h"
#include "classes/Obj4223f8.h"
#include <stddef.h>
#include "status/StatusCamera.h"
#include "bible/bibleAnalyze.h"

/* This analysis screen extends beyond the shared BibleScreen work area. */
struct BibleAnalyzeCursorView {
    u8 unk00[0x8a];
    s8 confirmed; /* 0x8a */
};
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
    BibleAnalyzeCursorView cursor; /* 0x0fc */
    u8 unk187[0x41d];
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
void FUN_002b8ee0(BibleAnalyzeCursorView *, s32);
s32 vec2GetYInt(BibleAnalyzeCursorView *);
s32 vec2GetXInt(BibleAnalyzeCursorView *);
void pointConvertToFloat(void *, s32, s32);
s32 flaggedValueHolderGetTotal(void *);
void FUN_0029da34(s32, s32, u16, s32);
const char *dataLookupDisplayName(u8 *, u32);
void textFormatBuffer(char *, const char *, ...);
void FUN_0029ee6c(const char *, u32);
extern const char DAT_0040226c[];
extern const char DAT_00402274[];
extern BibleAnalyzeTextView DAT_0043d990;

}

/* Follow the cursor, then open the selected demon's description on confirmation. */
void Obj4223f8::followCursorAndDescribe()
{
    BibleAnalyzeWorkView *work = reinterpret_cast<BibleAnalyzeWorkView *>(this);
    char text[64];
    u8 nameBuffer[8];
    BibleAnalyzeCursorView *cursor = &work->cursor;
    FUN_002b8ee0(cursor, 0);
    s32 y = vec2GetYInt(cursor);
    s32 x = vec2GetXInt(cursor);
    pointConvertToFloat(work->position, x, y);
    if (cursor->confirmed && buttonHelpIsNotActive()) {
        FUN_002a0cc8(0);
        work->state = 2;
        work->stateArg = 0;
        pointConvertToFloat(work->position, 0, 0);
        if (!work->customName) {
            BibleAnalyzeEntryView *entries = work->entries;
            s32 selected = flaggedValueHolderGetTotal(work->selection);
            FUN_0029da34(0, 1, entries[selected].demonId, 0);
            return;
        }
        const char *name = DAT_0040226c;
        const char *displayName = dataLookupDisplayName(nameBuffer, work->nameId);
        if (displayName != NULL)
            name = displayName;
        textFormatBuffer(text, DAT_00402274, name, DAT_0043d990.suffix);
        FUN_0029ee6c(text, 0x323232ff);
    }
}
