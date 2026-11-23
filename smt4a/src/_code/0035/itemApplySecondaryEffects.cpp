/* NON_MATCHING: the tests, calls and stores match. Retail lays the effect-12 block out after the experience test
 * (here it follows the effect-11 block), keeps the scan's unprotected flag in a stack slot of a 52-byte frame (20
 * here, the flag folded away) and multiplies the experience share with its operands swapped (`mul r0, r2, r0`, the
 * player's experience loaded before it). */
#include "common.h"
#include "util/Random.h"
#include "game/GameStateA.h"
#include "mapnavi/naviMain.h"

#include "code/Code002e.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/ConsumableRecordA.h"
#include "gamedata/SaveSlotRecord.h"
#include "util/BitsAndBytes_VariantE_Shard004B.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "shard/W5_W5Match2_PairedIds.h"

extern "C" {
void playerGetWords(u16 *words, s32 withUnit);
void playerMaskSetBit(u32 bit);
void halves34Copy(const SlotRecordA *unit, u16 *words);
u32 levelGetExpRequirement(s32 level);
u32 FUN_004cc8d8(u32 id, s32 level);
void gameDataAddCappedPoints(s32 amount);
void FUN_004bd17c(SlotRecordA *unit);

/* `percent` percent of `value`. */
static __inline s32 percentOf(s32 value, s32 percent)
{
    return value * percent / 100;
}

/* Applies a consumable's secondary effects to the player (target < 0) or a party unit: the chance
   effects of effects 11 and 12, the experience gain, the point reward and the stat boosts. With
   `preview` set nothing is written. Returns 0 when the effect did something. */
u32 itemApplySecondaryEffects(s32 target, ConsumableRecordA *effect, s32 check, s32 preview)
{
    PlayerDataA *player = NULL;
    SlotRecordA *unit = NULL;
    if (target < 0) {
        player = gameGetPlayerData();
    } else {
        unit = gameGetSlotRecord(target);
        if (unit == NULL) {
            return 1;
        }
    }
    u32 result = 1;
    if (preview == 0) {
        switch (effect->id) {
        case 11:
            if (check == 0 && randRange(99) < 25) {
                u16 words[10];
                if (player != NULL) {
                    playerGetWords(words, 0);
                    if (playerHasFlagBit(5) != 0) {
                        break;
                    }
                } else {
                    halves34Copy(unit, words);
                    if (bitsAt60Test(unit, 5) != 0) {
                        break;
                    }
                }
                bool unprotected = true;
                for (s32 i = 0; i < 8; i++) {
                    Table04ExtraRecord *skill = dataTable41FindById(words[i]);
                    if (skill != NULL && (skill->flags & 0x400000) != 0) {
                        unprotected = false;
                        break;
                    }
                }
                if (unprotected) {
                    if (player != NULL) {
                        playerMaskSetBit(5);
                    } else {
                        bitsAt60Set(unit, 5);
                    }
                    result = 0;
                }
            }
            break;
        case 12:
            if (check == 0 && randRange(99) < 25) {
                if (player != NULL) {
                    player->mp = player->mp / 2;
                } else {
                    unit->mp = unit->mp / 2;
                }
                result = 0;
            }
            break;
        }
    }

    if (effect->effectValue != 0 &&
        ((player != NULL && levelGetExpRequirement(player->level) != player->experience) ||
         (unit != NULL && FUN_004cc8d8(unit->id, unit->level) != unit->experience))) {
        if (preview == 0) {
            if (player != NULL) {
                player->experience += percentOf(levelGetExpRequirement(player->level), effect->effectValue);
                if (levelGetExpRequirement(player->level) < player->experience) {
                    player->experience = levelGetExpRequirement(player->level);
                }
            } else if (unit != NULL) {
                unit->experience += percentOf(FUN_004cc8d8(unit->id, unit->level), effect->effectValue);
                if (unit->experience > FUN_004cc8d8(unit->id, unit->level)) {
                    unit->experience = FUN_004cc8d8(unit->id, unit->level);
                }
            }
        }
        result = 0;
    }
    if (effect->points != 0 && player != NULL && gameSaveGetPoints() != 9999) {
        if (preview == 0) {
            gameDataAddCappedPoints(effect->points);
        }
        result = 0;
    }

    if (effect->id == 0x79f) {
        if (g_gameState.mapId == 24) {
            result = 0;
        } else {
            result = 1;
        }
    }
    if (effect->id == 0x7af) {
        result = 0;
    }
    if (effect->id == 0x7b6) {
        result = 0;
        /* the item teaches the skill in `count`: useless without a player, a skill, or when already known */
        if (player == NULL || effect->count == 0 || playerHasSkill(effect->count) != 0) {
            result = 1;
        }
    }

    if (unit != NULL) {
        for (s32 i = 0; i < 18; i++) {
            s32 cap; /* the last four categories stop at rank 5 */
            switch (i) {
            case 14:
            case 15:
            case 16:
            case 17:
                cap = 5;
                break;
            default:
                cap = 9;
                break;
            }
            if (effect->categoryRankBoosts[i] != 0 && unit->categoryRanks[i] > 0 && cap > unit->categoryRanks[i]) {
                result = 0;
                if (preview != 0) {
                    break;
                }
                unit->categoryRanks[i] += effect->categoryRankBoosts[i];
                unit->categoryRanks[i] = unit->categoryRanks[i] <= cap ? unit->categoryRanks[i] : cap;
                unit->skillRankWords[0] = 0;
                unit->skillRankWords[1] = 0;
                FUN_004bd17c(unit);
            }
        }
    }
    if (player != NULL && (effect->flags & 1) != 0) {
        result = 0;
    }
    return check == 0 ? 0 : result;
}

} /* extern "C" */
