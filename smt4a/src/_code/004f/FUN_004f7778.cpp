/* NON_MATCHING: Initial active-placement search block layout, owner/placement saved registers and the first vector-add load order differ. */
#include "shard/W6_W6Match8_BattleSpritePlacement.h"

struct PlacementControllerSnapshot {
    u32 data[0x82];
    u8 geometryTag;
    u8 unk209[3];
};
extern "C" {
void sysMemClear(void *memory, u32 size);
void FUN_003bfd84(PlacementControllerSnapshot *snapshot, void *controller);
void FUN_003cbb60(void *controller, BattleSpritePlacement *placement, PlacementControllerSnapshot *snapshot);
void controllerSetDestination(void *controller, const BattleVector3 *position);
void tripleOwnerSetValue(void *controller, const BattleVector3 *value);
void FUN_004019c0(BattleSpritePlacement *placement, BattleVector3 *value, f32 frame);
void FUN_00401b50(BattleSpritePlacement *placement, BattleVector3 *position, f32 frame);
void __aeabi_memcpy4(void *destination, const void *source, u32 size);

u32 FUN_004f7778(void *owner)
{
    /* Apocalypse's owner arrays exceed the shared placement-prefix layouts. */
    struct RuntimeResource {
        u32 unk00;
        void *controller;
    };
    struct RuntimeEntry {
        RuntimeResource *resource;
        s32 key;
        u32 unk08;
        f32 frame;
        BattleVector3 offset;
        u8 unk1C[8];
        u32 flags;
    };
    struct PlacementEntry {
        s32 key;
        BattleFrameSprite *resource;
        BattleSpritePlacement placement;
        u8 unk28[0x10];
        u32 flags;
    };
    struct OwnerView {
        u8 unk0000[0x190];
        RuntimeEntry runtime[50];
        u8 unk0960[0xA38];
        PlacementEntry placements[50];
        u8 unk1F50[0x16C8];
        PlacementControllerSnapshot snapshots[50];
    };
    struct GeometrySnapshotTagView {
        u8 unk00[0x34];
        u32 tag;
    };
    typedef char LayoutCheck[sizeof(RuntimeEntry) == 0x28 && sizeof(PlacementEntry) == 0x3C &&
        sizeof(PlacementControllerSnapshot) == 0x20C && offsetof(OwnerView, placements) == 0x1398 &&
        offsetof(OwnerView, snapshots) == 0x3618 ? 1 : -1];
    OwnerView *view = (OwnerView *)owner;
    for (s32 runtimeIndex = 0; runtimeIndex < 50; ++runtimeIndex) {
        RuntimeEntry *runtime = &view->runtime[runtimeIndex];
        if ((runtime->flags & 2) != 0) {
            s32 index = 0;
            while (view->placements[index].key != runtime->key ||
                   (view->placements[index].flags & 1) == 0) {
                if (++index >= 50) {
                    return 0;
                }
            }
            sysMemClear(view->snapshots, sizeof(view->snapshots));
            for (index = 0; index < 50; ++index) {
                PlacementEntry *entry = &view->placements[index];
                if (entry->key == runtime->key) {
                    BattleVector3 value;
                    FUN_004019c0(&entry->placement, &value, runtime->frame);
                    void *controller = runtime->resource->controller;
                    tripleOwnerSetValue(controller, &value);
                    BattleVector3 position;
                    FUN_00401b50(&entry->placement, &position, runtime->frame);
                    position.x += runtime->offset.x;
                    position.y += runtime->offset.y;
                    position.z += runtime->offset.z;
                    controllerSetDestination(controller, &position);
                    PlacementControllerSnapshot snapshot;
                    FUN_003bfd84(&snapshot, runtime->resource->controller);
                    __aeabi_memcpy4(&view->snapshots[index], &snapshot, sizeof(snapshot));
                    view->snapshots[index].geometryTag =
                        ((GeometrySnapshotTagView *)entry->placement.geometry->geometry)->tag;
                    FUN_003cbb60(runtime->resource->controller, &entry->placement, &snapshot);
                    break;
                }
            }
        }
    }
    return 1;
}
}
