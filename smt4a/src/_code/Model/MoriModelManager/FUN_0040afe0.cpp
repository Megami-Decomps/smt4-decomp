/* NON_MATCHING: retail reserves 8 more bytes of frame (48 vs 40) and schedules the pass/fog constant stores differently; the structure, calls and constants otherwise agree. */
#include "AsdSDK/AsdDebug.h"

/* Fog parameters handed to moriSceneSetFogDefaults. */
struct MoriFogConfig {
    /* 0x00 */ s32 range;
    /* 0x04 */ u16 mode;
    /* 0x06 */ u16 layer;
    /* 0x08 */ u16 enabled;
    /* 0x0A */ u8 unk0A;
    /* 0x0B */ u8 unk0B;
    /* 0x0C */ u8 unk0C;
    /* 0x0D */ u8 unk0D;
};

/* Parameters of the scene's first draw pass. */
struct MoriPassConfig {
    /* 0x00 */ u32 target;
    /* 0x04 */ u8 enabled;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 width;
    /* 0x0C */ u32 height;
    /* 0x10 */ u32 depth;
    /* 0x14 */ u8 unk14;
};

struct MoriScene;

struct MoriModelManager {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ MoriScene *scene;
    /* 0x08 */ u8 unk08[0x0C];
    /* 0x14 */ u32 sceneRoot;
    /* 0x18 */ u8 unk18[0x20];
    /* 0x38 */ u32 renderTarget;
};

extern "C" {

void *FUN_00178b04(u32 size, const char *file, u32 line);
MoriScene *_ZN9Obj557b68C1Ev(void *memory);
void moriSceneSetFogDefaults(MoriScene *scene, MoriFogConfig *config);
u32 FUN_001581dc(MoriPassConfig *config);
void FUN_00406834(MoriScene *scene, u32 pass);
void FUN_003fed38(u32 root, void *object);

void FUN_0040afe0(MoriModelManager *manager, u16 layer, s32 attach)
{
    if (manager->scene == NULL) {
        MoriScene *scene = static_cast<MoriScene *>(FUN_00178b04(0x194, "c:\\SMT4F\\SMT4F\\sdds4\\program\\Model\\MoriModelManager.cpp", 0x196));
        if (scene != NULL) {
            scene = _ZN9Obj557b68C1Ev(scene);
        }
        manager->scene = scene;
        MoriPassConfig pass;
        MoriFogConfig fog;
        fog.unk0A = 0;
        fog.unk0B = 0;
        fog.unk0D = 0;
        fog.mode = 2;
        fog.range = 0xffff;
        fog.layer = layer;
        fog.enabled = 1;
        fog.unk0C = 1;
        moriSceneSetFogDefaults(manager->scene, &fog);
        MoriScene *current = manager->scene;
        pass.enabled = 0;
        pass.width = 0x30000;
        pass.height = 0x10000;
        pass.depth = 0x10000;
        pass.unk14 = 0;
        pass.target = manager->renderTarget;
        pass.enabled = 1;
        FUN_00406834(current, FUN_001581dc(&pass));
        if (attach != 0 && manager->scene != NULL) {
            FUN_003fed38(manager->sceneRoot, reinterpret_cast<u8 *>(manager->scene) + 0x10);
        }
    }
}

} /* extern "C" */
