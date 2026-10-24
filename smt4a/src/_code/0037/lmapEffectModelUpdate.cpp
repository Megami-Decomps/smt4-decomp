#include "common.h"

/* The part of the lmap scene that drives the floating effect model (state machine at 0x250). */
struct EffectController {
    /* 0x000 */ u8 unk000[0x1FC];
    /* 0x1FC */ f32 scale;
};

class EffectModel {
public:
    virtual ~EffectModel();
    /* 0x04 */ EffectController *controller;
};

struct Vec3F {
    f32 x, y, z;
};

struct LmapEffectScene {
    /* 0x000 */ u8 unk000[0x190];
    /* 0x190 */ EffectModel *model;
    /* 0x194 */ u8 unk194[0xB8];
    /* 0x24C */ s32 frame;
    /* 0x250 */ s32 state;
    /* 0x254 */ Vec3F effectPosition;
};

/* The module global: the scene pointer and the effect's bobbing phase, side by side. */
struct LmapSceneGlobals {
    /* 0x00 */ LmapEffectScene *scene;
    /* 0x04 */ f32 phase;
};

extern "C" {
extern LmapSceneGlobals g_lmapScene;
extern void *g_handleRegistry;

f32 FUN_001bc124(f32 value);
f32 FUN_001f3eec(f32 start, f32 end, f32 duration, f32 time);
void controllerSetDestination(EffectController *controller, const Vec3F *destination);
void ptrListRemoveClearOwner(void *registry, EffectController *controller);

/* Runs the effect model: bob and scale while it shows, then unregister, then delete it. */
void lmapEffectModelUpdate(void)
{
    switch (g_lmapScene.scene->state) {
    case 0: {
        g_lmapScene.phase += 0.1f;
        g_lmapScene.scene->frame++;
        Vec3F destination = g_lmapScene.scene->effectPosition;
        destination.y += FUN_001bc124(g_lmapScene.phase) * 2.0f;
        f32 scale = FUN_001f3eec(1.0f, 7.0f, 60.0f, (f32)g_lmapScene.scene->frame);
        EffectController *controller = g_lmapScene.scene->model->controller;
        controllerSetDestination(controller, &destination);
        controller->scale = scale;
        break;
    }
    case 1:
        if (g_lmapScene.scene->model != NULL && g_lmapScene.scene->model->controller != NULL) {
            ptrListRemoveClearOwner(g_handleRegistry, g_lmapScene.scene->model->controller);
        }
        g_lmapScene.scene->state = 2;
        break;
    case 2:
        if (g_lmapScene.scene->model != NULL) {
            delete g_lmapScene.scene->model;
            g_lmapScene.scene->model = NULL;
        }
        g_lmapScene.scene->state = 3;
        break;
    }
}

}
