/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013305a` (_code @ 0x13305a, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int FUN_001321b2(unsigned int *, unsigned int **);
/* Supplied declaration required: FUN_002e6e14. */
/* Supplied declaration required: FUN_002fb2a8. */


int * FUN_0013305a(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1;
  unsigned int *temp_v2;
  int temp_v3;
  unsigned int temp_v4 [2];
  
  temp_v2 = (unsigned int *)param_1[4];
  if (temp_v2 != (unsigned int *)0x0) {
    temp_v1 = *temp_v2;
    while (temp_v0 = FUN_001321b2((unsigned int *)&temp_v1,&temp_v2), temp_v0 != 0) {
      temp_v4[0] = temp_v1;
      FUN_002fb2a8(&temp_v3,param_1,temp_v4);
      temp_v1 = temp_v3;
    }
    piVar2 = (int *)param_1[4];
    *piVar2 = param_1[1];
    param_1[1] = (int)piVar2;
    while (piVar2 = (int *)*param_1, piVar2 != (int *)0x0) {
      *param_1 = *piVar2;
      FUN_002e6e14(piVar2[2]);
      FUN_002e6e14(piVar2);
    }
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  return param_1;
}
