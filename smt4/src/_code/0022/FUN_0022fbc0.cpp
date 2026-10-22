/* NON_MATCHING: only the final `ready` load differs: retail reads the flag with `mov r0,r6; ldrsb r0,[r0,#18]`, built folds it into `ldrb r0,[r4,#2106]` */
/* Applies the current entry to the sub-state and its handler, refreshes the display and reports whether the sub-state is ready and accepted. */
#include "common.h"

extern "C" {

struct Handler;

typedef struct HandlerVtbl {
    /* 0x00 */ void *slots[3];
    /* 0x0C */ void (*apply)(struct Handler *handler, void *entry);
} HandlerVtbl;

typedef struct Handler {
    /* 0x00 */ HandlerVtbl *vtbl;
} Handler;

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x74];
} Entry; /* 0x74 */

typedef struct SubState {
    /* 0x00 */ u8 unk00[0x12];
    /* 0x12 */ s8 ready;
    /* 0x13 */ u8 unk13[0x15];
} SubState; /* 0x28 */

typedef struct Screen {
    /* 0x000 */ u8 unk000[0x3A8];
    /* 0x3A8 */ u8 display[0x480];
    /* 0x828 */ SubState subState;
    /* 0x850 */ u8 unk850[0x0C];
    /* 0x85C */ Handler *handler;
    /* 0x860 */ s32 entryIndex;
    /* 0x864 */ u8 unk864[0x1C];
    /* 0x880 */ Entry entries[1];
} Screen;

extern void FUN_00230954(SubState *subState, Entry *entry);
extern void uiAnimationAdvanceChannel(void *display, s32 id);
extern void FUN_00233410(Entry *entry);
extern s32 stateCounterBelowLimit(Entry *entry, u32 value);
extern u32 FUN_002333f0(SubState *subState);

u32 FUN_0022fbc0(Screen *screen)
{
    Entry *entry = &screen->entries[screen->entryIndex];
    u32 accepted;

    FUN_00230954(&screen->subState, entry);
    screen->handler->vtbl->apply(screen->handler, entry);
    FUN_00233410(entry);
    uiAnimationAdvanceChannel(screen->display, 2);
    uiAnimationAdvanceChannel(screen->display, 3);
    accepted = 0;
    if (screen->subState.ready != 0) {
        if (stateCounterBelowLimit(entry, FUN_002333f0(&screen->subState)) != 0) {
            accepted = 1;
        }
    }
    return accepted;
}

}
