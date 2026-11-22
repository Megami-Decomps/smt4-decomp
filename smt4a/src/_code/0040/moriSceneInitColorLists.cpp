#include <vector>
#include "common.h"

/* One colour slot of a model scene (8 bytes): a grey opaque colour, off until set. */
struct SceneColorEntry {
    /* 0x0 */ u32 color;
    /* 0x4 */ u8 enabled;
};

struct SceneListItem;

/* The part of the model scene (Obj557b68) this function fills: its colour slots and its eight item lists
 * (released by FUN_00406a1c). */
struct SceneColorLists {
    /* 0x000 */ u8 unk000[0x104];
    /* 0x104 */ s32 count;
    /* 0x108 */ std::vector<SceneColorEntry> colors;
    /* 0x114 */ std::vector<SceneListItem *> lists[8];
};

/* Gives the scene one default colour slot per element and room for eight items in each element's list. */
extern "C" void moriSceneInitColorLists(SceneColorLists *scene)
{
    scene->colors.reserve(scene->count);
    for (s32 i = 0; i < scene->count; i++) {
        SceneColorEntry entry;
        entry.color = 0x808080ff;
        entry.enabled = 0;
        scene->colors.push_back(entry);
        scene->lists[i].reserve(8);
    }
}
