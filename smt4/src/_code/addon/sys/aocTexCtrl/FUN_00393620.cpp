/* NON_MATCHING: texture-list header copy and allocation/node register scheduling differ. */
#include "addon/sys/aocTexCtrl.h"
#include "AsdSDK/AsdDebug.h"
#include <stddef.h>

namespace {
struct AocTextureListHeader {
    u32 unk00[8];
    s32 nodeCount;
    u32 unk24[7];
};
struct AocTextureListValue { u32 data[5]; };
struct AocTextureListNode {
    u32 id;
    s32 count;
    u8 mode, unk09[3];
    AocTextureListValue *values;
    AocTextureListNode *next;
};
/* This resource allocates only the first two words of the shared opaque state. */
struct AocTextureListStateView {
    AocTextureListHeader *header;
    AocTextureListNode *head;
};
struct AocTextureFile { const AocTextureListHeader *header; };
struct AocTextureSerializedNode {
    u8 id, unk01[3], count, unk05[3], mode, unk09[3];
    AocTextureListValue values[1];
};
typedef char AocTextureListLayouts[sizeof(AocTextureListHeader) == 0x40 &&
    sizeof(AocTextureListNode) == 0x14 && offsetof(AocTextureSerializedNode, values) == 0xC ? 1 : -1];
}
extern "C" {
extern const char DAT_003ff788[];
void *asdMemAlloc(u32 alignment, u32 granularity, s32 heap, u32 bytes, s32 clear);
void rt_memcpy_w(void *destination, const void *source, u32 bytes);

void FUN_00393620(AocTexCtrl *control, const AocTextureFile *file)
{
    if (control->state != NULL)
        return;
    const AocTextureListHeader *source = file->header;
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\sys\\aocTexCtrl.cpp", 902);
    control->state = static_cast<AocTexState *>(asdMemAlloc(0x100, 0x100, 0, sizeof(AocTextureListStateView), 1));
    asdDebugTrace("c:\\SMT4\\XRD686\\sdds4\\Patch\\addon\\sys\\aocTexCtrl.cpp", 904);
    AocTextureListHeader *header = static_cast<AocTextureListHeader *>(asdMemAlloc(0x100, 0x100, 0, sizeof(*header), 1));
    AocTextureListStateView *state = reinterpret_cast<AocTextureListStateView *>(control->state);
    state->header = header;
    *header = *source;
    const AocTextureSerializedNode *input = reinterpret_cast<const AocTextureSerializedNode *>(file->header + 1);
    AocTextureListNode *previous = NULL;
    for (s32 index = 0; index < header->nodeCount; ++index) {
        asdDebugTrace(DAT_003ff788, 97);
        AocTextureListNode *node = static_cast<AocTextureListNode *>(asdMemAlloc(0x100, 0x100, 0, sizeof(*node), 1));
        node->id = input->id;
        node->count = input->count;
        node->mode = input->mode;
        AocTextureListValue *values = NULL;
        if (node->count > 0) {
            asdDebugTrace(DAT_003ff788, 111);
            values = static_cast<AocTextureListValue *>(asdMemAlloc(0x100, 0x100, 0, node->count * sizeof(*values), 1));
        }
        node->values = values;
        if (node->count > 0)
            rt_memcpy_w(node->values, input->values, node->count * sizeof(*values));
        if (previous == NULL)
            reinterpret_cast<AocTextureListStateView *>(control->state)->head = node;
        else
            previous->next = node;
        input = reinterpret_cast<const AocTextureSerializedNode *>(
            reinterpret_cast<const u8 *>(input) + 12 + node->count * sizeof(*values));
        previous = node;
    }
}
}
