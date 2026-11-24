/* NON_MATCHING: 118 rows by shape (186 raw), all register and spill-slot allocation in the payout arithmetic: the
 * instructions, the block layout and the tail (the row searches and the effect placement) are retail's. Retail
 * keeps the pointer to `given` and its low word in adjacent slots ([sp, #12], [sp, #16]: one `ldm`), hoists the four
 * work addresses in the order levelUpCount, levelUpPlaying, unk7E48, levelUpPlaying's store, and loads
 * levelUpCount's base once for the three accesses of the order hand-out (this build reloads it from its slot each
 * time); the `done = 1` store of a paid-out entry shares the `strb` that ends a level-up. */
#include "shard/X14_EngineUnits.h"
#include "sys/RuntimeObjects.h"
#include "ui/UiSpriteApi.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "util/BitsAndBytes_VariantE_Shard004B.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {

u32 unitGetExpRequirement(u16 id, s32 level, s32 expBonus);
bool slotIsReservePick(SlotRecordA *demon);
void uiStoreTextureEntryCenter(UiSpriteState *target, u32 file, s32 id);
void FUN_00358e94(UiSpriteState *sprite, s32 deltaX, s32 deltaY);

enum {
    RESULT_PARTY_SLOTS = 24,
    RESULT_RESERVE_SLOTS = 3,
    RESULT_SPRITES = 0x1d,
    RESULT_EXP_PAYOUT_FRAMES = 45,   /* an entry's experience is paid out over this many frames */
    RESULT_LEVEL_UP_FRAMES = 30
};

enum { RESULT_LEVEL_UP_EVENT = 0x100021e };

/* One frame of the result screen's experience payout for the party's demons: pays a share of each demon's
 * experience into its gauge, and when the gauge fills starts the level-up (the gauge holds full for the
 * animation, the demon's level offset goes up and its level-up effect is placed over its row). */
void resultExpPayoutStep(ResultWorkA *work)
{
    for (s32 i = 0; i < RESULT_PARTY_SLOTS; i++) {
        if (work->experience[i].total == 0) {
            work->experience[i].done = 1;
        }
        s32 slot = gameGetSlotTable()->party[i];
        if (slot < 0) {
            work->experience[i + 1].done = 1;
            continue;
        }
        work->experience[slot + 1].done = 0;
        SlotRecordA *record = gameGetSlotRecord(slot);
        if (record == NULL) {
            continue;
        }

        if (work->experience[slot + 1].maxed) {
            work->experience[slot + 1].exp =
                (u64)unitGetExpRequirement(record->id, record->level + work->experience[slot + 1].levelOffset,
                                           work->experience[slot + 1].expBonus) << 12;
            work->experience[slot + 1].levelUpFrame++;
            uiSpriteAdvanceAnimation(&work->slotSprites[slot], 1.0f);
            if (work->experience[slot + 1].levelUpFrame > RESULT_LEVEL_UP_FRAMES) {
                work->experience[slot + 1].maxed = 0;
                work->experience[slot + 1].exp = 0;
                work->experience[slot + 1].levelUpFrame = 0;
                work->levelUpPlaying = 0;
            }
            continue;
        }

        u32 total = work->experience[slot + 1].total;
        if (work->experience[slot + 1].given >= (u64)total << 12) {
            work->experience[slot + 1].done = 1;
            continue;
        }
        u64 share = ((u64)total << 12) / RESULT_EXP_PAYOUT_FRAMES;
        if (work->experience[slot + 1].given + share >= (u64)total << 12) {
            share = ((u64)total << 12) - work->experience[slot + 1].given;
        }
        work->experience[slot + 1].exp += share;
        work->experience[slot + 1].given += share;

        if (gameGetUnlockedCountLimit() <= record->level + work->experience[slot + 1].levelOffset) {
            work->experience[slot + 1].maxed = 0;
            work->experience[slot + 1].exp = 0;
            work->experience[slot + 1].levelUpFrame = 0;
            work->experience[slot + 1].done = 1;
            continue;
        }
        u64 needed = (u64)unitGetExpRequirement(record->id, record->level + work->experience[slot + 1].levelOffset,
                                                work->experience[slot + 1].expBonus) << 12;
        if (work->experience[slot + 1].exp < needed) {
            continue;
        }

        /* The gauge is full: the demon gains a level, healed of every ailment but the one kept. */
        u8 kept = bitsAt60Test(record, 2);
        record->ailments = 0;
        if (kept) {
            bitsAt60Set(record, 2);
        }
        work->experience[slot + 1].given -= work->experience[slot + 1].exp - needed;
        work->experience[slot + 1].exp = needed;
        work->experience[slot + 1].levelOffset++;
        work->experience[slot + 1].maxed = 1;
        work->experience[slot + 1].leveledUp = 1;
        if (work->levelUpOrder[(s16)(slot + 1)] < 0) {
            work->levelUpOrder[(s16)(slot + 1)] = work->levelUpCount++;
        }
        if (!work->levelUpPlaying) {
            eventQueueAddUnique(RESULT_LEVEL_UP_EVENT);
            work->unk7E48 = 1;
        }
        work->levelUpPlaying = 1;

        TextureTableEntryIV *place;
        if (slotIsReservePick(record)) {
            s32 row;
            for (row = 0; row < RESULT_RESERVE_SLOTS; row++) {
                if (gameGetSlotTable()->reserve[row] == slot) {
                    break;
                }
            }
            uiSpriteSelectAnim(&work->slotSprites[slot], 2);
            pairSetFirstResetSecond(&work->slotSprites[slot], 0x1a);
            uiStoreTextureEntryCenter(&work->slotSprites[slot], RESULT_SPRITES, 0x2f);
            place = asdTMTexTableEntryAt(RESULT_SPRITES, row + 0x31);
            FUN_00358e94(&work->slotSprites[slot], place->x, place->y);
        } else {
            s32 row = 0;
            for (s32 j = 0; j < RESULT_PARTY_SLOTS; j++) {
                if (gameGetSlotTable()->party[j] >= 0 &&
                    !slotIsReservePick(gameGetSlotRecord(gameGetSlotTable()->party[j]))) {
                    if (gameGetSlotTable()->party[j] == slot) {
                        break;
                    }
                    row++;
                }
            }
            uiSpriteSelectAnim(&work->slotSprites[slot], 3);
            pairSetFirstResetSecond(&work->slotSprites[slot], 0x62);
            uiStoreTextureEntryCenter(&work->slotSprites[slot], RESULT_SPRITES, 0x67);
            place = asdTMTexTableEntryAt(RESULT_SPRITES, row + 0x68);
            FUN_00358e94(&work->slotSprites[slot], place->x, place->y);
        }
    }
}

} /* extern "C" */
