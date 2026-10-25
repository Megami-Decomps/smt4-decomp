#include "common.h"

extern "C" {

typedef struct Surface {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
} Surface;

typedef struct RenderBackdrop {
    /* 0x00 */ u8 unk00[0x40];
    /* 0x40 */ u8 enabled;
    /* 0x41 */ u8 unk41;
    /* 0x42 */ u8 fresh;
    /* 0x43 */ u8 copied;
} RenderBackdrop;

typedef struct RenderWork {
    /* 0x0000 */ u8 unk0000[4];
    /* 0x0004 */ Surface *surface;
    /* 0x0008 */ u8 unk0008[0xFF8];
    /* 0x1000 */ RenderBackdrop backdrop;
} RenderWork;

extern u32 g_renderCtx; /* 0x59dbb4 */

extern RenderWork *jobGetWork(u32 handle);
extern int surfaceCopy(Surface *dst, Surface *src);
extern int FUN_00154edc(int arg, Surface *surface);
extern int FUN_00157558(u32 ctx);

/* Renders the scene into the backdrop surface once, then halves the surface size to mark it copied. */
s32 frameTexRenderBackdropOnce(u32 handle)
{
    RenderWork *work = jobGetWork(handle);

    if (work->backdrop.enabled == 0)
        return 0;
    if (work->backdrop.copied != 0)
        return 0;
    FUN_00157558(g_renderCtx);
    work->surface->width = 0x200;
    work->surface->height = 0x200;
    work->backdrop.fresh = FUN_00154edc(0, work->surface);
    surfaceCopy(work->surface, work->surface);
    work->surface->width >>= 1;
    work->surface->height >>= 1;
    work->backdrop.copied = 1;
    return 0;
}

} /* extern "C" */
