/* NON_MATCHING: steps the lmap intro camera (hold, ease in, announce the area with its event and voice, ease out) and smooths the camera towards its target; written from the decompilation, the two duplicated announce blocks are merged into a helper and switch layout not compared with retail */
#include "common.h"

#define LMAP_INTRO_START 0
#define LMAP_INTRO_FIRST_HOLD 1
#define LMAP_INTRO_ZOOM 2
#define LMAP_INTRO_DONE 3
#define LMAP_FIRST_HOLD_FRAMES 10
#define LMAP_ZOOM_FRAMES 0x13
#define LMAP_AREA_COUNT 6
#define LMAP_VOICE_FIRST 0x10002E5
#define LMAP_VOICE_SECOND 0x10002E6

struct LmapIntroScene {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ s32 state;
    /* 0x008 */ s32 timer;
    /* 0x00C */ u8 unk00C[0x10];
    /* 0x01C */ f32 cameraX;
    /* 0x020 */ f32 cameraY;
    /* 0x024 */ f32 cameraZ;
    /* 0x028 */ f32 targetX;
    /* 0x02C */ f32 targetY;
    /* 0x030 */ f32 targetZ;
    /* 0x034 */ u8 unk034[0x20];
    /* 0x054 */ u32 mode;
    /* 0x058 */ f32 speed;
    /* 0x05C */ u8 unk05C[0xDC];
    /* 0x138 */ f32 startX;
    /* 0x13C */ f32 startY;
    /* 0x140 */ f32 startZ;
    /* 0x144 */ u8 unk144[0xC];
    /* 0x150 */ f32 stepX;
    /* 0x154 */ f32 stepY;
    /* 0x158 */ f32 stepZ;
};

struct IntroGameState {
    /* 0x00 */ u8 unk00[0x32];
    /* 0x32 */ u8 area;
};

extern "C" {
extern LmapIntroScene *g_lmapScene;
extern IntroGameState g_gameState;

void mapEaseSceneHeading(void);
u32 soundVolumeSettingGet(void);
void soundVolumeSettingSet(u32 volume);
void FUN_0033abd4(void);
void FUN_003d4ed8(u32 event);
void FUN_00324e38(u32 value);
void FUN_001bc124(void);
void FUN_001bbf0c(void);
void FUN_0014af98(void);
void sysPlayVoice(u32 voice);
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
    if (g_gameState.area < LMAP_AREA_COUNT)
        FUN_003d4ed8(events[g_gameState.area]);
    FUN_00324e38(0xFFFFFFFF);
    FUN_001bc124();
    FUN_001bbf0c();
    FUN_0014af98();
    soundVolumeSettingSet(0);
    sysPlayVoice(voice);
    soundVolumeSettingSet(volume);
    g_lmapScene->state++;
    g_lmapScene->timer = 0;
}

void FUN_002d978c(void)
{
    mapEaseSceneHeading();
    u32 volume = soundVolumeSettingGet();
    LmapIntroScene *scene = g_lmapScene;
    switch (scene->state) {
    case LMAP_INTRO_START:
        scene->mode = 0xD;
        scene->speed = 3.0f;
        scene->state = LMAP_INTRO_FIRST_HOLD;
        scene->timer = 0;
        break;
    case LMAP_INTRO_FIRST_HOLD:
        scene->timer++;
        if (scene->timer >= LMAP_FIRST_HOLD_FRAMES)
            lmapIntroAnnounce(lmapIntroEventsFirst, LMAP_VOICE_FIRST, volume);
        break;
    case LMAP_INTRO_ZOOM:
        scene->timer++;
        if (scene->timer < LMAP_ZOOM_FRAMES) {
            f32 t = (f32)scene->timer;
            scene->targetZ = scene->startZ + scene->stepZ * t;
            scene->targetX = scene->startX + scene->stepX * t;
            scene->targetY = scene->startY + scene->stepY * t;
        } else {
            lmapIntroAnnounce(lmapIntroEventsSecond, LMAP_VOICE_SECOND, volume);
        }
        break;
    case LMAP_INTRO_DONE:
        scene->speed = 5.0f;
        break;
    }

    scene = g_lmapScene;
    scene->cameraX += (scene->targetX - scene->cameraX) * (1.0f / 3.0f);
    scene->cameraY += (scene->targetY - scene->cameraY) * (1.0f / 6.0f);
    scene->cameraZ += (scene->targetZ - scene->cameraZ) * (1.0f / 3.0f);
    FUN_002e364c(&scene->targetX);
    FUN_00327ee8();
}

} /* extern "C" */
