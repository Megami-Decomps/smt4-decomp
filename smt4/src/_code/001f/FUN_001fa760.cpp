/* NON_MATCHING: only the first instructions are scheduled differently (retail loads g_mapIf into r2 after the constant moves) */
#include "common.h"

struct Vec4 {
    f32 x, y, z, w;
};

struct Vec3 {
    f32 x, y, z;
};

struct MapModel {
    u8 unk00[8];    // 0x00
    void *node;     // 0x08
};

struct MapIfBlock {
    u8 active;       // 0x00
    u8 unk01[3];     // 0x01
    u32 unk04;       // 0x04
    u32 unk08;       // 0x08
    Vec4 position;   // 0x0C
    MapModel *model; // 0x1C
};

struct MapIf {
    u8 unk0000[0xCBF0];   // 0x0000
    MapIfBlock block;     // 0xCBF0
};

extern "C" {

extern MapIf *g_mapIf; /* 0x447a78 */

MapModel *asdMdlManagerCreateLoaded(const char *path, s32 heap);
void FUN_002a0428(MapModel *model, s32 mode);
void nodeSetTranslation(void *node, s32 index, const Vec3 *translation);
void FUN_0028c618(void *node, s32 index, Vec3 scale);

/* Creates the map action-manhole marker model at the given position (xyz, w) and starts it. */
void FUN_001fa760(Vec4 position)
{
    MapIfBlock *block = &g_mapIf->block;
    Vec3 scale;

    block->active = 1;
    block->unk04 = 0;
    block->unk08 = 0;
    block->position = position;
    block->model = asdMdlManagerCreateLoaded("map/all/action_manhole.bam", 7);
    FUN_002a0428(block->model, 1);
    nodeSetTranslation(block->model->node, 0, (const Vec3 *)&block->position);
    scale.x = 0.0f;
    scale.y = block->position.w;
    scale.z = 0.0f;
    FUN_0028c618(block->model->node, 0, scale);
}

} /* extern "C" */
