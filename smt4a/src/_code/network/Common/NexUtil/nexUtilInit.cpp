/* NON_MATCHING: the task callbacks are local code labels (LAB_*) that are not decompiled, so their addresses are built differently */
/* Initialises the NEX (network) utility: allocates its buffer from the heap chosen by two size
 * checks and installs its callbacks. */
#include "common.h"

extern "C" {

typedef void (*VoidFunc)(void);

void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
int FUN_004d93e8(void *nex, void *buffer, int size, int arg);
void LAB_004d95c4(void);
void LAB_004d95d4(void);
extern int FUN_002a1bac(void);
extern int FUN_00359334(void);

extern void *DAT_0058811c;
extern VoidFunc DAT_005949a4;
extern VoidFunc DAT_005949a8;
extern u8 g_nexUtil[];

void nexUtilInit(void)
{
    int a = FUN_002a1bac();
    int b = FUN_00359334();
    void *buffer;

    if (a >= b) {
        buffer = asdMemoryAllocTracked(0x100, 0x100, 0, 0xe4000, 1);
    } else {
        buffer = asdMemoryAllocTracked(0x10000, 0x100, 0, 0xe4000, 1);
    }
    DAT_0058811c = buffer;
    FUN_004d93e8(g_nexUtil, buffer, 0xe4000, 0x64000);
    DAT_005949a4 = LAB_004d95d4;
    DAT_005949a8 = LAB_004d95c4;
}

} /* extern "C" */
