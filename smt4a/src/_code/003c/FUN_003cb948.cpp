/* NON_MATCHING: visibility and registration behavior are recovered; the flattened-grid loop, handle-list reloads, and loop entry layout differ. */
#include "common.h"

struct AreaHandleList {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 count;
};

struct AreaHandleScene {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ AreaHandleList *handles;
};

struct AreaHandleRegistration {
    /* 0x00 */ u8 registered;
    /* 0x01 */ u8 unk01[0x87];
};

struct AreaHandleVisibilityState {
    /* 0x000 */ u8 unk000[0xae4];
    /* 0xAE4 */ AreaHandleScene *scene;
    /* 0xAE8 */ u8 unkae8[0x90];
    /* 0xB78 */ AreaHandleRegistration entries[1];
};

extern "C" {
extern AreaHandleVisibilityState *g_lmapMainState;
extern s8 DAT_005f0c04[];
extern void *g_handleRegistry;
void *FUN_0040619c(AreaHandleList *list, u32 index);
void ptrListRemoveClearOwner(void *registry, void *object);
void handleRegistryRegisterObject(void *registry, void *object);
void FUN_00399290(u32 index, s32 visible);
}

// Flatten the area's column-major mask, then synchronize handle registration and visibility.
extern "C" void FUN_003cb948(const s8 grid[10][8])
{
    u32 count = 0;
    AreaHandleVisibilityState *state = g_lmapMainState;
    for (s32 column = 0; column < 8; ++column) {
        for (s32 row = 0; row < 10; ++row) {
            if (grid[row][column] != 9)
                DAT_005f0c04[count++] = grid[row][column];
        }
    }
    for (u32 index = 0; index < state->scene->handles->count; ++index) {
        if (DAT_005f0c04[index] == 1) {
            if (g_lmapMainState == NULL || !g_lmapMainState->entries[index].registered) {
                handleRegistryRegisterObject(g_handleRegistry, FUN_0040619c(state->scene->handles, index));
                if (g_lmapMainState != NULL && !g_lmapMainState->entries[index].registered)
                    g_lmapMainState->entries[index].registered = 1;
            }
            FUN_00399290(index, 1);
        } else {
            if (g_lmapMainState != NULL && g_lmapMainState->entries[index].registered) {
                ptrListRemoveClearOwner(g_handleRegistry, FUN_0040619c(state->scene->handles, index));
                if (g_lmapMainState != NULL && g_lmapMainState->entries[index].registered)
                    g_lmapMainState->entries[index].registered = 0;
            }
            FUN_00399290(index, 0);
        }
    }
}
