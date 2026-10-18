/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c1664` (_code @ 0x2c1664, 0x154 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00227fe0. */
/* Supplied declaration required: FUN_002c2ea0. */


void FUN_002c1664(int *param_1)

{
/* irregular: 5 unstructured edge(s); 1 goto(s); 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = 0x3f000000;
  switch((char)param_1[0x1b]) {
  case 1:
    if (*param_1 > param_1[2]) {
      param_1[2] = param_1[2] + 1;
      return;
    }
    *(unsigned char *)(param_1 + 0x1b) = 2;
  case 2:
    FUN_002c2ea0(param_1 + 3,param_1 + 0x18,param_1 + 0x17,param_1 + 0x19,param_1 + 0xb,
                 param_1 + 0xf,param_1 + 0x13);
    if (param_1[1] > param_1[2]) {
      param_1[2] = param_1[2] + 1;
      return;
    }
    if (param_1[0x1a] == 1) {
      *(unsigned char *)(param_1 + 0x1b) = 3;
    }
    else {
LAB_002c1704:
      param_1[2] = 0;
      *(unsigned char *)(param_1 + 0x1b) = 0;
      param_1[0x1a] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
      param_1[8] = 0;
      param_1[9] = 0;
      param_1[10] = 0;
      param_1[0xb] = temp_v0;
      param_1[0xc] = temp_v0;
      param_1[0xd] = temp_v0;
      param_1[0xf] = temp_v1;
      param_1[0x13] = temp_v0;
      param_1[0x18] = 0;
      param_1[0x17] = 0;
      param_1[0x19] = 0;
    }
  default:
    param_1[2] = param_1[2] + 1;
  case 3:
    return;
  case 4:
    FUN_00227fe0(param_1 + 0xb);
    FUN_00227fe0(param_1 + 0xc);
    FUN_00227fe0(param_1 + 0xd);
    if (param_1[1] + 10 > param_1[2]) {
      param_1[2] = param_1[2] + 1;
      return;
    }
    *(unsigned char *)(param_1 + 0x1b) = 5;
  case 5:
    goto LAB_002c1704;
  }
}
