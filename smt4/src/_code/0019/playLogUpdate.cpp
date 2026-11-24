/* NON_MATCHING: 117 raw / 45 shape with the callees' real types (the definitions return u32 from the three list
 * queries and s16 from ifTouchRegionAddRequested; Apocalypse's PlayLog.cpp prototypes, s32, gave 99 raw / 17 shape,
 * but contradict IV's definitions). With those prototypes: retail's rows but for one register. Retail has the zero
 * of the list state (`blocked = 0` and the scroll call's two zero arguments) in r9 from before the row loop
 * (`cmp r0, #0; mov r9, #0; ble` at the loop's first test, where this build has a nop), so it saves r9 and its
 * frame is 28 bytes; the build makes the zero in r7 after the loop (r7 and r8 are free there in retail too, so
 * retail's zero is live across the loop, not moved up afterwards). The store to `blocked` is after the loop in
 * both. Wave 90 rewrote this from Apocalypse's playLogUpdate (was 337 raw / 207 shape, on raw offsets and with a
 * parameter retail does not have). `blocked` declared before the loop stores it there and takes the counter's
 * zero from r9 too (33 shape); playLogRowAt or the lookup written out (ternary, NULL first, if/else: 39-45) and an
 * unsigned or bool flag and a narrower or unsigned row counter (21-42) do not move the zero either. */
#include "common.h"
#include <stddef.h>
#include "gamedata/PlayLogTable.h"
#include "camp/PlayLog/PlayLog.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "code/Code0029_VariantA.h"
#include "code/Code0029_VariantB.h"
#include "shard/W5_W5Match7_FlagBanks.h"

extern "C" {
extern PlayLogWork *g_playLog;
s16 ifTouchRegionAddRequested(u32 file, s32 index);
s32 inputQueryButtonState(s32 key, s32 mode);
bool gridNavigationHandleConfirm(ScrollSelection *list, s32 playSound);
u32 uiScrollHandleActionsOrTouch(ScrollSelection *list, const TextureTableEntryIV *rectangle, const s16 *ids, s32 firstKey,
                 s32 secondKey, s32 thirdKey, s8 *blocked, s32 secondary, s32 notify);
u32 resourceRunOperationIfUnblocked(ScrollSelection *list);

enum {
    PLAY_LOG_SOUND_CLOSE = 0x100016C,
    PLAY_LOG_SOUND_MOVE = 0x100016E     /* the list scrolled */
};

/* One frame of the play log screen: slides the rows in, keeps the play time row current, scrolls the list and
 * slides the rows out when the screen is closed. (Apocalypse's playLogUpdate is this with a second page.) */
void playLogUpdate(void)
{
    PlayLogWork *work = g_playLog;
    switch (work->state) {
    case 0:
        for (s32 i = 0; i < 5; i++) {
            if (work->frame >= i)
                uiSlidingSpriteAdvance(&work->sprites[i], 0);
        }
        if (uiAnimatedSpriteIsFinished(&work->sprites[4])) {
            work->touchRegions[0] = ifTouchRegionAddRequested(0x30, 0x1A);
            work->touchRegions[1] = ifTouchRegionAddRequested(0x30, 0x1B);
            work->touchRegions[2] = ifTouchRegionAddRequested(0x30, 0x1C);
            work->count += 3;
            work->state = 1;
        }
        break;
    case 1: {
        for (s32 i = 0; i < gridNavigationGetItemCount(&work->list); i++) {
            PlayLogRecord *row = playLogRecordAt(work->ids[i]);
            if (row != NULL && row->counter < 0) {
                work->values[i] = saveBlockGetPlaySeconds();
            }
        }
        s8 blocked = 0;
        TextureTableEntryIV *rectangle = asdTMTexTableEntryAt(0x30, 0x1C);
        s32 before = resourceRunOperationIfUnblocked(&work->list);
        if (uiScrollHandleActionsOrTouch(&work->list, rectangle, NULL, work->touchRegions[2], work->touchRegions[0],
                         work->touchRegions[1], &blocked, 0, 0) != 0) {
            if (resourceRunOperationIfUnblocked(&work->list) != before)
                eventQueueAddUniqueIfValid(PLAY_LOG_SOUND_MOVE);
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
                eventQueueAddUniqueIfValid(PLAY_LOG_SOUND_MOVE);
        } else if (inputQueryButtonState(1, 1) != 0) {
            eventQueueAddUniqueIfValid(PLAY_LOG_SOUND_CLOSE);
            for (s32 i = 0; i < 5; i++)
                uiSpriteSetKeyframe(&work->sprites[i], 1, 0);
            work->state = 2;
        }
        break;
    }
    case 2:
        for (s32 i = 0; i < 5; i++)
            uiSpriteAdvanceAnimation(&work->sprites[i]);
        if (uiAnimatedSpriteIsFinished(&work->sprites[4])) {
            work->state = 3;
        }
        break;
    }
    work->frame++;
}

} /* extern "C" */
