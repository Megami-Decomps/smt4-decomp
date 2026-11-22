/* NON_MATCHING: readable port of IV's resultApplySpoils (329 lines; resultGetGoldBonusPercent is linker-inlined,
 * inlined.txt): retail keeps the reserve test as compare-and-branch where the build threads it,
 * and gives the work, slot table and totals other registers. */
#include "shard/X14_EngineUnits.h"
#include "result/ResultSpoils.h"
#include "gamedata/SaveSlotTable.h"
#include "gamedata/SaveSlotRecord.h"
#include "gamedata/EquipmentRecordA.h"
#include "gamedata/SkillDataRecord.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/GameDataAccess_VariantE.h"
#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "sys/RuntimeObjects.h"
#include "code/Code001b.h"
#include "mapnavi/naviMain.h"
#include "mikado/mikadoMain.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

extern "C" {
void resultSetMode(ResultWorkA *result, s32 mode);
void uiQuestCreate(void);
void FUN_002c8778(u16 sourceId);
s32 mapMainIsBusy(void);
s32 lmapMainIsRunning(void);
void soundChannelStopAll(s32 channel);
void resourceTableReleaseHandles(void);
s32 bgmHasPendingResume(void);
void bgmRequestSelectedChannelFade(u32 frames);
void soundChannelRequestIfEnabled(u32 sound, s32 channel, s32 frames);
/* The gold bonus in percent: an empty getter (`mov r0, #0`) that armlink inlined at its one call. */

/* The experience multiplier of a unit's passive skills: the product of their bonuses (percent). */
static f32 skillExpMultiplier(const u16 *skills, s32 count)
{
    f32 multiplier = 1.0f;
    for (s32 skillIndex = 0; skillIndex < count; ++skillIndex) {
        u16 skillId = skills[skillIndex];
        if (skillId != 0) {
            const Table04ExtraRecord *skill = dataTable41FindById(skillId);
            if (skill != NULL && skill->modifier.percentage != 0) {
                multiplier = (f32)(u32)skill->modifier.percentage * 0.01f * multiplier;
            }
        }
    }
    return multiplier;
}

/* Applies a finished battle's spoils to the result screen: stops the battle music, adds gold and the items
 * (merging stacks), counts the battle, adds the experience scaled by the hero's equipment bonuses, shares it out
 * to the party scaled by each member's passive bonuses (members outside the three reserve[] positions get 30%) and gives the
 * stock demons theirs (80% unless selected). */
void FUN_00331714(const ResultSpoilsA *spoils)
{
    ResultWorkA *result = g_engineCleanupOwner.instance;
    SaveSlotTableA *slots = gameGetSlotTable();

    gameGetPlayerData();
    resultSetMode(result, 0);
    uiQuestCreate();
    FUN_002c8778(spoils->source);
    if (mapMainIsBusy() != 0 || lmapMainIsRunning() != 0) {
        bgmReleaseStopped();
        soundChannelStopAll(15);
        resourceTableReleaseHandles();
    } else if (bgmHasPendingResume() == 0) {
        bgmRequestSelectedChannelFade(30);
    }
    if (spoils->source != 2 && spoils->source != 8 && spoils->source != 10 && spoils->source != 16 &&
        spoils->source != 17 && !(spoils->source == 24 && gameFlagIsSet(0x4c9)))
        soundChannelRequestIfEnabled(0x100002D, 0, 60);
    s32 gold = spoils->money;
    s32 itemTotal = 0;

    if (gold != 0) {
        u32 bonus = resultGetGoldBonusPercent();
        if (bonus != 0) {
            u32 extra = gold * bonus / 100;
            if (extra == 0)
                extra = 1;
            gold += extra;
        }
    }
    result->gold += gold;
    for (s32 i = 0; i < 6; i++) {
        u32 id = spoils->items[i];

        if (id == 0 || spoils->counts[i] == 0) {
            continue;
        }
        for (s32 j = 0; j < 6; j++) {
            if (result->itemIds[j] == id) {
                result->itemCounts[j] += spoils->counts[i];
                break;
            }
            if (result->itemIds[j] == 0) {
                result->itemIds[j] = id;
                result->itemCounts[j] = spoils->counts[i];
                break;
            }
        }
        itemTotal += spoils->counts[i];
    }
    if (dataTable1bOr1cRecordHasFlag1(spoils->source) == 0) {
        gameCounterAddSaturating(0x22, 1);
        gameCounterAddSaturating(0x23, gold);
        gameCounterAddSaturating(0x24, itemTotal);
    }
    s32 experience = spoils->value;

    if (playerHasFlagBit(1) == 0 && playerHasFlagBit(10) == 0) {
        f32 multiplier = 1.0f;
        PlayerDataA *player = gameGetPlayerData();
        for (s32 slot = 0; slot < 7; slot++) {
            u32 id = 0;
            switch (slot) {
            case 0:
                id = player->equipment[0];
                break;
            case 1:
                id = player->equipment[1];
                break;
            case 2:
                id = player->equipment[2];
                break;
            case 3:
                id = player->equipment[3];
                break;
            case 4:
                id = player->equipment[4];
                break;
            case 5:
                id = player->equipment[5];
                break;
            case 6:
                id = player->equipment[6];
                break;
            }
            EquipmentRecordA *equipment = itemTableGetEquipmentRecord(id);
            if (equipment != NULL && equipment->modifierId != 0) {
                Table04ExtraRecord *modifier = dataTable41FindById(equipment->modifierId);
                if (modifier != NULL && modifier->modifier.percentage != 0)
                    multiplier = (f32)(u32)modifier->modifier.percentage * 0.01f * multiplier;
            }
        }
        result->experience[0].total += (experience * (s32)(multiplier * 100.0f)) / 100;
    }
    for (s32 i = 0; i < 24; i++) {
        if (slots->party[i] < 0) {
            continue;
        }
        SlotRecordA *unit = gameGetSlotRecord(slots->party[i]);

        if (bitsAt60Test(unit, 1) != 0 || bitsAt60Test(unit, 10) != 0) {
            continue;
        }
        s32 inFront = 0;
        s8 index = slots->party[i];

        if (slots->reserve[0] == index || slots->reserve[1] == index || slots->reserve[2] == index) {
            inFront = 1;
        }
        s32 share = experience;

        if (!inFront) {
            share = (s32)((f32)experience * 0.3f);
            if (experience != 0 && share <= 0) {
                share = 1;
            }
        }
        f32 multiplier = skillExpMultiplier(unit->skills, 8);
        result->experience[unit->tableIndex + 1].total += (share * (s32)(multiplier * 100.0f)) / 100;
    }
    for (u32 i = 0; i < 12; i++) {
        PartySlotA *stock = partyGetSlotPreferredFirst((u16)i);
        if (actorIsActive(stock) == 0)
            continue;
        s32 share = experience;
        if (!partySlotMatchesSelected(stock)) {
            share = (s32)((f32)experience * 0.8f);
            if (experience != 0 && share <= 0)
                share = 1;
        }
        s32 row = i + 25;
        if (row > 36)
            row = 36;
        result->experience[row].total += share;
    }
}

} /* extern "C" */
