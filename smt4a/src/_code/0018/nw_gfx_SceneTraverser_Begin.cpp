#include "common.h"

extern "C" {

typedef struct Slot {
    /* 0x00 */ u32 current;
    /* 0x04 */ u32 saved;
    /* 0x08 */ u8 unk08[8];
} Slot;                        /* 0x10 */

typedef struct Scene {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ Slot slots[15];
} Scene;

typedef struct Traverser {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Scene *scene;
} Traverser;

/* Starts a traversal of `scene`: attaches it and snapshots all fifteen slot values. */
void nw_gfx_SceneTraverser_Begin(Traverser *traverser, Scene *scene)
{
    traverser->scene = scene;
    scene->slots[0].saved = scene->slots[0].current;
    scene->slots[1].saved = scene->slots[1].current;
    scene->slots[2].saved = scene->slots[2].current;
    scene->slots[3].saved = scene->slots[3].current;
    scene->slots[6].saved = scene->slots[6].current;
    scene->slots[7].saved = scene->slots[7].current;
    scene->slots[8].saved = scene->slots[8].current;
    scene->slots[9].saved = scene->slots[9].current;
    scene->slots[10].saved = scene->slots[10].current;
    scene->slots[4].saved = scene->slots[4].current;
    scene->slots[5].saved = scene->slots[5].current;
    scene->slots[11].saved = scene->slots[11].current;
    scene->slots[12].saved = scene->slots[12].current;
    scene->slots[13].saved = scene->slots[13].current;
    scene->slots[14].saved = scene->slots[14].current;
}

} /* extern "C" */
