/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00354dac` (_code @ 0x354dac, 0x98 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
} param_1_stack;

/* Supplied declaration required: FUN_002b5c2c. */
extern int **FUN_002bb99c(unsigned int, int *, unsigned int);
/* Supplied declaration required: FUN_00355ecc. */


int ** FUN_00354dac(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  int **ppiVar1;
  unsigned char temp_v0 [12];
  int *temp_v1 [2];
  
  FUN_002b5c2c(temp_v0,1);
  ppiVar1 = temp_v1;
  FUN_00355ecc(ppiVar1,temp_v0,0);
  if (((((unsigned int)ppiVar1 & 0x3fc00) == 0x4400) && (((unsigned int)ppiVar1 & 0x3ff) >= 0xdc)) &&
     (((unsigned int)ppiVar1 & 0x3ff) < 0xe6)) {
    ppiVar1 = (int **)0xc8804482;
  }
  if ((-1 < (int)ppiVar1) &&
     (ppiVar1 = (int **)FUN_002bb99c(param_1,temp_v1[0],0), (int)ppiVar1 < 0)) {
    (**(romwright_code **)(*temp_v1[0] + 0x30))();
  }
  return ppiVar1;
}
