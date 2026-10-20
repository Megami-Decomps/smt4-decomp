/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c277c` (_code @ 0x2c277c, 0x158 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */

extern int FUN_0018719c(unsigned int);
extern int FUN_003e46f4(unsigned int);


unsigned short FUN_002c277c(void)

{
  unsigned short temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned short temp_v3;
  
  temp_v2 = *(unsigned short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0xf2);
  temp_v1 = FUN_003e46f4(0x25);
  if (temp_v1 != 0) {
    temp_v2 = *(short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0xf2) + 1;
  }
  temp_v1 = FUN_003e46f4(0x26);
  if (temp_v1 != 0) {
    temp_v2 = *(short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0xf2) + 2;
  }
  temp_v1 = FUN_003e46f4(0x27);
  if (temp_v1 != 0) {
    temp_v2 = *(short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0xf2) + 4;
  }
  temp_v1 = FUN_003e46f4(0x28);
  if (temp_v1 != 0) {
    temp_v2 = *(short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0xf2) + 6;
  }
  temp_v1 = FUN_003e46f4(1);
  if (temp_v1 != 0) {
    temp_v2 = *(short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0xf2) + 9;
  }
  temp_v1 = FUN_003e46f4(2);
  if (temp_v1 != 0) {
    temp_v2 = *(short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0xf2) + 0xc;
  }
  temp_v1 = FUN_003e46f4(3);
  if (temp_v1 != 0) {
    temp_v2 = *(short *)((*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0xf2) + 0xf;
  }
  temp_v1 = FUN_0018719c(0x534);
  temp_v3 = 999;
  temp_v0 = temp_v3;
  if (temp_v1 == 0) {
    temp_v0 = 99;
  }
  if ((temp_v0 < temp_v2) && (temp_v1 = FUN_0018719c(0x534), temp_v2 = temp_v3, temp_v1 == 0)) {
    temp_v2 = 99;
  }
  temp_v1 = FUN_003e46f4(0x29);
  if (temp_v1 != 0) {
    temp_v2 = temp_v3;
  }
  return temp_v2;
}

} /* extern "C" */
