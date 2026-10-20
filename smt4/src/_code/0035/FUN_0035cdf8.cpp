/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035cdf8` (_code @ 0x35cdf8, 0xb0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00237a7c(int, int *, int);
int FUN_00237a94(int [2], int);
int FUN_00237cfc(int *, int *);
int FUN_002381a4(int *, int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_00237a7c. */
/* Supplied declaration required: FUN_00237a94. */
/* Supplied declaration required: FUN_00237cfc. */
/* Supplied declaration required: FUN_002381a4. */


int * FUN_0035cdf8(int *param_1,int *param_2,int *param_3)

{
/* irregular: 4 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2 [2];
  
  FUN_00237cfc(&temp_v1,param_1);
  if (temp_v1 != 0) {
    FUN_00237a94(temp_v2,*param_3 + 8);
    if (temp_v2[0] != 0) {
      temp_v0 = temp_v1;
      FUN_00237a7c(temp_v2[0] + 8,&temp_v0,param_1[5]);
      *param_1 = *(int *)(*param_1 + 4);
      piVar1 = param_1;
      FUN_002381a4(param_1,temp_v2[0] + 0x10);
      if (piVar1 == (int *)0x0) {
        *param_2 = temp_v1;
        *param_1 = *(int *)(*param_1 + 4);
        piVar1 = (int *)0x0;
      }
      return piVar1;
    }
  }
  return (int *)0x2;
}

} /* extern "C" */
