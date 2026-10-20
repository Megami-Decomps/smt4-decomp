/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b1434` (_code @ 0x1b1434, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdModelPushCommandBlock(void);
int nnnstdMemCpy(...);

extern int g_commandBufferCursor; /* 0x5b40e0 */

/* Supplied declaration required: asdModelPushCommandBlock. */
/* Supplied declaration required: nnnstdMemCpy. */


void FUN_001b1434(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  if (*(char *)(param_1 + 0x12) != '\0') {
    asdModelPushCommandBlock();
    *(unsigned char *)(param_1 + 0x12) = 0;
  }
  temp_v0 = *(unsigned int *)(param_2 + 100);
  nnnstdMemCpy(g_commandBufferCursor,*(unsigned int *)(param_2 + 0x60));
  g_commandBufferCursor = g_commandBufferCursor + (temp_v0 & 0xfffffffc);
  nnnstdMemCpy(g_commandBufferCursor,param_2 + 0x30,0x30);
  g_commandBufferCursor = g_commandBufferCursor + 0x30;
  temp_v0 = *(unsigned int *)(param_2 + 0x2c);
  temp_v1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x14);
  if ((temp_v0 & 1) != 0) {
    temp_v1 = temp_v1 | 0x80;
  }
  else {
    temp_v1 = temp_v1 & 0xffffff7f;
  }
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x14) = temp_v1;
  temp_v1 = *(unsigned int *)(*(int *)(param_1 + 8) + 0x14);
  if ((temp_v0 & 2) != 0) {
    temp_v1 = temp_v1 | 0x100;
  }
  else {
    temp_v1 = temp_v1 & 0xfffffeff;
  }
  *(unsigned int *)(*(int *)(param_1 + 8) + 0x14) = temp_v1;
  return;
}

} /* extern "C" */
