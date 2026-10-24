/* NON_MATCHING: register allocation only: the instruction stream is the same (three inlined bucket sorts), but retail keeps the group in sl, the list in r4 and the bucket array in r5 where this build uses r9, r4 and sl. */
#include "common.h"

/* An intrusive list as nw::ut::LinkList lays it out: its element count and the link of its last element. */
struct ObjectList {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u32 count;
    /* 0x0C */ u8 *tail; /* the link of the last object, 0xF8 bytes into it */
};

/* A render object as the lists order it: priority parts at 0x50 and 0x9D, its link at 0xF8. */
struct ListedObject {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 basePriority;
    /* 0x54 */ u8 unk54[0x49];
    /* 0x9D */ u8 layer;
    /* 0x9E */ u8 unk9E[0x5A];
    /* 0xF8 */ u8 link[4];
};

/* One priority bucket: the same list layout, three words. */
struct PriorityBucket {
    /* 0x00 */ s32 count;
    /* 0x04 */ u8 *first;
    /* 0x08 */ u8 *last;
};

struct ObjectGroup {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 effectCount;
    /* 0x1C */ u8 *effects; /* 0x5C bytes each */
    /* 0x20 */ ObjectList first;
    /* 0x30 */ u8 unk30[0x3C];
    /* 0x6C */ ObjectList second;
    /* 0x7C */ u8 unk7C[0x3C];
    /* 0xB8 */ ObjectList third;
};

extern "C" {
void FUN_00173818(u8 *effect);
void FUN_0018c87c(void *list, void *node);
void nw_ut_internal_LinkListImpl_insert(void *list, void *end, void *node);
void *__aeabi_vec_ctor_nocookie_nodtor(void *begin, void (*construct)(void *), u32 stride, u32 count);
void *objectCommandQueueGet(void);
void FUN_00191260(void *queue);
u32 FUN_001911a4(void *queue, u32 value);
void FUN_00161d8c(void *bucket);
void FUN_00161da4(void *bucket);
void FUN_00161d74(void *bucket);
}

/* Sorts the list by priority (base priority plus layer, clamped to 0-127) with one bucket per priority. */
static __inline void sortByPriority(ObjectList *list, void (*construct)(void *))
{
    if (list->count < 2) {
        return;
    }
    PriorityBucket buckets[128];
    __aeabi_vec_ctor_nocookie_nodtor(buckets, construct, sizeof(PriorityBucket), 128);
    while (list->count != 0) {
        ListedObject *object = (ListedObject *)(list->tail - 0xF8);
        FUN_0018c87c(&list->count, list->tail);
        s32 priority = object->layer + object->basePriority;
        priority = priority < 0 ? 0 : (priority > 127 ? 127 : priority);
        nw_ut_internal_LinkListImpl_insert(&buckets[priority], &buckets[priority].first, object->link);
    }
    for (s32 i = 0; i < 128; i++) {
        while (buckets[i].count != 0) {
            u8 *node = buckets[i].first;
            FUN_0018c87c(&buckets[i], node);
            nw_ut_internal_LinkListImpl_insert(&list->count, &list->tail, node);
        }
    }
}

/* Finishes the frame's object lists: updates the effects, orders the three render lists and releases the command queue. */
extern "C" void FUN_00147c10(ObjectGroup *group)
{
    for (u32 i = 0; i < group->effectCount; i++) {
        FUN_00173818(group->effects + (i & 0xffffff) * 0x5C);
    }
    sortByPriority(&group->first, FUN_00161d8c);
    sortByPriority(&group->second, FUN_00161da4);
    sortByPriority(&group->third, FUN_00161d74);
    void *queue = objectCommandQueueGet();
    FUN_00191260(queue);
    FUN_001911a4(queue, 0);
}
