/* NON_MATCHING: retail loads g_mapGimic before computing the index*0x18; built computes the index first */
#include "common.h"

extern "C" {

typedef struct GimicObject {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ u32 handle;
} GimicObject;

typedef struct Gimic {
    /* 0x00 */ u8 active;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ s16 id;
    /* 0x06 */ u8 unk06[2];
    /* 0x08 */ GimicObject *object;
    /* 0x0C */ u8 unk0C[0xC];
} Gimic; /* 0x18 */

typedef struct MapGimic {
    /* 0x000 */ u8 unk000[0x8C4];
    /* 0x8C4 */ Gimic gimics[10];
} MapGimic;

extern MapGimic *g_mapGimic;
extern void FUN_003fd924(u32 handle, u32 arg, s32 mode, f32 a, f32 b);

/* Calls FUN_003fd924 (mode 2, scale 1.0) on every active map gimic whose id is `id`. */
void FUN_003a288c(s32 id, u32 arg)
{
    s32 i;

    for (i = 0; i < 10; i++) {
        Gimic *gimic = &g_mapGimic->gimics[i];

        if (gimic->active != 0 && gimic->id == id) {
            FUN_003fd924(gimic->object->handle, arg, 2, 1.0f, 1.0f);
        }
    }
}

} /* extern "C" */
