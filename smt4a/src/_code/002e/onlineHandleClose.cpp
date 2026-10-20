#include "common.h"

extern "C" {

int svcCloseHandle(void);

/* Releases the resource held in *slot (via svcCloseHandle) and clears the slot. */
void onlineHandleClose(int *slot)
{
    if (*slot != 0) {
        svcCloseHandle();
        *slot = 0;
    }
}

} /* extern "C" */
