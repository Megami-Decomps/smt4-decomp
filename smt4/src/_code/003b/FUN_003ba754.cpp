#include "common.h"
#include "addon/aocMain.h"
#include "gamedata/Table1bOr1c.h"
#include "map/mapDepart.h"
#include "script/scrScriptProcess.h"
#include "shard/W6_W6Match1_BgmRequestChannel.h"
#include "game/GameState.h"


// The map scene block (only the fields this function touches).
struct MapSceneView {
    u8 unk00[0x34];
    s32 bgm;            // 0x34
    u8 unk38[4];
    s16 mode;           // 0x3c
    u8 unk3e[0x12];
    f32 cursorX;        // 0x50
    f32 cursorY;        // 0x54
    u8 unk58[0x674];
    u8 restored;        // 0x6cc
    u8 unk6cd[0x69f];
    ScriptFile *scriptFile; // 0xd6c
    void *scriptOwner;       // 0xd70
    ScriptProcess *scriptProcess; // 0xd74
    u8 unkd78[0x38];
    s32 result;         // 0xdb0
};

extern "C" {

void FUN_0022b29c(MapSceneView *scene, s32 mode, u32 flag);
void bgmReleaseStopped(void);
void mapDepartSetTarget(s32 first, s32 second, u32 third);
s32 FUN_0027d8c8(void);
void gameRestoreWorkSave(s32 kind);
void scriptProcessSetMode(ScriptProcess *process, s32 mode);
void soundChannelRequestIfEnabled(s32 id, s32 flag, s32 frames);
void titleSetSlotValueState2(s32 channel, s32 frames);
s32 gameFlagIsSet(u32 flag);
s32 FUN_002c2a04(s32 channel);

// Creates and starts the scene script, selects its BGM and restores the saved work state,
// then resets the game state to the scene's departure mode.
void FUN_003ba754(MapSceneView *scene)
{
    ScriptProcess *process = scrScriptProcessCreate(scene->scriptFile, scene->scriptOwner);
    scene->scriptProcess = process;
    scriptProcessSetMode(process, 2);
    s32 mode = scene->mode;
    u8 restoreFlag = 0;
    u32 quest = rosterGetLeaderId();
    if (quest != 0 && table1bOr1cGetRecordValue(quest) == 6) {
        restoreFlag = 1;
    }
    FUN_0022b29c(scene, mode, 0xffffffff);
    scene->cursorX = 400.0f;
    scene->cursorY = 240.0f;
    if (FUN_002c2a04(0) == 3) {
        titleSetSlotValueState2(0, 10);
    }
    if (FUN_002c2a04(1) == 3) {
        titleSetSlotValueState2(1, 10);
    }
    scene->result = 0;
    bgmReleaseStopped();
    s32 bgm;
    if (mode == 3 || mode == 4) {
        bgm = 0x1000063;
    } else {
        bgm = 0x1000052;
    }
    if (gameFlagIsSet(0x18c) != 0) {
        bgm = 0x1000057;
    }
    if (scene->bgm != bgm) {
        soundChannelRequestIfEnabled(scene->bgm = bgm, 0, 0x3c);
    }
    if (g_gameState.map.savedLocationSet != 0) {
        if (restoreFlag) {
            switch (FUN_0027d98c()) {
            case 0:
            case 3:
                scene->result = 1;
                scene->restored = 1;
                break;
            case 1:
                break;
            case 2:
                break;
            case 4:
                scene->result = 2;
                break;
            }
        } else if (g_aocMain->skipRestore != 0 || FUN_0027d98c() == 6) {
            gameRestoreWorkSave(2);
            FUN_0027db24(0);
        } else if (FUN_0027d98c() == 1) {
            gameRestoreWorkSave(1);
            FUN_0027db24(0);
            if (FUN_0027d8c8() != 0) {
                scene->result = 3;
            } else {
                scene->result = 4;
            }
        } else if (FUN_0027d98c() == 5) {
            gameRestoreWorkSave(1);
            FUN_0027db24(0);
            scene->result = 4;
        }
    }
    g_gameState.retainCampResources = 0;
    g_gameState.mapId = mode + 200;
    g_gameState.resumeMode = 3;
    g_gameState.map.savedLocationSet = 0;
    mapDepartSetTarget(-1, -1, 0xffffffff);
}
}
