/* NON_MATCHING: vector argument loads split differently, record address lifetime and VMUL/VADD versus VMLA lowering differ. */
#include "shard/W9_W9Match8_WorkRecords.h"
#include "shard/S1Mover.h"

struct DebugBoundsShapeA {
    u32 unk00;
    s32 subtype;
    u8 unk08[0x14];
    const s32 *kind;
};
struct DebugBoundsObjectA {
    u8 unk00[0x14];
    const DebugBoundsShapeA *shape;
};
extern "C" {
extern s32 DAT_00580c90;
extern DebugBoundsObjectA *DAT_005f3020[];
void FUN_002039a0(u32, Vec3f, Vec3f);

void FUN_00377c60()
{
    EntryPoolRecordA *records = reinterpret_cast<EntryPoolRecordA *>(reinterpret_cast<u8 *>(DAT_005f3020) + 0x280);
    for (s32 i = 0; i < DAT_00580c90; ++i) {
        const DebugBoundsShapeA *shape = DAT_005f3020[i]->shape;
        s32 kind = *shape->kind;
        EntryPoolRecordA *record = &records[i];
        const Vec3f *vertices = reinterpret_cast<const Vec3f *>(record->primaryVectors);
        if (kind == 1) {
            if (shape->subtype == 0x27) {
                FUN_002039a0(0x00FF00FF, vertices[0], vertices[1]);
                FUN_002039a0(0x00FF00FF, vertices[0], vertices[2]);
                FUN_002039a0(0x00FF00FF, vertices[1], vertices[3]);
            }
            FUN_002039a0(0x00FF00FF, vertices[2], vertices[3]);
            const Vec3f *origin = reinterpret_cast<const Vec3f *>(record->unk060);
            const Vec3f *direction = reinterpret_cast<const Vec3f *>(record->vector6C);
            Vec3f end = {origin->x + direction->x * 300.0f, origin->y + direction->y * 300.0f, origin->z + direction->z * 300.0f};
            FUN_002039a0(0xFF0000FF, *origin, end);
        } else if (kind == 2) {
            FUN_002039a0(0x00FF00FF, vertices[4], vertices[5]);
            FUN_002039a0(0x00FF00FF, vertices[5], vertices[7]);
            FUN_002039a0(0x00FF00FF, vertices[6], vertices[7]);
            FUN_002039a0(0x00FF00FF, vertices[4], vertices[6]);
            const Vec3f *origin = reinterpret_cast<const Vec3f *>(record->unk060);
            const Vec3f *direction = reinterpret_cast<const Vec3f *>(record->vector6C);
            Vec3f end = {origin->x + direction->x * 300.0f, origin->y + direction->y * 300.0f, origin->z + direction->z * 300.0f};
            FUN_002039a0(0xFF0000FF, *origin, end);
        }
    }
}
}
