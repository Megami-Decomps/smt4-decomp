#ifndef CLASSES_AOCMENU_H
#define CLASSES_AOCMENU_H

#include "common.h"
#include "shard/ScriptProcess.h"
#include "shard/W6_W6Match5_QueuedRequest.h"
#include "code/Code0023.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" void asdOperatorDelete(void *block);

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
            /* 0x0010 */ StepCallback update[21];
            /* 0x00B8 */ StepCallback draw[21];
            /* 0x0160 */ StepCallback finish[21];
        } callbacks;
    };
    /* 0x0208 */ AocMenuWindow *window;
    /* 0x020C */ u8 unk020C[4];
    /* 0x0210 */ RequestParameters request; /* the request the menu is waiting on */
    /* 0x0224 */ u8 unk0224[0x12C];
    /* 0x0350 */ void *tableFile;
    /* 0x0354 */ u32 tableValue;
    /* 0x0358 */ ScriptProcess *script;
    union {
        /* 0x035C */ u8 unk035C[0xDD4];
        struct {
            /* 0x035C */ u8 unk035C[0x20];
            /* 0x037C */ u8 effects[25][0x8C];
            /* 0x1128 */ u32 slowTick;
            /* 0x112C */ u32 fastTick;
        } animated;
    };
    /* 0x1130 */ char prompt[0x80];
    /* 0x11B0 */ u8 jobOwner[1];           /* the job owner jobOwnerFreeSlotAndStop works on */
    /* 0x11B1 */ u8 unk11B1[0x153F];
};

typedef char AocMenuSizeCheck[sizeof(AocMenu) == 0x26F0 ? 1 : -1];
typedef char AocMenuCallbackOffsetsCheck[
    __INTADDR__(&((AocMenu *)0)->callbacks.update) == 0x10 &&
    __INTADDR__(&((AocMenu *)0)->callbacks.draw) == 0xb8 &&
    __INTADDR__(&((AocMenu *)0)->callbacks.finish) == 0x160 &&
    __INTADDR__(&((AocMenu *)0)->window) == 0x208 &&
    sizeof(AocMenu::StepCallback) == 8 ? 1 : -1];
typedef char AocMenuAnimatedOffsetsCheck[
    __INTADDR__(&((AocMenu *)0)->animated.effects) == 0x37c &&
    __INTADDR__(&((AocMenu *)0)->animated.slowTick) == 0x1128 &&
    __INTADDR__(&((AocMenu *)0)->animated.fastTick) == 0x112c ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
#ifdef __cplusplus
}
#endif

#endif
