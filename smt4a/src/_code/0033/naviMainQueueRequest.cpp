#include "common.h"

extern "C" {

typedef struct NaviMain {
    /* 0x00 */ u8 unk00[0x68];
    /* 0x68 */ u8 request[1];
} NaviMain;

extern NaviMain *g_naviMain;

extern void FUN_00486328(void *request, u32 id, s32 a, s32 b, s32 c, s32 d, f32 x, f32 y, f32 z);

/* Queues `id` on the navi request with no extra parameters and a zero offset vector. */
void naviMainQueueRequest(u32 id)
{
    if (g_naviMain != NULL) {
        FUN_00486328(g_naviMain->request, id, 0, 0, 0, 0, 0.0f, 0.0f, 0.0f);
    }
}

} /* extern "C" */
