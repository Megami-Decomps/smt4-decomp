/* NON_MATCHING: group selection uses predicated address calculations and animation-node reloads collapse; -O2 candidate. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct VisibilityResource {
    u8 unk000[0x1f6];
    u8 enabled; // 0x1f6
};
struct VisibilityNodeState {
    u8 unk00[0x2c];
    VisibilityResource *resource; // 0x2c
    u8 unk30[8];
    u32 animation; // 0x38
};
struct VisibilitySnapshot {
    u8 active; // 0x00
    u8 pending; // 0x01
    u8 visible; // 0x02
    u8 unk03;
    f32 position[3]; // 0x04
    f32 rotationY; // 0x10
    u32 animation; // 0x14
    u8 unk18[8];
    AsdMdlObject *object; // 0x20
    u8 unk24[8];
};
struct VisibilityScene {
    u8 unk0000[0xc];
    u16 kind; // 0x000c
    u8 unk000e[0x1106];
    VisibilitySnapshot primary[9]; // 0x1114
    VisibilitySnapshot secondary[3]; // 0x12a0
};
struct VisibilityGameFlags {
    u8 unk00[0x22];
    u8 hidden; // 0x22
};
extern "C" {
extern VisibilityScene *DAT_00447e10;
extern VisibilityGameFlags g_gameState;
void FUN_001e2d88();
void FUN_0029bb14(AsdMdlNode *, f32);
void nodeSetTranslation(AsdMdlNode *, s32, const f32 *);
void FUN_0028c618(AsdMdlNode *, s32, f32, f32, f32);
void modelSelectPrimaryMotion(AsdMdlNode *, f32);

// Hide active map objects temporarily, then restore their visibility and saved transforms.
void mapObjectVisibilityRestore()
{
    if (DAT_00447e10->kind != 22)
        return;
    FUN_001e2d88();
    for (s32 group = 0; group < 2; ++group) {
        s32 count = group == 0 ? 9 : 3;
        for (s32 i = 0; i < count; ++i) {
            VisibilitySnapshot *snapshot = group == 0 ? &DAT_00447e10->primary[i] : &DAT_00447e10->secondary[i];
            if (!snapshot->active)
                continue;
            if (g_gameState.hidden) {
                AsdMdlObject *object = snapshot->object;
                if (!(object->flags & 2)) {
                    object->flags |= 2;
                    ((VisibilityNodeState *)object->node)->resource->enabled = 0;
                    FUN_0029bb14(snapshot->object->node, 0.0f);
                }
                snapshot->pending = 1;
            } else if (snapshot->pending) {
                AsdMdlObject *object = snapshot->object;
                u32 flags = object->flags;
                if (snapshot->visible) {
                    if (flags & 2) {
                        object->flags = flags & ~2u;
                        ((VisibilityNodeState *)object->node)->resource->enabled = 1;
                        FUN_0029bb14(snapshot->object->node, 1.0f);
                    }
                } else if (!(flags & 2)) {
                    object->flags = flags | 2;
                    ((VisibilityNodeState *)object->node)->resource->enabled = 0;
                    FUN_0029bb14(snapshot->object->node, 0.0f);
                }
                nodeSetTranslation(snapshot->object->node, 0, snapshot->position);
                FUN_0028c618(snapshot->object->node, 0, 0.0f, snapshot->rotationY, 0.0f);
                if (((VisibilityNodeState *)snapshot->object->node)->animation != snapshot->animation)
                    modelSelectPrimaryMotion(snapshot->object->node, 0.0f);
                snapshot->pending = 0;
            }
        }
    }
}
}
