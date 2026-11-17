#include "common.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/FlagBitTests.h"
#include "code/Code0029_Smt4.h"
#include "gamedata/ConsumableRecord.h"
#include "gamedata/GameSaveData.h"
#include "gamedata/GamePlayerData.h"
extern "C" {
    void playerRecalcStatsFromEquipment(s32 arg);
    void unitRecalculateEffectiveStats(StatBlock *unit);
    // Apply a stat-raising item, or only check it. Return 1 for an unusable
    // target, an unsupported item, or either affected stat already at its cap.
    // The save fields are unsigned storage; this operation treats them as signed.
    u8 itemApplyPermanentStatBoost(s32 slot, const ConsumableRecord *item, s32 checkOnly) {
        PlayerDataIV *player = 0;
        StatBlock *unit = 0;
        if (slot < 0) {
            player = gameGetPlayerData();
            if (playerPadTestBit(1)) return 1;
        }
        else {
            unit = gameGetUnitRecord(slot);
            if (!unit) return 1;
            if (flagWordTestBit(unit, 1))return 1;
        }
        s32 id = item->id;
        u8 capped = 0;
        switch (id) {
            case 0x1f:
            if (player) {
                if (player->baseStats.stats[0] < 999) {
                    if (!checkOnly) player->baseStats.stats[0]  =  player->baseStats.stats[0] + 3;
                    if (player->baseStats.stats[0] >= 1000) player->baseStats.stats[0] = 999;
                }
                else capped = 1;
            }
            else {
                if ((s16)unit->base[2] < 999) {
                    if (!checkOnly) unit->base[2]  =  (s16)unit->base[2] + 3;
                    if ((s16)unit->base[2] >= 1000) unit->base[2] = 999;
                }
                else capped = 1;
                if ((s16)unit->cur2 < 999) {
                    if (!checkOnly) unit->cur2  =  (s16)unit->cur2 + 3;
                    if ((s16)unit->cur2 >= 1000) unit->cur2 = 999;
                }
                else capped = 1;
            }
            break;
            case 0x20:
            if (player) {
                if (player->baseStats.stats[2] < 999) {
                    if (!checkOnly) player->baseStats.stats[2]  =  player->baseStats.stats[2] + 3;
                    if (player->baseStats.stats[2] >= 1000) player->baseStats.stats[2] = 999;
                }
                else capped = 1;
            }
            else {
                if ((s16)unit->base[4] < 999) {
                    if (!checkOnly) unit->base[4]  =  (s16)unit->base[4] + 3;
                    if ((s16)unit->base[4] >= 1000) unit->base[4] = 999;
                }
                else capped = 1;
                if ((s16)unit->cur3 < 999) {
                    if (!checkOnly) unit->cur3  =  (s16)unit->cur3 + 3;
                    if ((s16)unit->cur3 >= 1000) unit->cur3 = 999;
                }
                else capped = 1;
            }
            break;
            case 0x21:
            if (player) {
                if (player->baseStats.stats[1] < 999) {
                    if (!checkOnly) player->baseStats.stats[1]  =  player->baseStats.stats[1] + 3;
                    if (player->baseStats.stats[1] >= 1000) player->baseStats.stats[1] = 999;
                }
                else capped = 1;
            }
            else {
                if ((s16)unit->base[3] < 999) {
                    if (!checkOnly) unit->base[3]  =  (s16)unit->base[3] + 3;
                    if ((s16)unit->base[3] >= 1000) unit->base[3] = 999;
                }
                else capped = 1;
                if ((s16)unit->cur6 < 999) {
                    if (!checkOnly) unit->cur6  =  (s16)unit->cur6 + 3;
                    if ((s16)unit->cur6 >= 1000) unit->cur6 = 999;
                }
                else capped = 1;
            }
            break;
            case 0x22:
            if (player) {
                if (player->baseStats.stats[3] < 999) {
                    if (!checkOnly) player->baseStats.stats[3]  =  player->baseStats.stats[3] + 3;
                    if (player->baseStats.stats[3] >= 1000) player->baseStats.stats[3] = 999;
                }
                else capped = 1;
            }
            else {
                if ((s16)unit->base[5] < 999) {
                    if (!checkOnly) unit->base[5]  =  (s16)unit->base[5] + 3;
                    if ((s16)unit->base[5] >= 1000) unit->base[5] = 999;
                }
                else capped = 1;
                if ((s16)unit->cur4 < 999) {
                    if (!checkOnly) unit->cur4  =  (s16)unit->cur4 + 3;
                    if ((s16)unit->cur4 >= 1000) unit->cur4 = 999;
                }
                else capped = 1;
            }
            break;
            case 0x23:
            if (player) {
                if (player->baseStats.stats[4] < 999) {
                    if (!checkOnly) player->baseStats.stats[4]  =  player->baseStats.stats[4] + 3;
                    if (player->baseStats.stats[4] >= 1000) player->baseStats.stats[4] = 999;
                }
                else capped = 1;
            }
            else {
                if ((s16)unit->base[6] < 999) {
                    if (!checkOnly) unit->base[6]  =  (s16)unit->base[6] + 3;
                    if ((s16)unit->base[6] >= 1000) unit->base[6] = 999;
                }
                else capped = 1;
                if ((s16)unit->cur5 < 999) {
                    if (!checkOnly) unit->cur5  =  (s16)unit->cur5 + 3;
                    if ((s16)unit->cur5 >= 1000) unit->cur5 = 999;
                }
                else capped = 1;
            }
            break;
            default:return 1;
        }
        if (!checkOnly && !capped) {
            if (player) playerRecalcStatsFromEquipment(0);
            else unitRecalculateEffectiveStats(unit);
        }
        return capped;
    }
}
