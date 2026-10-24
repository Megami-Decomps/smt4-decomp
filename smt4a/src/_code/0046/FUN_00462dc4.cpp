/* NON_MATCHING: register/schedule only: retail loads hasRequest into r0 and the constant 1 into r1 (swapped here) */
/* Marks the object as dirty, releasing its pending request and clearing its busy flag. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0x0D];
    /* 0x0D */ u8 busy;
    /* 0x0E */ u8 unk0E;
    /* 0x0F */ u8 dirty;
    /* 0x10 */ u8 unk10[0x40];
    /* 0x50 */ u8 request[0x52];
    /* 0xA2 */ u8 hasRequest;
} Object;

extern u32 _ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(void);
extern void FUN_001d0b28(u32 owner, void *request);

void FUN_00462dc4(Object *obj)
{
    obj->dirty = 1;
    if (obj->hasRequest != 0) {
        FUN_001d0b28(_ZN2nw3snd8internal6driver11SoundThread11GetInstanceEv(), obj->request);
        obj->hasRequest = 0;
    }
    if (obj->busy != 0) {
        obj->busy = 0;
    }
}

}
