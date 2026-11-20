/* NON_MATCHING: builds the lmap marker list and places every marker from the digits of its node name (area origin, cell size, centring offset); written from the decompilation and the retail disassembly, the guarded identity matrix and the table copy not compared with retail */
#include "common.h"
#include "game/GameState.h"
#include "map/LmapMainGlobals.h"

struct LmapNodeData {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ s32 nameOffset;      /* self-relative offset of the node name */
};

struct LmapNode {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ LmapNodeData *data;
};

struct LmapNodeList {
    /* 0x00 */ LmapNode **nodes;
    /* 0x04 */ s32 count;
};

struct Mtx33 {
    f32 m[9];
};

#define LMAP_AREA_BASE 100
#define LMAP_CELL_SCALE 3575.0f
#define LMAP_CELL_SCALE_ALT 3775.0f
#define LMAP_CENTRE_OFFSET 1787.5f
#define LMAP_MARKER_HEIGHT 10.0f

extern "C" {
extern s32 DAT_0049f920;
extern char DAT_00447088[];       /* resource paths, 0x50 bytes apart */

void *FUN_00316f70(u32 source, s32 kind);
void sceneAttachLightChild(LmapNodeList *list, s32 index);
void lmapSlotSetVisible(s32 index, s32 flag);
void lmapApplyLightVisibilityGrid(const char *path);
void nn_math_ARMv6_MTX33CopyAsm(Mtx33 *destination, const Mtx33 *source);

/* Origin (x, y, z) of each of the four map areas. */
static const f32 lmapAreaOrigin[4][3] = {
    { 0.0f, 0.0f, 0.0f },
    { -24560.0f, 0.0f, -16730.0f },
    { -16200.0f, 0.0f, -15480.0f },
    { -12160.0f, 0.0f, -14000.0f },
};

/* The marker model's node list. */
static __inline LmapNodeList *markerNodes(LmapMainState *state)
{
    return static_cast<LmapNodeList *>(state->markerModels);
}

void FUN_002666b0(void)
{
    LmapMainState *state = g_lmapMainState;
    if (state == NULL)
        return;
    state->markerModels = FUN_00316f70(state->markerSource, 0x2A);
    state->unkA94 = 0;
    state->markerSource = 0;
    LmapMainState *current = g_lmapMainState;

    if (g_gameState.mapId == 0x65 && DAT_0049f920 >= 1 && DAT_0049f920 <= 9) {
        lmapApplyLightVisibilityGrid(DAT_00447088 + 0x50 * (DAT_0049f920 - 1));
    } else {
        for (s32 i = 0; i < markerNodes(current)->count; i++) {
            sceneAttachLightChild(markerNodes(state), i);
            if (g_lmapMainState != NULL) {
                if (g_lmapMainState->slots[i].registered == 0)
                    g_lmapMainState->slots[i].registered = 1;
            }
            lmapSlotSetVisible(i, 1);
        }
    }

    for (s32 i = 0; i < markerNodes(state)->count; i++) {
        static const Mtx33 identity = { { 1.0f, 0.0f, 0.0f, 0.0f, 1.0f, 0.0f, 0.0f, 0.0f, 1.0f } };
        Mtx33 rotation;
        nn_math_ARMv6_MTX33CopyAsm(&rotation, &identity);

        f32 scale = DAT_0049f920 == 99 ? LMAP_CELL_SCALE_ALT : LMAP_CELL_SCALE;
        LmapNodeData *data = markerNodes(state)->nodes[i]->data;
        const char *name = reinterpret_cast<const char *>(&data->nameOffset);
        if (data->nameOffset != 0)
            name += data->nameOffset;
        f32 cellX = (f32)(name[5] - 0x31);
        s32 area = state->mapId - LMAP_AREA_BASE;
        f32 cellZ = (f32)((name[7] - 0x30) * 10 + name[8] - 0x31);

        LmapMainSlot *pose = &state->slots[i];
        pose->position.x = lmapAreaOrigin[area][0] + cellX * LMAP_CELL_SCALE + LMAP_CENTRE_OFFSET;
        pose->position.y = LMAP_MARKER_HEIGHT;
        pose->position.z = lmapAreaOrigin[area][2] + cellZ * LMAP_CELL_SCALE + LMAP_CENTRE_OFFSET;
        *reinterpret_cast<Mtx33 *>(pose->rotation) = rotation; /* the slot keeps the 3x3 as nine floats */
        pose->scale[0] = scale;
        pose->scale[1] = scale;
        pose->scale[2] = scale;
    }
}

} /* extern "C" */
