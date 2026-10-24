/* NON_MATCHING: readable rebuild of the sound system update (179 vs 193 rows); retail keeps one 128-bucket table per pass with compiler-generated LinkList constructor/destructor helpers (LAB_00123cd0 etc.) while armcc here emits its own helper functions for SortBucket. */
#include "shard/S1NwSnd.h"

extern "C" {

void nw_snd_SoundPlayer_Update(SoundPlayer *player);
void nw_ut_internal_LinkListImpl_erase_2BAE30(LinkList *list, ListNode *node);
void nw_ut_internal_LinkListImpl_insert(LinkList *list, ListNode *pos, ListNode *node);
void FUN_00140e78(void);
u32 FUN_002baed8(void);
void FUN_002bad74(u32 value, s32 flag);

enum { PRIORITY_BUCKETS = 128 };

/* One priority bucket: an empty circular list when constructed. */
struct SortBucket {
    u32 count;
    ListNode node;

    SortBucket()
    {
        count = 0;
        node.next = &node;
        node.prev = &node;
    }
    ~SortBucket() {}
};

/* The sound system (only the lists the update sorts). */
struct SoundSystem {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u32 playerCount;
    /* 0x24 */ u8 *players;            /* 0x48 bytes each */
    /* 0x28 */ u8 unk28[8];
    /* 0x30 */ LinkList voiceList;
    /* 0x3C */ u8 unk3C[0x14];
    /* 0x50 */ LinkList streamList;
    /* 0x5C */ u8 unk5C[0x14];
    /* 0x70 */ LinkList effectList;
};

/* The sound a sorting node belongs to (its node sits at 0xD4). */
static PlayerSound *soundFromSortNode(ListNode *node)
{
    return (PlayerSound *)((u8 *)node - offsetof(PlayerSound, unkD4));
}

/* Re-sorts a list by sound priority: buckets the sounds by priority (clamped to 0..127) and gathers
 * the buckets back in ascending order. */
static __inline void sortByPriority(LinkList *list)
{
    if (list->count < 2)
        return;
    SortBucket buckets[PRIORITY_BUCKETS];
    while (list->count != 0) {
        ListNode *node = list->node.next;
        PlayerSound *sound = soundFromSortNode(node);
        nw_ut_internal_LinkListImpl_erase_2BAE30(list, node);
        SortBucket *bucket = &buckets[__usat(sound->playerPriority + sound->priority, 7)];
        nw_ut_internal_LinkListImpl_insert((LinkList *)bucket, &bucket->node, node);
    }
    for (s32 i = 0; i < PRIORITY_BUCKETS; i++) {
        while (buckets[i].count != 0) {
            ListNode *node = buckets[i].node.next;
            nw_ut_internal_LinkListImpl_erase_2BAE30((LinkList *)&buckets[i], node);
            nw_ut_internal_LinkListImpl_insert(list, &list->node, node);
        }
    }
}

/* Updates every sound player, re-sorts the three voice lists by priority and runs the sound
 * system's follow-up steps. */
void FUN_00110a04(SoundSystem *system)
{
    for (u32 i = 0; i < system->playerCount; i++)
        nw_snd_SoundPlayer_Update((SoundPlayer *)(system->players + (i & 0xFFFFFF) * 0x48));
    sortByPriority(&system->voiceList);
    sortByPriority(&system->streamList);
    sortByPriority(&system->effectList);
    u32 value = FUN_002baed8();
    FUN_00140e78();
    FUN_002bad74(value, 0);
}

} /* extern "C" */
