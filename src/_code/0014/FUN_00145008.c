/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145008` (_code @ 0x145008, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_002c36d0. */
extern int *FUN_002c5300(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


int FUN_00145008(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int *piVar5;
  
  piVar5 = *(int **)(param_1 + 0xc);
  while( 1 ) {
    if (piVar5 == (int *)0x0) {
      return 0;
    }
    temp_v2 = piVar5[1];
    if (param_2 <= temp_v2) break;
    piVar5 = (int *)piVar5[3];
  }
  if ((param_2 & 0x7f) != 0) {
    param_2 = param_2 + (0x80 - (param_2 & 0x7f));
  }
  if (temp_v2 != param_2) {
    if ((param_2 & 0x7f) != 0) {
      param_2 = (0x80 - (param_2 & 0x7f)) + param_2;
    }
    piVar1 = (int *)FUN_002c5300(0x100,0x100,0,0x10,1);
    *piVar1 = 0;
    piVar1[1] = 0;
    piVar1[2] = 0;
    piVar1[3] = 0;
    *piVar1 = *piVar5;
    piVar1[1] = param_2;
    *piVar5 = *piVar5 + param_2;
    piVar5[1] = piVar5[1] - param_2;
    *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - piVar1[1];
    FUN_002c36d0(param_1,piVar1);
    return *piVar1;
  }
  *(unsigned int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) - temp_v2;
  temp_v0 = piVar5[2];
  temp_v1 = piVar5[3];
  if (temp_v0 != 0) {
    *(int *)(temp_v0 + 0xc) = temp_v1;
  }
  else {
    *(int *)(param_1 + 0xc) = temp_v1;
  }
  if (temp_v1 != 0) {
    *(int *)(temp_v1 + 8) = temp_v0;
  }
  else {
    *(int *)(param_1 + 0x10) = temp_v0;
  }
  piVar5[2] = 0;
  piVar5[3] = 0;
  *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) - 1;
  FUN_002c36d0(param_1,piVar5,temp_v2,param_4,param_4);
  return *piVar5;
}
