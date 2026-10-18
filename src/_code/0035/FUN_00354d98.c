/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354d98` (_code @ 0x354d98, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int *DAT_0044e658; /* 0x44e658 */

extern int **FUN_002b5e10(unsigned int, int *, unsigned int);
/* Supplied declaration required: FUN_00356874. */


int ** FUN_00354d98(unsigned int param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
/* irregular: 1 native warning(s); review required */
  int **ppiVar1;
  int *temp_v0;
  
  ppiVar1 = &temp_v0;
  if (DAT_0044e658 != (int *)0x0) {
    ppiVar1 = (int **)0xc92044e7;
  }
  else {
    temp_v0 = param_4;
    FUN_00356874(ppiVar1,4);
    if (-1 < (int)ppiVar1) {
      ppiVar1 = (int **)FUN_002b5e10(param_1,temp_v0,0);
      if (((unsigned int)ppiVar1 & 0x80000000) == 0) {
        DAT_0044e658 = temp_v0;
      }
      else {
        (**(romwright_code **)(*temp_v0 + 0x30))();
      }
    }
  }
  return ppiVar1;
}
