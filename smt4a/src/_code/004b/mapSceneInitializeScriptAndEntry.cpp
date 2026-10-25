#include "common.h"
#include "script/scrScriptProcess.h"

/* The map/scene state block as this scene start touches it. */
struct GameStateScene {
    /* 0x000 */ s32 scene;
    /* 0x004 */ u8 unk004[0x10];
    /* 0x014 */ u32 phase;
    /* 0x018 */ u8 unk018[0x20];
    /* 0x038 */ u8 busy;
    /* 0x039 */ u8 unk039[0x53B];
    /* 0x574 */ u8 resumed;
};

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

extern GameStateScene g_gameState;
extern AocMainView *g_aocMain;

ScriptRunState *FUN_00275bc8(void *script, void *data);
void scriptProcessSetMode(ScriptRunState *process, s32 mode);
s32 FUN_004186e0(void);
s32 FUN_001bd118(void);
void FUN_004b6bc4(SceneStartWork *work, s32 mode, s32 arg);
s32 FUN_0013def0(u32 index);
void FUN_003d54f8(u32 index, s32 value);
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

    work->process = FUN_00275bc8(work->script, work->scriptData);
    scriptProcessSetMode(work->process, 2);
    mode = work->mode;
    special = 0;
    if (FUN_004186e0() != 0 && FUN_001bd118() == 6) {
        special = 1;
    }
    FUN_004b6bc4(work, mode, -1);
    work->centerX = 400.0f;
    work->centerY = 240.0f;
    if (FUN_0013def0(0) == 3) {
        FUN_003d54f8(0, 10);
    }
    if (FUN_0013def0(1) == 3) {
        FUN_003d54f8(1, 10);
    }
    work->entryKind = 0;
    bgmReleaseStopped();
    if (g_gameState.resumed != 0) {
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
    g_gameState.busy = 0;
    g_gameState.scene = mode + 200;
    g_gameState.phase = 3;
    g_gameState.resumed = 0;
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
