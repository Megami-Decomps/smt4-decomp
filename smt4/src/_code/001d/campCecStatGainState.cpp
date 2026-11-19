#include "addon/LookupRecord.h"
#include "camp/CecMenu.h"
#include "camp/CampCec/CampCecView.h"
#include "camp/Unite/UniteWork.h"
#include "camp/PartyPanel/PartyPanel.h"
#include "code/Code0026.h"
#include "code/Code0026_Smt4.h"
#include "code/Code0029.h"
#include "code/Code0029_Smt4.h"
#include "gamedata/DataTable.h"
#include "gamedata/UnitRecordAccess.h"
#include "quest_center/qcMain.h"
#include "script/ScriptEntryLookup.h"
#include "script/scrScriptProcess.h"
#include "status/StatusCamera.h"
#include "ui/UiControl.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "bible/bibleDevil.h"
#include "AsdSDK/Source/Snd/AsdSoundSystem.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"

extern "C" {
StatBlock *FUN_00262f94(void);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
void unitRecalculateEffectiveStats(StatBlock *unit);
void FUN_0029d8f4(StatBlock *unit, s32 demonSide, u8 flag);
void FUN_0029e788(void);
s32 FUN_001ddc00(void);
s32 FUN_00223c78(void);
void statusBustUpPortraitAcquire(s32 id, s32 byDevilId);
void statusBustUpPortraitRelease(s32 id, s32 byDevilId);
void beginStatusPanelClose(void);
void statusPanelSetOpen(s32 open);
void btlTalkBustUpReleaseAllSlots(void);
void btlTalkBustUpReleaseTexture(void);
void btlTalkBustUpSetDemonTexture(s32 devilId, s32 asynchronous);
void btlTalkBustUpSetUnk2F4(u8 value);
s32 btlTalkBustUpGetValue(void);
s32 battleTalkIsBustReady(void);
void gameGlobalsSetSelected(s32 value);
void objectFlagsClear(StatBlock *unit, u16 mask);
void FUN_0029bed8(u32 id);
void soundPlaySeUnpanned(u32 id);
u32 padIsButtonPressed(u32 button);
}

