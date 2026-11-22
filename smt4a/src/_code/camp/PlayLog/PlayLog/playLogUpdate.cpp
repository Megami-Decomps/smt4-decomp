/* NON_MATCHING: 22 lines, one allocation choice in the counter-0x2E rows: retail computes the difference first and
 * into r1 (`sub r1, r6, r0; add r0, r4, r5, lsl #2`), this build the row address first and the difference into r0.
 * playLogBuildPages has the same expression and the same miss. */
#include "common.h"
#include <stddef.h>
#include "gamedata/PlayLogTable.h"
#include "gamedata/GameDataAccess.h"
#include "camp/PlayLog/PlayLogSprites.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "ui/IfTouch.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"

extern "C" {
extern PlayLogWorkA *g_playLog;
s32 padQueryLogicalKey(s32 key, s32 mode);
s32 ifTouchRegionAddRequested(u32 file, u32 index);
void eventQueueAddUniqueIfValid(s32 event); // declcheck: local (the shared declaration does not compile here or changes this unit)
u8 gridNavigationHandleConfirm(ScrollSelection *list, s32 mode);
u32 saveBlockGetPlaySeconds(void); // declcheck: local (the shared declaration does not compile here or changes this unit)
u32 uiScrollHandleActionsOrTouch(ScrollSelection *list, const TextureTableEntryIV *rectangle, const s16 *ids, u32 firstKey,
                 u32 secondKey, u32 thirdKey, bool *blocked, s32 secondary, s32 notify);
s32 resourceRunOperationIfUnblocked(ScrollSelection *list); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 listCursorGetRowIfUnblocked(const void *object); // declcheck: local (the shared declaration does not compile here or changes this unit)
s32 gridNavigationGetItemCount(ScrollSelection *list); // declcheck: local (the shared declaration does not compile here or changes this unit)

/* One frame of the play log screen: animates the sprites, scrolls the list and moves between states. */
void playLogUpdate(void)
{
    PlayLogWorkA *work = g_playLog;
    switch (work->state) {
    case 0:
        for (s32 i = 0; i < 5; i++) {
            if (work->frame >= i)
                uiSpriteAdvanceAnimation(&work->sprites[i], 1.0f);
        }
        if (uiAnimatedSpriteIsFinished(&work->sprites[4])) {
            work->touchRegions[0] = ifTouchRegionAddRequested(0x25, 0x1A);
            work->touchRegions[1] = ifTouchRegionAddRequested(0x25, 0x1B);
            work->touchRegions[2] = ifTouchRegionAddRequested(0x25, 0x1C);
            work->count += 3;
            playLogSetState(work, 1);
        }
        break;
    case 1: {
        for (s32 i = 0; i < gridNavigationGetItemCount(&work->list); i++) {
            PlayLogRecord *row = playLogRecordAt(work->ids[i]);
            if (row != NULL && row->counter == 0x2E) {
                u32 value = saveBlockGetPlaySeconds();
                work->pages[0].values[i] = value - countersGetB(0x2E);
                work->pages[1].values[i] = value;
                work->values[i] = work->pages[work->page].values[i];
            }
        }
        bool blocked = false;
        TextureTableEntryIV *rectangle = asdTMTexTableEntryAt(0x25, 0x1C);
        s32 before = resourceRunOperationIfUnblocked(&work->list);
        if (uiScrollHandleActionsOrTouch(&work->list, rectangle, NULL, work->touchRegions[2], work->touchRegions[0],
                         work->touchRegions[1], &blocked, 0, 0) != 0) {
            if (resourceRunOperationIfUnblocked(&work->list) != before)
                eventQueueAddUniqueIfValid(0x100020D);
        } else if (gridNavigationHandleConfirm(&work->list, 0) != 0) {
            if (gridNavigationGetItemCount(&work->list) > 5) {
                while (resourceRunOperationIfUnblocked(&work->list) == before) {
                    if (resourceRunOperationIfUnblocked(&work->list) == 0 && listCursorGetRowIfUnblocked(&work->list) == 0)
                        break;
                    if (resourceRunOperationIfUnblocked(&work->list) == gridNavigationGetItemCount(&work->list) - 5 &&
                        listCursorGetRowIfUnblocked(&work->list) == 4)
                        break;
                    gridNavigationHandleConfirm(&work->list, 0);
                }
            }
            if (resourceRunOperationIfUnblocked(&work->list) != before)
                eventQueueAddUniqueIfValid(0x100020D);
        } else if (padQueryLogicalKey(1, 1) != 0) {
            eventQueueAddUniqueIfValid(0x100020F);
            playLogSelectAnimation(work, 1);
            playLogSetState(work, 2);
        } else if (work->hasPlayer != 0) {
            if (padQueryLogicalKey(8, 1) != 0) {
                playLogSelectAnimation(work, 3);
                work->pageDirection = 1;
                playLogSetState(work, 3);
            } else if (work->hasPlayer != 0) {
                if (padQueryLogicalKey(7, 1) != 0) {
                    playLogSelectAnimation(work, 1);
                    work->pageDirection = 0;
                    playLogSetState(work, 3);
                }
            }
        }
        break;
    }
    case 2:
        for (s32 i = 0; i < 5; i++)
            uiSpriteAdvanceAnimation(&work->sprites[i], 1.0f);
        if (uiAnimatedSpriteIsFinished(&work->sprites[4])) {
            playLogSetState(work, 4);
        }
        break;
    case 3:
        playLogChangePage(work);
        break;
    case 4:
        break;
    }
    work->frame++;
}
}
