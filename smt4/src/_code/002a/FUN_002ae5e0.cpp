/* NON_MATCHING: Glyph-case tail layout, work/index saved registers, timer argument scheduling and the selected-field address differ. */
#include "ui/ButtonHelp.h"
#include <stddef.h>

extern "C" {
extern ButtonHelpGlobals g_buttonHelp;
void FUN_002bee58(ButtonHelpDisplayUnit *unit, s32 value);
u16 FUN_002aa024(s32 resource, s32 glyph);
void FUN_002a9fdc(ButtonHelpDisplayUnit *unit, s32 value);
void timerStart(ButtonHelpDisplayUnit *unit, s32 mode, s32 value);
void FUN_002ae028(void *animation);

void FUN_002ae5e0(void)
{
    /* The initialization tail extends past the shared selection-only projection. */
    struct InitializationView {
        u8 unk000[0xC];
        s32 phase;
        s32 state;
        u8 unk014[0x20];
        ButtonHelpDisplayUnit choices[6];
        ButtonHelpDisplayUnit sides[2];
        ButtonHelpKind kinds[6];
        u16 glyphs[6];
        s32 cursor;
        u16 selected;
        u8 animation[8];
        u8 ready;
        u8 unk4C7;
        u8 mode;
    };
    typedef char InitializationOffsetsCheck[offsetof(InitializationView, choices) == 0x34 &&
        offsetof(InitializationView, kinds) == 0x494 && offsetof(InitializationView, glyphs) == 0x4AC &&
        offsetof(InitializationView, animation) == 0x4BE && offsetof(InitializationView, mode) == 0x4C8 ? 1 : -1];
    InitializationView *work = (InitializationView *)g_buttonHelp.work;
    for (s32 index = 0; index < 6; ++index) {
        FUN_002bee58(&work->choices[index], 0);
        u8 kind = work->kinds[index].kind;
        if (kind == 0) {
            continue;
        }
        if (kind == 7) {
            work->glyphs[index] = FUN_002aa024(0x12, 0x73);
        } else if (kind == 8) {
            work->glyphs[index] = FUN_002aa024(0x12, 0x59);
        } else if (kind == 9) {
            work->glyphs[index] = FUN_002aa024(0x12, 0x85);
        } else if ((kind == 10 || kind == 11) || (kind == 12 || kind == 13) ||
                   (kind == 14 || kind == 15 || kind == 16)) {
            switch (index) {
            case 0:
            case 1:
                work->glyphs[index] = FUN_002aa024(0x12, 0x73);
                break;
            case 2:
            case 3:
                work->glyphs[index] = FUN_002aa024(0x12, 0x85);
                break;
            case 4:
            case 5:
                work->glyphs[index] = FUN_002aa024(0x12, 0x8C);
                break;
            }
        } else {
            work->glyphs[index] = FUN_002aa024(0x12, index + 0x1F);
        }
    }
    for (s32 index = 0; index < 2; ++index) {
        if (work->mode == 1) {
            timerStart(&work->sides[index], 2, 0);
        } else {
            FUN_002a9fdc(&work->sides[index], 0);
        }
    }
    work->cursor = 0;
    work->selected = 0;
    FUN_002ae028(work->animation);
    work->ready = 1;
    work = (InitializationView *)g_buttonHelp.work;
    work->phase = 0;
    work->state = 1;
}
}
