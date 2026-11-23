/* NON_MATCHING: retail hoists the constant 3 (the wait counter) into its register before the step number 4 (4 rows).
 * Writing `menu->counter = 3;` before `menu->step = 4;` gives that order and IDENTICAL code, but the two are
 * independent stores and the order is only score evidence (no matched AocMenu stepper supports it), so the natural
 * order stays. */
#include "code/Code0023.h"
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "classes/Obj422214Owner.h"

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

void FUN_00233e70(AocQueryMenu *menu, s32 first, s32 second);
s32 strIsEmpty(const RequestParameters *result);
s32 byteIsAtLeast100(const RequestParameters *result);
s32 flaggedValueHolderGetTotal(void *holder);

/* The kinds of a finished query result. */
enum {
    AOC_RESULT_RETRY = 0x66,
    AOC_RESULT_DONE = 0x67
};

/* Per-frame update of the content menu: starts its query handlers, polls them and reports the
 * result (first query at step 0..2, slot query at step 2..3). */
void AocMenu::runQueryProcess()
{
    AocQueryMenu * menu = reinterpret_cast<AocQueryMenu *>(this);
    RequestParameters result;
    AocMain *aocMain = g_aocMain;

    switch (menu->step) {
    case 0: {
        AocQueryHandler *created = reinterpret_cast<AocQueryHandler *>(windowCreateStatusOperation(menu->handlerStorage, 0));
        menu->step = 1;
        menu->handler = created;
        break;
    }
    case 1: {
        RequestParameters polled = menu->handler->poll();
        result = polled;
        if (strIsEmpty(&result) != 0) {
            menu->step = 2;
        } else if (byteIsAtLeast100(&result) != 0) {
            switch (result.kind) {
            case AOC_RESULT_DONE:
                menu->step = 4;
                menu->counter = 3;
                break;
            case AOC_RESULT_RETRY: {
                RequestParameters copy = result;
                FUN_00234124(this, &copy);
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
        AocQueryHandler *created = reinterpret_cast<AocQueryHandler *>(windowCreateStatusOperation(menu->handlerStorage, 4));
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
        } else if (byteIsAtLeast100(&result) != 0) {
            switch (result.kind) {
            case AOC_RESULT_DONE:
                menu->step = 4;
                menu->counter = 3;
                break;
            case AOC_RESULT_RETRY: {
                RequestParameters copy = result;
                FUN_00234124(this, &copy);
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
    case 4:
        menu->counter--;
        if (menu->counter > 0)
            break;
        aocMenuChangeStep(this, 6);
        break;
    case 9999:
        FUN_00233e70(menu, 5, 3);
        break;
    }
}

}
