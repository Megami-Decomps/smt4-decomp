/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00192320` (_code @ 0x192320, 0xb0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_00447e40; /* 0x447e40 */
extern unsigned int *DAT_00447e58; /* 0x447e58 */


void FUN_00192320(void)

{
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  
  puVar2 = DAT_00447e58;
  DAT_00447e58[2] = 0;
  *puVar2 = 0;
  puVar2[1] = 0;
  *(unsigned char *)(puVar2 + 899) = 0;
  *(unsigned char *)(puVar2 + 0x38f) = 0;
  puVar2[900] = 0;
  temp_v4 = 0;
  do {
    temp_v2 = temp_v4 + 1;
    *(unsigned char *)((int)puVar2 + temp_v4 * 0x38 + 0xd) = 0;
    *(unsigned char *)((int)puVar2 + temp_v4 * 0x38 + 0xe) = 0;
    *(unsigned short *)(puVar2 + temp_v4 * 0xe + 5) = 0xffff;
    *(unsigned short *)((int)puVar2 + temp_v4 * 0x38 + 0x16) = 0;
    puVar2[temp_v4 * 0xe + 6] = 0x40800000;
    puVar2[temp_v4 * 0xe + 7] = 0xc1100000;
    puVar2[temp_v4 * 0xe + 8] = 0;
    puVar2[temp_v4 * 0xe + 9] = 0;
    puVar2[temp_v4 * 0xe + 10] = 0x42b40000;
    puVar2[temp_v4 * 0xe + 0xb] = 0;
    puVar2[temp_v4 * 0xe + 0xc] = 0;
    puVar2[temp_v4 * 0xe + 0xe] = 0;
    *(unsigned short *)((int)puVar2 + temp_v4 * 0x38 + 0x12) = 0xffff;
    puVar2[temp_v4 * 0xe + 0xf] = 0;
    *(unsigned short *)(puVar2 + temp_v4 * 0xe + 0xd) = 0;
    *(unsigned short *)((int)puVar2 + temp_v4 * 0x38 + 0x36) = 0;
    puVar2[temp_v4 * 0xe + 0x10] = 0;
    *(unsigned char *)(puVar2 + temp_v4 * 0xe + 3) = 0;
    temp_v0 = DAT_00447e40;
    temp_v4 = temp_v2;
  } while (temp_v2 < 0x40);
  temp_v4 = 0;
  do {
    temp_v3 = 0;
    temp_v2 = 0;
    temp_v1 = temp_v0 + temp_v4 * 0x284;
    do {
      *(unsigned int *)(temp_v1 + temp_v3 * 0x28) = 0;
      temp_v2 = temp_v2 + 2;
      *(unsigned int *)(temp_v1 + (temp_v3 + 1) * 0x28) = 0;
      temp_v3 = temp_v3 + 2;
    } while (temp_v2 < 0x10);
    temp_v4 = temp_v4 + 1;
    *(unsigned int *)(temp_v1 + 0x280) = 0;
  } while (temp_v4 < 0x10);
  temp_v4 = 0;
  *(unsigned int *)(temp_v0 + 0x2840) = 0;
  temp_v2 = 0x20;
  do {
    temp_v2 = temp_v2 - 1;
    temp_v1 = temp_v0 + temp_v4 * 0x30;
    *(unsigned char *)(temp_v1 + 0x2844) = 0;
    temp_v4 = temp_v4 + 1;
    *(unsigned int *)(temp_v1 + 0x2870) = 0xffffffff;
  } while (temp_v2 != 0);
  return;
}
