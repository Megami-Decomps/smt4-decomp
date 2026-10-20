/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f2e48` (_code @ 0x3f2e48, 0x8c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(...);

extern unsigned char LAB_003574a8; /* 0x3574a8 */
extern unsigned int DAT_00471a80; /* 0x471a80 */
extern unsigned int g_nngxGpu; /* 0x471a84 */
extern unsigned int DAT_00471a88; /* 0x471a88 */
extern unsigned int DAT_00471a98; /* 0x471a98 */
extern unsigned int DAT_00471a9c; /* 0x471a9c */
extern unsigned int g_nngxCriticalSection; /* 0x4e6c5c */
extern unsigned int DAT_004e6c68; /* 0x4e6c68 */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */


void FUN_003f2e48(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  *(unsigned int *)(param_3 + 0x20) = param_1;
  *(unsigned int *)(param_3 + 0x24) = param_1;
  DAT_00471a98 = 0;
  DAT_00471a9c = 0;
  g_nngxCriticalSection = 0;
  nn_os_CriticalSection_Initialize(&g_nngxCriticalSection);
  DAT_004e6c68 = 0;
  nn_os_CriticalSection_Initialize(&DAT_004e6c68,&LAB_003574a8,0x100000);
  DAT_00471a80 = 0;
  g_nngxGpu = 0;
  DAT_00471a88 = 0;
  return;
}

} /* extern "C" */
