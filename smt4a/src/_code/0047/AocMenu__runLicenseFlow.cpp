/* NON_MATCHING: 80 lines (22 by shape), written like _ZN7AocMenu15runQueryProcessEv with the result ladder in each
 * polling step. Retail hoists the wait counter's 3 before the step number 7 (as in runQueryProcess and
 * pollContentStatus: `counter = 3;` first gives that order, which is only score evidence), and in step 5 keeps the
 * content id in r1 and the next step's 6 in r2 where this build swaps them, which lets this build share step 0's
 * final store with step 5's. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422214Owner.h"
#include "test/BustupViewer.h"
#include "util/BitsAndBytes.h"

/* The status operation the menu is polling: slot 1 is its deleting destructor, slot 3 reads the pending result. */
class AocLicenseHandler {
public:
    virtual ~AocLicenseHandler();
    virtual void vfunc08();
    virtual RequestParameters poll();

    /* 0x04 */ u32 words[4];
    /* 0x14 */ u32 contentId; /* the license operation's content, set after it is created */
};

/* The license menu's work. */
struct AocLicenseMenu {
    /* 0x000 */ u32 flags;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 step;
    /* 0x00C */ s32 counter;
    /* 0x010 */ u8 unk010[0x1F8];
    /* 0x208 */ AocLicenseHandler *handler;
    /* 0x20C */ u8 handlerStorage[4];
    /* 0x210 */ RequestParameters result;
};

/* The add-on main block's selected-record pointer and the cleared licence data. */

extern "C" {

void sysMemClear(void *destination, u32 size);
AocLicenseHandler *windowCreateStatusOperation(u8 *storage, s32 kind);
void FUN_00476e58(AocLicenseMenu *menu, s32 first, s32 second);
void aocMenuSetButtonHelp(AocLicenseMenu *menu, s32 selection, s32 mode);
void jobFlagsWorkStop(AocLicenseMenu *menu);
void aocLoadingTaskStart(AocLicenseMenu *menu, s32 value);
s32 strIsEmpty(const RequestParameters *result);

/* The kinds of a finished status result. */
enum {
    AOC_RESULT_RETRY = 0x66,
    AOC_RESULT_DONE = 0x67
};

/* Per-frame update of the license flow: starts its status operations, polls them and reports the result. */
void AocMenu::runLicenseFlow()
{
    AocLicenseMenu *menu = (AocLicenseMenu *)this;
    AocMenuRequest result;
    AocMain *aocMain = g_aocMain;

    switch (menu->step) {
    case 0:
        if (buttonHelpStateIsNot3() != 0 && (menu->flags & 0x200) != 0) {
            AocLicenseHandler *created = windowCreateStatusOperation(menu->handlerStorage, 0);
            menu->step = 1;
            menu->handler = created;
        }
        break;
    case 1:
        if ((menu->flags & 0x200) != 0) {
            result = menu->handler->poll();
            if (strIsEmpty(&result) != 0) {
                menu->step = 2;
            } else if (byteIsAtLeast100((const u8 *)&result) != 0) {
                jobFlagsWorkStop(menu);
                switch (result.kind) {
                case AOC_RESULT_DONE:
                    menu->step = 7;
                    menu->counter = 3;
                    break;
                case AOC_RESULT_RETRY: {
                    AocMenuRequest copy = result;
                    FUN_0047bc90(this, &copy);
                    break;
                }
                default:
                    menu->result = result;
                    menu->step = 9999;
                    break;
                }
            }
        }
        break;
    case 2:
        if (menu->handler != NULL)
            delete menu->handler;
        menu->handler = windowCreateStatusOperation(menu->handlerStorage, 6);
        menu->step = 3;
        aocLoadingTaskStart(menu, 1);
        break;
    case 3:
        result = menu->handler->poll();
        if (strIsEmpty(&result) != 0) {
            if (menu->handler != NULL)
                delete menu->handler;
            aocLoadingTaskStart(menu, 0);
            AocLicenseHandler *created = windowCreateStatusOperation(menu->handlerStorage, 0);
            menu->step = 4;
            menu->handler = created;
        } else if (byteIsAtLeast100((const u8 *)&result) != 0) {
            jobFlagsWorkStop(menu);
            menu->result = result;
            menu->step = 9999;
        }
        break;
    case 4:
        if ((menu->flags & 0x200) != 0) {
            result = menu->handler->poll();
            if (strIsEmpty(&result) != 0) {
                menu->step = 5;
                aocLoadingTaskStart(menu, 1);
            } else if (byteIsAtLeast100((const u8 *)&result) != 0) {
                jobFlagsWorkStop(menu);
                switch (result.kind) {
                case AOC_RESULT_DONE:
                    menu->step = 7;
                    menu->counter = 3;
                    break;
                case AOC_RESULT_RETRY: {
                    AocMenuRequest copy = result;
                    FUN_0047bc90(this, &copy);
                    break;
                }
                default:
                    menu->result = result;
                    menu->step = 9999;
                    break;
                }
            }
        }
        break;
    case 5:
        if (menu->handler != NULL)
            delete menu->handler;
        menu->handler = windowCreateStatusOperation(menu->handlerStorage, 7);
        menu->handler->contentId = aocMain->selectedRecord->contentId;
        menu->step = 6;
        break;
    case 6:
        result = menu->handler->poll();
        if (strIsEmpty(&result) != 0) {
            aocMenuChangeStep(this, 10);
            AocMain *main = g_aocMain;
            for (s32 index = 0; index < 16; ++index) {
                main->contentCode.words[index] = 0;
            }
            sysMemClear(main->contentText, sizeof(main->contentText));
        } else if (byteIsAtLeast100((const u8 *)&result) != 0) {
            jobFlagsWorkStop(menu);
            switch (result.kind) {
            case AOC_RESULT_DONE:
                menu->step = 7;
                menu->counter = 3;
                break;
            case AOC_RESULT_RETRY: {
                AocMenuRequest copy = result;
                FUN_0047bc90(this, &copy);
                break;
            }
            default:
                menu->result = result;
                menu->step = 9999;
                break;
            }
        }
        break;
    case 7:
        menu->counter--;
        if (menu->counter > 0)
            break;
        aocMenuChangeStep(this, 6);
        aocMenuSetButtonHelp(menu, 2, 1);
        break;
    case 9999:
        FUN_00476e58(menu, 14, 6);
        if (menu->state == 6)
            aocMenuSetButtonHelp(menu, 2, 1);
        break;
    }
}

}
