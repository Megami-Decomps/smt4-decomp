/* NON_MATCHING: retail reads each ranking entry as a whole word (ldr; lsl; lsrs #16) and caps the HP with movle before
 * its second store. A single-use by-value copy of the 4-byte GameSavedCecRankA plus <algorithm> std::min matched
 * (w94-s5); both are steering here (the copy is read once, std::min has no proven precedent), so they are not kept. */
#include "addon/AocSystemA.h"
#include "gamedata/GameDataAccess.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameFlags.h"
#include "gamedata/SaveSlotRecord.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"

extern "C" {
void partyRefreshSlotValues();

enum {
    RANKING_BONUSES_ACTIVE = 0x45B,
    RANKING_PLAYER_BONUS = 0x4F6,
    RANKING_CATEGORY_BONUS = 0x4F7,
    RANKING_PLAYER_BONUS_LIMIT = 10,
    AILMENT_DOWN_BIT = 1
};

/* Applies newly installed ranking bonuses, preserving damage when maximum HP increases. */
void cecApplyRankingBonuses()
{
    if (aocHasType36(g_aocSystem, RANKING_PLAYER_BONUS) != 0 && gameFlagIsSet(RANKING_PLAYER_BONUS) == 0) {
        const GameSaveBodyA *save = (const GameSaveBodyA *)gameDataBlocksGetSaveData();
        gameFlagSetValue(RANKING_BONUSES_ACTIVE, 1, 1);
        gameFlagSetValue(RANKING_PLAYER_BONUS, 1, 1);
        for (s32 index = 0; index < RANKING_PLAYER_BONUS_LIMIT; ++index) {
            u16 id = save->cecRanking.players[index].id;
            if (id != 0) {
                SlotRecordA *unit = slotRecordFindById(id);
                if (unit != NULL && bitsAt60Test(unit, AILMENT_DOWN_BIT) == 0) {
                    s32 hpLimit = recordGetScaledMaximum(unit);
                    unit->hp = (s16)(hpLimit - unit->maxHp + unit->hp);
                    hpLimit = unit->hp < hpLimit ? unit->hp : hpLimit;
                    unit->hp = (s16)hpLimit;
                }
            }
        }
    }
    if (aocHasType36(g_aocSystem, RANKING_CATEGORY_BONUS) != 0 && gameFlagIsSet(RANKING_CATEGORY_BONUS) == 0) {
        gameFlagSetValue(RANKING_BONUSES_ACTIVE, 1, 1);
        gameFlagSetValue(RANKING_CATEGORY_BONUS, 1, 1);
        partyRefreshSlotValues();
    }
}
} /* extern "C" */
