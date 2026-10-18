/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00439394` (_code @ 0x439394, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Supplied declaration required: FUN_00430f98. */
extern int FUN_0043126c(void);


void FUN_00439394(unsigned int param_1,unsigned char *param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  
  *param_3 = 1;
  temp_v1 = FUN_0043126c();
  switch(temp_v1) {
  case 0:
    FUN_00430f98();
    if (temp_v1 == 0) {
      *param_2 = 0;
      return;
    }
    break;
  case 1:
    FUN_00430f98();
    if (temp_v1 == 1) {
      *param_2 = 1;
    }
    else {
      if (temp_v1 != 2) {
        if (temp_v1 == 5) {
          *param_2 = 3;
          param_2[1] = 1;
          *param_3 = *param_3 + 1;
          return;
        }
        if (temp_v1 == 9) {
          *param_2 = 0xe;
          param_2[1] = 1;
          *param_3 = *param_3 + 1;
          return;
        }
        break;
      }
      *param_2 = 2;
      param_2[1] = 1;
      *param_3 = *param_3 + 1;
    }
    return;
  case 2:
    FUN_00430f98();
    switch(temp_v1) {
    case 1:
      *param_2 = 4;
      return;
    case 2:
      *param_2 = 5;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 3:
      *param_2 = 6;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 4:
      *param_2 = 7;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 5:
      *param_2 = 8;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 8:
      *param_2 = 9;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 9:
      *param_2 = 0xc;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    case 10:
      *param_2 = 0xd;
      param_2[1] = 4;
      *param_3 = *param_3 + 1;
      return;
    }
    break;
  case 4:
    FUN_00430f98();
    if (temp_v1 == 6) {
      temp_v0 = 0xb;
      *param_2 = temp_v0;
      return;
    }
    break;
  case 5:
    FUN_00430f98();
    if (temp_v1 == 7) {
      temp_v0 = 10;
      *param_2 = temp_v0;
      return;
    }
    break;
  case 6:
    FUN_00430f98();
    if (temp_v1 == 1) {
      temp_v0 = 0x10;
    }
    else {
      if (temp_v1 != 0xb) break;
      temp_v0 = 0xf;
    }
    *param_2 = temp_v0;
    return;
  }
  *param_3 = 0;
  return;
}
