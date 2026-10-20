/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df0c4` (_code @ 0x3df0c4, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002baa40(unsigned int, int);
int FUN_00352098(int, int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_6: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp18; /* 0x18: local_18 */
} param_6_stack;

/* Supplied declaration required: FUN_002baa40. */
/* Supplied declaration required: FUN_00352098. */


void FUN_003df0c4(unsigned int param_1,int *param_2,unsigned int *param_3,int param_4,unsigned int param_5,
                 unsigned int param_6)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)*param_2;
  if (param_6 >= (unsigned int)puVar1[10]) {
    param_4 = 0;
    *param_3 = 0;
  }
  else {
    temp_v0 = puVar1[10] - param_6;
    if (temp_v0 < param_5) {
      param_5 = temp_v0;
    }
    FUN_00352098(param_4,1,*puVar1,puVar1[1],puVar1[9] + param_6 * 2,param_5);
    if (-1 < param_4) {
      param_4 = 0;
      *param_3 = param_5;
    }
  }
  FUN_002baa40(param_1,param_4);
  return;
}

} /* extern "C" */
