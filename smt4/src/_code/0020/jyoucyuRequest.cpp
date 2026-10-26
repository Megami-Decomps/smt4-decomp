#include "common.h"

extern "C" {

struct ResidentWork {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 requested;
};
extern ResidentWork *g_jyoucyu;

static __inline void residentWorkSetRequested(ResidentWork *work, u8 requested)
{
    work->requested = requested;
}

/* Set the resident work's request flag. */
void jyoucyuRequest(void)
{
    residentWorkSetRequested(g_jyoucyu, 1);
}

}
