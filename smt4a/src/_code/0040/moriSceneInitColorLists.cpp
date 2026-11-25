#include "classes/Obj557b68.h"

namespace {
enum {
    MORI_SCENE_DEFAULT_COLOR = 0x808080ff,
    MORI_SCENE_LIST_RESERVE = 8,
};
}

/* Gives each scene element a default colour slot and reserves its item list. */
extern "C" void moriSceneInitColorLists(Obj557b68 *scene)
{
    scene->vectors.colors.reserve(scene->unk104);
    for (s32 i = 0; i < (s32)scene->unk104; ++i) {
        Obj557b68ColorEntry entry;
        entry.color = MORI_SCENE_DEFAULT_COLOR;
        entry.enabled = 0;
        scene->vectors.colors.push_back(entry);
        scene->vectors.records[i].words.reserve(MORI_SCENE_LIST_RESERVE);
    }
}
