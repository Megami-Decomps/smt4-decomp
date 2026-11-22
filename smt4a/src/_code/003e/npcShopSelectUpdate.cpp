/* NON_MATCHING: 157 lines, same calls, frame and block layout. Retail folds the two mode tests of each count into
 * one (`cmp r0, #5; cmpne r0, #4`, here two branches) and keeps the found entry in r0 at four of the eight script
 * starts (`cmp r0, #0` ... `ldr r2; mov r1, r0; mov r0, r2`: both arms for three offers, the first arm for two and the
 * empty list) where this build moves it to r1 at once everywhere (`subs r1, r0, #0`), so the shared tails differ.
 * The choice fill is armcc's own 12-byte memset helper; the memset gives retail's call schedule but moves the
 * registers of the shared tails (126 lines with the helper called by name). */
#include "common.h"
#include "shop/NpcShop.h"
#include "shop/ShopItemDescription.h"
#include "addon/LookupRecord.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/DemonSaveSnapshot.h"
#include "map/lmapMain.h"
#include "shard/Shard0050.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "code/Code003c_Smt4a.h"
#include <string.h>

extern "C" {
s32 panelIsMissingOrFlagClear(void);
s32 tableGroupFindEntryIndex(void *table, const char *name);
void scrScriptProcessStartEntry(ScriptProcess *script, s32 entry);
void sysPlaySe(s32 se);
s32 gameFlagIsSet(u32 flag);

/* Starts the shop script's entry `name`, when the script has one. */
static __inline void npcShopStartEntry(NpcShopWork *shop, const char *name)
{
    s32 entry = tableGroupFindEntryIndex(shop->scriptTable, name);
    if (entry >= 0) {
        scrScriptProcessStartEntry(shop->script, entry);
    }
}

/* Whether the list is shown again: the shop comes back from an offer (mode 4, or 5, FUN_003e3bcc's) or has
 * already answered an unknown choice. */
static __inline bool npcShopAskedBefore(const NpcShopWork *shop)
{
    return shop->previousMode == 5 || shop->previousMode == NPC_SHOP_MODE_OFFER || shop->askedBefore != 0;
}

/* Switches the shop to `mode`, remembering the one it leaves. */
static __inline void npcShopSetMode(NpcShopWork *shop, s32 mode)
{
    shop->previousMode = shop->mode;
    shop->mode = mode;
    shop->step = 0;
}

/* Steps the NPC shop's selection: step 0 lists the offers the player may see (up to three) as script
 * choices and starts the script entry for their count, step 1 waits for the choice, steps 2 and 3 wait
 * for the "nothing to sell" and "unknown choice" messages. */
void npcShopSelectUpdate(NpcShopWork *shop)
{
    switch (shop->step) {
    case 0: {
        s32 count = 0;
        memset(shop->choices, -1, sizeof(shop->choices));
        for (s32 i = 0; i < 3; i++) {
            NkmBaseRecordA *record = nkmBaseGetRecord(shop->offers[i].demonId);
            if (record == NULL) {
                continue;
            }
            if (record->unlockFlag != 0 && !gameFlagIsSet(record->unlockFlag)) {
                continue;
            }
            if (record->saveRequirement & 1) {
                DemonSaveSnapshot saved;
                if (record->saveRequirement & ~1) {
                    if (!gameDataCopySaveEntry(record->saveRequirement >> 1, &saved)) {
                        continue;
                    }
                    if (!(saved.statusHalves[1] & 0xfc)) {
                        continue;
                    }
                } else {
                    if (!gameDataCopySaveEntry(record->id, &saved)) {
                        continue;
                    }
                    if (!(saved.statusHalves[1] & 0xfc)) {
                        continue;
                    }
                }
            }
            scrSetStringSlot(count, (const char *)dataTable01GetRecordWithAocOverride(shop->offers[i].demonId));
            shop->choices[count++] = i;
        }
        messageMainRequestBanner();
        switch (count) {
        case 0:
            npcShopStartEntry(shop, "npcShop_NoSelect");
            shop->step = 2;
            return;
        case 1:
            if (npcShopAskedBefore(shop)) {
                npcShopStartEntry(shop, "npcShop_Select_01_01");
            } else {
                npcShopStartEntry(shop, "npcShop_Select_00_01");
            }
            break;
        case 2:
            if (npcShopAskedBefore(shop)) {
                npcShopStartEntry(shop, "npcShop_Select_01_02");
            } else {
                npcShopStartEntry(shop, "npcShop_Select_00_02");
            }
            break;
        case 3:
            if (npcShopAskedBefore(shop)) {
                npcShopStartEntry(shop, "npcShop_Select_01");
            } else {
                npcShopStartEntry(shop, "npcShop_Select_00");
            }
            break;
        default:
            return;
        }
        shop->step = 1;
        break;
    }
    case 1:
        if (scrRunOpcodesStub(shop->script) == 2 && panelIsMissingOrFlagClear()) {
            s32 choice = messageGetChoiceResult();
            if (choice == -1 || choice == 3) {
                npcShopSetMode(shop, NPC_SHOP_MODE_LEAVE);
            } else {
                shop->selected = shop->choices[choice];
                if (shop->selected < 0) {
                    npcShopStartEntry(shop, "npcShop_Select_Unknwn");
                    shop->step = 3;
                    return;
                }
                npcShopSetMode(shop, NPC_SHOP_MODE_OFFER);
            }
            messageMainClearBannerRequest();
            sysPlaySe(0);
        }
        break;
    case 2:
        if (scrRunOpcodesStub(shop->script) == 2) {
            npcShopSetMode(shop, NPC_SHOP_MODE_EMPTY);
        }
        break;
    case 3:
        if (scrRunOpcodesStub(shop->script) == 2) {
            shop->askedBefore = 1;
            shop->step = 0;
        }
        break;
    }
}

} /* extern "C" */
