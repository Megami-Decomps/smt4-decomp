/* NON_MATCHING: near: 206 rows against 210; retail has a linker-NOPed hook call between the current-motion compare and its branch and reloads the body object before the motion call, and loads the 50.0 scale constant later. Show/hide structure, constants and the state logic agree. */
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionModel.h"

/* The follower scene's work (observed fields): two model objects, the first scaled by `scale`. */
struct FollowerWork {
    /* 0x00 */ u8 unk00[0xB];
    /* 0x0B */ u8 hideBody;
    /* 0x0C */ u8 unk0C[0xB0];
    /* 0xBC */ AsdMdlObject *body;
    /* 0xC0 */ u8 unkC0[4];
    /* 0xC4 */ f32 tilt;
    /* 0xC8 */ f32 scale;
    /* 0xCC */ u8 unkCC[0xC];
    /* 0xD8 */ AsdMdlObject *shadow;
    /* 0xDC */ f32 shadowMotion;
    /* 0xE0 */ u8 shadowMotionPending;
};

/* The map scene's position block (observed fields). */
struct LmapScenePos {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ f32 position[3];
    /* 0x28 */ u8 unk28[0x24];
    /* 0x4C */ f32 height;
};

/* The game-state flag that hides the followers (observed field). */
struct GameStateHide {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s8 hideFollowers;
};

#define MDL_OBJECT_HIDDEN 2

extern "C" {

extern LmapScenePos *g_lmapScene;
extern GameStateHide g_gameState;

void animOwnerSetScale(AsdMdlObject *object, f32 scale);
void nodeSetTranslation(AsdMdlNode *node, s32 index, f32 *position);
void nodeSetScale(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void FUN_0029bb14(AsdMdlNode *node, f32 value);
void FUN_0028c618(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void modelSelectPrimaryMotion(AsdMotionModel *model, s32 motionIndex, f32 blend);
s32 gameFlagIsSet(u32 flag);

/* Hides the model object held in `slot` (if shown): its position is no longer followed and its scale
 * drops to zero. */
static __inline void asdMdlObjectHide(AsdMdlObject **slot)
{
    AsdMdlObject *object = *slot;

    if ((object->flags & MDL_OBJECT_HIDDEN) == 0) {
        object->flags |= MDL_OBJECT_HIDDEN;
        object->node->resource->positionFollowed = 0;
        animOwnerSetScale(*slot, 0.0f);
    }
}

/* Shows the model object held in `slot` (if hidden) at full scale. */
static __inline void asdMdlObjectShow(AsdMdlObject **slot)
{
    AsdMdlObject *object = *slot;

    if ((object->flags & MDL_OBJECT_HIDDEN) != 0) {
        object->flags &= ~MDL_OBJECT_HIDDEN;
        object->node->resource->positionFollowed = 1;
        animOwnerSetScale(*slot, 1.0f);
    }
}

/* Updates the follower model and its shadow each frame: shows or hides them (by the global flag, the
 * body's hide flag and its scale), places them at the map position and picks the body's motion from
 * the game flags. */
void FUN_00265bf8(FollowerWork *work)
{
    s32 motion;

    if (g_gameState.hideFollowers != 0) {
        asdMdlObjectHide(&work->body);
        asdMdlObjectHide(&work->shadow);
        return;
    }
    if (work->scale > 0.1f) {
        asdMdlObjectShow(&work->body);
    }
    asdMdlObjectShow(&work->shadow);
    if (work->hideBody == 0) {
        if (work->scale > 0.1f) {
            asdMdlObjectShow(&work->body);
        } else {
            asdMdlObjectHide(&work->body);
        }
        asdMdlObjectHide(&work->shadow);
    } else {
        asdMdlObjectHide(&work->body);
        asdMdlObjectShow(&work->shadow);
    }
    nodeSetTranslation(work->body->node, 0, g_lmapScene->position);
    nodeSetScale(work->body->node, 0, work->scale * 50.0f, work->scale * 50.0f, work->scale * 50.0f);
    FUN_0029bb14(work->body->node, work->tilt);
    motion = 0;
    if (gameFlagIsSet(0x16B) != 0) {
        motion = 1;
    } else if (gameFlagIsSet(0x176) != 0) {
        motion = 2;
    }
    if (((AsdMotionModel *)work->body->node)->currentMotion != motion) {
        modelSelectPrimaryMotion((AsdMotionModel *)work->body->node, motion, 0.0f);
    }
    nodeSetTranslation(work->shadow->node, 0, g_lmapScene->position);
    FUN_0028c618(work->shadow->node, 0, 0.0f, g_lmapScene->height, 0.0f);
    nodeSetScale(work->shadow->node, 0, 50.0f, 50.0f, 50.0f);
    if (work->shadowMotionPending != 0) {
        modelSelectPrimaryMotion((AsdMotionModel *)work->shadow->node, (s32)work->shadowMotion, 0.0f);
        work->shadowMotionPending = 0;
    }
}

} /* extern "C" */
