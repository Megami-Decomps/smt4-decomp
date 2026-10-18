/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001924d0` (_code @ 0x1924d0, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00447e70; /* 0x447e70 */


void FUN_001924d0(void)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_00447e70;
  *DAT_00447e70 = 0;
  *(unsigned short *)(puVar1 + 1) = 0;
  *(unsigned short *)((int)puVar1 + 6) = 0;
  *(unsigned short *)(puVar1 + 2) = 0;
  *(unsigned short *)((int)puVar1 + 10) = 0;
  puVar1[4] = 0;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 + 1;
    *(unsigned char *)(puVar1 + temp_v0 * 0x12 + 5) = 0;
    *(unsigned char *)((int)puVar1 + temp_v0 * 0x48 + 0x15) = 0;
    *(unsigned char *)((int)puVar1 + temp_v0 * 0x48 + 0x16) = 0;
    puVar1[temp_v0 * 0x12 + 6] = 0;
    puVar1[temp_v0 * 0x12 + 7] = 0;
    puVar1[temp_v0 * 0x12 + 8] = 0;
    puVar1[temp_v0 * 0x12 + 9] = 0;
    puVar1[temp_v0 * 0x12 + 10] = 0;
    puVar1[temp_v0 * 0x12 + 0xb] = 0;
    puVar1[temp_v0 * 0x12 + 0xc] = 0x42b40000;
    puVar1[temp_v0 * 0x12 + 0xd] = 0;
    puVar1[temp_v0 * 0x12 + 0xe] = 0;
    puVar1[temp_v0 * 0x12 + 0xf] = 0;
    *(unsigned char *)(puVar1 + temp_v0 * 0x12 + 0x10) = 0;
    puVar1[temp_v0 * 0x12 + 0x16] = 0xffffffff;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0x18);
  return;
}
