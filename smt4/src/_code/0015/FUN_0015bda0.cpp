/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015bda0` (_code @ 0x15bda0, 0x1d8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bc11c(...);
int vramAreaGetBaseAddress(int);

extern unsigned char DAT_0040b8a8; /* 0x40b8a8 */
extern unsigned int *g_commandBufferCursor; /* 0x4652a0 */
extern unsigned int g_commandBufferEnd; /* 0x4652a4 */

/* Supplied declaration required: FUN_002bc11c. */
/* Supplied declaration required: vramAreaGetBaseAddress. */


unsigned int FUN_0015bda0(int param_1,int *param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v3 = *(int *)(&DAT_0040b8a8 + (unsigned int)*(unsigned char *)(param_2 + 1) * 4);
  if (param_3 != 0) {
    temp_v3 = 0x6010;
  }
  puVar4 = *(unsigned int **)(param_1 + 8);
  if (*(unsigned int **)(param_1 + 8) == (unsigned int *)0x0) {
    puVar4 = g_commandBufferCursor;
  }
  vramAreaGetBaseAddress(0x20000);
  temp_v0 = FUN_002bc11c();
  temp_v1 = param_2[8];
  if (temp_v1 == 0) {
    if (param_2[3] != 0) {
      temp_v1 = (int)param_2 + param_2[3] + 0xc;
    }
    else {
      temp_v1 = 0;
    }
  }
  temp_v1 = FUN_002bc11c(temp_v1);
  *puVar4 = temp_v1 - temp_v0;
  puVar4[1] = 0xf0227;
  temp_v2 = param_2[2];
  puVar4[2] = temp_v2;
  puVar4[3] = 0xf0228;
  if (*param_2 == 0x1403) {
    *puVar4 = (temp_v1 - temp_v0) | 0x80000000;
    puVar4[2] = temp_v2 >> 1;
  }
  if (temp_v3 != 4) {
    puVar4[7] = 0x20253;
    puVar4[4] = 0;
    puVar4[5] = 0x20229;
    puVar4[6] = 0;
    if (temp_v3 == 5) {
      puVar4[8] = 0x100;
    }
    else if (temp_v3 == 6) {
      puVar4[8] = 0x200;
    }
    else if (temp_v3 == 0x6010) {
      puVar4[8] = 0x300;
    }
  }
  else {
    puVar4[7] = 0x20253;
    puVar4[4] = 0x100;
    puVar4[5] = 0x20229;
    puVar4[6] = 0x100;
    puVar4[8] = 0x300;
  }
  puVar4[9] = 0x2025e;
  puVar4[10] = 1;
  puVar4[0xb] = 0xf025f;
  puVar4[0xc] = 0;
  puVar4[0xe] = 1;
  puVar4[0xd] = 0x10245;
  puVar4[0x10] = 1;
  puVar4[0x11] = 0x10245;
  puVar4[0xf] = 0xf022f;
  puVar4[0x12] = 1;
  puVar4[0x13] = 0xf0231;
  puVar4[0x14] = 0;
  puVar4[0x15] = 0x8025e;
  puVar4[0x16] = 0;
  puVar4[0x17] = 0x8025e;
  puVar4[0x18] = 1;
  puVar4[0x1a] = 1;
  puVar4[0x19] = 0xf0111;
  puVar4[0x1b] = 0xf0110;
  puVar4 = *(unsigned int **)(param_1 + 8);
  if (puVar4 != (unsigned int *)0x0) {
    if (*(unsigned int **)(param_1 + 4) < puVar4 + 0x1c) {
      return 0x70;
    }
  }
  else if (g_commandBufferEnd < (unsigned int)(g_commandBufferCursor + 0x1c)) {
    return 0x70;
  }
  puVar5 = puVar4;
  if (puVar4 == (unsigned int *)0x0) {
    puVar5 = g_commandBufferCursor;
  }
  puVar1 = puVar5 + 0x1c;
  if (puVar4 != (unsigned int *)0x0) {
    *(unsigned int **)(param_1 + 8) = puVar5 + 0x1c;
    puVar1 = g_commandBufferCursor;
  }
  g_commandBufferCursor = puVar1;
  return 0x70;
}

} /* extern "C" */
