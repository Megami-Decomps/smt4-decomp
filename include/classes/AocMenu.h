#ifndef CLASSES_AOCMENU_H
#define CLASSES_AOCMENU_H

#include "common.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "classes/SelectionState.h"
#include "classes/Obj4221a4.h"
#include "code/Code0023.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" void asdOperatorDelete(void *block);

struct AsdText;

/* The request type of AocMenu.cpp: a RequestParameters whose default constructor is defined out of line in that
 * file (smt4 0x2340e4, smt4a 0x47daf4: the base's inline constructor expanded), which the menu's constructor and
 * its steps call where every other file expands RequestParameters() in place. */
struct AocMenuRequest : RequestParameters {
    AocMenuRequest();
    using RequestParameters::operator=;
};

/* The rows of the content list the stylus can pick (0x34 bytes, vtable at 0x42219c in IV): the
 * touch regions registered for the visible rows and what the last update found. The layout is the
 * head of Obj55ca08, the list selector the other menus embed. */
struct AocTouchRows {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ s32 firstRegion;
    /* 0x08 */ s32 secondRegion;
    /* 0x0C */ s32 regionCount;
    /* 0x10 */ u8 soundEnabled;
    /* 0x11 */ u8 selected;
    /* 0x12 */ u8 released;       /* the stylus was lifted from the row under the cursor */
    /* 0x13 */ u8 unk13;
    /* 0x14 */ s16 selectedIndex;
    /* 0x16 */ u8 unk16[2];
    /* 0x18 */ s16 regions[12];
    /* 0x30 */ s16 touchCount;
    /* 0x32 */ u8 movedByPress;   /* the press that is still held moved the cursor here */
    /* 0x33 */ u8 unk33;
};
typedef char AocTouchRowsLayoutCheck[
    sizeof(AocTouchRows) == 0x34 && offsetof(AocTouchRows, regions) == 0x18 &&
    offsetof(AocTouchRows, movedByPress) == 0x32 ? 1 : -1];

/* A window the menu owns and deletes when it moves on (slot 1 of its vtable is the deleting destructor). */
class AocMenuWindow {
public:
    virtual ~AocMenuWindow();
};

/* The add-on content menu (0x26F0 bytes): embedded selection and window objects behind an
 * out-of-line constructor and destructor. */
class AocMenu {
public:
    typedef void (AocMenu::*StepCallback)();
    AocMenu();
    ~AocMenu();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    /* Constructs in storage the caller allocated itself (smt4 allocates 0x2434 bytes). */
    static void *operator new(u32, AocMenu *storage) { return storage; }
    static void operator delete(void *block) { asdOperatorDelete(block); }

    /* Starts the purchase list: loads the menu sprites and the content table, creates the script
     * process, drops the current window and writes the prompt text. */
    void openPurchaseList();

    void runQuestDialog();
    void restartPreviousRun();
    void pollContentStatus();
    void runLicenseFlow();
    void runWindowOperation();
    void readContentCode();
    void closeMenu();
    void waitCloseAnimation();
    void releaseStepResources();
    void runScriptMenu();
    void runPurchaseList();
    void runMainProcess();
    void runConfirmation();
    void runResultProcess();
    void runConnectedProcess();
    void runQueryProcess();
    void returnToScript();
    void leaveWhenAocFree();
    void updateRequestTransition();
    void initializeStepCallbacks();
    void beginWindowOperation();
    void endWindowOperation();
    void drawSelection();
    void drawMenu();
    void endRequestTransition();

