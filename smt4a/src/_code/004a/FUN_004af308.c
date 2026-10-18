/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004af308` (_code @ 0x4af308, 0xac bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00520b3c. */
/* Supplied declaration required: FUN_00521c8c. */


void FUN_004af308(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [4];
  
  piVar1 = (int *)param_1[0x51e];
  if (piVar1 != (int *)0x0) {
    (**(romwright_code **)(*piVar1 + 0x10))();
    param_1[0x51e] = 0;
    temp_v1 = param_1[0x50c];
    temp_v0 = *(unsigned int *)(temp_v1 + 8);
    FUN_00520b3c(temp_v2,param_1 + 0x507,&temp_v0,&temp_v1);
    FUN_00521c8c(param_1 + 0x50f,0,param_1[0x512]);
    param_1[0x512] = 0;
    *param_1 = 0;
    param_1[1] = 0;
    param_1[0x520] = 0x40;
    *(unsigned char *)((int)param_1 + 0x148d) = 1;
    *(unsigned char *)((int)param_1 + 0x148e) = 0;
  }
  return;
}
