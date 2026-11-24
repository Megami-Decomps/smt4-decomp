/* NON_MATCHING: 4 lines; written like _ZN7AocMenu15runQueryProcessEv. Retail hoists the constant 3 before the step
 * number (writing `counter = 3;` before `step = N;` gives that order, but the two are independent stores and the
 * order is only score evidence; a (step, counter) setter keeps this build's order). Step 4's error store matches
 * through failRequestOperation, whose value parameter makes armcc read the failed pair before it stores the kind. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422214Owner.h"
#include "nn/Result.h"
#include "sys/RuntimeObjects.h"
#include "util/BitsAndBytes.h"

/* The query operation the menu is polling (its deleting destructor is vtable slot 1). */
class AocQueryHandler {
public:
    virtual ~AocQueryHandler();
    virtual void vfunc08();
    virtual RequestParameters poll();
};

/* A handler's own state: only the word the menu fills in after creating it. */
struct AocQueryHandlerState {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 slotValue;
};

struct AocQueryMenu {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 step;
    /* 0x00C */ s32 counter;
    /* 0x010 */ u8 unk010[0x1F8];
    /* 0x208 */ AocQueryHandler *handler;
    /* 0x20C */ u8 handlerStorage[4];
    /* 0x210 */ RequestParameters result;
    /* 0x224 */ u8 unk224[0x1C];
    /* 0x240 */ u8 slotHolder[0x74];
};

extern "C" {

void FUN_00476e58(AocQueryMenu *menu, s32 first, s32 second);
AocQueryHandler *windowCreateStatusOperation(u8 *storage, s32 kind);
WindowStatusResult FUN_00473980(AocMain *main);
s32 strIsEmpty(const RequestParameters *result);
u32 flaggedValueHolderGetTotal(void *holder);

/* The kinds of a finished query result. */
enum {
    AOC_RESULT_RETRY = 0x66,
    AOC_RESULT_DONE = 0x67
};

/* Per-frame update of the menu's result screen: polls its status operations, reads the slot's content code and
 * reports the result (steps 0-5 and 9999). */
void AocMenu::runResultProcess()
{
    AocQueryMenu * menu = reinterpret_cast<AocQueryMenu *>(this);
    AocMenuRequest result;
    AocMain *aocMain = g_aocMain;

    switch (menu->step) {
    case 0: {
        AocQueryHandler *created = windowCreateStatusOperation(menu->handlerStorage, 0);
        menu->step = 1;
        menu->handler = created;
        break;
    }
    case 1: {
        RequestParameters polled = menu->handler->poll();
        result = polled;
        if (strIsEmpty(&result) != 0) {
            menu->step = 2;
        } else if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) != 0) {
            switch (result.kind) {
            case AOC_RESULT_DONE:
                menu->step = 5;
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
    }
    case 2: {
        if (menu->handler != NULL)
            delete menu->handler;
        AocQueryHandler *created = windowCreateStatusOperation(menu->handlerStorage, 2);
        menu->handler = created;
        ((AocQueryHandlerState *)created)->slotValue = aocMain->records[flaggedValueHolderGetTotal(menu->slotHolder)].contentId;
        menu->step = 3;
        break;
    }
    case 3: {
        RequestParameters polled = menu->handler->poll();
        result = polled;
        if (strIsEmpty(&result) != 0) {
            aocMenuChangeStep(this, 10);
        } else if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) != 0) {
            switch (result.kind) {
            case AOC_RESULT_DONE:
                menu->step = 4;
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
    }
    case 4: {
        WindowStatusResult status = FUN_00473980(aocMain);
        if (nnResultIsFailure(legacyResourceIdRemap(&status))) {
            menu->step = 9999;
            failRequestOperation(&menu->result, status);
            break;
        }
        menu->step = 5;
        menu->counter = 3;
        break;
    }
    case 5:
        menu->counter--;
        if (menu->counter > 0)
            break;
        aocMenuChangeStep(this, 6);
        break;
    case 9999:
        FUN_00476e58(menu, 5, 3);
        break;
    }
}

}
