/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fea74` (_code @ 0x2fea74, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f2a22(int, int *, int, unsigned int, int);
int FUN_002feac0(int, int **);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} param_4_stack;

/* Supplied declaration required: FUN_002f2a22. */
/* Supplied declaration required: FUN_002feac0. */


void FUN_002fea74(int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int *temp_v1;
  
  if (param_2 != (int *)0x0) {
    piVar1 = (int *)*param_2;
    temp_v1 = param_2;
    if (piVar1 != (int *)0x0) {
      temp_v0 = *(int *)(param_1 + 0x80);
      if (temp_v0 != 0) {
        FUN_002f2a22(temp_v0,piVar1,temp_v0,param_4,param_1);
      }
      else {
        (**(romwright_code **)(*piVar1 + 4))();
      }
    }
    FUN_002feac0(param_1 + 0x24,&temp_v1);
  }
  return;
}

} /* extern "C" */
