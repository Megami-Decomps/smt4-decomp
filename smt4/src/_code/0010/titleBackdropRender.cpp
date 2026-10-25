#include "common.h"
#include "shard/JobWork.h"

extern "C" {

typedef struct Surface {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ s32 width;
    /* 0x18 */ s32 height;
} Surface;

typedef struct TitleBackdrop {
    /* 0x00 */ u8 unk00[0x60];
    /* 0x60 */ u8 enabled;
    /* 0x61 */ u8 unk61;
    /* 0x62 */ u8 fresh;
    /* 0x63 */ u8 copied;
    /* 0x64 */ u8 unk64[0x35];
    /* 0x99 */ u8 locked;
} TitleBackdrop;

typedef struct TitleWork {
    /* 0x000 */ u8 unk000[4];
    /* 0x004 */ Surface *surface;
    /* 0x008 */ u8 unk008[0xEF8];
    /* 0xF00 */ TitleBackdrop backdrop;
} TitleWork;

/* Whether the backdrop still has to be rendered and copied. */
static __inline int titleBackdropPending(TitleBackdrop *backdrop)
{
    return backdrop->enabled != 0 && backdrop->copied == 0 && backdrop->locked == 0;
}

extern u32 g_titleScene; /* 0x44ea00 */

extern int surfaceCopy(Surface *dst, Surface *src);
extern int FUN_002bfadc(int arg, Surface *surface);
extern int renderCtxSelectStereoLayout(u32 scene);

/* Renders the title scene into the backdrop surface once, then halves the surface size to mark it copied. */
u32 titleBackdropRender(u32 job)
{
    TitleWork *work = (TitleWork *)jobGetWork(job);

    if (!titleBackdropPending(&work->backdrop)) {
        return 0;
    }
    renderCtxSelectStereoLayout(g_titleScene);
    work->surface->width = 0x200;
    work->surface->height = 0x200;
    work->backdrop.fresh = FUN_002bfadc(0, work->surface);
    surfaceCopy(work->surface, work->surface);
    work->surface->width >>= 1;
    work->surface->height >>= 1;
    work->backdrop.copied = 1;
    return 0;
}

} /* extern "C" */
