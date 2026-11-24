/* NON_MATCHING: 89 lines (shape 53): as in IV's FUN_001dfc64, retail predicates load step 1's
 * `asdTMTexTablePrepareNodeImage(0x27, 0)` for an active portrait (blne) where this build branches; the move's
 * and the NKDW placement's conversions take other VFP registers. */
#include "common.h"
#include "shard/JobWork.h"
#include "shard/W6_W6Match8_NpcTextureEffect.h"
#include "shard/W6_W6Match8_BattleSpritePlacement.h"
#include "sys/RuntimeObjects.h"
#include "code/Code002c_AsdTMTexTable.h"
#include "addon/AocSystemA.h"
#include "gamedata/NkmBaseRecord.h"
#include "AsdSDK/Source/Gfx/Model/AsdModel.h"
#include "AsdSDK/Source/Gfx/AsdTexManager/AsdTMTexTable.h"
#include "camp/RenderCtx.h"
#include <math.h>

extern "C" {
extern const f32 g_enemySpriteVerticalBaseline; /* the enemy sprites' vertical baseline (IV's g_enemySpriteVerticalBaseline) */
s32 eventIsSkipping(void);
u32 resourceCacheGetOrLoadModel(s32 resource, u32 first, u32 second);
s32 nkdwLoaderParse(NpcPortraitResource *resource);
void aocHandleButtons(NpcPortraitResource *resource, s32 mode); // declcheck: local (battle/EnemyDraw/EnemyDraw.h declares it on its AocRequest view)
s32 aocResourceStartOnce(NpcPortraitResource *resource, u32 argument);
f32 asdAnimGetTrackLastFrame(NpcPortraitResource *resource, u32 track);
s32 randBetween(s32 minimum, s32 maximum);
void asdTMTexTableReleaseNode(s32 table, s32 node); // declcheck: local (battle/Talk/btlTalkBustUpRelease.h declares it with the talk portrait's helpers)

/* Updates an Npc2d portrait: loads its texture or NKDW portrait, then loops the portrait's animation,
 * slides and moves it into place, fades it and releases the previous image's texture node. Fast-forward
 * speeds the rotation, the fade and the move up. */
s32 npc2dPortraitUpdate(u32 job)
{
    NpcTextureEffectWork *work = (NpcTextureEffectWork *)jobGetWork(job);
    switch (work->resourceState) {
    case 0:
        if (work->table == 1 && !asdTMTexTableNodeIsLoaded(work->table, work->node)) {
            return 0;
        }
        if (work->portrait != NULL && work->animate != 0) {
            work->animationFrame += 2.0f;
            f32 lastFrame = asdAnimGetTrackLastFrame(work->portrait, 0);
            if (lastFrame <= work->animationFrame) {
                work->animationFrame -= lastFrame;
            }
            if (work->fade != 0.0f && work->slideFrames != 0) {
                work->x = (s32)((f32)(work->slideFrames - work->slideFrame) / (f32)work->slideFrames *
                                (f32)work->slideDistance);
                if (work->slideFrame >= work->slideFrames) {
                    work->slideFrame = 0;
                    work->slideFrames = 0;
                    work->x = 0;
                    work->slideDistance = 0;
                } else {
                    work->slideFrame++;
                }
            }
        }
        if (work->active != 0) {
            if (work->appearEventQueued == 0) {
                eventQueueAddUnique(0x1000212);
                work->appearEventQueued = 1;
            }
            work->longCycleFrame = (work->longCycleFrame + 1) % 150;
            work->shortCycleFrame = (work->shortCycleFrame + 1) % 30;
        }
        if (work->rotation != 0.0f) {
            if (inputFastForwardActive()) {
                work->rotation *= 0.3f;
            } else {
                work->rotation *= 0.7f;
            }
            if (fabsf(work->rotation) < 1.0f) {
                work->rotation = 0.0f;
            }
        }
        if (work->fadeStep != 0.0f) {
            if (work->active != 0 && work->fadeStep > 0.0f) {
                work->fade += work->fadeStep;
                work->fadeStep *= 0.77f;
            } else {
                if (work->active != 0 && work->fadeOutEventQueued == 0) {
                    work->fadeOutEventQueued = 1;
                    eventQueueAddUnique(0x1000213);
                }
                work->fade += work->fadeStep;
            }
            if (inputFastForwardActive()) {
                if (work->fadeStep > 0.0f) {
                    work->fade = 1.1f;
                    work->fadeStep = 0.0f;
                } else if (work->fadeStep < 0.0f) {
                    work->fade = -0.1f;
                    work->fadeStep = 0.0f;
                }
            }
            if (work->fade < 0.0f) {
                work->fade = 0.0f;
                work->fadeStep = 0.0f;
                if (work->stopWhenHidden != 0) {
                    jobStop(job, 0);
                }
            } else if (work->fade > 1.0f) {
                work->fade = 1.0f;
                work->fadeStep = 0.0f;
            }
            if (eventIsSkipping() != 0 && engineCleanupIsDone() == 0) {
                work->fade = 1.0f;
                work->fadeStep = 0.0f;
            }
        }
        if (work->releaseTimer != 0.0f) {
            work->releaseTimer -= 0.166f;
            if (work->releaseTimer <= 0.0f) {
                work->releaseTimer = 0.0f;
                if (work->handle >= 0) {
                    asdTMTexTableReleaseNode(work->table, work->handle);
                    work->handle = -1;
                }
            }
        }
        if (work->move.frames > 0) {
            work->x = (s32)((f32)(work->move.endX - work->move.startX) * (f32)work->move.frame /
                            (f32)work->move.frames) + work->move.startX;
            work->y = (s32)((f32)(work->move.endY - work->move.startY) * (f32)work->move.frame /
                            (f32)work->move.frames) + work->move.startY;
            if (work->move.frame >= work->move.frames) {
                work->move.frames = 0;
                work->move.frame = 0;
                work->x = work->move.endX;
                work->y = work->move.endY;
            }
            work->move.frame++;
            if (inputFastForwardActive()) {
                work->move.frame += 2;
            }
        }
        break;
    case 1:
        if (eventIsSkipping() != 0) {
            break;
        }
        if (work->portraitId != 0) {
            u32 portrait = resourceCacheGetOrLoadModel(work->portraitId, 1, 1);
            work->resourceState = 2;
            work->portrait = (NpcPortraitResource *)portrait;
            break;
        }
        if (aocRunByName((u32)g_aocSystem, work->table, work->node, 1)) {
            aocLoadTextureNode((u32)g_aocSystem, work->table, work->node, 0x10000);
        } else {
            asdTMTexTablePrepareNodeImage(work->table, work->node);
        }
        work->resourceState = 0;
        if (work->active != 0) {
            asdTMTexTablePrepareNodeImage(0x27, 0);
        }
        break;
    case 2:
        if (nkdwLoaderParse(work->portrait) != 0) {
            const BattleSpriteFrame *frame = ((BattleFrameSprite *)work->portrait)->frame;
            work->x = (s32)((f32)work->x + (200.0f - (f32)frame->anchorX));
            work->y = (s32)(-g_enemySpriteVerticalBaseline - (f32)frame->vertical.anchorY + (f32)frame->vertical.baselineOffset +
                            195.0f + (f32)work->y);
            aocHandleButtons(work->portrait, 7);
            work->resourceState = 3;
        }
        break;
    case 3:
        if (aocResourceStartOnce(work->portrait, 1) != 0) {
            work->resourceState = 0;
            work->animationFrame = (f32)(randBetween(0, 4) * 4);
        }
        break;
    }
    return 0;
}
}
