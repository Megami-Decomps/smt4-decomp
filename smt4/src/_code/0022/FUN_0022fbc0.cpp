/* Applies the current entry to the sub-state and its handler, refreshes the display and reports whether the sub-state is ready and accepted. */
#include "common.h"
#include "classes/Obj55ca08.h"
#include "code/Code004d.h"

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

extern void uiAnimationAdvanceChannel(void *display, s32 id);
extern void sub10OwnerStart(Entry *entry); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: more than one instance of overloaded function "selectOwnerGetSelected" has "C" linkage)
extern u32 selectOwnerGetSelected(SubState *subState); // declcheck: local (the shared declaration in code/Code0023_Smt4.h does not compile here: more than one instance of overloaded function "sub10OwnerStart" has "C" linkage)
extern s8 uiSubStateGetReady(const SubState *subState);

u32 FUN_0022fbc0(Screen *screen)
{
    Entry *entry = &screen->entries[screen->entryIndex];
    u32 accepted;

    ((Obj55ca08 *)&screen->subState)->Obj55ca08::synchronize((const u8 *)entry);
    screen->handler->vtbl->apply(screen->handler, entry);
    sub10OwnerStart(entry);
    uiAnimationAdvanceChannel(screen->display, 2);
    uiAnimationAdvanceChannel(screen->display, 3);
    accepted = 0;
    if (uiSubStateGetReady(&screen->subState) != 0) {
        if (stateCounterBelowLimit(entry, selectOwnerGetSelected(&screen->subState)) != 0) {
            accepted = 1;
        }
    }
    return accepted;
}

}
