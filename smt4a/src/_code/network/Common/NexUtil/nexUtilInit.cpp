/* Initialises the NEX (network) utility: allocates its buffer from the heap chosen by two size
 * checks and installs its callbacks. */
#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

typedef void (*VoidFunc)(void);

void *asdMemoryAllocTracked(int heap, int align, int arg2, int size, int arg4);
int vtblObjInit(void *nex, void *buffer, int size, int arg);
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

    if (a >= b) {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\network\\Common\\NexUtil.cpp", 45);
        DAT_0058811c = asdMemoryAllocTracked(0x100, 0x100, 0, 0xe4000, 1);
    } else {
        asdDebugTrace("c:\\SMT4F\\SMT4F\\sdds4\\program\\network\\Common\\NexUtil.cpp", 49);
        DAT_0058811c = asdMemoryAllocTracked(0x10000, 0x100, 0, 0xe4000, 1);
    }
    vtblObjInit(g_nexUtil, DAT_0058811c, 0xe4000, 0x64000);
    DAT_005949a4 = LAB_004d95d4;
    DAT_005949a8 = LAB_004d95c4;
}

} /* extern "C" */
