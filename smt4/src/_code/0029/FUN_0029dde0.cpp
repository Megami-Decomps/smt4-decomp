/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029dde0` (_code @ 0x29dde0, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int DAT_0043e2ac; /* 0x43e2ac */

extern int FUN_00292f28(unsigned int);


unsigned int FUN_0029dde0(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = (unsigned int)*(unsigned char *)(DAT_0043e2ac + 0x106);
  temp_v0 = FUN_00292f28(0x25);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned char *)(DAT_0043e2ac + 0x106) + 1;
  }
  temp_v0 = FUN_00292f28(0x26);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned char *)(DAT_0043e2ac + 0x106) + 2;
  }
  temp_v0 = FUN_00292f28(0x27);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned char *)(DAT_0043e2ac + 0x106) + 4;
  }
  temp_v0 = FUN_00292f28(0x28);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned char *)(DAT_0043e2ac + 0x106) + 6;
  }
  temp_v0 = FUN_00292f28(1);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned char *)(DAT_0043e2ac + 0x106) + 9;
  }
  temp_v0 = FUN_00292f28(2);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned char *)(DAT_0043e2ac + 0x106) + 0xc;
  }
  temp_v0 = FUN_00292f28(3);
  if (temp_v0 != 0) {
    temp_v1 = *(unsigned char *)(DAT_0043e2ac + 0x106) + 0xf;
  }
  temp_v0 = FUN_00292f28(0x29);
  if ((temp_v0 != 0) || (temp_v1 >= 100)) {
    temp_v1 = 99;
  }
  return temp_v1;
}

} /* extern "C" */
