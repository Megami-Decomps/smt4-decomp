/* NON_MATCHING: retail loads the work pointer into r0 before storing the flag; compiler uses r1. */
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

/* Raises the pending request flag on the resident work. */
void jyoucyuRequest(void)
{
    g_jyoucyu.work->requested = 1;
}
}
