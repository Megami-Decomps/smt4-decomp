/* NON_MATCHING: written like _ZN7AocMenu15runQueryProcessEv; step 4's error store differs: retail loads the failed
 * result (ldrd) before storing the error kind, where this build stores the kind first (4 rows), and retail hoists the
 * constant 3 before the step number (4 rows; writing `counter = 3;` before `step = N;` gives that order, but the two
 * are independent stores and the order is only score evidence). */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "nn/Result.h"
#include "util/BitsAndBytes.h"
#include "sys/RuntimeObjects.h"

/* The status operation the menu is polling (its deleting destructor is vtable slot 1). */
class AocPollHandler {
public:
    virtual ~AocPollHandler();
    virtual void vfunc08();
    virtual RequestParameters poll();
};

/* The content-status menu's work. */
struct AocPollMenu {
    /* 0x000 */ u32 unk000;
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 step;
    /* 0x00C */ s32 counter;
    /* 0x010 */ u8 unk010[0x1F8];
    /* 0x208 */ AocPollHandler *handler;
    /* 0x20C */ u8 handlerStorage[4];
    /* 0x210 */ RequestParameters result;
};

extern "C" {

void FUN_00476e58(AocPollMenu *menu, s32 first, s32 second);
AocPollHandler *windowCreateStatusOperation(u8 *storage, s32 kind);
WindowStatusResult FUN_00473980(AocMain *main);
s32 strIsEmpty(const RequestParameters *result);

/* Per-frame update of the content-status menu: starts its two status operations, polls them and reports the result. */
void AocMenu::pollContentStatus()
{
    AocPollMenu * menu = reinterpret_cast<AocPollMenu *>(this);
    RequestParameters result;
    AocMain *aocMain = g_aocMain;
    switch (menu->step) {
    case 0: {
        AocPollHandler *created = windowCreateStatusOperation(menu->handlerStorage, 0);
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
            case 0x67:
                menu->step = 5;
                menu->counter = 3;
                break;
            case 0x66: {
                RequestParameters copy = result;
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
        AocPollHandler *created = windowCreateStatusOperation(menu->handlerStorage, 5);
        menu->step = 3;
        menu->handler = created;
        break;
    }
    case 3: {
        RequestParameters polled = menu->handler->poll();
        result = polled;
        if (strIsEmpty(&result) != 0) {
            menu->step = 4;
        } else if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) != 0) {
            switch (result.kind) {
            case 0x67:
                menu->step = 5;
                menu->counter = 3;
                break;
            case 0x66: {
                RequestParameters copy = result;
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
            menu->result.kind = 100;
            menu->result.result = status;
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
        FUN_00476e58(menu, 12, 3);
        break;
    }
}

}