// Present and apply the selected demon's StreetPass stat rewards, one message at a time.
extern "C" s32 campCecStatGainState(CampCecMenu *menu)
{
    s32 result = 0;
    StatBlock *unit = FUN_00262f94();
    u8 name[32];
    switch (menu->scriptFlow.phase) {
    case 0:
        libc_strcpy(reinterpret_cast<u32 *>(name), reinterpret_cast<u32 *>(dataTable01FindByIdWithAoc(unit->id)->data));
        textEncodeFontSlot(0, name);
        scrScriptProcessStartEntry(menu->talk.process, 0x16);
        if (!btlTalkBustUpGetValue())
            btlTalkBustUpSetDemonTexture(unit->id, 1);
        menu->rewardUnit.beforeStatGains = *unit;
        ++menu->scriptFlow.phase;
        break;
    case 1:
        if (scrRunOpcodesStub(menu->talk.process) != 2)
            break;
        btlTalkBustUpSetUnk2F4(1);
        ++menu->scriptFlow.phase;
        break;
    case 2:
        if (!btlTalkBustUpGetValue())
            break;
        scrScriptProcessStartEntry(menu->talk.talkProcess, 2);
        ++menu->scriptFlow.phase;
        break;
    case 3:
        if (scrRunOpcodesStub(menu->talk.talkProcess) != 2)
            break;
        ++menu->scriptFlow.phase;
        break;
    case 4: {
        s32 amount;
        s32 scriptEntry = 0;
        libc_strcpy(reinterpret_cast<u32 *>(name), reinterpret_cast<u32 *>(dataTable01FindByIdWithAoc(unit->id)->data));
        textEncodeFontSlot(0, name);
        if ((amount = (s16)menu->rewardUnit.statGains[0]) > 0) {
            scriptEntry = 2;
            unit->growth.statBonuses[0] += amount;
            if (unit->growth.statBonuses[0] >= 1000)
                unit->growth.statBonuses[0] = 999;
            menu->rewardUnit.statGains[0] = 0;
            s16 before = unit->effectiveStats[0];
            unitRecalculateEffectiveStats(unit);
            if (unit->effectiveStats[0] >= 999 && unit->effectiveStats[0] == before)
                scriptEntry = 9;
        } else if ((amount = (s16)menu->rewardUnit.statGains[1]) > 0) {
            scriptEntry = 3;
            unit->growth.statBonuses[1] += amount;
            if (unit->growth.statBonuses[1] >= 1000)
                unit->growth.statBonuses[1] = 999;
            menu->rewardUnit.statGains[1] = 0;
            s16 before = unit->effectiveStats[1];
            unitRecalculateEffectiveStats(unit);
            if (unit->effectiveStats[1] >= 999 && unit->effectiveStats[1] == before)
                scriptEntry = 10;
        } else if ((amount = (s16)menu->rewardUnit.statGains[2]) > 0) {
            scriptEntry = 4;
            unit->growth.statBonuses[2] += amount;
            if (unit->growth.statBonuses[2] >= 1000)
                unit->growth.statBonuses[2] = 999;
            menu->rewardUnit.statGains[2] = 0;
            s16 before = unit->effectiveStats[2];
            unitRecalculateEffectiveStats(unit);
            if (unit->effectiveStats[2] >= 999 && unit->effectiveStats[2] == before)
                scriptEntry = 11;
        } else if ((amount = (s16)menu->rewardUnit.statGains[3]) > 0) {
            scriptEntry = 5;
            unit->growth.statBonuses[3] += amount;
            if (unit->growth.statBonuses[3] >= 1000)
                unit->growth.statBonuses[3] = 999;
            menu->rewardUnit.statGains[3] = 0;
            s16 before = unit->effectiveStats[3];
            unitRecalculateEffectiveStats(unit);
            if (unit->effectiveStats[3] >= 999 && unit->effectiveStats[3] == before)
                scriptEntry = 12;
        } else if ((amount = (s16)menu->rewardUnit.statGains[4]) > 0) {
            scriptEntry = 6;
            unit->growth.statBonuses[4] += amount;
            if (unit->growth.statBonuses[4] >= 1000)
                unit->growth.statBonuses[4] = 999;
            menu->rewardUnit.statGains[4] = 0;
            s16 before = unit->effectiveStats[4];
            unitRecalculateEffectiveStats(unit);
            if (unit->effectiveStats[4] >= 999 && unit->effectiveStats[4] == before)
                scriptEntry = 13;
        }
        if (scriptEntry != 0) {
            FUN_0029ede8(1, amount, 0xffffffff, 0);
            scrScriptProcessStartEntry(menu->talk.process, scriptEntry);
            ++menu->scriptFlow.phase;
        } else {
            gameGlobalsSetSelected(0);
            statusDownSwitchTab(0);
            gameSetIconDisplayEnabled(0);
            statusBustUpPortraitAcquire(FUN_00262f78(), 1);
            unitRecalculateEffectiveStats(unit);
            objectFlagsClear(unit, 0x220);
            FUN_002954bc(reinterpret_cast<Obj *>(unit));
            menu->scriptFlow.phase = 6;
            btlTalkBustUpReleaseAllSlots();
            if (menu->loading) {
                FUN_0029bed8(unit->id);
                menu->loading = 0;
            }
        }
        break;
    }
    case 5:
        if (scrRunOpcodesStub(menu->talk.process) == 2)
            --menu->scriptFlow.phase;
        break;
    case 6:
        if (battleTalkIsBustReady() && FUN_00293f10(FUN_00262f78(), 1)) {
            btlTalkBustUpReleaseTexture();
            btlTalkBustUpSetDemonTexture(unit->id, 1);
            menu->rewardPortraitPending = 0;
            gameSetIconDisplayEnabled(1);
            FUN_0029e788();
            if (partyPanelIsActive())
                buttonHelpSetPreset(0xcc);
            else
                buttonHelpSetPreset(0xe3);
            ++menu->scriptFlow.phase;
        }
        break;
    case 7:
        if (FUN_0029e0f8()) {
            gameGlobalsSetSelected(0);
            FUN_0029c4c8(1);
            FUN_0029d8f4(&menu->rewardUnit.beforeStatGains, 0, 0);
            FUN_0029c4e4((u32)FUN_00262f94(), 0);
            FUN_0029c4ac(0);
            statusPanelSetOpen(1);
            FUN_0026d654(0);
            ++menu->scriptFlow.phase;
        }
        break;
    case 8:
        if (FUN_0029563c() && !FUN_00223c78() && !FUN_001ddc00() && !FUN_00293aac() &&
            (padIsButtonPressed(0) || buttonHelpHasEnabledEntryForId(1))) {
            FUN_002a0cc8(1);
            soundPlaySeUnpanned(0x100016d);
            ++menu->scriptFlow.phase;
            beginStatusPanelClose();
        }
        break;
    case 9: {
        if (!FUN_00295618())
            break;
        menu->rewards.pending &= ~4;
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
            menu->rewardPortraitPending = 1;
            btlTalkBustUpSetUnk2F4(1);
            buttonHelpSetPreset(0x3c);
            result = 2;
        } else {
            menu->scriptFlow.phase = 10;
        }
        statusBustUpPortraitRelease(FUN_00262f78(), 1);
        gameGlobalsSetSelected(0);
        statusDownSwitchTab(0);
        FUN_0026d654(1);
        FUN_0029dfc0(0);
        gameSetIconDisplayEnabled(0);
        FUN_0029c4c8(0);
        FUN_0026d670();
        menu->loading = 0;
        break;
    }
    case 10:
        btlTalkBustUpReleaseTexture();
        menu->scriptFlow.phase = 0;
        result = 2;
        menu->state = 6;
        break;
    }
    return result;
}
