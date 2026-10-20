/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00201714` (_code @ 0x201714, 0xc0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ee0a0(unsigned int, int *, int *, unsigned int *, unsigned int);
int FUN_00291008(unsigned int *);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_7_stack;

/* Supplied declaration required: FUN_001ee0a0. */
/* Supplied declaration required: FUN_00291008. */


void FUN_00201714(unsigned int param_1,int *param_2,int *param_3,int *param_4,unsigned int *param_5,
                 unsigned int *param_6,unsigned int param_7)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  if (*param_3 >= 4) {
    *param_5 = 0x3f000000;
    param_5[1] = 0x3f000000;
    param_5[2] = 0x3f000000;
    param_5[3] = 0;
    return;
  }
  temp_v0 = *param_2;
  *param_2 = temp_v0 + 1;
  if (*param_4 < temp_v0 + 1) {
    *param_2 = 0;
    *param_6 = 0x3f000000;
    param_6[1] = 0x3f000000;
    param_6[2] = 0x3f000000;
    param_6[3] = 0;
    FUN_001ee0a0(param_1,param_3,param_4,param_6,param_7);
    return;
  }
  FUN_00291008(param_5);
  FUN_00291008(param_5 + 1);
  FUN_00291008(param_5 + 2);
  return;
}

} /* extern "C" */
