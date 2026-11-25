/* NON_MATCHING: 202 rows by shape (336 raw); the cases, calls and loops are retail's. What differs: retail's
 * frame is 8 bytes smaller and keeps the address of the phase in a slot ([sp, #256], ahead of the result's)
 * where this build holds it in fp, which moves the registers of the skill loops after it (the picked skill's
 * address is in fp in retail, spilled here); retail tests the second copy of unitHasSkill with a plain loop
 * where this build unrolls it by two; and the card's address is formed through ip before its unit argument. */
#include "addon/LookupRecord.h"
#include "camp/CecMenu.h"
#include "camp/CampCec/CampCecView.h"
#include "cec/CecMessage.h"
#include "code/Code0025_Smt4.h"
#include "code/Code0029.h"
#include "gamedata/GameSaveData.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/NkmBaseRecord.h"
#include "gamedata/SkillFlags.h"
#include "gamedata/UnitRecordAccess.h"
#include "quest_center/QuestDelivery.h"
#include "script/scrScriptProcess.h"
#include "sys/RuntimeObjects.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "shard/W6_W6Match4_RelativeDirectory.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "shard/W6_W6Match3_WaveArchiveReader.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include <string.h>
#include "script/ScriptEntry.h"

extern "C" {
void unitRecalculateEffectiveStats(StatBlock *unit);
void btlTalkBustUpReleaseAllSlots(void);
void btlTalkBustUpReleaseTexture(void);
void btlTalkBustUpSetDemonTexture(s32 devilId, s32 asynchronous);
void btlTalkBustUpSetUnk2F4(u8 value);
s32 btlTalkBustUpGetValue(void);
s32 battleTalkIsBustReady(void);
u32 btlTalkBustupMatchesDevil(u16 id);
void FUN_0029bed8(u32 id);
void soundPlaySeUnpanned(u32 id);
void *aocEntryDataById(u32 id, s32 second);
void FUN_002bd158(u8 *source, u8 *converted);
void objectFlagSetBit(StatBlock *unit, u32 bit);
u32 FUN_0025981c(void);
u32 FUN_00259800(void);
s32 randBetween(s32 minimum, s32 maximum);
void saveMarkIdListSeen(StatBlock *unit);
u8 gameDataBlocksGetFlagByteA(void);
void saveSelectReserveUnit(const CecProcessSlot *card);
void FUN_0026b9bc(void);
void titleSetSlotValueState2(u32 index, u32 value);
void __aeabi_memset4(void *destination, u32 size, s32 value); // declcheck: local (the AEABI word fill has no shared declaration yet)

enum {
    UNIT_SKILL_SLOTS = 8,
    STOCK_POSITIONS = 24,
    SKILL_FLAG_USABLE = 0x20
};

/* Whether `unit` already has `skill`. */
static __inline bool unitHasSkill(const StatBlock *unit, s32 skill)
{
    if (unit != NULL) {
        for (s32 i = 0; i < UNIT_SKILL_SLOTS; i++) {
            if (unit->skills.ids[i] == skill) {
                return true;
            }
        }
    }
    return false;
}

/* The StreetPass menu's state that presents the reward demon: the selected demon's talk, then its replacement
 * by the offered demon (which keeps the usable skills, takes its own initial ones, the offer's skill and random
 * ones of the old demon), the new demon's talk and the next reward. */
s32 campCecDemonRewardState(CampCecMenu *menu)
{
    s32 result = 0;
    u8 name[128];
    u8 converted[128];

    switch (menu->scriptFlow.phase) {
    case 0:
        scrScriptProcessStartEntry(menu->talk.process, 0x17);
        if (!btlTalkBustUpGetValue()) {
            btlTalkBustUpSetDemonTexture(menu->rewardUnit.unit.id, 1);
        }
        ++menu->scriptFlow.phase;
        break;
    case 1:
        if (scrRunOpcodesStub(menu->talk.process) != 2) {
            break;
        }
        if (!btlTalkBustupMatchesDevil(menu->rewardUnit.unit.id)) {
            break;
        }
        btlTalkBustUpSetUnk2F4(1);
        libc_strcpy(reinterpret_cast<u32 *>(name),
                    reinterpret_cast<u32 *>(aocEntryDataById(nkmBaseGetRecord(menu->rewardUnit.unit.id)->race, 1)));
        FUN_002bd158(name, converted);
        textEncodeFontSlot(0, converted);
        libc_strcpy(reinterpret_cast<u32 *>(name),
                    reinterpret_cast<u32 *>(dataTable01FindByIdWithAoc(menu->rewardUnit.unit.id)->data));
        textEncodeFontSlot(1, name);
        scrScriptProcessStartEntry(menu->talk.process, 0x19);
        ++menu->scriptFlow.phase;
        break;
    case 2:
        if (!btlTalkBustUpGetValue()) {
            break;
        }
        if (scrRunOpcodesStub(menu->talk.process) != 2) {
            break;
        }
        btlTalkBustUpReleaseAllSlots();
        slotSetRequest(0, 0x1e, 0xffffffff);
        soundPlaySeUnpanned(0x1000173);
        ++menu->scriptFlow.phase;
        break;
    case 3:
        if (!battleTalkIsBustReady()) {
            break;
        }
        if (scrRunOpcodesStub(menu->talk.process) != 2) {
            break;
        }
        btlTalkBustUpReleaseTexture();
        ++menu->scriptFlow.phase;
        break;
    case 4:
        if (!screenFaderIsSettled(0)) {
            break;
        }
        if (menu->rewardUnit.offeredDemon != NULL) {
            u16 offeredId = menu->rewardUnit.offeredDemon->id;
            SaveSlotTableIV *table = gameGetSlotTable();
            for (s32 position = 0; position < STOCK_POSITIONS; position++) {
                if (gameGetUnitRecord(table->stock[position])->id != menu->rewardUnit.unit.id) {
                    continue;
                }
                FUN_0029bbc8(menu->rewardUnit.unit.id);
                s32 slot = table->stock[position];
                table->stock[position] = -1;
                bool firstTime = itemGetFlagBit1(offeredId) == 0;
                dispatchIfFound(slot, offeredId, 0);
                StatBlock *unit = gameGetUnitRecord(slot);

                /* The replaced demon's usable skills stay, closing the gaps. */
                UnitSummarySkills kept;
                s32 keptCount = 0;
                kept.words[0] = 0;
                kept.words[1] = 0;
                kept.words[2] = 0;
                kept.words[3] = 0;
                for (s32 i = 0; i < UNIT_SKILL_SLOTS; i++) {
                    if (unit->skills.ids[i] != 0 &&
                        (dataTable06Sub1GetRecord(unit->skills.ids[i])->flags & SKILL_FLAG_USABLE)) {
                        kept.ids[keptCount++] = unit->skills.ids[i];
                    }
                }
                unit->skills = kept;
                memcpy(unit->growth.counters, menu->rewardUnit.unit.growth.counters, sizeof(unit->growth.counters));
                menu->rewardUnit.beforeStatGains = *unit;
                unitRecalculateEffectiveStats(&menu->rewardUnit.beforeStatGains);
                for (s32 i = 0; i < (s32)sizeof(unit->growth.counters); i++) {
                    if (menu->rewardUnit.unit.id == i) {
                        unit->growth.counters[i]++;
                        break;
                    }
                }
                objectFlagSetBit(unit, 2);

                /* Then its own initial skills, the offer's skill and random ones of the old demon. */
                NkmBaseRecord *base = nkmBaseGetRecord(unit->id);
                s32 slots = flagCountUnlockedSlots(unit);
                s32 count = 0;
                for (s32 i = 0; i < UNIT_SKILL_SLOTS; i++) {
                    if (count < slots) {
                        if (base->skills[i] != 0) {
                            unit->skills.ids[count++] = base->skills[i];
                        }
                    }
                }
                if (count < slots && (u32)menu->rewardUnit.offeredDemon->skillPasses <= FUN_0025981c()) {
                    if (!unitHasSkill(unit, menu->rewardUnit.offeredDemon->skill)) {
                        unit->skills.ids[count++] = menu->rewardUnit.offeredDemon->skill;
                    }
                }
                if (count < slots) {
                    s32 learned = 0;
                    for (s32 i = 0; i < UNIT_SKILL_SLOTS; i++) {
                        if (menu->rewardUnit.unit.skills.ids[i] != 0) {
                            learned++;
                        }
                    }
                    s32 picks[UNIT_SKILL_SLOTS];
                    __aeabi_memset4(picks, sizeof(picks), -1);
                    s32 tries = 0;
                    s32 seen;
                    do {
                        seen = 0;
                        s32 pick = randBetween(0, learned - 1);
                        tries++;
                        bool repeated = false;
                        for (s32 i = 0; i < UNIT_SKILL_SLOTS; i++) {
                            if (picks[i] == pick) {
                                repeated = true;
                                break;
                            }
                            seen++;
                            if (picks[i] == -1) {
                                picks[i] = pick;
                                break;
                            }
                        }
                        if (!repeated && !unitHasSkill(unit, (s16)menu->rewardUnit.unit.skills.ids[pick]) &&
                            (dataTable06Sub1GetRecord(menu->rewardUnit.unit.skills.ids[pick])->flags &
                             SKILL_FLAG_USABLE)) {
                            unit->skills.ids[count++] = menu->rewardUnit.unit.skills.ids[pick];
                        }
                    } while (count < slots && tries < 100 && seen < learned);
                }
                saveMarkIdListSeen(unit);
                if (firstTime) {
                    FUN_0029bed8(unit->id);
                    menu->loading = 1;
                }
                u32 selection = FUN_00259800();
                cecCardBuild(&g_campCec->card, (s16)unit->id, gameDataBlocksGetFlagByteA(), selection);
                FUN_002597c0();
                cecProcessForward(&g_campCec->card);
                saveSelectReserveUnit(&g_campCec->card);
                break;
            }
        } else {
            menu->rewardUnit.beforeStatGains = menu->rewardUnit.unit;
        }
        btlTalkBustUpSetDemonTexture((u16)FUN_00262f78(), 1);
        libc_strcpy(reinterpret_cast<u32 *>(name),
                    reinterpret_cast<u32 *>(aocEntryDataById(nkmBaseGetRecord((u16)FUN_00262f78())->race, 1)));
        FUN_002bd158(name, converted);
        textEncodeFontSlot(0, converted);
        libc_strcpy(reinterpret_cast<u32 *>(name),
                    reinterpret_cast<u32 *>(dataTable01FindByIdWithAoc((u16)FUN_00262f78())->data));
        textEncodeFontSlot(1, name);
        scrScriptProcessStartEntry(menu->talk.process, 0x1a);
        FUN_0026b9bc();
        soundPlaySeUnpanned(0x1000115);
        ++menu->scriptFlow.phase;
        break;
    case 5:
        if (!btlTalkBustupMatchesDevil((u16)FUN_00262f78())) {
            break;
        }
        btlTalkBustUpSetUnk2F4(1);
        titleSetSlotValueState2(0, 0x1e);
        ++menu->scriptFlow.phase;
        break;
    case 6:
        if (!btlTalkBustUpGetValue()) {
            break;
        }
        if (!screenFaderIsSettled(0)) {
            break;
        }
        if (scrRunOpcodesStub(menu->talk.process) != 2) {
            break;
        }
        scrScriptProcessStartEntry(menu->talk.talkProcess, 0);
        ++menu->scriptFlow.phase;
        break;
    case 7: {
        if (scrRunOpcodesStub(menu->talk.talkProcess) != 2) {
            break;
        }
        menu->rewards.pending &= ~1;
        s32 nextReward = 0;
        if (menu->rewards.pending & 8)
            nextReward = 2;
        else if (menu->rewards.pending & 1)
            nextReward = 3;
        else if (menu->rewards.pending & 4)
            nextReward = 4;
        else if (menu->rewards.pending & 2)
            nextReward = 5;
        if (nextReward) {
            menu->state = nextReward;
            menu->scriptFlow.phase = 0;
            if (nextReward == 4) {
                menu->scriptFlow.phase = 4;
            }
            result = 2;
        } else {
            menu->scriptFlow.phase = 10;
            btlTalkBustUpReleaseAllSlots();
            menu->loading = 0;
        }
        break;
    }
    case 10:
        if (battleTalkIsBustReady()) {
            menu->scriptFlow.phase = 0;
            btlTalkBustUpReleaseTexture();
            result = 2;
            menu->state = 6;
        }
        break;
    }
    return result;
}

} /* extern "C" */
