/* NON_MATCHING: steps the lmap intro camera (hold, ease in, announce the area with its event and voice, ease out) and smooths the camera towards its target; written from the decompilation, the two duplicated announce blocks are merged into a helper and switch layout not compared with retail */
#include "common.h"
#include "game/GameStateA.h"
#include "map/LmapGlobals.h"

#define LMAP_INTRO_START 0
#define LMAP_INTRO_FIRST_HOLD 1
#define LMAP_INTRO_ZOOM 2
#define LMAP_INTRO_DONE 3
#define LMAP_FIRST_HOLD_FRAMES 10
#define LMAP_ZOOM_FRAMES 0x13
#define LMAP_AREA_COUNT 6
#define LMAP_VOICE_FIRST 0x10002E5
#define LMAP_VOICE_SECOND 0x10002E6

extern "C" {
void mapEaseSceneHeading(void);
u32 soundVolumeSettingGet(void);
void soundVolumeSettingSet(u32 volume);
void FUN_0033abd4(void);
void soundActorStartOnFreeChannel(u32 event);
void FUN_00324e38(u32 value);
void libm_sinf(void); // declcheck: local (decompiler placeholder; its calls do not fit the real libm_sinf(f32))
void libm_cosf(void); // declcheck: local (the shared declaration in util/TrigF32.h does not compile here: too few arguments in function call)
void messageVoiceBankGet(void);
void FUN_002e364c(f32 *target);
void FUN_00327ee8(void);

static const u32 lmapIntroEventsFirst[LMAP_AREA_COUNT] = {
    0x10002C4, 0x10002C6, 0x10002C8, 0x10002CA, 0x10002CC, 0x10002D9
};
static const u32 lmapIntroEventsSecond[LMAP_AREA_COUNT] = {
    0x10002C5, 0x10002C7, 0x10002C9, 0x10002CB, 0x10002CD, 0x10002DA
};

/* Raises the area's event and plays the voice with the volume restored afterwards, then moves on. */
static __inline void lmapIntroAnnounce(const u32 *events, u32 voice, u32 volume)
{
    FUN_0033abd4();
    if (g_gameState.selectedKind < LMAP_AREA_COUNT)
        soundActorStartOnFreeChannel(events[g_gameState.selectedKind]);
    FUN_00324e38(0xFFFFFFFF);
    libm_sinf();
    libm_cosf();
    messageVoiceBankGet();
    soundVolumeSettingSet(0);
    sysPlayVoice(voice);
    soundVolumeSettingSet(volume);
    g_lmapScene->state++;
    g_lmapScene->stateTime = 0;
}

void FUN_002d978c(void)
{
    mapEaseSceneHeading();
    u32 volume = soundVolumeSettingGet();
    LmapSceneA *scene = g_lmapScene;
    switch (scene->state) {
    case LMAP_INTRO_START:
        scene->moveMode = 0xD;
        scene->moveSpeed = 3.0f;
        scene->state = LMAP_INTRO_FIRST_HOLD;
        scene->stateTime = 0;
        break;
    case LMAP_INTRO_FIRST_HOLD:
        scene->stateTime++;
        if (scene->stateTime >= LMAP_FIRST_HOLD_FRAMES)
            lmapIntroAnnounce(lmapIntroEventsFirst, LMAP_VOICE_FIRST, volume);
        break;
    case LMAP_INTRO_ZOOM:
        scene->stateTime++;
        if (scene->stateTime < LMAP_ZOOM_FRAMES) {
            f32 t = (f32)scene->stateTime;
            scene->pose.targetPosition.z = scene->transition.start.z + scene->transition.step.z * t;
            scene->pose.targetPosition.x = scene->transition.start.x + scene->transition.step.x * t;
            scene->pose.targetPosition.y = scene->transition.start.y + scene->transition.step.y * t;
        } else {
            lmapIntroAnnounce(lmapIntroEventsSecond, LMAP_VOICE_SECOND, volume);
        }
        break;
    case LMAP_INTRO_DONE:
        scene->moveSpeed = 5.0f;
        break;
    }

    scene = g_lmapScene;
    scene->pose.position.x += (scene->pose.targetPosition.x - scene->pose.position.x) * (1.0f / 3.0f);
    scene->pose.position.y += (scene->pose.targetPosition.y - scene->pose.position.y) * (1.0f / 6.0f);
    scene->pose.position.z += (scene->pose.targetPosition.z - scene->pose.position.z) * (1.0f / 3.0f);
    FUN_002e364c(&scene->pose.targetPosition.x);
    FUN_00327ee8();
}

} /* extern "C" */
