/* NON_MATCHING: updates a field NPC marker (appears after leaving the trigger range, rises into view with its sound, then follows the NPC lifted by the lmap view's height); retail tests the near and pending bits one at a time before setting the active byte (armcc here merges them into one tst #5), keeps the visibility stores in shared blocks and allocates the float temporaries differently. */
#include "gamedata/MapSaveBlockA.h"
#include "map/LmapViewGlobals.h"
#include "map/FieldNpc.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"
#include "gfx/ControllerModel.h"
#include "shard/W6_W6Match1_PositionedStream.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"

#define NPC_TRIGGER_DISTANCE 300.0f
#define NPC_RISE_STEP 100.0f
#define NPC_KIND_FLOATING_A 0
#define NPC_KIND_FLOATING_B 3
#define NPC_KIND_GROUND_A 1
#define NPC_KIND_GROUND_B 2

extern "C" {


/* Updates a field NPC marker: once the player leaves the trigger range it is shown (or hidden)
 * and rises into view with its message, then follows the NPC, lifted with the lmap view's height. */
void FUN_00481784(FieldNpc *npc)
{
    MapSaveBlockA *block = gameFlagsGetBlock();
    if (g_gameState.paused != 0)
        return;
    if (npc->mode != 1 && g_gameState.unk2A0 > 0)
        return;

    if ((npc->flags & NPC_FLAG_NEAR) == 0 && (npc->flags & NPC_FLAG_PENDING) == 0)
        npc->byteFlags |= NPC_BYTE_FLAG_ACTIVE;
    if ((npc->flags & NPC_FLAG_NEAR) != 0) {
        MapVector from = {npc->position.x, g_lmapScene->pose.position.y, npc->position.z};
        if (distSpatial(from, g_lmapScene->pose.position) < NPC_TRIGGER_DISTANCE)
            return;
        npc->counter++;
        if (npc->counter > npc->limit || block->resetActive == 1) {
            if (npc->kind == NPC_KIND_FLOATING_A || npc->kind == NPC_KIND_FLOATING_B) {
                npc->controller->body->flags &= ~NPC_VISIBLE_BITS;
                npc->flags |= NPC_FLAG_HIDDEN;
            } else if (npc->kind == NPC_KIND_GROUND_A || npc->kind == NPC_KIND_GROUND_B) {
                npc->controller->body->flags |= NPC_VISIBLE_BITS;
                npc->flags &= ~NPC_FLAG_HIDDEN;
            }
            npc->flags &= ~NPC_FLAG_NEAR;
            npc->flags |= NPC_FLAG_PENDING;
        }
    }
    if ((npc->flags & NPC_FLAG_PENDING) != 0) {
        MapVector from = {npc->position.x, g_lmapScene->pose.position.y, npc->position.z};
        if (distSpatial(from, g_lmapScene->pose.position) < NPC_TRIGGER_DISTANCE)
            return;
        npc->offset.y += NPC_RISE_STEP;
        if (0.0f < npc->offset.y) {
            if (npc->kind == NPC_KIND_FLOATING_A || npc->kind == NPC_KIND_FLOATING_B) {
                SoundActorQueuePosition sound = {npc->position.x, npc->position.y, npc->position.z};
                eventSoundPlayByKind(npc->messageId, 0, soundActorScalePosition(sound, 1.0f / 3.0f));
            }
            npc->offset.y = 0.0f;
            npc->flags &= ~NPC_FLAG_PENDING;
        }
    }
    if (npc->queueCount < 5) {
        npc->offset.y -= NPC_RISE_STEP;
        npc->flags |= NPC_FLAG_RISING;
    }
    if (npc->controller == NULL)
        return;

    MapVector destination;
    destination.x = npc->position.x + npc->offset.x;
    destination.y = npc->position.y + npc->offset.y;
    destination.z = npc->position.z + npc->offset.z;
    f32 height = g_lmapView->height;
    if (height > 0.9f) {
        f32 lift = (height - 0.9f) * 10.0f;
        if (lift < 0.0f)
            lift = 0.0f;
        else if (lift > 1.0f)
            lift = 1.0f;
        destination.y += lift * NPC_RISE_STEP;
        Obj557b18 *body = npc->controller->body;
        controllerSetDestination(body, &destination);
        controllerSetRotationEulerDegrees(body, lift * -60.0f, g_lmapView->heading + 180.0f, 0.0f);
    } else {
        Obj557b18 *body = npc->controller->body;
        controllerSetDestination(body, &destination);
        controllerSetRotationEulerDegrees(body, npc->rotation.x, npc->rotation.y, npc->rotation.z);
    }
    controllerSetPosition(npc->controller->body, npc->scale.x, npc->scale.y, npc->scale.z);

    Obj557b18 *body = npc->controller->body;
    if (g_gameState.paused != 0)
        body->flags |= NPC_VISIBLE_BITS;
    else if (g_gameState.loading != 0)
        body->flags |= NPC_VISIBLE_BITS;
    else if ((npc->flags & NPC_FLAG_HIDDEN) != 0)
        body->flags &= ~NPC_VISIBLE_BITS;
    if (g_gameState.loading != 0)
        body->flags |= NPC_VISIBLE_BITS;
    else if ((npc->flags & NPC_FLAG_HIDDEN) != 0)
        body->flags &= ~NPC_VISIBLE_BITS;
}

} /* extern "C" */
