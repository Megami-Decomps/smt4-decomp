#include "common.h"

extern "C" {

typedef struct CameraOwner {
    /* 0x000 */ u8 unk000[0x658];
    /* 0x658 */ void *object;
    /* 0x65C */ void *source;
} CameraOwner;

void *FUN_00178b04(u32 size, const char *file, s32 line);
void *_ZN9Obj557af8C1EPK21AsdAnimCameraResource(void *memory, void *source);

/* Creates the owner's object from its source on first use. */
void btlCameraObjectCreate(CameraOwner *owner)
{
    void *object;

    if (owner->source != NULL && owner->object == NULL) {
        object = FUN_00178b04(0x48, "c:\\SMT4F\\SMT4F\\sdds4\\program\\battle\\btlCamera.cpp", 1089);
        if (object != NULL) {
            object = _ZN9Obj557af8C1EPK21AsdAnimCameraResource(object, owner->source);
        }
        owner->object = object;
    }
}

} /* extern "C" */
