/* NON_MATCHING: the bucket table is a function-local static with a LinkList constructor and init guard in the original (retail runs the guard and the vector constructor FUN_002f5020, and names the table DAT_00647778); here it is plain zeroed storage */
#include "shard/S1NwSndA.h"

extern "C" {

void FUN_0018c87c(LinkList *list, ListNode *node);
void nw_ut_internal_LinkListImpl_insert(LinkList *list, ListNode *pos, ListNode *node);

enum { PRIORITY_BUCKETS = 128 };

/* Re-sort the player's priority list: bucket the sounds by priority (clamped to 0..127), then gather
 * the buckets back in ascending order, taking each bucket from its end when `reverse` is set. */
void FUN_001738a4(SoundPlayer *player, s32 reverse)
{
    static LinkList buckets[PRIORITY_BUCKETS];

    if (player->priorityList.count < 2) {
        return;
    }
    while (player->priorityList.count != 0) {
        ListNode *node = player->priorityList.node.next;
        PlayerSound *sound = playerSoundFromPriorityNode(node);

        FUN_0018c87c(&player->priorityList, node);
        LinkList *bucket = &buckets[__usat(sound->playerPriority + sound->priority, 7)];
        nw_ut_internal_LinkListImpl_insert(bucket, &bucket->node, node);
    }
    for (int i = 0; i < PRIORITY_BUCKETS; i++) {
        while (buckets[i].count != 0) {
            if (reverse) {
                PlayerSound *sound = playerSoundFromPriorityNode(buckets[i].node.prev);

                FUN_0018c87c(&buckets[i], &sound->priorityNode);
                nw_ut_internal_LinkListImpl_insert(&player->priorityList, &player->priorityList.node, &sound->priorityNode);
            } else {
                ListNode *node = buckets[i].node.next;

                FUN_0018c87c(&buckets[i], node);
                nw_ut_internal_LinkListImpl_insert(&player->priorityList, &player->priorityList.node, node);
            }
        }
    }
}

} /* extern "C" */
