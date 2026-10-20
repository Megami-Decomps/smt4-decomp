/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004be990` (_code @ 0x4be990, 0x7c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184758(int, int, unsigned int);
int FUN_00184c00(int, int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_004be990(int param_1,int param_2,short param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  
  temp_v0 = (short)param_2;
  if (param_2 == 0) {
    temp_v0 = 4;
  }
  else {
    if (param_2 == 1) {
      temp_v0 = 5;
    }
    else if (param_2 == 2) {
      temp_v0 = 6;
    }
    else if (param_2 == 3) {
      temp_v0 = 7;
    }
    if (param_2 != 1) {
      if (param_2 == 2 || param_2 == 3) {
        param_3 = 1;
      }
      FUN_00184758(param_1 + 0x30,(int)temp_v0,param_4);
      FUN_00184c00(param_1 + 0x30,(int)param_3,param_4);
      return;
    }
  }
  param_3 = 0;
  FUN_00184758(param_1 + 0x30,(int)temp_v0,param_4);
  FUN_00184c00(param_1 + 0x30,(int)param_3,param_4);
  return;
}

} /* extern "C" */
