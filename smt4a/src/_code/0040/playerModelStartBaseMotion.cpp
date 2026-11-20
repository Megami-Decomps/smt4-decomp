/* Hooks the object's handle to its callback, configures its two modes and starts it (state 1). */
#include "common.h"
#include "code/Code0040_Smt4a.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 handle;
} Object;

extern void modelLoadFileAsyncByName(u32 handle, const char *path);
extern void moriModelContentSetRequestFirst(u32 handle, s32 mode);
extern void moriModelContentSetRequestSecond(u32 handle, s32 mode);

void playerModelStartBaseMotion(Object *obj)
{
    modelLoadFileAsyncByName(obj->handle, "player/pl01_00.bam");
    moriModelContentSetRequestFirst(obj->handle, 0x10000);
    moriModelContentSetRequestSecond(obj->handle, 0x30000);
    obj->state = 1;
}

}
