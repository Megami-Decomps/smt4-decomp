#include "common.h"
#include "game/GameStateA.h"
#include "script/scrScriptProcess.h"

struct AocMainView {
    /* 0x00 */ u8 unk00[0xC1];
    /* 0xC1 */ u8 unk0C1;
};

/* The scene controller's work (observed prefix). */
struct SceneStartWork {
    /* 0x0000 */ u8 unk0000[0x34];
    /* 0x0034 */ u32 bgmId;
    /* 0x0038 */ u8 unk0038[4];
    /* 0x003C */ s16 mode;
    /* 0x003E */ u8 unk003E[0x12];
    /* 0x0050 */ f32 centerX;
    /* 0x0054 */ f32 centerY;
    /* 0x0058 */ u8 unk0058[0xA30];
    /* 0x0A88 */ u8 flagA88;
    /* 0x0A89 */ u8 unk0A89[0x69F];
    /* 0x1128 */ void *script;
    /* 0x112C */ void *scriptData;
    /* 0x1130 */ ScriptRunState *process;
    /* 0x1134 */ u8 unk1134[0x38];
    /* 0x116C */ u32 entryKind;
};

extern "C" {

extern AocMainView *g_aocMain;

ScriptRunState *scrScriptProcessCreate(void *script, void *data);
void scriptProcessSetMode(ScriptRunState *process, s32 mode);
s32 rosterGetLeaderId(void);
s32 FUN_001bd118(void);
void FUN_004b6bc4(SceneStartWork *work, s32 mode, s32 arg);
s32 pairedAvailabilityGetState(u32 index);
void titleSetSlotValueState2(u32 index, s32 value);
void bgmReleaseStopped(void);
u32 gameDataTableGetFlag(void);
void FUN_00239b10(s32 value);
void FUN_00215978(s32 value);
s32 FUN_0031d230(void);
void mapPlaceSet(s32 map, s32 area, u32 variant);
s32 gameFlagIsSet(u32 flag);
void soundChannelRequestIfEnabled(u32 id, s32 a, s32 frames);

/* Starts the scene: creates its script process, resets the entry state from the game-data flags and
 * picks the scene's background music. */
void mapSceneInitializeScriptAndEntry(SceneStartWork *work)
{
    s32 mode;
    u8 special;
    u32 bgm;

    work->process = scrScriptProcessCreate(work->script, work->scriptData);
    scriptProcessSetMode(work->process, 2);
    mode = work->mode;
    special = 0;
    if (rosterGetLeaderId() != 0 && FUN_001bd118() == 6) {
        special = 1;
    }
    FUN_004b6bc4(work, mode, -1);
    work->centerX = 400.0f;
    work->centerY = 240.0f;
    if (pairedAvailabilityGetState(0) == 3) {
        titleSetSlotValueState2(0, 10);
    }
    if (pairedAvailabilityGetState(1) == 3) {
        titleSetSlotValueState2(1, 10);
    }
    work->entryKind = 0;
    bgmReleaseStopped();
    if (g_gameState.savedLocationSet != 0) {
        if (special) {
            switch (gameDataTableGetFlag()) {
            case 0:
            case 3:
                work->entryKind = 1;
                work->flagA88 = 1;
                break;
            case 4:
                work->entryKind = 2;
                break;
            case 1:
            case 2:
                break;
            }
        } else if (g_aocMain->unk0C1 != 0 || gameDataTableGetFlag() == 6) {
            FUN_00239b10(2);
            FUN_00215978(0);
        } else if (gameDataTableGetFlag() == 1) {
            FUN_00239b10(1);
            FUN_00215978(0);
            if (FUN_0031d230() != 0) {
                work->entryKind = 3;
            } else {
                work->entryKind = 4;
            }
        } else if (gameDataTableGetFlag() == 5) {
            FUN_00239b10(1);
            FUN_00215978(0);
            work->entryKind = 4;
        }
    }
    g_gameState.retainCampResources = 0;
    g_gameState.mapId = mode + 200;
    g_gameState.resumeMode = 3;
    g_gameState.savedLocationSet = 0;
    mapPlaceSet(-1, -1, 0xffffffff);
    if (mode == 3 || mode == 4) {
        bgm = 0x0100004A;
    } else {
        bgm = 0x0100003D;
    }
    if (gameFlagIsSet(0x12E) != 0 && gameFlagIsSet(0x135) == 0) {
        bgm = 0x0100003F;
    }
    if (work->bgmId == bgm) {
        return;
    }
    work->bgmId = bgm;
    soundChannelRequestIfEnabled(bgm, 0, 60);
}

} /* extern "C" */
