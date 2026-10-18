/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00245908` (_code @ 0x245908, 0xb8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"


unsigned int FUN_00245908(unsigned int *param_1,int param_2)

{
  short temp_v0;
  unsigned char temp_v1;
  
  if ((*param_1 & 0x10) != 0) {
    temp_v0 = (short)param_1[0x88];
    temp_v1 = temp_v0 == 2 || temp_v0 == 3;
    if (temp_v0 == 2 || temp_v0 == 3) {
      temp_v1 = *(short *)((int)param_1 + 0x222) == param_2;
    }
  }
  else {
    if ((((short)param_1[0x8a] == 2) || ((short)param_1[0x8a] == 3)) &&
       (*(short *)((int)param_1 + 0x22a) == param_2)) {
      return 1;
    }
    temp_v0 = (short)param_1[0x8c];
    temp_v1 = temp_v0 == 2 || temp_v0 == 3;
    if (temp_v0 == 2 || temp_v0 == 3) {
      temp_v1 = *(short *)((int)param_1 + 0x232) == param_2;
    }
    if (temp_v1) {
      return 1;
    }
    temp_v0 = (short)param_1[0x8e];
    temp_v1 = temp_v0 == 2 || temp_v0 == 3;
    if (temp_v0 == 2 || temp_v0 == 3) {
      temp_v1 = *(short *)((int)param_1 + 0x23a) == param_2;
    }
    if (temp_v1) {
      return 1;
    }
    temp_v0 = (short)param_1[0x90];
    temp_v1 = temp_v0 == 2 || temp_v0 == 3;
    if (temp_v0 == 2 || temp_v0 == 3) {
      temp_v1 = *(short *)((int)param_1 + 0x242) == param_2;
    }
    if (temp_v1) {
      return 1;
    }
    temp_v0 = (short)param_1[0x92];
    temp_v1 = temp_v0 == 2 || temp_v0 == 3;
    if (temp_v0 == 2 || temp_v0 == 3) {
      temp_v1 = *(short *)((int)param_1 + 0x24a) == param_2;
    }
  }
  if (temp_v1) {
    return 1;
  }
  return 0;
}
