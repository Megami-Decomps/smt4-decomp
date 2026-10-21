#include "common.h"

extern "C" {
struct RequestWork {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u8 requested;
};
extern RequestWork *g_popupState;

/* Raises the pending request flag on the popup work. */
void popupRequest(void)
{
    g_popupState->requested = 1;
}
}
