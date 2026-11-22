/* NON_MATCHING: register allocation only: the instruction stream is the same (three inlined bucket sorts), but retail keeps
 * the bucket array in r5, the object in r6 and the bucket index in r9 where this build uses r9, r5 and r8, and it sets up
 * the re-insert's arguments r0 first. */
#include "common.h"
#include <stddef.h>

struct PriorityLink {
    PriorityLink *next;
    PriorityLink *previous;
};

/* The list wrapper's two words precede the three-word nw::ut::LinkListImpl. */
struct ObjectList {
    /* 0x00 */ s32 unk00;
    /* 0x04 */ s32 unk04;
    /* 0x08 */ u32 count;
    /* 0x0C */ PriorityLink *first; /* points to the object's link at 0xF8 */
    /* 0x10 */ PriorityLink *last;
};

/* A render object as the lists order it: priority parts at 0x50 and 0x9D, its link at 0xF8. */
struct ListedObject {
    /* 0x00 */ u8 unk00[0x50];
    /* 0x50 */ s32 basePriority;
    /* 0x54 */ u8 unk54[0x49];
    /* 0x9D */ u8 layer;
    /* 0x9E */ u8 unk9E[0x5A];
    /* 0xF8 */ PriorityLink link;
};

/* One priority bucket: the same list layout, three words. */
struct PriorityBucket {
    /* 0x00 */ s32 count;
    /* 0x04 */ PriorityLink *first;
    /* 0x08 */ PriorityLink *last;
};

struct ObjectGroup {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 effectCount;
    /* 0x1C */ u8 *effects; /* 0x5C bytes each */
    /* 0x20 */ ObjectList first;
    /* 0x34 */ u8 unk34[0x38];
    /* 0x6C */ ObjectList second;
    /* 0x80 */ u8 unk80[0x38];
    /* 0xB8 */ ObjectList third;
};

typedef char ObjectPriorityListLayoutCheck[sizeof(ObjectList) == 0x14 &&
    sizeof(ListedObject) == 0x100 && sizeof(PriorityBucket) == 12 &&
    offsetof(ObjectGroup, second) == 0x6c && offsetof(ObjectGroup, third) == 0xb8 ? 1 : -1];

extern "C" {
void FUN_00173818(u8 *effect);
void nw_ut_internal_LinkListImpl_erase_2BAE30(void *list, void *node);
void nw_ut_internal_LinkListImpl_insert(void *list, void *end, void *node);
void *__aeabi_vec_ctor_nocookie_nodtor(void *begin, void (*construct)(void *), u32 stride, u32 count);
void *objectCommandQueueGet(void);
void FUN_00191260(void *queue);
u32 soundRequestQueueFlush(void *queue, u32 value); // declcheck: local (the shared declaration does not compile here or changes this unit)
void FUN_00161d8c(void *bucket);
void FUN_00161da4(void *bucket);
void callbackListInitialize(void *bucket);
}

/* Sorts the list by priority (base priority plus layer, clamped to 0-127) with one bucket per priority. */
template <void (*Construct)(void *)>
static __inline void sortByPriority(ObjectList *list)
{
    if (list->count < 2) {
        return;
    }
    PriorityBucket buckets[128];
    __aeabi_vec_ctor_nocookie_nodtor(buckets, Construct, sizeof(PriorityBucket), 128);
    while (list->count != 0) {
        ListedObject *object = (ListedObject *)((u8 *)list->first - 0xF8);
        nw_ut_internal_LinkListImpl_erase_2BAE30(&list->count, list->first);
        s32 priority = object->layer + object->basePriority;
        priority = priority < 0 ? 0 : (priority > 127 ? 127 : priority);
        nw_ut_internal_LinkListImpl_insert(&buckets[priority], &buckets[priority].first, &object->link);
    }
    for (s32 i = 0; i < 128; i++) {
        while (buckets[i].count != 0) {
            PriorityLink *node = buckets[i].first;
            nw_ut_internal_LinkListImpl_erase_2BAE30(&buckets[i], buckets[i].first);
            nw_ut_internal_LinkListImpl_insert(&list->count, &list->first, node);
        }
    }
}

/* Finishes the frame's object lists: updates the effects, orders the three render lists and releases the command queue. */
extern "C" void FUN_00147c10(ObjectGroup *group)
{
    for (s32 i = 0; i < group->effectCount; i++) {
        FUN_00173818(group->effects + (i & 0xffffff) * 0x5C);
    }
    sortByPriority<FUN_00161d8c>(&group->first);
    sortByPriority<FUN_00161da4>(&group->second);
    sortByPriority<callbackListInitialize>(&group->third);
    void *queue = objectCommandQueueGet();
    FUN_00191260(queue);
    soundRequestQueueFlush(queue, 0);
}
