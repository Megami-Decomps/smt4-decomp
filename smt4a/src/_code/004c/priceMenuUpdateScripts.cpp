#include "common.h"

struct ServiceShopState {
    /* 0x000 */ u8 unk000[0xc];
    /* 0x00C */ s32 mainState;
    /* 0x010 */ void *scriptTable;
    /* 0x014 */ u32 unk014;
    /* 0x018 */ void *scriptProcess;
    /* 0x01C */ u8 unk01c[0x538];
    /* 0x554 */ u32 selection;
    /* 0x558 */ u8 unk558[0x38];
    /* 0x590 */ s32 *prices;
    /* 0x594 */ u32 unk594;
    /* 0x598 */ s32 state;
};
extern "C" {
void sysPlaySe(u32 sound);
s32 FUN_0034919c();
void messageDismissNumericBanner(s32 mode);
s32 tableGroupFindEntryIndex(void *table, const char *name);
void scrScriptProcessStartEntry(void *process, s32 entry);
s32 scrRunOpcodesStub(void *process);
void FUN_004ceb9c(ServiceShopState *shop);
void FUN_004cdbd4(ServiceShopState *shop);
void FUN_004ce300(ServiceShopState *shop);
void partyAddMoneyClamped(s32 change);
s32 messageMainIsIdle();
extern const char DAT_00530cec[];
extern const char DAT_00530cdc[];
extern const char DAT_00530c8c[];
}

static inline void serviceShopStartEntry(ServiceShopState *shop, const char *name)
{
    s32 entry = tableGroupFindEntryIndex(shop->scriptTable, name);
    if (entry >= 0) {
        scrScriptProcessStartEntry(shop->scriptProcess, entry);
    }
}

static inline void serviceShopFinishOpening(ServiceShopState *shop)
{
    serviceShopStartEntry(shop, DAT_00530cdc);
    shop->state = 5;
    FUN_004ceb9c(shop);
}

/* Advance the service shop scripts, charging the chosen price after completion. */
extern "C" void priceMenuUpdateScripts(ServiceShopState *shop)
{
    switch (shop->state) {
    case 0:
        sysPlaySe(191);
        if (FUN_0034919c()) messageDismissNumericBanner(0);
        shop->state = 3;
        serviceShopStartEntry(shop, DAT_00530cec);
        shop->state = 4;
        if (scrRunOpcodesStub(shop->scriptProcess) == 2) serviceShopFinishOpening(shop);
        break;
    case 3:
        serviceShopStartEntry(shop, DAT_00530cec);
        shop->state = 4;
        if (scrRunOpcodesStub(shop->scriptProcess) == 2) serviceShopFinishOpening(shop);
        break;
    case 4:
        if (scrRunOpcodesStub(shop->scriptProcess) == 2) serviceShopFinishOpening(shop);
        break;
    case 5:
        FUN_004ceb9c(shop);
        break;
    case 6:
        FUN_004cdbd4(shop);
        break;
    case 8:
        FUN_004ce300(shop);
        break;
    case 9:
        if (scrRunOpcodesStub(shop->scriptProcess) == 2) {
            partyAddMoneyClamped(-shop->prices[shop->selection]);
            shop->state = 10;
        }
        break;
    case 10:
        if (scrRunOpcodesStub(shop->scriptProcess) == 2) {
            if (FUN_0034919c()) messageDismissNumericBanner(0);
            serviceShopStartEntry(shop, DAT_00530c8c);
            shop->state = 5;
        }
        break;
    case 11:
        if (scrRunOpcodesStub(shop->scriptProcess) == 2) {
            if (!messageMainIsIdle()) messageDismissNumericBanner(0);
            shop->mainState = 4;
        }
        break;
    }
}
