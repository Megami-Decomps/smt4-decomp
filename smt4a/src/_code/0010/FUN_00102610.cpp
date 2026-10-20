/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102610` (_code @ 0x102610, 0x6a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e33f0(void);

typedef int romwright_code(...);
/* stack frame of param_6: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_6_stack;

/* Supplied declaration required: FUN_002e33f0. */


int FUN_00102610(int param_1,int param_2,int param_3,romwright_code *param_4,unsigned int param_5,romwright_code *param_6)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = param_2 * param_1;
  if (temp_v1 == 0) {
    temp_v1 = 1;
  }
  temp_v1 = temp_v1 + param_3;
  if (param_6 != (romwright_code *)0x0) {
    temp_v1 = (*param_6)();
    if (temp_v1 != 0) {
      temp_v1 = temp_v1 + param_3;
    }
    else {
      temp_v1 = 0;
    }
  }
  else {
    FUN_002e33f0();
    temp_v1 = temp_v1 + param_3;
  }
  if (temp_v1 != 0) {
    if (param_3 != 0) {
      *(int *)(temp_v1 - 8) = param_2;
      *(int *)(temp_v1 - 4) = param_1;
    }
    if (param_4 != (romwright_code *)0x0) {
      temp_v2 = temp_v1;
      for (temp_v0 = 0; temp_v0 < param_1; temp_v0 = temp_v0 + 1) {
        (*param_4)(temp_v2);
        temp_v2 = temp_v2 + param_2;
      }
    }
  }
  return temp_v1;
}

} /* extern "C" */
