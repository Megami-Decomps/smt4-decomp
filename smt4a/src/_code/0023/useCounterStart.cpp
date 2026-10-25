/* NON_MATCHING: global load precedes push; count/value/loop scratch registers differ. */
#include "shard/Shard0033.h"
#include "ui/UiSpriteState.h"
#include "event/2dEvent/2dEventTex.h"

extern "C" {
void uiSpriteSetImageKeyframe(UiSpriteState *, s32, s32);
void FUN_002a4964(void *);
s32 buttonHelpGetPanelMode(void);
s32 buttonHelpGetPanelState(void);
const char *screenGetEntry(u32);
void textFormatBuffer(char *, const char *, ...);
void buttonHelpSetMode(s32);
void sysPlaySe(s32);
extern Obj7ECRef g_useCounter;

// Reset counter sprites and selection, preserving the previous button-help presentation.
void useCounterStart(void)
{
    // Saved help text extends beyond the shared Obj7EC prefix.
    struct CounterStartView {
        u8 unk000[0x28]; UiSpriteState sprites[13];
        s32 state, frame; u8 unk74C, highBit, mode, unk74F;
        s32 valueOffset, count; u8 values[0x30]; u8 selection[0x64];
        u32 unk7EC, unk7F0; u8 savedMode, savedState; char savedText[2];
    };
    typedef char CounterStartOffsets[offsetof(CounterStartView, state) == 0x744 &&
        offsetof(CounterStartView, selection) == 0x788 &&
        offsetof(CounterStartView, savedText) == 0x7f6 ? 1 : -1];
    CounterStartView *work = reinterpret_cast<CounterStartView *>(g_useCounter.instance);
    for (s32 index = 0; index < 13; ++index)
        uiSpriteSetImageKeyframe(&work->sprites[index], 0, 0);
    work->state = 1;
    work->frame = 0;
    if (work->valueOffset >= 0) {
        const u8 *value = FUN_0026140c() + work->valueOffset;
        s32 count = work->count;
        for (s32 index = 0; index < count; ++index) {
            if (work->values[index] == (*value & 0x7f)) {
                FUN_002a4964(work->selection);
                break;
            }
        }
        work->highBit = (*value & 0x80) >> 7;
    }
    if (work->mode == 2)
        return;
    s32 mode = buttonHelpGetPanelMode();
    work->savedMode = mode;
    if (mode) {
        s32 state = buttonHelpGetPanelState();
        work->savedState = state;
        if (!state) {
            const char *first = screenGetEntry(0);
            const char *second = screenGetEntry(1);
            textFormatBuffer(work->savedText, "%s\n%s", first, second);
        }
        buttonHelpSetMode(0);
    }
    sysPlaySe(5);
}
}
