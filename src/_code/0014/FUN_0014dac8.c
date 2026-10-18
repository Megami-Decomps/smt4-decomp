/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014dac8` (_code @ 0x14dac8, 0xcc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Unsupported intrinsic, declaration required: hasExclusiveAccess (CALLOTHER). */
/* Supplied declaration required: FUN_0014f464. */
/* Supplied declaration required: FUN_002a4588. */
/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */
/* Supplied declaration required: FUN_002c6c10. */


void FUN_0014dac8(int *param_1,unsigned int param_2)

{
/* irregular: 7 native warning(s); review required */
  unsigned char temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  
  piVar2 = param_1 + 0xc;
  do {
    temp_v1 = *piVar2 + 1;
    temp_v0 = (unsigned char)hasExclusiveAccess(piVar2);
  } while (!temp_v0);
  *piVar2 = temp_v1;
  while( 1 ) {
    piVar2 = param_1 + 5;
    FUN_002c3aa8(piVar2);
    temp_v2 = param_1[10];
    if (temp_v2 < (unsigned int)param_1[8]) break;
    FUN_002c3a24(piVar2);
    FUN_0014f464(param_1 + 3);
  }
  FUN_002c6c10(param_1[9] + temp_v2,param_1[8],param_1[9],temp_v2,temp_v1);
  *(unsigned int *)(*param_1 + temp_v3 * 4) = param_2;
  param_1[10] = param_1[10] + 1;
  if (0 < param_1[0xb]) {
    FUN_002a4588(param_1 + 1,1);
  }
  FUN_002c3a24(piVar2);
  param_1 = param_1 + 0xc;
  do {
    temp_v0 = (unsigned char)hasExclusiveAccess(param_1);
  } while (!temp_v0);
  *param_1 = *param_1 - 1;
  return;
}
