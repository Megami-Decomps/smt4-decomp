/* NON_MATCHING: the bucket table is a function-local static with a LinkList constructor and init guard in the original (retail runs the guard and the vector constructor __aeabi_vec_ctor_nocookie_nodtor, and names the table DAT_004ead80); here it is plain zeroed storage */
#include "shard/S1NwSnd.h"

extern "C" {

void nw_ut_internal_LinkListImpl_erase_2BAE30(LinkList *list, ListNode *node);
void nw_ut_internal_LinkListImpl_insert(LinkList *list, ListNode *pos, ListNode *node);

enum { PRIORITY_BUCKETS = 128 };

/* Re-sort the player's priority list: bucket the sounds by priority (clamped to 0..127), then gather
 * the buckets back in ascending order. */
void FUN_0012f484(SoundPlayer *player)
{
    static LinkList buckets[PRIORITY_BUCKETS];

    if (player->priorityList.count < 2) {
        return;
    }
    while (player->priorityList.count != 0) {
        ListNode *node = player->priorityList.node.next;
        PlayerSound *sound = playerSoundFromPriorityNode(node);

        nw_ut_internal_LinkListImpl_erase_2BAE30(&player->priorityList, node);
        LinkList *bucket = &buckets[__usat(sound->playerPriority + sound->priority, 7)];
        nw_ut_internal_LinkListImpl_insert(bucket, &bucket->node, node);
    }
    for (int i = 0; i < PRIORITY_BUCKETS; i++) {
        while (buckets[i].count != 0) {
            ListNode *node = buckets[i].node.next;

            nw_ut_internal_LinkListImpl_erase_2BAE30(&buckets[i], node);
            nw_ut_internal_LinkListImpl_insert(&player->priorityList, &player->priorityList.node, node);
        }
    }
}

} /* extern "C" */
