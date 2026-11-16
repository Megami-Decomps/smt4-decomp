#include "common.h"

/* The 3D sound manager the sound system embeds: its two vtable pointers and its entry array. */
struct SoundSystemManager3d {
    /* 0x00 */ const void *vtables[2];
    /* 0x08 */ u8 unk08[0x34];
    /* 0x3C */ u8 entries[16][0x84];
};

/* The sound system's object: NintendoWare sound members behind a base, with arrays of handles and
 * handle owners. Only the members its destructor touches are laid out. */
struct SoundSystem {
    /* 0x000 */ u8 base[0x184];
    /* 0x184 */ u8 member184[0xC0];      /* destroyed by FUN_00378b40 */
    /* 0x244 */ u8 member244[0x278];     /* destroyed by FUN_00377414 */
    /* 0x4BC */ u8 objs50[4][0x50];      /* SoundObj50 */
    /* 0x5FC */ u8 detachObjs[2][0x3C];
    /* 0x674 */ u8 handlePairs[2][0x10];
    /* 0x694 */ u8 objs3c[4][0x3C];      /* SoundObj3c */
    /* 0x784 */ SoundSystemManager3d manager3d;
    /* 0x1000 */ u8 handles[16][4];      /* SoundHandle */
};

typedef void *(*ElementDestructor)(void *element);

extern "C" {
extern u8 _ZTV9Obj421948[];
void *__aeabi_vec_dtor(void *array, ElementDestructor destroy, u32 size, u32 count);
void *_ZN11SoundHandleD1Ev(void *handle);
void *FUN_00376d74(void *entry);
void *_ZN10SoundObj3cD1Ev(void *object);
void *soundHandlePairDetach(void *pair);
void *soundObjDetachHandles(void *object);
void *_ZN10SoundObj50D1Ev(void *object);
u8 *FUN_00377414(void *member);
u8 *FUN_00378b40(void *member);
void *FUN_0037b540(void *base);

/* Destroys the sound system's members in reverse order, then its base; returns the object. */
void *FUN_0033b66c(SoundSystem *system)
{
    SoundSystemManager3d *manager3d = &system->manager3d;

    __aeabi_vec_dtor(system->handles, _ZN11SoundHandleD1Ev, 4, 16);
    __aeabi_vec_dtor(manager3d->entries, FUN_00376d74, 0x84, 16);
    manager3d->vtables[0] = _ZTV9Obj421948 + 0x44;
    manager3d->vtables[1] = _ZTV9Obj421948 + 0x64;
    __aeabi_vec_dtor(system->objs3c, _ZN10SoundObj3cD1Ev, 0x3C, 4);
    __aeabi_vec_dtor(system->handlePairs, soundHandlePairDetach, 0x10, 2);
    __aeabi_vec_dtor(system->detachObjs, soundObjDetachHandles, 0x3C, 2);
    __aeabi_vec_dtor(system->objs50, _ZN10SoundObj50D1Ev, 0x50, 4);
    u8 *member = FUN_00377414(system->member244);
    member = FUN_00378b40(member - 0xC0);
    return FUN_0037b540(member - 0x184);
}

} /* extern "C" */
