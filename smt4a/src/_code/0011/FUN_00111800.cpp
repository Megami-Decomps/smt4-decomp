/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00111800` (_code @ 0x111800, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_002eb60c(void);
extern int FUN_002fd38c(void);


int FUN_00111800(int *param_1)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int *piVar4;
  
  temp_v2 = *param_1;
  temp_v0 = FUN_002fd38c();
  if (-1 < temp_v2) {
    return 0;
  }
  piVar4 = (int *)0x5948f4;
  if (temp_v0 != 0x65) {
    if (temp_v0 < 0x66) {
      temp_v0 = FUN_002eb60c();
      piVar4 = (int *)(0x5948f4 >> ((temp_v0 >> 4) & 0xffU));
    }
    if (temp_v0 != 0x69) {
      if (temp_v0 < 0x6a) {
        if (temp_v0 != 0x67) {
          if (temp_v0 != 0x68) {
            return *piVar4;
          }
          temp_v0 = 8;
          temp_v1 = 0x7f97ffff;
        }
        else {
          temp_v1 = 0x7f98ffff;
          temp_v0 = 0xb;
        }
      }
      else if (temp_v0 != 0x6f) {
        if (temp_v0 != 0x70) {
          return *piVar4;
        }
        temp_v1 = 0x7f8fffff;
        temp_v0 = 0x13;
      }
      else {
        temp_v1 = 0x7f90ffff;
        temp_v0 = 0x12;
      }
    }
    else {
      temp_v1 = 0x7f96ffff;
      temp_v0 = 0xc;
    }
  }
  else {
    temp_v1 = 0x7f9b0000;
    temp_v0 = 7;
  }
  return *(int *)(temp_v0 * 4 + 0x5948f4) + *piVar4 + temp_v0 * 100 + temp_v2 + temp_v1;
}

} /* extern "C" */
