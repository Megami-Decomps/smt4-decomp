/* NON_MATCHING: retail moves the slot table pointer to r1 and loads the price table through r0/r2; here the loads use r2/r3 (register allocation only). */
#include "common.h"

extern "C" {

typedef struct ShopWork {
    /* 0x000 */ u8 unk000[0x10];
    /* 0x010 */ void *scriptGroup;
    /* 0x014 */ u8 unk014[4];
    /* 0x018 */ void *process;
    /* 0x01C */ u8 unk01C[0x538];
    /* 0x554 */ s32 selection;
    /* 0x558 */ u8 unk558[0x38];
    /* 0x590 */ s32 *prices;
    /* 0x594 */ u8 unk594[4];
    /* 0x598 */ s32 state;
} ShopWork;

typedef struct PartyMoney {
    /* 0x00 */ s32 money;
} PartyMoney;

extern u8 DAT_00530ca0[];
extern u8 DAT_00530cb4[];

PartyMoney *gameGetSlotTable(void);
void panelSetMode3(s32 delta, s32 arg);
s32 tableGroupFindEntryIndex(void *group, const u8 *label);
void scrScriptProcessStartEntry(void *process, s32 index);
s32 scrRunOpcodesStub(void *process);
void partyAddMoneyClamped(s32 delta);
s32 FUN_0034919c(void);
void messageDismissNumericBanner(s32 arg);

static __inline void shopStartScript(ShopWork *shop, const u8 *label)
{
    s32 index = tableGroupFindEntryIndex(shop->scriptGroup, label);
    if (index >= 0) {
        scrScriptProcessStartEntry(shop->process, index);
    }
}

/* Buys the selected item when the party can afford it, otherwise runs the not-enough-money script. */
void FUN_004ce300(ShopWork *shop)
{
    if (gameGetSlotTable()->money >= shop->prices[shop->selection]) {
        panelSetMode3(-shop->prices[shop->selection], 0);
        shopStartScript(shop, DAT_00530ca0);
        shop->state = 9;
        if (scrRunOpcodesStub(shop->process) == 2) {
            partyAddMoneyClamped(-shop->prices[shop->selection]);
            shop->state = 10;
        }
    } else {
        if (FUN_0034919c()) {
            messageDismissNumericBanner(0);
        }
        shopStartScript(shop, DAT_00530cb4);
        shop->state = 10;
    }
}

} /* extern "C" */
