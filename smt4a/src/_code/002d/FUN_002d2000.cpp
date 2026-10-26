/* NON_MATCHING: retail places the request-1 switch table between the two branches and keeps constants 1/0x4d2|1 in callee-saved registers (more saved registers); block layout and the flag-or differ. */
#include "common.h"
#include "gamedata/GameFlags.h"
#include "code/Code002b.h"
#include "gamedata/GameDataAccess_VariantG.h"
#include "gamedata/GameDataAccess.h"

/* The game state fields the scene-advance step touches. */
struct SceneAdvanceState {
    u8 unk00[0x27];
    u8 progressEnabled;     // 0x27
    u8 unk28[0x7C];
    u32 nextSceneId;        // 0xA8
    u8 unkAC[0x3A8];
    s32 unk454;             // 0x454
    u8 unk458[0x45];
    u8 sceneReady;          // 0x49D
};

/* Selection state of the map scene being entered. */
struct MapSelection {
    u32 area;       // 0x00
    u32 pending;    // 0x04
    u32 unk08;      // 0x08
    s32 unk0C;      // 0x0C
};

/* A record of data table 0x23: kind, option, variant and its target value. */
struct MapSceneRecord {
    s8 kind;
    s8 option;
    u8 variant;
    u8 value;
};

struct FlagsBlock {
    u8 unk00[3];
    s8 level;               // 0x03
    u8 unk04[0x18];
    u8 unk1C;               // 0x1C
    u8 unk1D[0x7A7];
    s8 stepRequest;         // 0x7C4
    u8 unk7C5[0xDFF];
    f32 sceneValue;         // 0x15C4
    u8 unk15C8[4];
    s32 sceneResult;        // 0x15CC
};

extern "C" {
extern SceneAdvanceState g_gameState;
extern MapSelection g_mapSelection;
extern s32 DAT_005f1ca4;
u32 gameDataTableGetFlag(void);
void sectionValueSetClamped(s32 value);
void gameValueBlockSet(s32 index, s32 value);
void FUN_002c7ad8(void);

s32 FUN_001ba570(void);
s32 gameDataGetTableValue(void);
s32 sequenceRequestIsPending(void);
MapSceneRecord *dataTableGetRecord23(s32 index);
s32 FUN_003857c8(s32 value);
s32 dataTable23Type1CountWithAoc(void);

/* Advance the scene step requested in the flags block: finish it, or start the next scene. */
void FUN_002d2000(void)
{
    FlagsBlock *flags = reinterpret_cast<FlagsBlock *>(gameFlagsGetBlock());
    s32 request = flags->stepRequest;
    if (request != 0) {
        flags->stepRequest = 0;
        if (request == 1) {
            switch (gameDataTableGetFlag()) {
            case 0:
            case 1:
            case 3:
            case 5:
                if (FUN_001ba570() == 0) {
                    reinterpret_cast<FlagsBlock *>(gameFlagsGetBlock())->level = 0;
                    reinterpret_cast<FlagsBlock *>(gameFlagsGetBlock())->unk1C = 0;
                }
            }
        } else {
            if (gameDataTableGetFlag() <= 0) {
                s32 scene = FUN_003857c8((s32)flags->sceneValue);
                gameValueBlockSet(scene, 1);
                if (scene == 9) {
                    u32 flag = 0x4D2;
                    if (gameFlagIsSet(0x4D2) != 0)
                        flag |= 1;
                    gameFlagSetValue(flag, 1, 1);
                    sectionValueSetClamped(gameDataGetTableValue() + 1);
                    for (s32 i = 0; i < 10; i++)
                        gameValueBlockSet(i, 0);
                    FUN_002c7ad8();
                    flags->sceneResult = 1;
                    return;
                }
                if (scene == 8 && gameFlagIsSet(0x4D1) == 0) {
                    flags->sceneResult = 0x25;
                    gameFlagSetValue(0x4D4, 1, 1);
                    return;
                }
                if (sequenceRequestIsPending() == 0) {
                    g_mapSelection.area = 0x18;
                    g_mapSelection.pending = 1;
                    g_mapSelection.unk0C = 0;
                    s32 found = -1;
                    for (s32 i = 0; i < dataTable23Type1CountWithAoc(); i++) {
                        MapSceneRecord *record = dataTableGetRecord23(i);
                        if (record->kind == 0x18 && record->option == 1 && record->variant == 0) {
                            found = record->value;
                            break;
                        }
                    }
                    DAT_005f1ca4 = found;
                    g_gameState.unk454 = -1;
                    reinterpret_cast<FlagsBlock *>(gameFlagsGetBlock())->level = g_gameState.nextSceneId + 100;
                    FUN_002b945c(g_gameState.nextSceneId);
                    g_gameState.progressEnabled = 1;
                }
                if (scene == 8) {
                    gameFlagSetValue(0x4D4, 1, 1);
                    gameFlagSetValue(0x11D1, 1, 1);
                }
                g_gameState.sceneReady = 1;
                flags->sceneResult = g_gameState.nextSceneId;
            }
        }
    }
}
}
