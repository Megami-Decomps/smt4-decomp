#include "common.h"

extern "C" {

typedef struct Obj {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u8 busy;
} Obj;

extern Obj *g_mapGimic;

/* 1 when the object is not busy. */
u8 mapGimicIsIdle(void)
{
    if (g_mapGimic->busy != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
