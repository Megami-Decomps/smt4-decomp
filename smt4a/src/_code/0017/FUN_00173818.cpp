/* NON_MATCHING: iterator copies (retail keeps the list's next node in one register and the current node in two) */
#include "shard/S1NwSndA.h"

extern "C" {

void FUN_001b6668(LinkList *list);
void nw_ut_internal_LinkListImpl_insert(LinkList *list, ListNode *pos, ListNode *node);
void FUN_001743b8(PlayerSound *sound);
void FUN_001738a4(SoundPlayer *player, s32 reverse);

/* Move the ready pending sounds to the ready list, update every active sound, then re-sort the
 * priority list. */
void FUN_00173818(SoundPlayer *player)
{
    LinkListIterator it = linkListBegin(&player->pendingList);
    if (it != linkListEndIter(&player->pendingList)) {
        do {
            LinkListIterator cur = it++;
            if (pendingSoundFromNode(cur.node)->state == 2) {
                FUN_001b6668(&player->pendingList);
                nw_ut_internal_LinkListImpl_insert(&player->readyList, &player->readyList.node, cur.node);
            }
        } while (it != linkListEndIter(&player->pendingList));
    }

    LinkListIterator active = linkListBegin(&player->activeList);
    if (active != linkListEndIter(&player->activeList)) {
        do {
            LinkListIterator cur = active++;
            FUN_001743b8(playerSoundFromActiveNode(cur.node));
        } while (active != linkListEndIter(&player->activeList));
    }
    FUN_001738a4(player, 0);
}

} /* extern "C" */
