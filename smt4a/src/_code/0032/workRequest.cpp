/* NON_MATCHING: retail loads the work pointer into r0 before storing the flag; compiler uses r1. */
#include "common.h"

extern "C" {
struct RequestWork {
    /* 0x00 */ u8 unk00[0x4];
    /* 0x04 */ u8 requested;
};
extern RequestWork *g_requestWork;

/* Raises the pending request flag on the work. */
void workRequest(void)
{
    g_requestWork->requested = 1;
}
}
