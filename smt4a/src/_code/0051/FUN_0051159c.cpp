/* NON_MATCHING: call chain, element-array constructors, the g_asdSoundSystem argument and the strd tail stores match; armcc folds the scene-base recomputation (object - 0x1210) into the tail offsets (add r1,r0,#236) where retail computes the base first and then addresses the tail at base+0x12fc. Really the inlined constructor of a global derived object (this = result of the base constructor). */
#include "common.h"

/* The global scene object (the part its constructor finishes). */
struct SceneTail {
    /* 0x00 */ u8 unk00[0xc];
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ u32 unk10;
    /* 0x14 */ s32 unk14;
};

struct SceneObject {
    /* 0x0000 */ u8 unk0000[0x12fc];
    /* 0x12fc */ SceneTail tail;
};

extern "C" {

extern u8 entry;

typedef void (*ElementCtor)(void *element);
extern u8 g_asdSoundSystem;

void *__aeabi_vec_ctor_nocookie_nodtor(void *array, ElementCtor ctor, u32 elementSize, u32 count);
void __aeabi_atexit(void *object, void (*destructor)(void *), void *moduleHandle);

u8 *installVtbl55BDE0(u8 *part);
u8 *FUN_0045e798(u8 *part);
u8 *FUN_0045c310(u8 *part);
u8 *FUN_0045c0ac(u8 *part);
u8 *nw_snd_Sound3DListener_Sound3DListener_sub_object(u8 *part);

void FUN_00401654(void *element);
void objectRegisterPart(void *element);
void FUN_0045bbdc(void *element);
extern u8 FUN_00417a10, FUN_0045b824;
void FUN_003f2cb0(void *object);

// Constructs the global scene object: its base parts, the element arrays and the 3D listener,
// then registers its destructor.
void FUN_0051159c(void)
{
    u8 *object = installVtbl55BDE0(&g_asdSoundSystem);
    object = FUN_0045e798(object + 0x194);
    object = FUN_0045c310(object + 0x118);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x278, FUN_00401654, 0x70, 4);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x1c0, (ElementCtor)&FUN_00417a10, 0x3c, 2);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x80, objectRegisterPart, 0x3c, 4);
    object = FUN_0045c0ac(object + 0xf0);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x3c, FUN_0045bbdc, 0x88, 0x10);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x880, (ElementCtor)&FUN_0045b824, 4, 0x10);
    object = nw_snd_Sound3DListener_Sound3DListener_sub_object(object + 0x100);
    SceneObject *scene = (SceneObject *)(object - 0x1210);
    SceneTail *tail = &scene->tail;
    tail->unk0c = 0;
    tail->unk10 = 0;
    tail->unk14 = -1;
    __aeabi_atexit(scene, FUN_003f2cb0, &entry);
}

}
