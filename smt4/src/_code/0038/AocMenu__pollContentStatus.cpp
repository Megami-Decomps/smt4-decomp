#include "code/Code0023.h"
/* NON_MATCHING: 4 lines; written like _ZN7AocMenu15runQueryProcessEv. Retail hoists the constant 3 before the step
 * number (writing `counter = 3;` before `step = N;` gives that order, but the two are independent stores and the
 * order is only score evidence; a (step, counter) setter keeps this build's order). Step 4's error store matches
 * through failRequestOperation, whose value parameter makes armcc read the failed pair before it stores the kind. */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "nn/Result.h"
#include "sys/RuntimeObjects.h"
#include "sys/WindowStatusCheck.h"

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

void FUN_00233e70(AocPollMenu *menu, s32 first, s32 second);
WindowStatusResult resourceLoadDisplayMetadata(AocMain *main);
s32 strIsEmpty(const RequestParameters *result);
s32 byteIsAtLeast100(const RequestParameters *result);

/* Per-frame update of the content-status menu: starts its two status operations, polls them and reports the result. */
void AocMenu::pollContentStatus()
{
    AocPollMenu * menu = reinterpret_cast<AocPollMenu *>(this);
    AocMenuRequest result;
    AocMain *aocMain = g_aocMain;
    switch (menu->step) {
    case 0: {
        AocPollHandler *created = reinterpret_cast<AocPollHandler *>(windowCreateStatusOperation(menu->handlerStorage, 0));
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
            case 0x67:
                menu->step = 5;
                menu->counter = 3;
                break;
            case 0x66: {
                AocMenuRequest copy = result;
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
        AocPollHandler *created = reinterpret_cast<AocPollHandler *>(windowCreateStatusOperation(menu->handlerStorage, 5));
        menu->step = 3;
        menu->handler = created;
        break;
    }
    case 3: {
        RequestParameters polled = menu->handler->poll();
        result = polled;
        if (strIsEmpty(&result) != 0) {
            menu->step = 4;
        } else if (byteIsAtLeast100(&result) != 0) {
            switch (result.kind) {
            case 0x67:
                menu->step = 5;
                menu->counter = 3;
                break;
            case 0x66: {
                AocMenuRequest copy = result;
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
    case 4: {
        WindowStatusResult status = resourceLoadDisplayMetadata(aocMain);
        if (windowStatusFailed(status)) {
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
        FUN_00233e70(menu, 12, 3);
        break;
    }
}

}
