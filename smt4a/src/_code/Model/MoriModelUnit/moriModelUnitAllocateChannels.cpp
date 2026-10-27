/* NON_MATCHING: retail hoists the zero constant into r8 at entry (built copies it from the index register) and keeps the float count in r5 / byte size in r6 (swapped here). */
#include "Model/ModelUnitBuffers.h"
#include "Model/IdArraySize.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {
extern const char DAT_00526108[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void FUN_0045aee0(void *array, u16 *data, s32 count);
void FUN_0045af14(void *array, f32 *data, s32 count);

/* The largest element count among a table's meshes. */
static __inline s32 maxElementCount(UnitMeshTable *table)
{
    s32 capacity = 0;
    s32 meshCount = table->count;
    for (s32 index = 0; index < meshCount; ++index) {
        s32 count = table->meshes[index]->elementCount;
        if (capacity < count) {
            capacity = count;
        }
    }
    return capacity;
}

// Size both mesh channels from the largest mesh and allocate the node position array.
void moriModelUnitAllocateChannels(ModelUnitBuffers *unit)
{
    UnitModelView *view = unit->content == NULL ? NULL : &unit->content->view;
    if (view != NULL) {
        s32 capacity = maxElementCount(view->table);
        for (s32 index = 0; index < 2; ++index) {
            UnitChannel *channel = &unit->channels[index];
            channel->unk00 = 0;
            channel->unk04 = 0.0f;
            channel->unk08 = 0.0f;
            channel->unk0c = 0;
            channel->data = NULL;
            channel->unk2c = 0;
            channel->enabled = 1;
            channel->capacity = capacity;
            if (capacity > 0) {
                u32 bytes = idArrayByteSize(capacity);
                asdDebugTrace(DAT_00526108, 0x1a8);
                channel->data = static_cast<u16 *>(asdMemoryAlloc(0x10000, 0x100, 0, bytes, 1));
                FUN_0045aee0(channel->array, channel->data, capacity);
            }
        }
        UnitFloatChannel *positions = &unit->positions;
        s32 floatCount = unit->nodes->count * 3;
        u32 bytes = floatCount * sizeof(f32);
        if (bytes == 0) {
            positions->data = NULL;
        } else {
            asdDebugTrace(DAT_00526108, 0x250);
            positions->data = static_cast<f32 *>(asdMemoryAlloc(0x10000, 0x100, 0, bytes, 1));
            FUN_0045af14(positions, positions->data, floatCount);
        }
        positions->enabled = 0;
        positions->unk0c = 0.0f;
        positions->unk10 = 0.0f;
    }
}
}
