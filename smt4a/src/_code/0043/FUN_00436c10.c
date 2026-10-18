/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00436c10` (_code @ 0x436c10, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_0030ef8c(int, unsigned int, unsigned int);
extern int FUN_00434d04(int *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00434d9c. */
extern int FUN_0043756c(unsigned int *, int **);
/* Supplied declaration required: FUN_004387f0. */
/* Supplied declaration required: rt_memcpy. */


void FUN_00436c10(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *temp_v1;
  
  piVar3 = (int *)param_2[2];
  temp_v1 = param_4;
  if (piVar3 != param_2 + 1) {
    do {
      temp_v0 = FUN_0030ef8c(piVar3[9],param_3,param_2[4]);
      if (temp_v0 != 0) {
        piVar3 = (int *)piVar3[1];
      }
    } while (temp_v0 != 0 && piVar3 != param_2 + 1);
  }
  piVar2 = (int *)(param_2 + 1);
  if (piVar3 != piVar2) {
    *param_1 = (unsigned int)piVar3;
    return;
  }
  piVar3 = (int *)param_2[3];
  FUN_004387f0(piVar3,3);
  if (piVar3 == (int *)0x0) {
    temp_v1 = (int *)0x0;
  }
  else {
    if (piVar3 != (int *)0xfffffff8) {
      FUN_00434d9c();
    }
    *piVar3 = *piVar2;
    piVar3[1] = (int)piVar2;
    *piVar2 = (int)piVar3;
    *(int **)(*piVar3 + 4) = piVar3;
    temp_v1 = piVar3;
  }
  piVar3 = temp_v1;
  if ((temp_v1 != (int *)0x0) &&
     (temp_v0 = FUN_00434d04(temp_v1 + 2,*param_2,param_2[4],0), temp_v0 != 0)) {
    rt_memcpy(piVar3[9],param_3,param_2[4]);
    temp_v1 = piVar3;
    temp_v0 = FUN_0043756c(param_2,&temp_v1);
    if (temp_v0 != 0) {
      *param_1 = (unsigned int)piVar3;
      return;
    }
  }
  *param_1 = 0;
  return;
}
