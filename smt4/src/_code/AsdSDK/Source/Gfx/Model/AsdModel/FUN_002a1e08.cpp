/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a1e08` (_code @ 0x2a1e08, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nnnstdMemCpy(int *, int);

extern int *g_commandBufferCursor; /* 0x4652a0 */
extern unsigned char DAT_004e9dc8; /* 0x4e9dc8 */

/* Supplied declaration required: nnnstdMemCpy. */


void FUN_002a1e08(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int *piVar3;
  
  if (*(int *)(&DAT_004e9dc8 + param_2 * 4) != param_1) {
    *(int *)(&DAT_004e9dc8 + param_2 * 4) = param_1;
    temp_v1 = 0;
    piVar3 = g_commandBufferCursor + 2;
    if (param_2 == 0x17) {
      *g_commandBufferCursor = 0;
      g_commandBufferCursor[1] = 0xf00e6;
    }
    else {
      *g_commandBufferCursor = (param_2 + (param_2 >= 7)) * 0x100;
      g_commandBufferCursor[1] = 0xf01c5;
    }
    if (*(int *)(param_1 + 0x10) != 0) {
      temp_v1 = *(int *)(param_1 + 0x10) + param_1 + 0x10;
    }
    temp_v0 = *(unsigned int *)(param_1 + 0xc);
    g_commandBufferCursor = piVar3;
    nnnstdMemCpy(piVar3,temp_v1);
    g_commandBufferCursor = (int *)((int)g_commandBufferCursor + (temp_v0 & 0xfffffffc));
    return;
  }
  return;
}

} /* extern "C" */
