/* NON_MATCHING: visibility and registration behavior are recovered; the flattened-grid loop, handle-list reloads, and loop entry layout differ. */
#include "common.h"
#include "classes/Obj4209cc.h"
#include "Model/MoriModelManager.h"
#include "map/LmapMainGlobals.h"
#include "Model/MoriModelContent.h"

struct AreaHandleList {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 count;
};

/* The slot's registration byte, read unsigned as retail does here. */
static __inline u8 &areaSlotRegistered(LmapMainStateA *state, u32 index)
{
    return reinterpret_cast<u8 &>(state->areaSlots[index].registered);
}

/* The area model's node list (its binding), as this unit reads it. */
static __inline AreaHandleList *areaHandles(LmapMainStateA *state)
{
    return reinterpret_cast<AreaHandleList *>(state->areaModel->binding);
}

extern "C" {
extern s8 DAT_005f0c04[];
void FUN_00399290(u32 index, s32 visible);
}

// Flatten the area's column-major mask, then synchronize handle registration and visibility.
extern "C" void FUN_003cb948(const s8 grid[10][8])
{
    u32 count = 0;
    LmapMainStateA *state = g_lmapMainState;
    for (s32 column = 0; column < 8; ++column) {
        for (s32 row = 0; row < 10; ++row) {
            if (grid[row][column] != 9)
                DAT_005f0c04[count++] = grid[row][column];
        }
    }
    for (u32 index = 0; index < areaHandles(state)->count; ++index) {
        if (DAT_005f0c04[index] == 1) {
            if (g_lmapMainState == NULL || !areaSlotRegistered(g_lmapMainState, index)) {
                handleRegistryRegisterObject(g_handleRegistry, ptrVectorAt(areaHandles(state), index));
                if (g_lmapMainState != NULL && !areaSlotRegistered(g_lmapMainState, index))
                    areaSlotRegistered(g_lmapMainState, index) = 1;
            }
            FUN_00399290(index, 1);
        } else {
            if (g_lmapMainState != NULL && areaSlotRegistered(g_lmapMainState, index)) {
                ptrListRemoveClearOwner(g_handleRegistry, ptrVectorAt(areaHandles(state), index));
                if (g_lmapMainState != NULL && areaSlotRegistered(g_lmapMainState, index))
                    areaSlotRegistered(g_lmapMainState, index) = 0;
            }
            FUN_00399290(index, 0);
        }
    }
}
