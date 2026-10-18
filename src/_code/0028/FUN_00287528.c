/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00287528` (_code @ 0x287528, 0x1b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_0028975c. */
extern unsigned int FUN_00296d6c(unsigned int, unsigned int);
extern int FUN_002c09d0(unsigned int);
/* Supplied declaration required: FUN_002c5ef0. */


void FUN_00287528(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (param_1 != (unsigned int *)0x0) {
    *param_1 = 0xffffffff;
  }
  temp_v0 = FUN_002c09d0(0x235);
  if (temp_v0 == 0) {
    return;
  }
  FUN_002c5ef0();
  temp_v2 = 0xffffffff;
  if (temp_v0 < 1) {
    if (param_1 == (unsigned int *)0x0) {
      FUN_0028975c(0x535,1);
      return;
    }
    temp_v2 = FUN_00296d6c(0xb,0xd);
    FUN_0028975c(0x535,1);
  }
  else {
    temp_v3 = 0x534;
    if (temp_v0 < 0x14) {
      if (param_1 != (unsigned int *)0x0) {
        temp_v2 = FUN_00296d6c(6,10);
      }
      FUN_0028975c(0x535,1);
    }
    else {
      temp_v3 = 0x533;
      if (temp_v0 < 0x32) {
        if (param_1 != (unsigned int *)0x0) {
          temp_v2 = FUN_00296d6c(3,4);
        }
      }
      else {
        temp_v1 = 0x213;
        if (temp_v0 < 0x50) {
          temp_v2 = 2;
          FUN_0028975c(temp_v1,1);
        }
        else {
          temp_v1 = 0x212;
          if (99 >= temp_v0) {
            temp_v2 = 1;
            FUN_0028975c(0x213,1,1);
            FUN_0028975c(temp_v1,1);
          }
          else {
            temp_v2 = 0;
            FUN_0028975c(0x213,1);
            FUN_0028975c(0x212,1);
            FUN_0028975c(0x211,1);
          }
        }
      }
      FUN_0028975c(0x535,1);
      FUN_0028975c(0x534,1);
    }
    FUN_0028975c(temp_v3,1);
    if (param_1 == (unsigned int *)0x0) {
      return;
    }
  }
  *param_1 = temp_v2;
  return;
}
