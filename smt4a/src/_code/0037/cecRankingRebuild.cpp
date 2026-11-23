/* NON_MATCHING: 165 lines (161 by shape), complete (366 rows against retail's 365). What differs:
 * - the frame has retail's size and the old ranking at sp+24, but the entry buffer is at sp+72 (retail sp+80) and
 *   the spilled id, guest rows, category and 0x28300 base are in other slots (retail 16, 72, 68, 76);
 * - retail copies the guest id into r0 before it branches on the two ids (`movne r0, r6; beq`), the build after;
 * - the temporaries of the entry moves and of the two rank passes and the operands of the final HP sum are in
 *   other registers. */
#include "AsdSDK/AsdMemCopy.h"
#include "code/Code0019.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "gamedata/GameFlags.h"
#include "gamedata/GameSaveDataA.h"
#include "gamedata/GuestParamTable.h"
#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/SaveSlotRecord.h"
#include "map/lmapMain.h"
#include "shard/W6_W6Match3_UnitStatusRequest.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "util/Random.h"

extern "C" {

void rt_aeabi_memclr(void *memory, u32 size);
void FUN_0031654c(u32 index, u16 delta);
void gameSavedItemClearCounter(u32 index);
void partyRefreshSlotValues(void);
s32 recordSetClampedCurrent(SlotRecordA *record, s32 value);

enum {
    kRankedPlayers = 10,
    kRankedCategories = 7,
    kSavedItemLast = 0x500,
    kFlagRankingRebuilt = 0x4C7,
    kNkmFlagAvailable = 1
};

/* The guest that stands for `guestId`'s category in the ranking. */
static __inline u16 guestCategoryLeader(s32 guestId)
{
    return FUN_0036fcd0(unitMapIdToCategory(guestId, 0), 0);
}

/* Rebuilds the StreetPass ranking in the save: the ten demons with the highest counters (ties are broken at
 * random) and the seven best demon categories, each list ranked so that equal scores share a rank. A guest whose
 * category is led by another demon first hands its counter to that demon. The demons that were ranked before lose
 * the ranking's HP bonus (their HP is clamped to the new maximum) and the newly ranked ones gain it. */
void cecRankingRebuild(void)
{
    GameSaveBodyA *body = (GameSaveBodyA *)gameDataBlocksGetSaveData();
    GameSavedCecRankA previous[kRankedPlayers];

    memcpySrcFirst(body->cecRanking.players, previous, sizeof(previous));
    rt_aeabi_memclr(body->cecRanking.players, sizeof(body->cecRanking.players));
    rt_aeabi_memclr(body->cecRanking.categories, sizeof(body->cecRanking.categories));
    gameFlagSetValue(kFlagRankingRebuilt, 1, 1);

    for (u16 index = 0; index < kSavedItemLast; index++) {
        GameSavedItemA item;
        u16 id = index + 1;

        gameDataCopySaveEntry(id, &item);
        s32 score = item.counter;
        if (score != 0) {
            const NkmBaseRecordA *base = nkmBaseGetRecord(id);
            if (base != NULL && (base->flags & kNkmFlagAvailable) != 0) {
                for (s32 i = 0; i < kRankedPlayers; i++) {
                    if (body->cecRanking.players[i].score < score ||
                        (body->cecRanking.players[i].score == score && randRange(1) != 0)) {
                        for (s32 j = kRankedPlayers - 2; j >= i; j--) {
                            body->cecRanking.players[j + 1].id = body->cecRanking.players[j].id;
                            body->cecRanking.players[j + 1].score = body->cecRanking.players[j].score;
                        }
                        body->cecRanking.players[i].score = score;
                        body->cecRanking.players[i].id = id;
                        break;
                    }
                }
            }
        }
    }

    {
        s32 rank = 0;
        u16 last = 0;
        for (s32 i = 0; i < kRankedPlayers; i++) {
            if (body->cecRanking.players[i].score != last) {
                rank = i + 1;
                last = body->cecRanking.players[i].score;
            }
            body->cecRanking.players[i].rank = rank;
        }
    }

    void *table = dataTableGet(0x0A, 0);
    GuestParamRecord *guests = guestParamRecords(table);
    u32 guestCount = dataTableGetCount(table);

    /* A guest that does not lead its category gives its counter to the demon that does. */
    for (u32 guest = 0; guest < guestCount; guest++) {
        u16 demonId = guests[guest].demonId;
        u16 guestId = guests[guest].id;
        if (demonId != 0 && guestId != 0 && guestCategoryLeader(guestId) != guestId) {
            GameSavedItemA item;
            u16 leader = dataTable10FindValue(guestCategoryLeader(guestId));

            gameDataCopySaveEntry(demonId, &item);
            FUN_0031654c(leader, item.counter);
            gameSavedItemClearCounter(demonId);
        }
    }

    for (u32 guest = 0; guest < guestCount; guest++) {
        u16 demonId = guests[guest].demonId;
        u16 guestId = guests[guest].id;
        if (demonId != 0 && guestId != 0 && guestCategoryLeader(guestId) == guestId) {
            GameSavedItemA item;
            u16 category = unitMapIdToCategory(guestId, 0);

            gameDataCopySaveEntry(demonId, &item);
            s32 score = item.counter;
            for (s32 i = 0; i < kRankedCategories; i++) {
                if (body->cecRanking.categories[i].score < score) {
                    for (s32 j = kRankedCategories - 2; j >= i; j--) {
                        body->cecRanking.categories[j + 1].id = body->cecRanking.categories[j].id;
                        body->cecRanking.categories[j + 1].score = body->cecRanking.categories[j].score;
                    }
                    body->cecRanking.categories[i].id = category;
                    body->cecRanking.categories[i].score = score;
                    break;
                }
            }
        }
    }

    {
        s32 rank = 0;
        u16 last = 0;
        for (s32 i = 0; i < kRankedCategories; i++) {
            if (body->cecRanking.categories[i].score != last) {
                rank = i + 1;
                last = body->cecRanking.categories[i].score;
            }
            body->cecRanking.categories[i].rank = rank;
        }
    }

    /* The demons ranked before lose the bonus... */
    for (s32 i = 0; i < kRankedPlayers; i++) {
        GameSavedCecRankA entry = previous[i];
        if (entry.id != 0) {
            SlotRecordA *record = slotRecordFindById(entry.id);
            if (record != NULL && record->hp > recordGetScaledMaximum(record)) {
                recordSetClampedCurrent(record, recordGetScaledMaximum(record));
            }
        }
    }

    /* ... and the ones that were not ranked before gain it. */
    for (s32 i = 0; i < kRankedPlayers; i++) {
        GameSavedCecRankA entry = body->cecRanking.players[i];
        if (entry.id == 0) {
            continue;
        }
        SlotRecordA *record = slotRecordFindById(entry.id);
        if (record == NULL) {
            continue;
        }
        bool wasRanked = false;
        for (s32 j = 0; j < kRankedPlayers; j++) {
            GameSavedCecRankA old = previous[j];
            if (old.id != 0 && old.id == entry.id) {
                wasRanked = true;
                break;
            }
        }
        if (!wasRanked && bitsAt60Test(record, 1) == 0) {
            s32 maximum = recordGetScaledMaximum(record);
            record->hp = maximum - record->maxHp + record->hp;
            if (record->hp > maximum) {
                record->hp = maximum;
            }
        }
    }
    partyRefreshSlotValues();
}

} /* extern "C" */
