#include "common.h"

extern "C" {

extern void *FUN_001a2480(void);
extern u32 FUN_001a2a5c(void *context);
extern u32 FUN_001a299c(u32 area);

/* Saves the VRAM system area of the current GPU context; without one it fails with this result code. */
u32 FUN_00170198(void)
{
    void *context = FUN_001a2480();

    if (context == NULL) {
        return 0x00202bf8;
    }
    return FUN_001a299c(FUN_001a2a5c(context));
}

} /* extern "C" */
