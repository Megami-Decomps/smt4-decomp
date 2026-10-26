/* NON_MATCHING: block layout of the 0x66/default tails, and the constants 3/5 in r5/r6 (swapped). */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "nn/Result.h"
#include "util/BitsAndBytes.h"
#include "sys/RuntimeObjects.h"

/* A result code and its description. */
struct AocPollCode {
    u32 code;
    u32 description;
};

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
extern AocMain *g_aocMain;

void FUN_00476e58(AocPollMenu *menu, s32 first, s32 second);
AocPollHandler *windowCreateStatusOperation(u8 *storage, s32 kind);
void FUN_0047bc90(AocPollMenu *menu, RequestParameters *result);
void FUN_00473980(AocPollCode *result, AocMain *main);
s32 isEmptyString(const RequestParameters *result);

/* Per-frame update of the content-status menu: starts its two status operations, polls them and reports the result. */
void AocMenu::pollContentStatus()
{
    AocPollMenu * menu = reinterpret_cast<AocPollMenu *>(this);
    RequestParameters result;
    AocMain *aocMain = g_aocMain;
    switch (menu->step) {
    case 0:
        {
            AocPollHandler *created = windowCreateStatusOperation(menu->handlerStorage, 0);
            menu->step = 1;
            menu->handler = created;
        }
        return;
    case 2:
        if (menu->handler != NULL) {
            delete menu->handler;
        }
        {
            AocPollHandler *created = windowCreateStatusOperation(menu->handlerStorage, 5);
            menu->step = 3;
            menu->handler = created;
        }
        return;
    case 1: {
        RequestParameters polled = menu->handler->poll();
        result = polled;
        if (isEmptyString(&result) != 0) {
            menu->step = 2;
            return;
        }
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) == 0) {
            return;
        }
        if (result.kind == 0x66) {
            RequestParameters copy = result;
            FUN_0047bc90(menu, &copy);
            return;
        }
        if (result.kind != 0x67) {
            menu->step = 9999;
            menu->result = result;
            return;
        }
        menu->step = 5;
        menu->counter = 3;
        return;
    }
    case 3: {
        RequestParameters polled = menu->handler->poll();
        result = polled;
        if (isEmptyString(&result) != 0) {
            menu->step = 4;
            return;
        }
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) == 0) {
            return;
        }
        if (result.kind == 0x66) {
            RequestParameters copy = result;
            FUN_0047bc90(menu, &copy);
            return;
        }
        if (result.kind != 0x67) {
            menu->step = 9999;
            menu->result = result;
            return;
        }
        menu->step = 5;
        menu->counter = 3;
        return;
    }
    case 4: {
        AocPollCode status;
        FUN_00473980(&status, aocMain);
        AocPollCode remapped = status;
        if (nnResultIsFailure(legacyResourceIdRemap(&remapped))) {
            menu->step = 9999;
            menu->result.kind = 100;
            menu->result.result.code = remapped.code;
            menu->result.result.description = remapped.description;
            return;
        }
        menu->step = 5;
        menu->counter = 3;
        return;
    }
    case 5:
        menu->counter--;
        if (menu->counter > 0) {
            return;
        }
        menu->state = 6;
        menu->step = 0;
        if (menu->handler != NULL) {
            delete menu->handler;
            menu->handler = NULL;
        }
        return;
    case 9999:
        FUN_00476e58(menu, 12, 3);
        return;
    }
}

}
