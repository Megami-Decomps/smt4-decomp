/* NON_MATCHING: retail resolves the self-relative table/record pointers with one null merge per level and keeps a zero register; the if-form `rel()` helper (as in resourceGetRelativeElement) moves closer, and the part copies are scheduled differently. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/AsdDebug.h"
#include "shard/W6_W6Match4_RelativeResourceGraph.h"
#include "AsdSDK/AsdMemAlloc.h"

struct AsdMdlVec3 { f32 v[3]; };
struct AsdMdlMtx33 { f32 m[9]; };

/* One part of a model record: its box centre, the rotation to its own frame and its half extents. */
struct AsdMdlPart {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AsdMdlVec3 center;
    /* 0x10 */ AsdMdlMtx33 rotation;
    /* 0x34 */ AsdMdlVec3 extent;
};

struct AsdMdlPartHandle {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ ResourceRelativePointer<AsdMdlPart> part;
};

extern "C" {

AsdMdlPartHandle *resourceGetRelativeElement(const RelativeResourceOwner *owner, s32 recordIndex, s32 elementIndex);
void nn_math_ARMv6_VEC3TransformAsm_2A87B4(AsdMdlVec3 *result, const AsdMdlMtx33 *rotation, const AsdMdlVec3 *vector);

/* Allocates the per-record array of a model object and fills it with the furthest horizontal and
 * highest vertical extent of each record's parts. */
u32 asdMdlObjectBuildBounds(AsdMdlObject *object)
{
    if (object != NULL && object->node != NULL && object->node->data != NULL) {
        s32 recordCount = object->node->count;
        if (recordCount > 0) {
            asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdMdlManager.cpp", 1115);
            object->records = (AsdMdlRecord *)asdMemoryAllocTracked(0x100, 0x100, 0, recordCount * sizeof(AsdMdlRecord), 1);
            for (s32 record = 0; record < recordCount; record++) {
                AsdMdlRecord *bounds = &object->records[record];
                RelativeResourceTable *table = ((RelativeResourceOwner *)object)->resource->view->blob->table.get();
                RelativeResourceRecord *info = table != NULL ? table->entries[record].record.get() : NULL;
                s32 partCount = info->elementList.count;
                asdDebugTrace("c:\\SMT4F\\SMT4F\\AsdSDK\\Source\\Gfx\\Model\\AsdMdlManager.cpp", 1121);
                bounds->data = asdMemoryAllocTracked(0x100, 0x100, 0, partCount * 0x84, 1);
                bounds->count = partCount;
                f32 radius = 0.0f;
                f32 height = 0.0f;
                for (s32 part = 0; part < partCount; part++) {
                    AsdMdlPart *box = resourceGetRelativeElement((RelativeResourceOwner *)object, record, part)->part.get();
                    AsdMdlVec3 center = box->center;
                    AsdMdlMtx33 rotation = box->rotation;
                    AsdMdlVec3 extent = box->extent;
                    AsdMdlVec3 corner;
                    nn_math_ARMv6_VEC3TransformAsm_2A87B4(&corner, &rotation, &extent);
                    f32 x = corner.v[0] * 0.5f + center.v[0];
                    if (radius < x)
                        radius = x;
                    f32 y = corner.v[1] * 0.5f + center.v[1];
                    f32 z = corner.v[2] * 0.5f + center.v[2];
                    if (radius < z)
                        radius = z;
                    if (height < y)
                        height = y;
                }
                bounds->radius = radius;
                bounds->height = height;
            }
            return 1;
        }
    }
    return 0;
}

} /* extern "C" */
