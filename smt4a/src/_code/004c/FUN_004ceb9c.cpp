/* NON_MATCHING: shared fountain exit tail and stripped-call NOP placement differ. */
#include "common.h"
#include <stddef.h>

namespace {
struct FountainConfirmationMenuView {
    u8 unk000[0xC];
    u32 scriptState, tableGroup;
    u8 unk014[4];
    u32 script;
    u8 unk01C[0x538];
    s32 selection;
    u8 unk558[0x38];
    const s32 *prices;
    u32 unk594;
    s32 state;
};
typedef char FountainConfirmationOffsets[offsetof(FountainConfirmationMenuView, selection) == 0x554 &&
    offsetof(FountainConfirmationMenuView, prices) == 0x590 &&
    offsetof(FountainConfirmationMenuView, state) == 0x598 ? 1 : -1];
}
extern "C" {
s32 scrRunOpcodesStub(u32 script);
void sysPlaySe(u32 id);
s32 FUN_001517b4(s32 button, s32 mode);
s32 messageAnyWindowActive(void);
void eventQueueAddUniqueIfValid(u32 event);
void messageBannerRestartOrClear(void);
s32 tableGroupFindEntryIndex(u32 tableGroup, const char *name);
void scrScriptProcessStartEntry(u32 script, s32 index);
s32 messageMainGetValue(void);
s32 FUN_0034919c(void);
void FUN_0037c8e4(s32 enabled, s32 mode);
void panelSetTarget(s32 value, s32 mode);
void FUN_004cdbd4(FountainConfirmationMenuView *menu);
void messageDismissNumericBanner(s32 mode);
s32 messageMainIsIdle(void);
}

static __inline void startFountainConfirmationEntry(FountainConfirmationMenuView *menu, const char *name)
{
    s32 index = tableGroupFindEntryIndex(menu->tableGroup, name);
    if (index >= 0)
        scrScriptProcessStartEntry(menu->script, index);
}

extern "C" void FUN_004ceb9c(FountainConfirmationMenuView *menu)
{
    s32 scriptState = scrRunOpcodesStub(menu->script);
    sysPlaySe(0x122);
    if (scriptState != 2) {
        if (FUN_001517b4(1, 1) == 0 || messageAnyWindowActive() != 0)
            return;
        eventQueueAddUniqueIfValid(0x0100020F);
        messageBannerRestartOrClear();
        menu->state = 11;
        startFountainConfirmationEntry(menu, "fountian_end");
    } else {
        messageBannerRestartOrClear();
        if (messageMainGetValue() == 0) {
            startFountainConfirmationEntry(menu, "fountian_select");
            if (FUN_0034919c() == 0) {
                FUN_0037c8e4(1, 0);
                panelSetTarget(-menu->prices[menu->selection], 0);
            }
            menu->state = 6;
            FUN_004cdbd4(menu);
            return;
        }
        startFountainConfirmationEntry(menu, "fountian_end");
        if (FUN_0034919c() != 0)
            messageDismissNumericBanner(0);
        menu->state = 11;
    }
    if (scrRunOpcodesStub(menu->script) != 2)
        return;
    if (messageMainIsIdle() == 0)
        messageDismissNumericBanner(0);
    menu->scriptState = 4;
}
