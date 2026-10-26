/* Hooks the object's handle to its callback, configures its two modes and starts it (state 1). */
#include "common.h"
#include "code/Code0040_Smt4a.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 state;
    /* 0x08 */ u32 handle;
} Object;

extern void FUN_001cd3ec(u32 handle, const char *path);
extern void FUN_0040a908(u32 handle, s32 mode);
extern void FUN_0040a918(u32 handle, s32 mode);

void FUN_0040ba38(Object *obj)
{
    FUN_001cd3ec(obj->handle, "player/pl01_00.bam");
    FUN_0040a908(obj->handle, 0x10000);
    FUN_0040a918(obj->handle, 0x30000);
    obj->state = 1;
}

}
