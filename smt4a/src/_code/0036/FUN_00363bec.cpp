#include "common.h"

struct Target {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ void *handle;
};

struct DepartWork {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ Target *target;
};

extern "C" {
extern DepartWork *g_mapDepartWork;
void FUN_003fd7c0(void *handle, s32 value, s32 mode, f32 scale);
}

extern "C" void FUN_00363bec(s32 value)
{
    if (g_mapDepartWork->target != NULL) {
        FUN_003fd7c0(g_mapDepartWork->target->handle, value, 2, 0.0f);
    }
}
