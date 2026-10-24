#ifndef CLASSES_AOCMENU_H
#define CLASSES_AOCMENU_H

#include "common.h"
#include "shard/ScriptProcess.h"
#include "shard/W6_W6Match5_QueuedRequest.h"

extern "C" void *asdOperatorNew(u32 bytes);
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
    AocMenu();
    ~AocMenu();
    static void *operator new(u32 bytes) throw() { return asdOperatorNew(bytes); }
    static void operator delete(void *block) { asdOperatorDelete(block); }

    /* Starts the purchase list: loads the menu sprites and the content table, creates the script
     * process, drops the current window and writes the prompt text. */
    void openPurchaseList();

    /* 0x0000 */ u32 flags;                /* bit 0: the menu finished opening */
    /* 0x0004 */ u32 step;
    /* 0x0008 */ u32 substep;
    /* 0x000C */ u8 unk000C[0x1FC];
    /* 0x0208 */ AocMenuWindow *window;
    /* 0x020C */ u8 unk020C[4];
    /* 0x0210 */ RequestParameters request; /* the request the menu is waiting on */
    /* 0x0224 */ u8 unk0224[0x12C];
    /* 0x0350 */ void *tableFile;
    /* 0x0354 */ u32 tableValue;
    /* 0x0358 */ ScriptProcess *script;
    /* 0x035C */ u8 unk035C[0xDD4];
    /* 0x1130 */ char prompt[0x80];
    /* 0x11B0 */ u8 jobOwner[1];           /* the job owner jobOwnerFreeSlotAndStop works on */
    /* 0x11B1 */ u8 unk11B1[0x153F];
};

typedef char AocMenuSizeCheck[sizeof(AocMenu) == 0x26F0 ? 1 : -1];

#endif
