#include "common.h"

struct DepartModel {
    u8 unk00[4];
    u32 flags;       // 0x04, bits 0-1 = hidden
    u8 unk08[0x1f4];
    f32 alpha;       // 0x1fc
};

struct DepartNode {
    u8 unk00[4];
    DepartModel *model; // 0x04
};

struct DepartVisibleWork {
    u8 unk00[0xa];
    u8 visible;         // 0x0a
    u8 unk0b;
    DepartNode *nodeA;  // 0x0c
    DepartNode *nodeB;  // 0x10
};

extern "C" {

extern DepartVisibleWork *g_mapDepartWork; /* 0x58069c */

// Show or hide the two departure models according to the work block's visibility flag (model A also fades).
void FUN_002235f4(void)
{
    DepartVisibleWork *work = g_mapDepartWork;
    DepartModel *model = NULL;
    if (work->nodeA != NULL) {
        model = work->nodeA->model;
    }
    if (work->nodeA != NULL && model != NULL) {
        u32 flags;
        f32 alpha;
        if (work->visible != 0) {
            alpha = 1.0f;
            flags = model->flags & ~3u;
        } else {
            alpha = 0.0f;
            flags = model->flags | 3;
        }
        model->flags = flags;
        model->alpha = alpha;
    }
    model = NULL;
    if (work->nodeB != NULL) {
        model = work->nodeB->model;
    }
    if (work->nodeB != NULL && model != NULL) {
        if (work->visible != 0) {
            model->flags &= ~3u;
        } else {
            model->flags |= 3;
        }
    }
}

} /* extern "C" */
