/* NON_MATCHING: register allocation differs (retail keeps the address in r4 and the handle in r5, the build the reverse). */
/* Flushes the data cache for [address, address + size) of the current process (tail call). */
#include "common.h"

extern "C" {

extern u32 DAT_0040b748; /* the current-process pseudo handle */

extern u32 FUN_002ad264(void);
extern u32 nn_gxlow_CTR_Gpu_FlushDataCache(u32 gpu, u32 process, u32 address, u32 size);

void FUN_00147918(u32 address, u32 size)
{
    u32 process = DAT_0040b748;

    nn_gxlow_CTR_Gpu_FlushDataCache(FUN_002ad264(), process, address, size);
}

}
