/* NON_MATCHING: maximum-mesh loop unrolling, allocation-size hoisting, and buffer-pointer registers differ from retail; O2 also differs. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct UnitMeshDescriptor {
    u8 unk00[0x10];
    s32 elementCount;
};
struct UnitMeshTable {
    u8 unk00[0x60];
    UnitMeshDescriptor **meshes; /* 0x60 */
    u16 count;                  /* 0x64 */
};
struct UnitModelView {
    u8 unk00[0x30];
    UnitMeshTable *table;
};
struct UnitModelContent {
    u8 unk00[0xc];
    UnitModelView view;
};
struct UnitChannel {
    u32 unk00;
    f32 unk04;
    f32 unk08;
    u32 unk0c;
    u16 *data;       /* 0x10 */
    u8 array[8];     /* 0x14 */
    s32 capacity;    /* 0x1c */
    u8 enabled;      /* 0x20 */
    u8 unk21[0xb];
    u32 unk2c;
};
struct UnitFloatChannel {
    u8 unk00[8];
    f32 *data;       /* 0x08 */
    f32 unk0c;
    f32 unk10;
    u8 unk14[4];
    u8 enabled;      /* 0x18 */
    u8 unk19[3];
};
struct UnitNodeTable {
    u8 unk00[8];
    s32 count;
};
struct ModelUnitBuffers {
    u8 unk00[8];
    UnitFloatChannel positions; /* 0x008 */
    UnitChannel channels[2];    /* 0x024 */
    u8 unk084[0x84];
    UnitNodeTable *nodes;       /* 0x108 */
    u8 unk10c[0x100];
    UnitModelContent *content;  /* 0x20c */
};

extern "C" {
extern const char DAT_00526108[];
void *asdMemoryAlloc(u32 heap, u32 alignment, u32 flags, u32 size, u32 clear);
void FUN_0045aee0(void *array, u16 *data, s32 count);
void FUN_0045af14(void *array, f32 *data, s32 count);

// Size both mesh channels from the largest mesh and allocate the node position array.
void moriModelUnitAllocateChannels(ModelUnitBuffers *unit)
{
    UnitModelView *view = unit->content == NULL ? NULL : &unit->content->view;
    if (view != NULL) {
        s32 capacity = 0;
        for (s32 index = 0; index < view->table->count; ++index) {
            s32 count = view->table->meshes[index]->elementCount;
            if (capacity < count) {
                capacity = count;
            }
        }
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
                u32 bytes = capacity * sizeof(u16);
                asdDebugTrace(DAT_00526108, 0x1a8);
                channel->data = static_cast<u16 *>(asdMemoryAlloc(0x10000, 0x100, 0, bytes, 1));
                FUN_0045aee0(channel->array, channel->data, capacity);
            }
        }
        s32 count = unit->nodes->count;
        u32 bytes = count * 3 * sizeof(f32);
        if (bytes == 0) {
            unit->positions.data = NULL;
        } else {
            asdDebugTrace(DAT_00526108, 0x250);
            unit->positions.data = static_cast<f32 *>(asdMemoryAlloc(0x10000, 0x100, 0, bytes, 1));
            FUN_0045af14(&unit->positions, unit->positions.data, count * 3);
        }
        unit->positions.enabled = 0;
        unit->positions.unk0c = 0.0f;
        unit->positions.unk10 = 0.0f;
    }
}
}
