/* NON_MATCHING: global/component base loads, signed modulus and movement VFP multiplication scheduling differ. */
#include "map/lmapMain.h"
#include "AsdSDK/Source/Snd/SoundActorQueue.h"
#include "util/MathFunctions.h"
#include "util/Random.h"

struct AmbientMovementTransform {
    u32 unk00;
    MapVector position;
    u8 unk10[0x24];
    s32 frame;
    u32 unk38;
    u32 sound;
};
struct AmbientMovementActor {
    u8 unk00[0x24];
    AmbientMovementTransform movement;
};
struct AmbientMovementWork {
    u8 unk00[0xc];
    AmbientMovementActor *actor;
    MapVector velocity;
    s32 state;
    u32 duration;
};
typedef char AmbientMovementOffsets[offsetof(AmbientMovementActor, movement) == 0x24 &&
    offsetof(AmbientMovementTransform, position) == 4 &&
    offsetof(AmbientMovementTransform, frame) == 0x34 && offsetof(AmbientMovementTransform, sound) == 0x3c &&
    offsetof(AmbientMovementWork, velocity) == 0x10 && offsetof(AmbientMovementWork, state) == 0x1c &&
    offsetof(AmbientMovementWork, duration) == 0x20 ? 1 : -1];

extern "C" {
extern GameState g_gameState;
extern LmapScene *g_lmapScene;
void FUN_0039560c(AmbientMovementWork *work);
f32 mathDistanceBetweenPoints(f32 x, f32 y, f32 z, f32 otherX, f32 otherY, f32 otherZ);

void FUN_0039568c(AmbientMovementWork *work)
{
    // Naming this float range in padding at 0x252 would shift the shared layout.
    struct AmbientGlobalsView {
        u8 unk000[0x254];
        f32 radius;
        u32 duration;
        s32 blocked;
        u8 unk260[0xe8];
        u8 paused;
    };
    typedef char AmbientGlobalsOffsets[offsetof(AmbientGlobalsView, radius) == 0x254 &&
        offsetof(AmbientGlobalsView, blocked) == 0x25c &&
        offsetof(AmbientGlobalsView, paused) == 0x348 ? 1 : -1];
    AmbientMovementTransform *movement = &work->actor->movement;
    AmbientGlobalsView *globals = reinterpret_cast<AmbientGlobalsView *>(&g_gameState);
    if (globals->paused || g_gameState.unk18) {
        return;
    }
    if (work->state != 0) {
        if (work->state == 1) {
            FUN_0039560c(work);
            movement->position.x += work->velocity.x;
            movement->position.y += work->velocity.y;
            movement->position.z += work->velocity.z;
        }
    } else if (!globals->blocked && movement->frame % 15 == 0 && randNextInRange(100) < 30) {
        const f32 *center = g_lmapScene->transform.position;
        f32 distance = mathDistanceBetweenPoints(movement->position.x, movement->position.y, movement->position.z,
                                                  center[0], center[1], center[2]);
        if (globals->radius > distance) {
            work->duration = globals->duration;
            if (movement->frame <= 60) {
                movement->frame = 60;
            }
            SoundActorQueuePosition position = {
                movement->position.x * (1.0f / 3.0f),
                movement->position.y * (1.0f / 3.0f),
                movement->position.z * (1.0f / 3.0f)
            };
            eventSoundPlayByKind(movement->sound, 1, position);
            ++work->state;
        }
    }
}
}
