/* NON_MATCHING: retail reads the enabled byte through a second base (marker + 0xB00, offset 0x78) and swaps r3/ip for the state pointer; the rest matches. */
#include "common.h"

extern "C" {

typedef struct LmapMarkerNode {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 flags; /* bits 0-1 set: hidden */
} LmapMarkerNode;

typedef struct LmapMarkerModel {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ void *nodes;
} LmapMarkerModel;

typedef struct LmapMarker {
    /* 0x00 */ u8 enabled;
    /* 0x01 */ u8 shown;
    /* 0x02 */ u8 unk02[0x86];
} LmapMarker;

/* The parts of the Apocalypse map state block this function uses. */
typedef struct LmapMarkerState {
    /* 0x000 */ u8 unk000[0xAE4];
    /* 0xAE4 */ LmapMarkerModel *model;
    /* 0xAE8 */ u8 unkAE8[0x90];
    /* 0xB78 */ LmapMarker markers[1];
} LmapMarkerState;

extern LmapMarkerState *g_lmapMainState;

LmapMarkerNode *FUN_0040619c(void *nodes, s32 index);

/* Shows or hides map marker `index` (when it is enabled), updating its model node's visibility bits. */
void FUN_00399290(s32 index, s32 show)
{
    LmapMarkerState *state = g_lmapMainState;

    if (state != NULL) {
        if (show) {
            if (!state->markers[index].shown && state->markers[index].enabled) {
                state->markers[index].shown = 1;
                LmapMarkerNode *node = FUN_0040619c(state->model->nodes, index);
                node->flags &= ~3;
            }
        } else if (state->markers[index].shown && state->markers[index].enabled) {
            state->markers[index].shown = 0;
            LmapMarkerNode *node = FUN_0040619c(state->model->nodes, index);
            node->flags |= 3;
        }
    }
}

} /* extern "C" */
