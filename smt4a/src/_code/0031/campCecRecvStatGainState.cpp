#include "camp/CampCec/CampCecRecv.h"
#include "script/scrScriptProcess.h"
#include "addon/LookupRecord.h"
#include "shard/W6_W6Match2_EntrySequence.h"
#include "event/2dEvent/SmokeFade.h"
#include "code/Code0035.h"
#include "code/Code0033.h"
#include "code/Code0023.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Sys/Mem/AsdMemory.h"
#include "code/Code002c.h"
#include "camp/PartyPanel/PartyPanel.h"
#include "code/Code0022_Smt4a.h"
#include "code/Code0028_Smt4a.h"
#include "code/Code0031_Smt4a.h"
#include "shard/W6_W6Match3_FormatBuffer.h"
#include "ui/UiControl.h"
#include "map/lmapMain.h"

extern "C" {

SlotRecordA *FUN_0031cf00(void);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
s32 btlTalkBustUpGetValue(void);
void btlTalkBustUpSetDemonTexture(u32 demonId, s32 deferred);
void btlTalkBustUpSetUnk2F4(u8 value);
void btlTalkBustUpReleaseAllSlots(void);
void btlTalkBustUpReleaseTexture(void);
s32 battleTalkIsBustReady(void);
void unitRecomputeDerivedStats(SlotRecordA *record);
void FUN_002c85b0(u32 value);
s32 gameDataGetRecordValue(void);
void statusBustUpPortraitAcquire(s32 id, s32 byDevilId);
void statusBustUpPortraitRelease(s32 id, s32 resolveRecord);
void FUN_002a5e7c(u32 id);
void sysPlaySe(u32 id);
void statusDisplayBindUnitRecord(SlotRecordA *record, s32 useBaseStats, u32 selection, const u32 *parameters);
void objBInitBlock19D0(SlotRecordA *record, s32 copyPair, u32 c);
void FUN_003343c0(u8 value);
void statusPanelSetOpen(s32 open);
void FUN_0038b548(u8 value);
s32 gameGetMode(void);
s32 FUN_0035db94(void);
u32 FUN_00334044(void);
u32 FUN_0031f63c(void);
u8 statusDownGetFlag(void);
u32 padButtonIsPressed(u32 button);
u32 buttonHelpIsActionActive(u32 action);
void FUN_0022e774(void);
u32 maskToCode(u32 mask);
void FUN_00285800(void);

/* The receive screen's stat-gain state: tells the unit's name, hands it each pending stat gain with its
 * message (or the "already at its limit" one), then shows the unit's status until it is closed and picks
 * the next state from what is left to present. Returns 3 when the state is over. */
s32 campCecRecvStatGainState(CampCecRecv *recv)
{
    s32 result = 0;
    SlotRecordA *unit = FUN_0031cf00();
    char name[36];

    switch (recv->gains.step) {
    case 0:
        libc_strcpy((unsigned int *)name, (unsigned int *)dataTable01GetRecordWithAocOverride(unit->id));
        scrSetStringSlot(0, name);
        scrScriptProcessStartEntry(recv->resources.scripts[0], 0x14);
        if (btlTalkBustUpGetValue() == 0) {
            btlTalkBustUpSetDemonTexture(unit->id, 1);
        }
        recv->gains.unitBefore = *unit;
        recv->gains.step++;
        break;
    case 1:
        if (scrRunOpcodesStub(recv->resources.scripts[0]) != 2) {
            break;
        }
        btlTalkBustUpSetUnk2F4(1);
        recv->gains.step++;
        break;
    case 2:
        if (btlTalkBustUpGetValue() == 0) {
            break;
        }
        scrScriptProcessStartEntry(recv->resources.scripts[1], 2);
        recv->gains.step++;
        break;
    case 3:
        if (scrRunOpcodesStub(recv->resources.scripts[1]) != 2) {
            break;
        }
        recv->gains.step++;
        break;
    case 4: {
        s32 gain;
        s32 message = 0;
        libc_strcpy((unsigned int *)name, (unsigned int *)dataTable01GetRecordWithAocOverride(unit->id));
        scrSetStringSlot(0, name);
        if ((gain = recv->gains.statGains[0]) > 0) {
            message = 2;
            unit->bonuses[2] += gain;
            if (unit->bonuses[2] >= 1000) {
                unit->bonuses[2] = 999;
            }
            recv->gains.statGains[0] = 0;
            s16 before = unit->baseStats[0];
            unitRecomputeDerivedStats(unit);
            if (unit->baseStats[0] >= 999 && unit->baseStats[0] == before) {
                message = 9;
            }
        } else if ((gain = recv->gains.statGains[1]) > 0) {
            message = 3;
            unit->bonuses[3] += gain;
            if (unit->bonuses[3] >= 1000) {
                unit->bonuses[3] = 999;
            }
            recv->gains.statGains[1] = 0;
            s16 before = unit->baseStats[1];
            unitRecomputeDerivedStats(unit);
            if (unit->baseStats[1] >= 999 && unit->baseStats[1] == before) {
                message = 10;
            }
        } else if ((gain = recv->gains.statGains[2]) > 0) {
            message = 4;
            unit->bonuses[4] += gain;
            if (unit->bonuses[4] >= 1000) {
                unit->bonuses[4] = 999;
            }
            recv->gains.statGains[2] = 0;
            s16 before = unit->baseStats[2];
            unitRecomputeDerivedStats(unit);
            if (unit->baseStats[2] >= 999 && unit->baseStats[2] == before) {
                message = 11;
            }
        } else if ((gain = recv->gains.statGains[3]) > 0) {
            message = 5;
            unit->bonuses[5] += gain;
            if (unit->bonuses[5] >= 1000) {
                unit->bonuses[5] = 999;
            }
            recv->gains.statGains[3] = 0;
            s16 before = unit->baseStats[3];
            unitRecomputeDerivedStats(unit);
            if (unit->baseStats[3] >= 999 && unit->baseStats[3] == before) {
                message = 12;
            }
        } else if ((gain = recv->gains.statGains[4]) > 0) {
            message = 6;
            unit->bonuses[6] += gain;
            if (unit->bonuses[6] >= 1000) {
                unit->bonuses[6] = 999;
            }
            recv->gains.statGains[4] = 0;
            s16 before = unit->baseStats[4];
            unitRecomputeDerivedStats(unit);
            if (unit->baseStats[4] >= 999 && unit->baseStats[4] == before) {
                message = 13;
            }
        }
        if (message != 0) {
            FUN_00359974(1, gain, 0xffffffff, 0);
            scrScriptProcessStartEntry(recv->resources.scripts[0], message);
            recv->gains.step++;
        } else {
            FUN_002c85b0(0);
            statusDownSwitchTab(0);
            FUN_002c8538(0);
            statusBustUpPortraitAcquire(gameDataGetRecordValue(), 1);
            unitRecomputeDerivedStats(unit);
            recv->gains.step = 6;
            btlTalkBustUpReleaseAllSlots();
            if (recv->unitFlag.unk7D4) {
                FUN_002a5e7c(unit->id);
                recv->unitFlag.unk7D4 = 0;
            }
        }
        break;
    }
    case 5:
        if (scrRunOpcodesStub(recv->resources.scripts[0]) == 2) {
            recv->gains.step--;
        }
        break;
    case 6:
        if (battleTalkIsBustReady() && devilIsTextureLoaded(gameDataGetRecordValue(), 1)) {
            btlTalkBustUpReleaseTexture();
            btlTalkBustUpSetDemonTexture(unit->id, 1);
            recv->gains.unk3E6 = 0;
            FUN_002c8538(1);
            FUN_00215bd0();
            if (partyPanelIsActive()) {
                sysPlaySe(0xce);
            } else {
                sysPlaySe(0xe5);
            }
            recv->gains.step++;
        }
        break;
    case 7:
        if (FUN_0023b3d0()) {
            FUN_002c85b0(0);
            FUN_0033449c(1);
            statusDisplayBindUnitRecord(&recv->gains.unitBefore, 0, 0, NULL);
            objBInitBlock19D0(FUN_0031cf00(), 0, 0);
            FUN_003343c0(0);
            statusPanelSetOpen(1);
            FUN_0038b548(0);
            recv->gains.step++;
        }
        break;
    case 8:
        if (FUN_0022e750()) {
            if (gameGetMode() != 0) {
                s32 step = FUN_0035db94();
                s32 current = FUN_0023b3b8();
                s32 count = FUN_00334044();
                s32 next = current - step;
                if (next > count - 1) {
                    next = 0;
                } else if (next < 0) {
                    next = count - 1;
                }
                bool backward = false;
                if (step < 0) {
                    backward = true;
                }
                if (next == 0) {
                    FUN_00319aec(backward);
                } else if (current == 0) {
                    campCecSetObjectValue(backward);
                    sysPlaySe(0xce);
                }
            } else if (FUN_0031f63c() == 0 && FUN_002857b8() == 0 && statusDownGetFlag() == 0 &&
                       (padButtonIsPressed(0) || buttonHelpIsActionActive(1))) {
                gameGlobalsSetMenuOpenFlag(1);
                sysPlayVoice(0x100020e);
                recv->gains.step++;
                FUN_0022e774();
            }
        }
        break;
    case 9:
        if (FUN_0026c3a0()) {
            recv->gains.pending &= ~4;
            s32 next = maskToCode(recv->gains.pending);
            if (next == 9) {
                recv->gains.step = 10;
            } else {
                recv->gains.nextState = next;
                recv->gains.step = 0;
                recv->gains.unk3E6 = 1;
                btlTalkBustUpSetUnk2F4(1);
                sysPlaySe(0x3e);
                gameGlobalsSetMenuOpenFlag(0);
                result = 3;
            }
            statusBustUpPortraitRelease(gameDataGetRecordValue(), 1);
            FUN_002c85b0(0);
            statusDownSwitchTab(0);
            FUN_0038b548(1);
            FUN_0023b45c(0);
            FUN_002c8538(0);
            FUN_0033449c(0);
            FUN_00285800();
            recv->unitFlag.unk7D4 = 0;
        }
        break;
    case 10:
        btlTalkBustUpReleaseTexture();
        recv->gains.step = 0;
        gameGlobalsSetMenuOpenFlag(0);
        result = 3;
        recv->gains.nextState = 9;
        break;
    }
    return result;
}

} /* extern "C" */
