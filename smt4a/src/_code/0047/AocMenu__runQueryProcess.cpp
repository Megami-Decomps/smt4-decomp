/* NON_MATCHING: content-menu update with a second query handler (kind 4) and the 0x66/0x67 result tails; written like FUN_0038e374, block layout and constant registers not compared with retail */
#include "classes/AocMenu.h"
#include "addon/aocMain.h"
#include "util/BitsAndBytes.h"

/* The query operation the menu is polling (its deleting destructor is vtable slot 1). */
class AocQueryHandler {
public:
    virtual ~AocQueryHandler();
    virtual void vfunc08();
    virtual RequestParameters poll();
};

/* A queried slot record: the 16-bit value read for a slot (+0x9AA of each 0x9C8-byte record). */
struct AocSlotRecord {
    /* 0x000 */ u8 unk000[0x9AA];
    /* 0x9AA */ u16 value;
    /* 0x9AC */ u8 unk9AC[0x1C];
};

struct AocSlotTable {
    /* 0x00 */ u8 unk00[0x678];
    /* 0x678 */ AocSlotRecord *records;
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
extern AocSlotTable *g_aocMain;

void FUN_00476e58(AocQueryMenu *menu, s32 first, s32 second);
AocQueryHandler *windowCreateStatusOperation(u8 *storage, s32 kind);
void FUN_0047bc90(AocQueryMenu *menu, RequestParameters *result);
s32 strIsEmpty(const RequestParameters *result);
s32 flaggedValueHolderGetTotal(void *holder);

#define AOC_RESULT_RETRY 0x66
#define AOC_RESULT_DONE 0x67

/* Per-frame update of the content menu: starts its query handlers, polls them and reports the
 * result (first query at step 0..2, slot query at step 2..3). */
void AocMenu::runQueryProcess()
{
    AocQueryMenu * menu = reinterpret_cast<AocQueryMenu *>(this);
    RequestParameters result;
    AocSlotTable *aocMain = g_aocMain;

    switch (menu->step) {
    case 3:
    case 1: {
        RequestParameters polled = menu->handler->poll();
        result = polled;
        if (strIsEmpty(&result) != 0) {
            if (menu->step == 3) {
                menu->state = 10;
                menu->step = 0;
                if (menu->handler != NULL) {
                    delete menu->handler;
                    menu->handler = NULL;
                }
            } else {
                menu->step = 2;
            }
            return;
        }
        if (byteIsAtLeast100(reinterpret_cast<const u8 *>(&result)) == 0)
            return;
        if (result.kind == AOC_RESULT_RETRY) {
            RequestParameters copy = result;
            FUN_0047bc90(menu, &copy);
            return;
        }
        if (result.kind != AOC_RESULT_DONE) {
            menu->step = 9999;
            menu->result = result;
            return;
        }
        menu->step = 4;
        menu->counter = 3;
        return;
    }
    case 0: {
        AocQueryHandler *created = windowCreateStatusOperation(menu->handlerStorage, 0);
        menu->step = 1;
        menu->handler = created;
        return;
    }
    case 2: {
        if (menu->handler != NULL)
            delete menu->handler;
        AocQueryHandler *created = windowCreateStatusOperation(menu->handlerStorage, 4);
        menu->handler = created;
        s32 slot = flaggedValueHolderGetTotal(menu->slotHolder);
        ((AocQueryHandlerState *)created)->slotValue = aocMain->records[slot].value;
        menu->step = 3;
        return;
    }
    case 4:
        menu->counter--;
        if (menu->counter > 0)
            return;
        menu->state = 6;
        menu->step = 0;
        if (menu->handler != NULL) {
            delete menu->handler;
            menu->handler = NULL;
        }
        return;
    case 9999:
        FUN_00476e58(menu, 5, 3);
        return;
    }
}

}
