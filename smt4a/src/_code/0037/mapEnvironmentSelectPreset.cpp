#include "shard/W5_W5Match7_SceneState.h"
#include "map/mapMain.h"

struct MapEnvironmentTableA {
    /* 0x000 */ u8 unk000[0x784];
    /* 0x784 */ MapTableEntry normal[15];
    /* 0x7fc */ MapTableEntry alternate[5];
};

extern "C" {
extern GameStateA g_gameState;
extern MapEnvironmentTableA *g_mapTable;
s32 gameFlagIsSet(u32 flag);
void mapEnvironmentApplyPreset(u32 preset, s32 transition);

void mapEnvironmentSelectPreset(s32 index)
{
    if (g_gameState.mode == 0x27) {
        if (gameFlagIsSet(0x9d)) {
            if (index == 1) {
                mapEnvironmentApplyPreset(g_mapTable->alternate[0].value, 0);
                return;
            }
            if (index == 2) {
                mapEnvironmentApplyPreset(g_mapTable->alternate[1].value, 0);
                return;
            }
            if (index == 3) {
                mapEnvironmentApplyPreset(g_mapTable->alternate[2].value, 0);
                return;
            }
            if (index == 4) {
                mapEnvironmentApplyPreset(g_mapTable->alternate[3].value, 0);
                return;
            }
            if (index == 5) {
                mapEnvironmentApplyPreset(g_mapTable->alternate[4].value, 0);
                return;
            }
        }
    } else if (g_gameState.mode == 0x14) {
        if (gameFlagIsSet(0x170)) {
            mapEnvironmentApplyPreset(8, 0);
            return;
        }
    } else if (g_gameState.mode == 0x1a) {
        if ((gameFlagIsSet(0x4c9) && gameFlagIsSet(0x179) && !gameFlagIsSet(0x19f)) ||
            (!gameFlagIsSet(0x4c9) && gameFlagIsSet(0x179) && !gameFlagIsSet(0x184))) {
            mapEnvironmentApplyPreset(2, 0);
            return;
        }
    }
    mapEnvironmentApplyPreset(g_mapTable->normal[index].value, 0);
}
}
