/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110bd0` (_code @ 0x110bd0, 0x5a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_4_stack;

/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7908. */
/* Supplied declaration required: FUN_0043ad40. */


void FUN_00110bd0(unsigned int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1 [12];
  int temp_v2;
  int temp_v3;
  
  FUN_002e6e34(temp_v1,param_2 + 0x105c);
  if (param_4 != 0) {
    if (param_4 != 1) {
      if (param_4 == 2) {
        temp_v0 = 2;
      }
      else {
        temp_v0 = 1;
      }
    }
    else {
      temp_v0 = 3;
    }
  }
  else {
    temp_v0 = 1;
  }
  param_2 = param_2 + 0x38;
  FUN_0043ad40(param_2,param_3,temp_v0,1);
  if (param_2 < 0) {
    puVar1 = (unsigned int *)&temp_v3;
    temp_v3 = 0x80050001;
  }
  else {
    puVar1 = (unsigned int *)&temp_v2;
    temp_v2 = 0x10001;
  }
  FUN_002e7908(param_1,puVar1);
  FUN_002e6e5c(temp_v1);
  return;
}
