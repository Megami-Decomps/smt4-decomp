/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a8c6c` (_code @ 0x1a8c6c, 0x80 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_00447a48; /* 0x447a48 */


void FUN_001a8c6c(void)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  puVar1 = DAT_00447a48;
  *DAT_00447a48 = 0;
  *(unsigned char *)(puVar1 + 1) = 0;
  *(unsigned short *)((int)puVar1 + 6) = 0;
  *(unsigned short *)(puVar1 + 2) = 0;
  *(unsigned short *)((int)puVar1 + 10) = 0;
  *(unsigned short *)(puVar1 + 3) = 0;
  puVar1[4] = 0;
  *(unsigned char *)(puVar1 + 5) = 0;
  temp_v0 = 0;
  do {
    temp_v1 = temp_v0 + 1;
    *(unsigned char *)(puVar1 + temp_v0 * 10 + 7) = 0;
    *(unsigned char *)((int)puVar1 + temp_v0 * 0x28 + 0x1d) = 0;
    puVar1[temp_v0 * 10 + 8] = 0;
    puVar1[temp_v0 * 10 + 9] = 0;
    puVar1[temp_v0 * 10 + 10] = 0;
    puVar1[temp_v0 * 10 + 0xb] = 0x42b40000;
    *(unsigned short *)(puVar1 + temp_v0 * 10 + 0xc) = 0;
    *(unsigned short *)((int)puVar1 + temp_v0 * 0x28 + 0x32) = 0;
    puVar1[temp_v0 * 10 + 0xd] = 0;
    puVar1[temp_v0 * 10 + 0xe] = 0;
    *(unsigned short *)(puVar1 + temp_v0 * 10 + 0xf) = 0;
    *(unsigned short *)((int)puVar1 + temp_v0 * 0x28 + 0x3e) = 0;
    temp_v0 = temp_v1;
  } while (temp_v1 < 0x18);
  return;
}
