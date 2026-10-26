/* NON_MATCHING: process mode setter recovered; answer branches and shared flag/reset tails still differ (retail 232 rows, built 230). */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "camp/CampCec/CampCecSetting.h"
#include "script/scrScriptProcess.h"
#include "code/Code002e_Smt4a.h"

extern "C" {

extern CampCecSetting *g_campCecSetting;

u32 FUN_00275bc8(void *fileA, void *fileB);
s32 scrRunOpcodesStub(u32 script);
void scrScriptProcessStartEntry(u32 script, s32 entry);
void scriptProcessSetMode(ScriptRunState *script, s32 mode);
s32 messageGetChoiceResult(void);
void sysPlaySe(s32 id);
s32 cecProcessGetValue(void);
s32 cecQueryOptionalProcess(void);
void cecProcessCall2(void);
void cecProcessCall4(void);
s32 cecProcessForward(void);
void playerSummaryFill(void);
void FUN_002f4014(void);
void FUN_0034280c(s32 arg);
void stateAtF4Destroy(void);
void gameDataBlocksSetFlagBits(u32 flag, s32 value);
s32 gameDataTestFlags(u32 flag);

void gameGetSlotTable(void);

/* The CEC settings screen's per-frame update (the task callback campCecSettingOpen installs):
 * creates the script from the two loaded files, then steps through the answer flow (stages 0-9)
 * each time the script reports it has reached a question, and finally closes (done) once the
 * confirmation was answered. Always returns 0. */
u32 FUN_002c049c(void)
{
    CampCecSetting *setting = g_campCecSetting;

    if (setting->started == 0) {
        if (setting->heapA != NULL && setting->heapB != NULL) {
            u32 script = FUN_00275bc8(setting->heapA, setting->heapB);

            setting->resource = script;
            scriptProcessSetMode(reinterpret_cast<ScriptRunState *>(script), 2);
            setting->started = 1;
        }
    } else if (setting->done == 0) {
        if (setting->waiting != 0) {
            if (FUN_002e2014() == 0) {
                return 0;
            }
            stateAtF4Destroy();
            setting->done = 1;
            return 0;
        }
        if ((setting->flags & 1) != 0) {
            if (scrRunOpcodesStub(setting->resource) == 2) {
                s32 stage = setting->stage;

                if (stage == 0) {
                    s32 choice = messageGetChoiceResult();

                    if (choice == 0) {
                        sysPlaySe(0x3E);
                        s32 value = cecProcessGetValue();

                        setting->flags = (setting->flags & ~1) | 2;
                        if (value == 3) {
                            setting->stage = 3;
                        } else if (value == 0x81) {
                            if (gameDataTestFlags(0x20) != 0) {
                                setting->stage = 5;
                            } else {
                                gameDataBlocksSetFlagBits(0x20, 1);
                                setting->stage = 8;
                            }
                        } else if (value == 0x11) {
                            setting->stage = 4;
                            cecProcessCall4();
                        } else {
                            cecProcessCall2();
                            FUN_002bf520();
                            playerSummaryFill();
                            FUN_002bf520();
                            s32 forward = cecProcessForward();

                            if (forward == 5) {
                                setting->stage = 1;
                                cecProcessCall4();
                            } else if (forward == 9) {
                                setting->stage = 2;
                                cecProcessCall4();
                            } else if (setting->stage == 2 || setting->stage == 1) {
                                cecProcessCall4();
                            } else {
                                gameDataBlocksSetFlagBits(0x20, 1);
                                setting->stage = 6;
                            }
                        }
                    } else if (choice == 1) {
                        sysPlaySe(0x3E);
                        if (cecQueryOptionalProcess() != 0 && gameDataTestFlags(0x20) != 0) {
                            setting->stage = 9;
                            setting->flags = (setting->flags & ~1) | 2;
                        } else {
                            scrScriptProcessStartEntry(setting->resource, cecQueryOptionalProcess() != 0 ? 12 : 8);
                            setting->polling = 1;
                            setting->flags = 0;
                        }
                    }
                } else if (stage == 6 || stage == 8) {
                    cecProcessCall2();
                    FUN_002bf520();
                    playerSummaryFill();
                    FUN_002bf520();
                    cecProcessForward();
                    FUN_002bf520();
                    FUN_002f4014();
                    gameFlagSetValue(0x550, 1, 1);
                    setting->flags = 0;
                    setting->done = 1;
                } else if (stage == 9) {
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
                } else if (stage == 7) {
                    FUN_0034280c(1);
                    setting->waiting = 1;
                    setting->flags = 0;
                } else {
                    setting->done = 1;
                    setting->flags = 0;
                }
            }
        } else if ((setting->flags & 2) != 0) {
            scrScriptProcessStartEntry(setting->resource, setting->items[setting->stage]);
            setting->flags = (setting->flags & ~2) | 1;
        }
    }
    if (setting->polling != 0 && scrRunOpcodesStub(setting->resource) == 2) {
        setting->done = 1;
    }
    return 0;
}

}
