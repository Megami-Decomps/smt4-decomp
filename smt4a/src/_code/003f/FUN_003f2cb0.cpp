/* NON_MATCHING: modeled on proven smt4 FUN_0033b66c; only the prologue differs (retail adds 0x12FC before push and addresses handles/manager3d/base relative to control.status). */
#include "common.h"

struct SoundSystemManager3dA {
    /* 0x00 */ const void *vtables[2];
    /* 0x08 */ u8 unk08[0x34];
    /* 0x3C */ u8 entries[16][0x88];
};

struct SoundSystemA {
    /* 0x0000 */ u8 archive[0x194];
    /* 0x0194 */ u8 player[0x118];
    /* 0x02AC */ u8 dataManager[0x278];
    /* 0x0524 */ u8 objs70[4][0x70];
    /* 0x06E4 */ u8 detachObjs[2][0x3C];
    /* 0x075C */ u8 registered[8];
    /* 0x0764 */ u8 objs3c[4][0x3C];
    /* 0x0854 */ SoundSystemManager3dA manager3d;
    /* 0x1110 */ u8 handles[16][4];
    /* 0x1150 */ u8 rest[0x1AC];
    /* 0x12FC */ u8 status[0x4C];
};

typedef void *(*ElementDestructor)(void *element);

extern "C" {

extern u8 _ZTV9Obj55bd64[];
void *__aeabi_vec_dtor(void *array, ElementDestructor destroy, u32 size, u32 count);
void *_ZN11SoundHandleD1Ev(void *handle);
void *FUN_0045bc3c(void *entry);
void *_ZN10SoundObj3cD1Ev(void *object);
void *soundObjDetachHandles(void *object);
void *_ZN10SoundObj70D1Ev(void *object);
u8 *FUN_0045c350(void *member);
u8 *FUN_0045e8fc(void *member);
void *FUN_00460f2c(void *base);

/* Destroys the Apocalypse sound system's members in reverse order, then its base; returns the object. */
void *FUN_003f2cb0(SoundSystemA *system)
{
    SoundSystemManager3dA *manager3d = &system->manager3d;

    __aeabi_vec_dtor(system->handles, _ZN11SoundHandleD1Ev, 4, 16);
    __aeabi_vec_dtor(manager3d->entries, FUN_0045bc3c, 0x88, 16);
    manager3d->vtables[0] = _ZTV9Obj55bd64 + 0x44;
    manager3d->vtables[1] = _ZTV9Obj55bd64 + 0x64;
    __aeabi_vec_dtor(system->objs3c, _ZN10SoundObj3cD1Ev, 0x3C, 4);
    __aeabi_vec_dtor(system->detachObjs, soundObjDetachHandles, 0x3C, 2);
    __aeabi_vec_dtor(system->objs70, _ZN10SoundObj70D1Ev, 0x70, 4);
    u8 *member = FUN_0045c350(system->dataManager);
    member = FUN_0045e8fc(member - 0x118);
    return FUN_00460f2c(member - 0x194);
}

} /* extern "C" */
