/* NON_MATCHING: 8 lines (4 by shape), the same 232 rows. The two arms that start polling the script store
 * `flags = 0` themselves and branch past the polling test; retail sends both to the store that follows the
 * edit screen's arm and tests the polling flag again. A flag variable tested after the arms gives retail's
 * single store with the arms branching to it, but then merges the two arms' `polling = 1` stores, which
 * retail keeps apart (85 lines); the other if/switch shapes of those two arms change nothing. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "camp/CampCec/CampCecSetting.h"
#include "script/scrScriptProcess.h"
#include "code/Code002e_Smt4a.h"
#include "gamedata/SaveSlotTable.h"
#include "shard/Shard0032.h"
#include "shard/W6_W6Match3_ForwardEffect.h"
#include "cec/CecProcessGlobal.h"

extern "C" {

extern CampCecSetting *g_campCecSetting;

void scrScriptProcessStartEntry(ScriptProcess *script, s32 entry);
s32 messageGetChoiceResult(void);
void sysPlaySe(s32 id);
s32 cecProcessGetValue(void);
void cecProcessCall2(void);
void cecProcessCall4(void);
void playerSummaryFill(PlayerSummary *summary);
void FUN_002f4014(CampCecReceivedRecord *record);
void campCecEditCreate(s32 arg);
void stateAtF4Destroy(void);
void gameDataBlocksSetFlagBits(u32 flag, s32 value);
s32 gameDataTestFlags(u32 flag);


/* The CEC settings screen's per-frame update (the task callback campCecSettingOpen installs):
 * creates the script from the two loaded files, then steps through the answer flow (stages 0-9)
 * each time the script reports it has reached a question, and finally closes (done) once the
 * confirmation was answered. Always returns 0. */
u32 campCecSettingUpdate(void)
{
    CampCecSetting *setting = g_campCecSetting;

    if (setting->started == 0) {
        if (setting->heapA != NULL && setting->heapB != NULL) {
            ScriptProcess *script = scrScriptProcessCreate(setting->heapA, setting->heapB);

            setting->resource = script;
            scriptProcessSetMode(script, 2);
            setting->started = 1;
        }
    } else if (setting->done == 0) {
        if (setting->waiting != 0) {
            if (campCecEditHasConfirmFlag() != 0) {
                stateAtF4Destroy();
                setting->done = 1;
            }
            return 0;
        }
        if ((setting->flags & 1) != 0) {
            if (scrRunOpcodesStub(setting->resource) == 2) {
                if (setting->stage == 0) {
                    switch (messageGetChoiceResult()) {
                    case 0: {
                        sysPlaySe(0x3E);
                        s32 value = cecProcessGetValue();

                        setting->flags &= ~1;
                        setting->flags |= 2;
                        if (value == 3) {
                            setting->stage = 3;
                        } else if (value == 0x81) {
                            if (gameDataTestFlags(0x20) == 0) {
                                gameDataBlocksSetFlagBits(0x20, 1);
                                setting->stage = 8;
                            } else {
                                setting->stage = 5;
                            }
                        } else if (value == 0x11) {
                            setting->stage = 4;
                            cecProcessCall4();
                        } else {
                            cecProcessCall2();
                            playerSummaryFill((PlayerSummary *)campCecGetOwnRecord());
                            u32 forward = cecProcessForward(campCecGetOwnRecord());

                            if (forward == 5) {
                                setting->stage = 1;
                            } else if (forward == 9) {
                                setting->stage = 2;
                            }
                            if (setting->stage == 2 || setting->stage == 1) {
                                cecProcessCall4();
                            } else {
                                gameDataBlocksSetFlagBits(0x20, 1);
                                setting->stage = 6;
                            }
                        }
                        break;
                    }
                    case 1:
                        sysPlaySe(0x3E);
                        if (cecQueryOptionalProcess() != 0 && gameDataTestFlags(0x20) != 0) {
                            setting->stage = 9;
                            setting->flags &= ~1;
                            setting->flags |= 2;
                        } else {
                            scrScriptProcessStartEntry(setting->resource, cecQueryOptionalProcess() != 0 ? 12 : 8);
                            setting->polling = 1;
                            setting->flags = 0;
                        }
                        break;
                    }
                } else if (setting->stage == 6 || setting->stage == 8) {
                    cecProcessCall2();
                    playerSummaryFill((PlayerSummary *)campCecGetOwnRecord());
                    cecProcessForward(campCecGetOwnRecord());
                    FUN_002f4014(campCecGetOwnRecord());
                    gameFlagSetValue(0x550, 1, 1);
                    setting->flags = 0;
                    setting->done = 1;
                } else if (setting->stage == 9) {
                    s32 choice = messageGetChoiceResult();

                    if (choice == 0) {
                        cecProcessCall4();
                        scrScriptProcessStartEntry(setting->resource, 9);
                        gameGetSlotTable();
                        setting->polling = 1;
                        setting->flags = 0;
                    } else if (choice == 1) {
                        setting->done = 1;
                    }
                } else {
                    if (setting->stage != 7) {
                        setting->done = 1;
                    } else {
                        campCecEditCreate(1);
                        setting->waiting = 1;
                    }
                    setting->flags = 0;
                }
            }
        } else if ((setting->flags & 2) != 0) {
            scrScriptProcessStartEntry(setting->resource, setting->items[setting->stage]);
            setting->flags &= ~2;
            setting->flags |= 1;
        }
    }
    if (setting->polling != 0 && scrRunOpcodesStub(setting->resource) == 2) {
        setting->done = 1;
    }
    return 0;
}

}
