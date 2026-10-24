/* NON_MATCHING: list/mask-work builder; inlined intrusive-list helpers of retail are written out as loops and the three embedded-list emptiness tests schedule differently */
#include "common.h"

/* A doubly linked list node: next at +0, previous at +4 in the callee's view; here the source list
 * uses +4 as the forward link. */
struct SourceNode {
    /* 0x00 */ SourceNode *previous;
    /* 0x04 */ SourceNode *next;
};

struct MaskNode {
    /* 0x00 */ MaskNode *next;
    /* 0x04 */ MaskNode *previous;
    /* 0x08 */ u8 body[0x1C];
    /* 0x24 */ u8 *flags;          /* one flag per source entry */
    /* 0x28 */ u8 unk28[4];
    /* 0x2C */ u8 selected;
};

struct MaskLinks {
    MaskNode *next;
    MaskNode *previous;
};

struct MaskWork {
    /* 0x00 */ void *arena;
    /* 0x04 */ MaskLinks sentinel;  /* list of masks */
    /* 0x0C */ void *arenaCopy;
    /* 0x10 */ u32 sourceCount;
    /* 0x14 */ SourceNode **sources;
};

extern "C" {
void FUN_004387f0(void *block, u32 units);
void FUN_00434d9c(void);
s32 FUN_00434d04(void *body, void *arena, u32 count, s32 flag);
void FUN_00436d04(MaskWork *work, u8 *flags);
s32 FUN_0043756c(MaskWork *work, MaskNode **node);
void FUN_004372bc(MaskWork *work, MaskNode **node);
void FUN_00436d88(MaskWork *work, MaskNode **node);
void maskWorkProcessGroupedActions(MaskWork *work, MaskNode **node);

/* Builds the mask work for a list of sources: allocates its per-source table and first mask,
 * propagates the grouped actions over every mask and marks the masks that contain the chosen
 * source. Returns 1 on success. */
u32 FUN_00437828(MaskWork *work, void *arena, SourceNode *list, SourceNode **chosen)
{
    work->arena = arena;
    u32 count = 0;
    for (SourceNode *n = list->next; n != list; n = n->next)
        count++;
    work->sourceCount = count;
    FUN_004387f0(arena, (count * 4 + 0xF) >> 4);
    work->sources = (SourceNode **)arena;
    if (arena == NULL)
        return 0;

    count = 0;
    for (SourceNode *n = list->next; n != list; n = n->next)
        work->sources[count++] = n;

    MaskNode *mask = (MaskNode *)work->arena;
    work->arenaCopy = mask;
    MaskNode *sentinel = (MaskNode *)&work->sentinel;
    FUN_004387f0(mask, 3);
    if (mask == NULL)
        return 0;
    if ((s32)mask != -8)
        FUN_00434d9c();
    mask->next = sentinel->next;
    mask->previous = sentinel;
    sentinel->next = mask;
    mask->next->previous = mask;
    if (FUN_00434d04(mask->body, work->arena, work->sourceCount, 1) == 0)
        return 0;
    *mask->flags = 1;
    FUN_00436d04(work, mask->flags);
    MaskNode *current = mask;
    if (FUN_0043756c(work, &current) == 0)
        return 0;

    for (MaskNode *n = work->sentinel.previous; n != sentinel; n = n->previous) {
        MaskNode *arg;
        if (n->flags != (u8 *)(n + 0) + 0x14) {
            arg = n;
            FUN_004372bc(work, &arg);
            if (arg == NULL)
                return 0;
            if (n->flags != (u8 *)(n + 0) + 0x14) {
                arg = n;
                FUN_00436d88(work, &arg);
                if (arg == NULL)
                    return 0;
                if (n->flags != (u8 *)(n + 0) + 0x14) {
                    arg = n;
                    maskWorkProcessGroupedActions(work, &arg);
                    if (arg == NULL)
                        return 0;
                }
            }
        }
    }

    SourceNode *target = *chosen;
    for (MaskNode *n = work->sentinel.previous; n != sentinel; n = n->previous) {
        u8 found = 0;
        for (u32 i = 0; i < work->sourceCount; i++) {
            if (n->flags[i] != 0 && work->sources[i] == target) {
                found = 1;
                break;
            }
        }
        n->selected = found;
    }
    return 1;
}

} /* extern "C" */
