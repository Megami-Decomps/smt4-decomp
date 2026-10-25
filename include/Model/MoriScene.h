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
struct MoriPassConfig {
    void *target;
    u8 enabled;
    u8 unk05[3];
    u32 width;
    u32 height;
    u32 depth;
    u8 unk14;
};
typedef char MoriSceneConfigLayoutCheck[sizeof(MoriSceneConfig) == 0x10 &&
    offsetof(MoriPassConfig, width) == 8 && offsetof(MoriPassConfig, unk14) == 0x14 &&
    sizeof(MoriPassConfig) == 0x18 ? 1 : -1];
extern "C" {
void moriSceneSetFogDefaults(Obj557b68 *, const MoriSceneConfig *);
void FUN_0040ae70(Obj557c48 *manager, s32 attach);
}
#endif
