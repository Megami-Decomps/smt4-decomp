/* NON_MATCHING: 41 lines (shape 7): retail predicates load step 1's `asdTMTexTablePrepareNodeImage(0x32, 0)` for
 * an active portrait (movne/movne/blne), this build branches round it; the rest are the shifted branch targets. */
#include "event/NpcTextureWork.h"
#include "shard/JobWork.h"
#include "shard/W6_W6Match8_BattleSpritePlacement.h"
#include "sys/RuntimeObjects.h"
#include "code/Code002c_AsdTMTexTable.h"
#include "addon/AocSystem.h"
#include "gamedata/NkmBaseRecord.h"
#include "shard/W6_W6Match5_DevilSort.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include <math.h>

extern "C" {
extern const f32 g_enemySpriteVerticalBaseline;
s32 eventIsSkipping(void);
u32 eventResourceCacheAcquire(s32 model, s32 mode);
s32 nkdwHeaderParse(u32 resource);
void aocHandleButtons(u32 resource, s32 mode);
s32 aocTextureEntryLoadOnce(u32 resource); // declcheck: local (the shared declaration takes an opaque Obj)
f32 asdAnimGetTrackLastFrame(u32 resource, s32 track);
s32 randBetween(s32 minimum, s32 maximum);
void asdTMTexTableReleaseNode(s32 table, s32 node); // declcheck: local (its shared declaration is in Apocalypse's battle/Talk/btlTalkBustUpRelease.h, which needs AocSystemA)

/* Updates an Npc2d portrait: loads its texture or NKDW portrait, then loops the portrait's animation,
 * slides it into place, fades it and releases the previous image's texture node. */
s32 npc2dPortraitUpdate(u32 job)
{
    NpcTextureWork *work = (NpcTextureWork *)jobGetWork(job);
    switch (work->loadStep) {
    case 0:
        if (work->portraitHandle != 0 && work->animate != 0) {
            work->animationFrame += 2.0f;
            f32 lastFrame = asdAnimGetTrackLastFrame(work->portraitHandle, 0);
            if (lastFrame <= work->animationFrame) {
                work->animationFrame -= lastFrame;
            }
            if (work->opacity != 0.0f && work->slideStep != 0) {
                if (work->x != 0) {
                    if (work->x < 0) {
                        work->x += work->slideStep;
                        work->x = work->x > 0 ? 0 : work->x;
                    } else {
                        work->x += work->slideStep;
                        work->x = work->x > 0 ? work->x : 0;
                    }
                }
            }
        }
        if (work->active != 0) {
            if (work->appearEventQueued == 0) {
                eventQueueAddUnique(0x1000171);
                work->appearEventQueued = 1;
            }
            work->longCycleFrame = (work->longCycleFrame + 1) % 150;
            work->shortCycleFrame = (work->shortCycleFrame + 1) % 30;
        }
        if (work->rotation != 0.0f) {
            work->rotation *= 0.7f;
            if (fabsf(work->rotation) < 1.0f) {
                work->rotation = 0.0f;
            }
        }
        if (work->fadeStep != 0.0f) {
            if (work->active != 0 && work->fadeStep > 0.0f) {
                work->opacity += work->fadeStep;
                work->fadeStep *= 0.77f;
            } else {
                if (work->active != 0 && work->fadeOutEventQueued == 0) {
                    work->fadeOutEventQueued = 1;
                    eventQueueAddUnique(0x1000172);
                }
                work->opacity += work->fadeStep;
            }
            if (work->opacity < 0.0f) {
                work->opacity = 0.0f;
                work->fadeStep = 0.0f;
                if (work->stopWhenHidden != 0) {
                    jobStop(job, 0);
                }
            } else if (work->opacity > 1.0f) {
                work->opacity = 1.0f;
                work->fadeStep = 0.0f;
            }
            if (eventIsSkipping() != 0 && resultIsIdle() == 0) {
                work->opacity = 1.0f;
                work->fadeStep = 0.0f;
            }
        }
        if (work->releaseTimer != 0.0f) {
            work->releaseTimer -= 0.166f;
            if (work->releaseTimer <= 0.0f) {
                work->releaseTimer = 0.0f;
                if (work->lastImage >= 0) {
                    asdTMTexTableReleaseNode(work->textureTable, work->lastImage);
                    work->lastImage = -1;
                }
            }
        }
        break;
    case 1:
        if (eventIsSkipping() != 0) {
            break;
        }
        if (work->portraitId != 0) {
            u32 handle = eventResourceCacheAcquire(work->portraitId, 1);
            work->loadStep = 2;
            work->portraitHandle = handle;
            break;
        }
        if (aocRunByName((u32)g_aocSystem, work->textureTable, work->textureNode, 1)) {
            aocLoadTextureNode((u32)g_aocSystem, work->textureTable, work->textureNode, 0x10000);
        } else {
            asdTMTexTablePrepareNodeImage(work->textureTable, work->textureNode);
        }
        work->loadStep = 0;
        if (work->active != 0) {
            asdTMTexTablePrepareNodeImage(0x32, 0);
        }
        break;
    case 2:
        if (nkdwHeaderParse(work->portraitHandle) != 0) {
            const BattleSpriteFrame *frame = ((BattleFrameSprite *)work->portraitHandle)->frame;
            work->x = (s32)((f32)work->x + (200.0f - (f32)frame->anchorX));
            work->y = (s32)(-g_enemySpriteVerticalBaseline - (f32)frame->vertical.anchorY +
                            (f32)frame->vertical.baselineOffset + 195.0f);
            aocHandleButtons(work->portraitHandle, 7);
            work->loadStep = 3;
        }
        break;
    case 3:
        if (aocTextureEntryLoadOnce(work->portraitHandle) != 0) {
            work->loadStep = 0;
            work->animationFrame = (f32)(randBetween(0, 4) * 4);
        }
        break;
    }
    return 0;
}
}
