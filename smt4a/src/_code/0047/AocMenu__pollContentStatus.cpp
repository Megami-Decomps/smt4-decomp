/* NON_MATCHING: block layout of the 0x66/default tails, the constants 3/5 in r5/r6 (swapped) and the remap sign test (retail: lsrs #31; here cmp #0). */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "util/BitsAndBytes.h"
#include "sys/RuntimeObjects.h"

/* A result code and its description. */
struct AocPollCode {
    u32 code;
    u32 description;
};

/* What a status operation reports: a kind byte and four words of detail. */
struct AocPollResult {
    /* 0x00 */ u8 kind;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ AocPollCode status;
    /* 0x0C */ u32 detail[2];
};

/* The status operation the menu is polling (its deleting destructor is vtable slot 1). */
class AocPollHandler {
public:
    virtual ~AocPollHandler();
    virtual void vfunc08();
    virtual AocPollResult poll();
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
    /* 0x210 */ AocPollResult result;
};

extern "C" {
extern AocMain *g_aocMain;

void FUN_00476e58(AocPollMenu *menu, s32 first, s32 second);
AocPollHandler *windowCreateStatusOperation(u8 *storage, s32 kind);
void timeInitializeActiveState(AocPollResult *result);
void FUN_0047bc90(AocPollMenu *menu, AocPollResult *result);
void FUN_00473980(AocPollCode *result, AocMain *main);
s32 isEmptyString(const AocPollResult *result);

/* Per-frame update of the content-status menu: starts its two status operations, polls them and reports the result. */
void AocMenu::pollContentStatus()
{
    AocPollMenu * menu = reinterpret_cast<AocPollMenu *>(this);
    AocPollResult result;
    timeInitializeActiveState(&result);
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
        AocPollResult polled = menu->handler->poll();
        result = polled;
        if (isEmptyString(&result) != 0) {
            menu->step = 2;
            return;
        }
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) == 0) {
            return;
        }
        if (result.kind == 0x66) {
            AocPollResult copy = result;
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
        AocPollResult polled = menu->handler->poll();
        result = polled;
        if (isEmptyString(&result) != 0) {
            menu->step = 4;
            return;
        }
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) == 0) {
            return;
        }
        if (result.kind == 0x66) {
            AocPollResult copy = result;
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
        if ((legacyResourceIdRemap(&remapped) >> 31) != 0) {
            menu->step = 9999;
            menu->result.kind = 100;
            menu->result.status = remapped;
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
