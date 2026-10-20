/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035d7e8` (_code @ 0x35d7e8, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238aac(int *, int);
int FUN_0035c0e8(void);
int rt_memcpy(int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

/* Supplied declaration required: FUN_00238aac. */
extern int FUN_002c1870(int, unsigned int, unsigned int);
extern int FUN_0035c050(int *, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0035c0e8. */
extern int FUN_0035e090(unsigned int *, int **);
/* Supplied declaration required: rt_memcpy. */


void FUN_0035d7e8(unsigned int *param_1,unsigned int *param_2,unsigned int param_3,int *param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int *piVar3;
  int *temp_v1;
  
  piVar3 = (int *)param_2[2];
  temp_v1 = param_4;
  if (piVar3 != (int *)(param_2 + 1)) {
    do {
      temp_v0 = FUN_002c1870(piVar3[9],param_3,param_2[4]);
      if (temp_v0 != 0) {
        piVar3 = (int *)piVar3[1];
      }
    } while (temp_v0 != 0 && piVar3 != (int *)(param_2 + 1));
  }
  piVar2 = (int *)(param_2 + 1);
  if (piVar3 != piVar2) {
    *param_1 = (unsigned int)piVar3;
    return;
  }
  piVar3 = (int *)param_2[3];
  FUN_00238aac(piVar3,3);
  if (piVar3 == (int *)0x0) {
    temp_v1 = (int *)0x0;
  }
  else {
    if (piVar3 != (int *)0xfffffff8) {
      FUN_0035c0e8();
    }
    *piVar3 = *piVar2;
    piVar3[1] = (int)piVar2;
    *piVar2 = (int)piVar3;
    *(int **)(*piVar3 + 4) = piVar3;
    temp_v1 = piVar3;
  }
  piVar3 = temp_v1;
  if ((temp_v1 != (int *)0x0) &&
     (temp_v0 = FUN_0035c050(temp_v1 + 2,*param_2,param_2[4],0), temp_v0 != 0)) {
    rt_memcpy(piVar3[9],param_3,param_2[4]);
    temp_v1 = piVar3;
    temp_v0 = FUN_0035e090(param_2,&temp_v1);
    if (temp_v0 != 0) {
      *param_1 = (unsigned int)piVar3;
      return;
    }
  }
  *param_1 = 0;
  return;
}

} /* extern "C" */
