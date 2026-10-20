/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2ea0` (_code @ 0x2c2ea0, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00229264(unsigned int *);
int FUN_002a649c(unsigned int, int *, int *, unsigned int *, unsigned int);

/* stack frame of param_7: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_7_stack;

/* Supplied declaration required: FUN_00229264. */
/* Supplied declaration required: FUN_002a649c. */


void FUN_002c2ea0(unsigned int param_1,int *param_2,int *param_3,int *param_4,unsigned int *param_5,
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
    FUN_002a649c(param_1,param_3,param_4,param_6,param_7);
    return;
  }
  FUN_00229264(param_5);
  FUN_00229264(param_5 + 1);
  FUN_00229264(param_5 + 2);
  return;
}

} /* extern "C" */
