/* NON_MATCHING: shared handler-release tail is laid out at the end (retail keeps it in the first path, falling into the common epilogue) and the zero/g_aocMain registers are swapped (r6/r5). */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/WindowStatus.h"

/* An object the menu owns and releases through its deleting destructor. */
class AocConfirmHandler {
public:
    virtual void vfunc00();
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
    /* 0x210 */ WindowStatusOperationResult result;
    /* 0x224 */ u8 unk224[0x90];
    /* 0x2B4 */ u8 notice[0x34];
    /* 0x2E8 */ u8 touchRegions[0x68];
    /* 0x350 */ u32 resource;
    /* 0x354 */ u8 unk354[4];
    /* 0x358 */ u32 script;
};

struct AocConfirmMain {
    /* 0x000 */ u8 unk000[0x754];
    /* 0x754 */ u32 flags;
};

struct AocConfirmMainModes {
    /* 0x000 */ u8 unk000[0xD50];
    /* 0xD50 */ u8 mode;
};

struct AocConfirmDisplay {
    /* 0x0000 */ u8 unk0000[0x450C];
    /* 0x450C */ u8 flag;
};

extern "C" {
extern AocConfirmMain *g_aocMain;
extern AocSystemA *g_aocSystem;
extern AocConfirmDisplay *g_aocDisplay;

void FUN_00169548(u32 value);
void releaseEntriesB(void *regions);
void releaseEntriesA(void *notice);
u32 tableGroupFindEntryIndex(u32 resource, const char *name);
void scrScriptProcessStartEntry(u32 process, u32 entry);
void FUN_00477d10(AocConfirmMenu *menu, u32 state, s32 enabled);
s32 scrRunOpcodesStub(u32 script);
s32 messageGetChoiceResult(void);
void FUN_0016ccb4(void *owner);
void FUN_0021c118(u32 handle, s32 frames);
s32 obj04StateIs4(void);
s32 FUN_001517b4(s32 id, s32 mode);
void eventQueueAddUniqueIfValid(u32 event);
void msgWindowReset(void);
void messageBannerRestartOrClear(void);
void messageClearActiveFlags(void);
void ifTouchRegionRemove(void);
s32 FUN_002e19f8(void);

/* Per-frame update of the "is connected" confirmation: opens the script, waits for its choice, then closes. */
void AocMenu::runConfirmation()
{
    AocConfirmMenu * menu = reinterpret_cast<AocConfirmMenu *>(this);
    if (menu->step == 0) {
        FUN_00169548(0);
        g_aocSystem->getPendingRequest();
        menu->flags &= ~0x10;
        g_aocMain->flags &= ~0x100;
        g_aocDisplay->flag = 0;
        releaseEntriesB(menu->touchRegions);
        releaseEntriesA(menu->notice);
        ((AocConfirmMainModes *)g_aocMain)->mode = 2;
        scrScriptProcessStartEntry(menu->script, tableGroupFindEntryIndex(menu->resource, "aoc_IsConnect"));
        FUN_00477d10(menu, 0, 1);
        menu->step = 1;
        return;
    }
    if (menu->step == 1) {
        if (scrRunOpcodesStub(menu->script) == 2) {
            s32 choice = messageGetChoiceResult();
            if (choice == 0) {
                menu->step = 2;
                FUN_0016ccb4((u8 *)g_aocMain + 0x80);
                WindowStatusOperationResult operation(0);
                menu->result = operation;
                FUN_00477d10(menu, 0xFFFFFFFF, 0);
                FUN_0021c118(0x1000001, 10);
                return;
            }
            if (choice != 1) {
                return;
            }
        } else {
            if (obj04StateIs4() == 0) {
                return;
            }
            if (FUN_001517b4(1, 1) == 0) {
                return;
            }
            eventQueueAddUniqueIfValid(0x100020e);
            msgWindowReset();
            messageBannerRestartOrClear();
            messageClearActiveFlags();
            ifTouchRegionRemove();
            ifTouchRegionRemove();
        }
        menu->state = 15;
        menu->step = 0;
        if (menu->handler != NULL) {
            delete menu->handler;
            menu->handler = NULL;
        }
        return;
    }
    if (menu->step == 2) {
        if (FUN_002e19f8() == 0) {
            return;
        }
        menu->state = 4;
        menu->step = 0;
        if (menu->handler != NULL) {
            delete menu->handler;
            menu->handler = NULL;
        }
    }
}

}
