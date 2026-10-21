/* NON_MATCHING: list cursor allocation differs and retail placement construction has a null-address guard. */
#include "shard/Shard0051.h"

struct MaskAction {
    u8 unk00[0x14];
    u32 byteIndex;
};
struct MaskWorkNode {
    MaskWorkNode *previous;
    MaskWorkNode *next;
    Variant payload;
};
struct MaskWorkList {
    MaskWorkNode *previous;
    MaskWorkNode *next;
    void *allocator;
};
struct MaskWorkState {
    u8 unk00[8];
    MaskWorkList output; // 0x08
    MaskWorkList pending; // 0x14
    u8 unk20[4];
    const u8 *baseline; // 0x24
};
struct MaskProcessor {
    void *allocator;
    u8 unk04[0xc];
    u32 byteCount; // 0x10
};
extern "C" {
void *FUN_004387f0(void *, u32);
void FUN_004387bc(void *, void *, u32);
void FUN_005155bc(Variant *);
void FUN_005153cc(Variant *);
void variantSetByteA(Variant *, u32 *, u8);
void FUN_00436d04(MaskProcessor *, u8 *);
void FUN_00436c10(u32 *, MaskProcessor *, u8 *);
void *rt_memcpy(void *, const void *, u32);
s32 rt_memcmp(const void *, const void *, u32);

static inline void unlinkNode(MaskWorkNode *node)
{
    node->previous->next = node->next;
    node->next->previous = node->previous;
}

u32 maskWorkProcessGroupedActions(MaskProcessor *processor, MaskWorkState **work)
{
    MaskWorkList *pending = &(*work)->pending;
    MaskWorkNode *sentinel = (MaskWorkNode *)pending;
    MaskWorkNode *current = pending->next;
    while (current != sentinel) {
        u32 units = (processor->byteCount + 15) >> 4;
        u8 *mask = (u8 *)FUN_004387f0(processor->allocator, units);
        if (!mask)
            return 0;
        rt_memcpy(mask, (*work)->baseline, processor->byteCount);
        mask[((MaskAction *)current->payload.value)->byteIndex] = 1;
        MaskWorkNode *node = pending->next;
        while (node != sentinel) {
            if (node != current && current->payload.byteArg == node->payload.byteArg) {
                mask[((MaskAction *)node->payload.value)->byteIndex] = 1;
                MaskWorkNode *next = node->next;
                unlinkNode(node);
                FUN_005155bc(&node->payload);
                FUN_004387bc(pending->allocator, node, 2);
                node = next;
            } else {
                node = node->next;
            }
        }
        FUN_00436d04(processor, mask);
        if (rt_memcmp(mask, (*work)->baseline, processor->byteCount)) {
            u32 result;
            FUN_00436c10(&result, processor, mask);
            if (!result)
                return 0;
            MaskWorkList *output = &(*work)->output;
            MaskWorkNode *added = (MaskWorkNode *)FUN_004387f0(output->allocator, 2);
            if (!added)
                return 0;
            FUN_005153cc(&added->payload);
            added->previous = output->previous;
            added->next = (MaskWorkNode *)output;
            output->previous = added;
            added->previous->next = added;
            u32 value = result;
            variantSetByteA(&added->payload, &value, current->payload.byteArg);
        }
        FUN_004387bc(processor->allocator, mask, units);
        MaskWorkNode *next = current->next;
        unlinkNode(current);
        FUN_005155bc(&current->payload);
        FUN_004387bc(pending->allocator, current, 2);
        current = next;
    }
    return 1;
}
}
