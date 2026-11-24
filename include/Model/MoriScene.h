#ifndef MODEL_MORISCENE_H
#define MODEL_MORISCENE_H
#include "classes/Obj557b68.h"
#include "classes/Obj557c48.h"
#include "shard/S3UiLookup.h"
#include <stddef.h>

struct MoriSceneConfig {
    s32 range;
    u16 mode;
    u16 layer;
    u16 enabled;
    u8 unk0A;
    u8 unk0B;
    u8 unk0C;
    u8 unk0D;
};
typedef char MoriSceneConfigLayoutCheck[sizeof(MoriSceneConfig) == 0x10 ? 1 : -1];
extern "C" {
void moriSceneSetFogDefaults(Obj557b68 *, const MoriSceneConfig *);
void moriModelManagerEnsureScene(Obj557c48 *manager, s32 attach);
}
#endif
