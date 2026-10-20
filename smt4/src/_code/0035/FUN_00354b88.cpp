/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354b88` (_code @ 0x354b88, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00356664(int **, int);

typedef int romwright_code(...);
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_0044e650; /* 0x44e650 */

extern int **FUN_002bb99c(unsigned int, int *, unsigned int);
/* Supplied declaration required: FUN_00356664. */


int ** FUN_00354b88(unsigned int param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  int **ppiVar1;
  int *temp_v0;
  
  ppiVar1 = &temp_v0;
  if ((*(int * *)((unsigned char *)&DAT_0044e650 + 0x8)) != (int *)0x0) {
    ppiVar1 = (int **)0xc92044e7;
  }
  else {
    temp_v0 = param_4;
    FUN_00356664(ppiVar1,4);
    if (-1 < (int)ppiVar1) {
      ppiVar1 = (int **)FUN_002bb99c(param_1,temp_v0,0);
      if (((unsigned int)ppiVar1 & 0x80000000) == 0) {
        (*(int * *)((unsigned char *)&DAT_0044e650 + 0x8)) = temp_v0;
      }
      else {
        (**(romwright_code **)(*temp_v0 + 0x30))();
      }
    }
  }
  return ppiVar1;
}

} /* extern "C" */
