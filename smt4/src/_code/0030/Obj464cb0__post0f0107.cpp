#include "classes/Obj464cb0.h"

#include "gfx/RenderStateStack.h"

/* The title scene's draw context seen as its array of render-state stacks (from 0x11EC: D, E, F,
 * A, C, G, B; RenderCtx names them one by one). */
struct TitleSceneStacks {
    /* 0x0000 */ u8 unk0000[0x11EC];
    /* 0x11EC */ RenderStateStack stacks[7];
};

extern "C" {
void cursorResetFromParam(void);
void asdModelCommandBlockRelease(void);
void FUN_00248ae8(s32 arg);
extern TitleSceneStacks *g_titleScene;
extern u32 *DAT_004729e0;
extern s32 DAT_004729e4;
}

static void commandQueuePushPair(u32 first, u32 second)
{
    DAT_004729e0[DAT_004729e4] = first;
    DAT_004729e0[DAT_004729e4 + 1] = second;
    DAT_004729e4 += 2;
}

/* The current (top) state of render-state stack `index`. */
static __inline u32 renderStackTop(TitleSceneStacks *scene, s32 index)
{
    return scene->stacks[index].entries[scene->stacks[index].count];
}

/* Posts this object combined with the current state of render stack A (bits 8-11 cleared), and message id 0xf0107. */
void Obj464cb0::post0f0107()
{
    cursorResetFromParam();
    u32 word = renderStackTop(g_titleScene, 3) & 0xfffff0ff;
    commandQueuePushPair(word | (u32)this, 0xf0107);
    asdModelCommandBlockRelease();
    FUN_00248ae8(1);
}
