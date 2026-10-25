/* NON_MATCHING: retail keeps a separate pointer to slot->shown (add #0x85) and computes &models before the branch; ours addresses both fields off one slot base. */
#include "common.h"
#include "classes/Obj4209cc.h"

extern "C" {

/* A model node: its low two flag bits hide it. */
typedef struct LmapModelNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 flags;
} LmapModelNode;

#define LMAP_MODEL_NODE_HIDDEN 3

typedef struct LmapModelSet {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *group;
} LmapModelSet;

/* A per-model slot of the map main state (0x88 bytes). */
typedef struct LmapModelSlot {
    /* 0x00 */ u8 unk00[0x84];
    /* 0x84 */ u8 loaded;
    /* 0x85 */ u8 shown;
    /* 0x86 */ u8 unk86[2];
} LmapModelSlot;

/* The map main state: only the model set and slots are named here. */
typedef struct LmapModelState {
    /* 0x0000 */ u8 unk0000[0x4EF8];
    /* 0x4EF8 */ LmapModelSet *models;
    /* 0x4EFC */ u8 unk4EFC[4];
    /* 0x4F00 */ LmapModelSlot slots[1];
} LmapModelState;

extern LmapModelState *g_lmapMainState;


/* Shows or hides map model `index`, updating its node once the model is loaded. */
void FUN_003b5c54(s32 index, s32 show)
{
    LmapModelSlot *slot;

    if (g_lmapMainState == NULL) {
        return;
    }
    slot = &g_lmapMainState->slots[index];
    if (show) {
        if (slot->shown) {
            return;
        }
        slot->shown = 1;
        if (!slot->loaded) {
            return;
        }
        reinterpret_cast<LmapModelNode *>(FUN_0040619c(g_lmapMainState->models->group, index))->flags &= ~LMAP_MODEL_NODE_HIDDEN;
    } else {
        if (!slot->shown) {
            return;
        }
        slot->shown = 0;
        if (!slot->loaded) {
            return;
        }
        reinterpret_cast<LmapModelNode *>(FUN_0040619c(g_lmapMainState->models->group, index))->flags |= LMAP_MODEL_NODE_HIDDEN;
    }
}

} /* extern "C" */
