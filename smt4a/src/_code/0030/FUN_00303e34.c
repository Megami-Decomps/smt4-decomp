/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00303e34` (_code @ 0x303e34, 0x2a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002ee9c0. */
/* Supplied declaration required: FUN_00303e5e. */
extern unsigned int FUN_0030d3b2(int *);


void FUN_00303e34(unsigned int param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = param_4;
  temp_v2 = FUN_0030d3b2(param_2);
  FUN_002ee9c0(param_1,&temp_v2);
  temp_v1 = param_2[1];
  for (temp_v0 = *param_2; temp_v0 != temp_v1; temp_v0 = temp_v0 + 8) {
    FUN_00303e5e(param_1,temp_v0);
  }
  return;
}
