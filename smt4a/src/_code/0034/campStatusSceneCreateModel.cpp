#include "classes/Obj557c58.h"

/* The camp scene that shows the status screen's model. */
struct CampStatusScene {
    /* 0x00 */ u8 unk00[0x1C];
    /* 0x1C */ Obj557c58 *model;
    /* 0x20 */ u8 unk20[0xC];
    /* 0x2C */ u8 modelLoaded;
};

extern "C" {
extern void *g_handleRegistry;

s32 lmapSceneGetScript(void);
s32 lmapMainIsRunning(void);
void FUN_0031416c(s32 r0, s32 g0, s32 b0, s32 r1, s32 g1, s32 b1, s32 r2, s32 g2, s32 b2, s32 r3, s32 g3,
                  s32 b3, f32 a, f32 b, f32 c, f32 d, f32 e, f32 f, f32 g, f32 h, f32 i);
void FUN_0040ba38(Obj557c58 *model, s32 mode);
u8 FUN_0040af60(void *registry);
void resourceOwnerLoadNamed(void *registry, const char *name);
void FUN_0040ae70(void *registry, s32 flag);

/* Creates the status screen's model and, outside the lmap, loads its resource. */
void campStatusSceneCreateModel(CampStatusScene *scene)
{
    if (lmapSceneGetScript() != 0 || lmapMainIsRunning() != 0) {
        FUN_0031416c(200, 200, 200, 130, 130, 130, 30, 30, 30, 150, 150, 150, 90.0f, -0.5f, 0.0f, 0.0f, 0.0f,
                     0.0f, 0.0f, 30.0f, 1.5f);
    }
    scene->model = new (scene) Obj557c58;
    FUN_0040ba38(scene->model, 7);
    scene->modelLoaded = 0;
    if (lmapMainIsRunning() == 0 && lmapSceneGetScript() == 0) {
        scene->modelLoaded = 1;
        void *registry = g_handleRegistry;
        if (FUN_0040af60(registry) == 0) {
            resourceOwnerLoadNamed(registry, "status/status.bch");
            FUN_0040ae70(registry, 1);
        }
    }
}

} /* extern "C" */