    /* 0x0000 */ u32 flags;                /* bit 0: the menu finished opening */
    /* 0x0004 */ u32 step;
    /* 0x0008 */ u32 substep;
    union {
        /* 0x000C */ u8 unk000C[0x1FC];
        struct {
            /* 0x000C */ u32 unk000C;
            /* 0x0010 */ StepCallback flat[63];
        } stepDispatch;
        struct {
            /* 0x000C */ u32 unk000C;
            /* 0x0010 */ StepCallback update[21];
            /* 0x00B8 */ StepCallback draw[21];
            /* 0x0160 */ StepCallback finish[21];
        } callbacks;
    };
    /* 0x0208 */ AocMenuWindow *window;
    /* 0x020C */ u8 unk020C[4];
    /* 0x0210 */ AocMenuRequest request; /* the request the menu is waiting on */
    /* 0x0224 */ AocMenuRequest secondRequest;
    /* 0x0238 */ u32 unk0238;
    /* 0x023C */ u8 unk023C[4];
    /* 0x0240 */ SelectionFlags selection;
    /* 0x024F */ u8 unk024F[0x65];
    union {
        /* 0x02B4 */ const void *dispatchTable;
        /* 0x02B4 */ AocTouchRows touchRows;
    };
    /* 0x02E8 */ Obj4221a4 panel;
    /* 0x0350 */ void *tableFile;
    /* 0x0354 */ u32 tableValue;
    /* 0x0358 */ ScriptProcess *script;
    union {
        /* 0x035C */ u8 unk035C[0xDD4];
        struct {
            /* 0x035C */ u8 unk035C[0x20];
            /* 0x037C */ u8 effects[25][0x8C];
            /* 0x1128 */ s32 slowTick;
            /* 0x112C */ s32 fastTick;
        } animated;
    };
    /* 0x1130 */ char prompt[0x80];
    union {
        /* 0x11B0 */ u8 jobOwner[1];       /* the job owner jobOwnerFreeSlotAndStop works on */
        /* 0x11B0 */ u32 jobHandle;
    };
    /* 0x11B4 */ u8 unk11B4[0x5E0];
    /* 0x1794 */ u32 unk1794;
    /* 0x1798 */ u32 unk1798;
    /* 0x179C */ u8 unk179C[4];
    /* 0x17A0 */ union { u32 unk17A0; u32 childJob; };
    /* 0x17A4 */ u8 unk17A4[8];
    /* 0x17AC */ s32 touchMarker;
    union {
        /* 0x17B0 */ u8 unk17B0[0x73C];
        /* IV's guide is 0x2BC bytes shorter, so its description text and what follows sit lower. */
        struct {
            /* 0x17B0 */ u8 unk17B0[0x480];
            /* 0x1C30 */ AsdText *descriptionText;
        } iv;
    };
    union {
        /* 0x1EEC */ u32 unk1EEC;
        /* 0x1EEC */ AsdText *descriptionText; /* Apocalypse; IV's is iv.descriptionText */
    };
    /* 0x1EF0 */ u8 unk1EF0[0x800];
};

/* Moves the menu to another step and drops the window of the one it leaves. */
static __inline void aocMenuChangeStep(AocMenu *menu, u32 step)
{
    menu->step = step;
    menu->substep = 0;
    if (menu->window != NULL) {
        delete menu->window;
        menu->window = NULL;
    }
}

extern "C" {
/* Copies the new request, moves the menu to step 19 and drops the old window (IV FUN_00234124, Apocalypse
 * FUN_0047bc90). */
void FUN_00234124(AocMenu *menu, const RequestParameters *request);
void FUN_0047bc90(AocMenu *menu, const RequestParameters *request);
/* Resets a newly constructed menu: step 0 without a window, the flags cleared (IV aocMenuReset, Apocalypse
 * aocMenuReset). */
void aocMenuReset(AocMenu *menu);
void aocMenuReset(AocMenu *menu);
}

typedef char AocMenuSizeCheck[sizeof(AocMenu) == 0x26F0 ? 1 : -1];
typedef char AocMenuMemberOffsetsCheck[
    offsetof(AocMenu, secondRequest) == 0x224 && offsetof(AocMenu, selection) == 0x240 &&
    offsetof(AocMenu, dispatchTable) == 0x2B4 && offsetof(AocMenu, panel) == 0x2E8 &&
    offsetof(AocMenu, tableFile) == 0x350 ? 1 : -1];
typedef char AocMenuCallbackOffsetsCheck[
    __INTADDR__(&((AocMenu *)0)->stepDispatch.flat) == 0x10 &&
    __INTADDR__(&((AocMenu *)0)->touchMarker) == 0x17AC &&
    __INTADDR__(&((AocMenu *)0)->callbacks.update) == 0x10 &&
    __INTADDR__(&((AocMenu *)0)->callbacks.draw) == 0xb8 &&
    __INTADDR__(&((AocMenu *)0)->callbacks.finish) == 0x160 &&
    __INTADDR__(&((AocMenu *)0)->window) == 0x208 &&
    sizeof(AocMenu::StepCallback) == 8 ? 1 : -1];
typedef char AocMenuAnimatedOffsetsCheck[
    __INTADDR__(&((AocMenu *)0)->animated.effects) == 0x37c &&
    __INTADDR__(&((AocMenu *)0)->animated.slowTick) == 0x1128 &&
    __INTADDR__(&((AocMenu *)0)->animated.fastTick) == 0x112c ? 1 : -1];
typedef char AocMenuTailOffsetsCheck[
    __INTADDR__(&((AocMenu *)0)->touchRows) == 0x2b4 &&
    __INTADDR__(&((AocMenu *)0)->iv.descriptionText) == 0x1c30 &&
    __INTADDR__(&((AocMenu *)0)->descriptionText) == 0x1eec ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
#ifdef __cplusplus
}
#endif

#endif
