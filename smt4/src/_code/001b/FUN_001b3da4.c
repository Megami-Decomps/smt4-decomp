/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b3da4` (_code @ 0x1b3da4, 0xe4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int *DAT_004474f4; /* 0x4474f4 */

/* Supplied declaration required: FUN_002df5f8. */


void FUN_001b3da4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  puVar1 = DAT_004474f4;
  *DAT_004474f4 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[0x31] = 0;
  puVar1[0x82] = 0xffffffff;
  puVar1[0x32] = 0x42c80000;
  puVar1[0x42] = 0x435c0000;
  puVar1[0x52] = 0;
  puVar1[0x62] = 0x442f0000;
  puVar1[0x72] = 0x42280000;
  puVar1[0x2b] = 0;
  puVar1[5] = 0;
  puVar1[0x26] = 0x3f800000;
  puVar1[0x83] = 0;
  puVar1[0x84] = 0;
  puVar1[0x85] = 0;
  puVar1[0x86] = 0;
  *(unsigned char *)(puVar1 + 0x87) = 0;
  *(unsigned char *)(puVar1 + 0xac) = 0;
  puVar1[0xa5] = 0;
  puVar1[0xa6] = 0;
  puVar1[0xa7] = 0;
  puVar1[0xa8] = 0;
  puVar1[0xa9] = 0;
  *(unsigned short *)(puVar1 + 0xaa) = 0;
  *(unsigned short *)((int)puVar1 + 0x2aa) = 0;
  *(unsigned short *)(puVar1 + 0xab) = 0;
  *(unsigned short *)((int)puVar1 + 0x2ae) = 0;
  puVar1[0x1c] = 0;
  puVar1[0x1d] = 0x42480000;
  puVar1[0x1e] = 0;
  puVar1[0x19] = 0;
  puVar1[0x1f] = 0x42200000;
  puVar1[0xaf] = 0;
  puVar1[0x1a] = 0x42480000;
  puVar1[0x1b] = 0x42c80000;
  *(unsigned char *)(puVar1 + 0x2c) = 0;
  *(unsigned char *)((int)puVar1 + 0xb1) = 0;
  *(unsigned short *)((int)puVar1 + 0xb2) = 0;
  *(unsigned short *)(puVar1 + 0x2d) = 0;
  puVar1[0x2e] = 0;
  puVar1[0x2f] = 0;
  puVar1[0x30] = 0x3f800000;
  FUN_002df5f8();
  return;
}
