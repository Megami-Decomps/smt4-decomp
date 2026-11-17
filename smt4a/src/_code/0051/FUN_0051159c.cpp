/* NON_MATCHING: call chain, element-array constructors, the g_asdSoundSystem argument and the strd tail stores match; armcc folds the scene-base recomputation (object - 0x1210) into the tail offsets (add r1,r0,#236) where retail computes the base first and then addresses the tail at base+0x12fc. Really the inlined constructor of a global derived object (this = result of the base constructor). */
#include "AsdSDK/Source/Snd/AsdSoundSystemA.h"

extern "C" {

extern u8 entry;

typedef void (*ElementCtor)(void *element);

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

// Constructs g_asdSoundSystem: the archive, player and data manager, the slot arrays, the 3D
// manager, actors, handles and listener, then the status lock, and registers its destructor.
void FUN_0051159c(void)
{
    u8 *object = installVtbl55BDE0(g_asdSoundSystem.archive);
    object = FUN_0045e798(object + 0x194);
    object = FUN_0045c310(object + 0x118);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x278, FUN_00401654, 0x70, 4);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x1c0, (ElementCtor)&FUN_00417a10, 0x3c, 2);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x80, objectRegisterPart, 0x3c, 4);
    object = FUN_0045c0ac(object + 0xf0);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x3c, FUN_0045bbdc, 0x88, 0x10);
    object = (u8 *)__aeabi_vec_ctor_nocookie_nodtor(object + 0x880, (ElementCtor)&FUN_0045b824, 4, 0x10);
    object = nw_snd_Sound3DListener_Sound3DListener_sub_object(object + 0x100);
    AsdSoundSystemA *system = (AsdSoundSystemA *)(object - offsetof(AsdSoundSystemA, sound3d.listener));
    AsdSndCriticalSection *section = &system->control.status.section;
    section->unk00 = 0;
    section->unk04 = 0;
    section->unk08 = -1;
    __aeabi_atexit(system, FUN_003f2cb0, &entry);
}

}
