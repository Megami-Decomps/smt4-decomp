/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021baf4` (_code @ 0x21baf4, 0xe8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004474f4; /* 0x4474f4 */
extern unsigned char DAT_0049f3f0; /* 0x49f3f0 */

/* Supplied declaration required: FUN_00298d50. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */


void FUN_0021baf4(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  temp_v0 = DAT_004474f4;
  temp_v2 = 0;
  *(unsigned int *)(DAT_004474f4 + 0x1c) = 0;
  *(unsigned int *)(temp_v0 + 0x20) = 0x3f800000;
  *(unsigned int *)(temp_v0 + 0x24) = 0;
  temp_v0 = DAT_004474f4;
  *(unsigned int *)(DAT_004474f4 + 0x40) = 0;
  *(unsigned int *)(temp_v0 + 0x44) = 0;
  *(unsigned int *)(temp_v0 + 0x48) = 0;
  temp_v0 = DAT_004474f4;
  *(unsigned int *)(DAT_004474f4 + 0x34) = 0;
  *(unsigned int *)(temp_v0 + 0x38) = 0x43960000;
  *(unsigned int *)(temp_v0 + 0x3c) = 0x43960000;
  temp_v0 = DAT_004474f4;
  puVar3 = (unsigned int *)(DAT_004474f4 + 0x44);
  temp_v1 = *(unsigned int *)(DAT_004474f4 + 0x48);
  *(unsigned int *)(DAT_004474f4 + 0x58) = *(unsigned int *)(DAT_004474f4 + 0x40);
  *(unsigned int *)(temp_v0 + 0x5c) = *puVar3;
  *(unsigned int *)(temp_v0 + 0x60) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x4c) = *(unsigned int *)(temp_v0 + 0x34);
  *(unsigned int *)(temp_v0 + 0x50) = *(unsigned int *)(temp_v0 + 0x38);
  *(unsigned int *)(temp_v0 + 0x54) = *(unsigned int *)(temp_v0 + 0x3c);
  FUN_002c2044(&DAT_0049f3f0,1);
  FUN_002c1edc(&DAT_0049f3f0,DAT_004474f4 + 0x34,DAT_004474f4 + 0x40,DAT_004474f4 + 0x1c);
  FUN_002c1e30(&DAT_0049f3f0,1);
  FUN_00298d50(&DAT_0049f3f0);
  temp_v0 = DAT_004474f4;
  *(unsigned int *)(DAT_004474f4 + 0x9c) = 0x43fa0000;
  *(unsigned int *)(temp_v0 + 0xa0) = temp_v2;
  *(unsigned char *)(temp_v0 + 0xa4) = 1;
  *(unsigned int *)(temp_v0 + 0xa8) = 0;
  return;
}
