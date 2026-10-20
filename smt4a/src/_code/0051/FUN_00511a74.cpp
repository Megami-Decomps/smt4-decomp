/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00511a74` (_code @ 0x511a74, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(...);

extern unsigned char LAB_0042ce3c; /* 0x42ce3c */
extern unsigned int DAT_005c0ab0; /* 0x5c0ab0 */
extern unsigned int g_nngxGpu; /* 0x5c0ab4 */
extern unsigned int DAT_005c0ab8; /* 0x5c0ab8 */
extern unsigned int g_nngxCriticalSection; /* 0x643080 */
extern unsigned int DAT_0064308c; /* 0x64308c */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */


void FUN_00511a74(void)

{
/* irregular: 1 native warning(s); review required */
  g_nngxCriticalSection = 0;
  nn_os_CriticalSection_Initialize(&g_nngxCriticalSection);
  DAT_0064308c = 0;
  nn_os_CriticalSection_Initialize(&DAT_0064308c,&LAB_0042ce3c,0x100000);
  DAT_005c0ab0 = 0;
  g_nngxGpu = 0;
  DAT_005c0ab8 = 0;
  return;
}

} /* extern "C" */
