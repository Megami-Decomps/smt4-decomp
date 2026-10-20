/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00132cd6` (_code @ 0x132cd6, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00132c98(int *, int *, unsigned int [2]);
int FUN_002e6e14(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

/* Supplied declaration required: FUN_00132c98. */
/* Supplied declaration required: FUN_002e6e14. */
extern int wordRefsDiffer_002f3204(unsigned int *, unsigned int **);


int * FUN_00132cd6(int *param_1)

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
    while (temp_v0 = wordRefsDiffer_002f3204((unsigned int *)&temp_v1,&temp_v2), temp_v0 != 0) {
      temp_v4[0] = temp_v1;
      FUN_00132c98(&temp_v3,param_1,temp_v4);
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

} /* extern "C" */
