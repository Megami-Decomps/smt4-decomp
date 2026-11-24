/* NON_MATCHING: money fallback branches, VFP allocation and the reward-scale literal relocation differ. */
#include <stdio.h>
#include <string.h>
#include "battle/btlView.h"
#include "code/Code0035.h"
#include "code/Code003e.h"
#include "game/GameStateA.h"
#include "gamedata/GameDataAccess_Shard004B.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/SaveSlotTable.h"
#include "mapnavi/naviMain.h"
#include "util/Random.h"

extern "C" {

extern BattleViewState g_battleViewState;
s32 mapTryStartAreaLevelEvent(void);
s32 gameStatePickAvoidingRecent(void);
s32 FUN_003e0154(void);
s32 gameSlotTableFindFree(void);
f32 furinGetRewardProgress(void);
void gameDataResetFloat(void);

enum {
    FURIN_TALK_ENABLED = 0x4d0,
    FURIN_MONEY_BONUS = 0x646,
    FURIN_MONEY_ENTRY = 24,
    FURIN_MESSAGE_COOLDOWN = 5,
    FURIN_MONEY_LIMIT = 999999999,
};

/* Chooses Furin's field comment, including the occasional money reward. */
void furinSelectFieldMessage(void)
{
    if (!gameFlagIsSet(FURIN_TALK_ENABLED)) {
        return;
    }

    BattleViewState *view = &g_battleViewState;
    bool selected = false;
    s32 message = mapTryStartAreaLevelEvent();
    if (message != 0) {
        sprintf(view->furinMessage, "ms_furin_talk_lv_%02d", message);
        selected = true;
    } else if (playerHasFlagBit(PLAYER_FLAG_POISON) || playerHasFlagBit(PLAYER_FLAG_SICK)) {
        if (g_gameState.furinStatusCooldown == 0) {
            g_gameState.furinStatusCooldown = FURIN_MESSAGE_COOLDOWN;
            message = 0;
            if (playerHasFlagBit(PLAYER_FLAG_POISON)) {
                message = randRange(1) + 1;
            } else if (playerHasFlagBit(PLAYER_FLAG_SICK)) {
                message = randRange(1) + 3;
            }
            if (message != 0) {
                sprintf(view->furinMessage, "ms_furin_talk_bst_%02d", message);
                selected = true;
            }
        }
    } else {
        g_gameState.furinStatusCooldown = 0;
    }

    if (!selected && g_gameState.furinHPCooldown == 0) {
        s32 currentHp = FUN_003e0024();
        s32 maximumHp = FUN_003e0154();
        s32 partyCount = gameSlotTableFindFree();
        const s8 *party = gameGetSlotTable()->party;
        for (s32 i = 0; i < partyCount; ++i) {
            if (party[i] >= 0) {
                const SlotRecordA *record = gameGetSlotRecord(party[i]);
                currentHp += record->hp;
                maximumHp += recordGetScaledMaximum(record);
            }
        }
        f32 percent = (f32)currentHp / (f32)maximumHp * 100.0f;
        message = 0;
        if (percent >= 75.0f) {
            if (!playerHasFlagBit(PLAYER_FLAG_POISON) && !playerHasFlagBit(PLAYER_FLAG_SICK)) {
                g_gameState.furinHPCooldown = FURIN_MESSAGE_COOLDOWN;
                message = randRange(1) + 1;
            }
        } else if (percent <= 40.0f) {
            g_gameState.furinHPCooldown = FURIN_MESSAGE_COOLDOWN;
            message = randRange(1) + 3;
        }
        if (message != 0) {
            sprintf(view->furinMessage, "ms_furin_talk_hpmp_%02d", message);
            selected = true;
        }
    }

    if (!selected) {
        const f32 rewardScales[] = { 0.5f, 0.75f, 1.0f, 1.25f, 1.5f };
        f32 bonus = 1.0f;
        if (gameFlagIsSet(FURIN_MONEY_BONUS)) {
            bonus = 1.25f;
        }
        if (furinGetRewardProgress() >= 15.0f && g_gameState.furinMoneyCooldown == 0) {
            g_gameState.furinMoneyCooldown = FURIN_MESSAGE_COOLDOWN;
            f32 accumulated = furinGetRewardProgress();
            s32 money = (s32)(rewardScales[randRange(4)] * accumulated * (bonus * 100.0f));
            gameDataResetFloat();
            if (money != 0) {
                view->moneyReward = money;
                view->moneyReward = view->moneyReward > (s32)FURIN_MONEY_LIMIT ?
                    (s32)FURIN_MONEY_LIMIT : view->moneyReward;
                entryTableResetAndInit(FURIN_MONEY_ENTRY, view->moneyReward, -1, 0);
                strcpy(view->furinMessage, "ms_furin_talk_money_01");
                selected = true;
            }
        }
        if (!selected) {
            view->moneyReward = 0;
            sprintf(view->furinMessage, "ms_furin_talk_zatu_%02d", gameStatePickAvoidingRecent() + 1);
        }
    }

    if (g_gameState.furinStatusCooldown > 0) {
        --g_gameState.furinStatusCooldown;
    }
    if (g_gameState.furinHPCooldown > 0) {
        --g_gameState.furinHPCooldown;
    }
    if (g_gameState.furinMoneyCooldown > 0) {
        --g_gameState.furinMoneyCooldown;
    }
}

} /* extern "C" */
