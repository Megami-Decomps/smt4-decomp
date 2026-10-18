/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038e4cc` (_code @ 0x38e4cc, 0xbc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */


void FUN_0038e4cc(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0;
  
  param_1 = param_1 + 0x12b8;
  if (param_2 == 0x15) {
    FUN_00184c00(param_1,0x2f,0);
    return;
  }
  if (param_2 == 0x16) {
    FUN_00184c00(param_1,0x30,0);
    return;
  }
  temp_v0 = 0x2d;
  if (param_2 == 10) {
    param_2 = 0x10;
  }
  else {
    if (param_2 >= 11) {
      if (param_2 == 0xb) {
        param_2 = 0x11;
      }
      else {
        if (param_2 != 0xc) {
          FUN_00184758(param_1,(int)(short)param_2,0);
          FUN_00184c00(param_1,temp_v0,0);
          return;
        }
        param_2 = 0x12;
      }
      temp_v0 = 0x2f;
      FUN_00184758(param_1,(int)(short)param_2,0);
      FUN_00184c00(param_1,temp_v0,0);
      return;
    }
    if ((param_2 == 0) || (param_2 != 9)) {
      FUN_00184758(param_1,(int)(short)param_2,0);
      FUN_00184c00(param_1,temp_v0,0);
      return;
    }
    param_2 = 0xf;
  }
  temp_v0 = 0x30;
  FUN_00184758(param_1,(int)(short)param_2,0);
  FUN_00184c00(param_1,temp_v0,0);
  return;
}
