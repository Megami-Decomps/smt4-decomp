#include "common.h"

extern "C" {
struct RequestWork {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u8 requested;
};
extern struct {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ RequestWork *work;
} g_jyoucyu;

static __inline void requestSet(RequestWork *work, u32 requested)
{
    work->requested = requested;
}

/* Raises the pending request flag on the resident work. */
void jyoucyuRequest(void)
{
    requestSet(g_jyoucyu.work, 1);
}
}
