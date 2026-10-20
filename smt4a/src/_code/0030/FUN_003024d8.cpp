/* If the global state's active id matches `id`, forwards the pointer stored in its record to FUN_003fd7c0 with mode 2 and a default scale. */
#include "common.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *target;
} Record;

typedef struct State {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ Record *record;
    /* 0x14 */ u8 unk14[8];
    /* 0x1C */ s32 activeId;
} State;

extern State *g_mapDepartWork;

extern void FUN_003fd7c0(void *target, u32 arg, s32 mode, f32 scale);

void FUN_003024d8(s32 id, u32 arg)
{
    if (g_mapDepartWork->activeId == id) {
        FUN_003fd7c0(g_mapDepartWork->record->target, arg, 2, 0.0f);
    }
}

}
