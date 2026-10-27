/* NON_MATCHING: the build hoists the constants 1 and 3 (state, direction, animation) into registers where retail reloads them per use, narrows the animation constants differently (retail sign-extends each to s16 once before its loop) and lays the scroll-key loop out of line. */
#include "common.h"
#include <stddef.h>
#include "gamedata/DataTable.h"
#include "gamedata/GameDataAccess.h"
#include "shard/W6_W6Match3_ScrollSelection.h"
#include "shard/W6_W6Match8_UiResourceParameters.h"
#include "shard/W6_W6Match8_AnimatedSprite.h"
#include "ui/TouchRectangleRequest.h"

/* One page of the play log: its values and their details. */
struct PlayLogPageView {
    u32 count;
    u32 values[50];
    u32 details[25];
};

/* A row of the play log data table. */
struct PlayLogRow {
    u16 kind;
    u8 unk02[0x3E];
};

/* The play log screen's work as its per-frame update reads it. */
struct PlayLogScreen {
    /* 0x000 */ UiResourceParameters parameters;
    /* 0x020 */ UiAnimatedSprite sprites[5];
    /* 0x2DC */ ScrollSelection list;
    /* 0x340 */ s32 frame;
    /* 0x344 */ s32 state;
    /* 0x348 */ s16 touchRegions[3];
    /* 0x34E */ u8 unk34E[0xA];
    /* 0x358 */ s16 count;
    /* 0x35A */ u16 unk35A;
    /* 0x35C */ u32 values[50];
    /* 0x424 */ s16 ids[50];
    /* 0x488 */ s8 hasPlayer;
    /* 0x489 */ u8 page;
    /* 0x48A */ u8 unk48A[2];
    /* 0x48C */ PlayLogPageView pages[2];
    /* 0x6EC */ u32 pending;
    /* 0x6F0 */ u8 direction;
};

typedef char PlayLogScreenOffsetCheck[
    offsetof(PlayLogScreen, sprites) == 0x20 && offsetof(PlayLogScreen, list) == 0x2DC &&
    offsetof(PlayLogScreen, frame) == 0x340 && offsetof(PlayLogScreen, ids) == 0x424 &&
    offsetof(PlayLogScreen, pages) == 0x48C && offsetof(PlayLogScreen, pending) == 0x6EC ? 1 : -1];

extern "C" {
extern PlayLogScreen *g_playLog;
s32 FUN_001517b4(s32 key, s32 mode);
s32 FUN_00163aa4(void *sprite, f32 step);
s32 FUN_001643b4(u32 file, u32 index);
void uiSpriteSelectAnim(void *sprite, s16 group);
void eventQueueAddUniqueIfValid(s32 event);
void FUN_002007f4(void *work);
u8 FUN_00228b04(ScrollSelection *list, s32 mode);
u32 FUN_002e50d4(void);
u32 FUN_003450d4(ScrollSelection *list, const TouchRectangleRequest *rectangle, const s16 *ids, u32 firstKey,
                 u32 secondKey, u32 thirdKey, bool *blocked, s32 secondary, s32 notify);
TouchRectangleRequest *asdTMTexTableEntryAt(u32 file, s32 index);
s32 resourceRunOperationIfUnblocked(ScrollSelection *list);
s32 FUN_002a4894(const void *object);
s32 objectApplyIfUnblocked(ScrollSelection *list);

/* One frame of the play log screen: animates the sprites, scrolls the list and moves between states. */
void FUN_0021545c(void)
{
    PlayLogScreen *work = g_playLog;
    switch (work->state) {
    case 0:
        for (s32 i = 0; i < 5; i++) {
            if (work->frame >= i)
                FUN_00163aa4(&work->sprites[i], 1.0f);
        }
        if (uiAnimatedSpriteIsFinished(&work->sprites[4])) {
            work->touchRegions[0] = FUN_001643b4(0x25, 0x1A);
            work->touchRegions[1] = FUN_001643b4(0x25, 0x1B);
            work->touchRegions[2] = FUN_001643b4(0x25, 0x1C);
            work->count += 3;
            work->state = 1;
            work->pending = 0;
        }
        break;
    case 1: {
        for (s32 i = 0; i < objectApplyIfUnblocked(&work->list); i++) {
            u32 index = work->ids[i];
            DataTableView<PlayLogRow> rows(0x37, 0);
            PlayLogRow *row = rows.at(index);
            if (row != NULL && row->kind == 0x2E) {
                u32 value = FUN_002e50d4();
                work->pages[0].values[i] = value - countersGetB(0x2E);
                work->pages[1].values[i] = value;
                work->values[i] = work->pages[work->page].values[i];
            }
        }
        bool blocked = false;
        TouchRectangleRequest *rectangle = asdTMTexTableEntryAt(0x25, 0x1C);
        s32 before = resourceRunOperationIfUnblocked(&work->list);
        if (FUN_003450d4(&work->list, rectangle, NULL, work->touchRegions[2], work->touchRegions[0],
                         work->touchRegions[1], &blocked, 0, 0) != 0) {
            if (resourceRunOperationIfUnblocked(&work->list) != before)
                eventQueueAddUniqueIfValid(0x100020D);
        } else {
            if (FUN_00228b04(&work->list, 0) == 0) {
                if (FUN_001517b4(1, 1) != 0) {
                    eventQueueAddUniqueIfValid(0x100020F);
                    s32 animation = 1;
                    for (s32 i = 0; i < 5; i++)
                        uiSpriteSelectAnim(&work->sprites[i], animation);
                    work->state = 2;
                    work->pending = 0;
                } else if (work->hasPlayer != 0) {
                    if (FUN_001517b4(8, 1) != 0) {
                        s32 animation = 3;
                        for (s32 i = 0; i < 5; i++)
                            uiSpriteSelectAnim(&work->sprites[i], animation);
                        work->direction = 1;
                        work->state = 3;
                        work->pending = 0;
                    } else if (work->hasPlayer != 0) {
                        if (FUN_001517b4(7, 1) != 0) {
                            s32 animation = 1;
                            for (s32 i = 0; i < 5; i++)
                                uiSpriteSelectAnim(&work->sprites[i], animation);
                            work->direction = 0;
                            work->state = 3;
                            work->pending = 0;
                        }
                    }
                }
                break;
            }
            if (objectApplyIfUnblocked(&work->list) > 5) {
                if (resourceRunOperationIfUnblocked(&work->list) == before) {
                    for (;;) {
                        if (resourceRunOperationIfUnblocked(&work->list) == 0 && FUN_002a4894(&work->list) == 0)
                            break;
                        if (resourceRunOperationIfUnblocked(&work->list) == objectApplyIfUnblocked(&work->list) - 5 &&
                            FUN_002a4894(&work->list) == 4)
                            break;
                        FUN_00228b04(&work->list, 0);
                        if (resourceRunOperationIfUnblocked(&work->list) != before)
                            break;
                    }
                }
            }
            if (resourceRunOperationIfUnblocked(&work->list) != before)
                eventQueueAddUniqueIfValid(0x100020D);
        }
        break;
    }
    case 2:
        for (s32 i = 0; i < 5; i++)
            FUN_00163aa4(&work->sprites[i], 1.0f);
        if (uiAnimatedSpriteIsFinished(&work->sprites[4])) {
            work->state = 4;
            work->pending = 0;
        }
        break;
    case 3:
        FUN_002007f4(work);
        break;
    case 4:
        break;
    }
    work->frame++;
}
}
