#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"
#include "test/BustupViewer.h"
#include "addon/AocSystemA.h"
#include "script/ScriptEntry.h"

/* An object the menu owns and releases through its deleting destructor. */
class AocConfirmHandler {
public:
    virtual ~AocConfirmHandler();
};

/* The "is connected" confirmation menu's work. */
struct AocConfirmMenu {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 step;
    /* 0x00C */ u8 unk00C[0x1FC];
    /* 0x208 */ AocConfirmHandler *handler;
    /* 0x20C */ u8 unk20C[4];
    /* 0x210 */ RequestParameters result;
    /* 0x224 */ u8 unk224[0x90];
    /* 0x2B4 */ u8 notice[0x34];
    /* 0x2E8 */ u8 touchRegions[0x68];
    /* 0x350 */ u32 resource;
    /* 0x354 */ u8 unk354[4];
    /* 0x358 */ ScriptProcess *script;
};

struct AocConfirmDisplay {
    /* 0x0000 */ u8 unk0000[0x450C];
    /* 0x450C */ u8 flag;
};

extern "C" {
extern AocConfirmDisplay *g_aocDisplay;

void buttonHelpSetEnabled(u32 value);
void releaseEntriesB(void *regions);
void releaseEntriesA(void *notice);
u32 tableGroupFindEntryIndex(u32 resource, const char *name);
void aocMenuSetButtonHelp(AocConfirmMenu *menu, u32 state, s32 enabled);
s32 messageGetChoiceResult(void);
void FUN_0016ccb4(void *owner);
void FUN_0021c118(u32 handle, s32 frames);
s32 obj04StateIs4(void);
s32 padQueryLogicalKey(s32 id, s32 mode);
void eventQueueAddUniqueIfValid(u32 event);
void msgWindowReset(void);
void messageBannerRestartOrClear(void);
void messageClearActiveFlags(void);
void ifTouchRegionRemove(void);

/* Switches the menu to the given state and releases its handler. */
static __inline void closeConfirmation(AocConfirmMenu *menu, s32 state)
{
    menu->state = state;
    menu->step = 0;
    if (menu->handler != NULL) {
        delete menu->handler;
        menu->handler = NULL;
    }
}

/* Per-frame update of the "is connected" confirmation: opens the script, waits for its choice, then closes. */
void AocMenu::runConfirmation()
{
    AocConfirmMenu * menu = reinterpret_cast<AocConfirmMenu *>(this);
    switch (menu->step) {
    case 2:
        if (buttonHelpStateIsNot3() == 0) {
            return;
        }
        closeConfirmation(menu, 4);
        return;
    case 0:
        buttonHelpSetEnabled(0);
        g_aocSystem->getPendingRequest();
        menu->flags &= ~0x10;
        g_aocMain->flags &= ~0x100;
        g_aocDisplay->flag = 0;
        releaseEntriesB(menu->touchRegions);
        releaseEntriesA(menu->notice);
        g_aocMain->mode = 2;
        scrScriptProcessStartEntry(menu->script, tableGroupFindEntryIndex(menu->resource, "aoc_IsConnect"));
        aocMenuSetButtonHelp(menu, 0, 1);
        menu->step = 1;
        return;
    case 1:
        if (scrRunOpcodesStub(menu->script) == 2) {
            s32 choice = messageGetChoiceResult();
            if (choice == 0) {
                menu->step = 2;
                FUN_0016ccb4((u8 *)g_aocMain + 0x80);
                menu->result = RequestParameters((u8)0);
                aocMenuSetButtonHelp(menu, 0xFFFFFFFF, 0);
                FUN_0021c118(0x1000001, 10);
                return;
            }
            if (choice == 1) {
                closeConfirmation(menu, 15);
            }
            return;
        }
        if (obj04StateIs4() == 0) {
            return;
        }
        if (padQueryLogicalKey(1, 1) == 0) {
            return;
        }
        eventQueueAddUniqueIfValid(0x100020e);
        msgWindowReset();
        messageBannerRestartOrClear();
        messageClearActiveFlags();
        ifTouchRegionRemove();
        ifTouchRegionRemove();
        closeConfirmation(menu, 15);
        return;
    }
}

}
