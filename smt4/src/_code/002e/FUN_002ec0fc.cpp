/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec0fc` (_code @ 0x2ec0fc, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b0750(int, int, unsigned int, int, int, int, int, int);
int FUN_002bf288(...);

/* stack frame of param_9: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_9_stack;

/* Supplied declaration required: FUN_002b0750. */
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_002ec0fc(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6,unsigned int param_7,int param_8,int param_9)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if (0 < param_9 - 3) {
    FUN_002bf288(2,0x39,0x3e,*(int *)(param_1 + 4) + param_2,param_3,0x6e);
    FUN_002bf288(2,0x39);
    FUN_002bf288(2,0x39);
    if (param_6 == 0) {
      temp_v3 = 0x3f;
    }
    else {
      temp_v3 = 0x40;
    }
    temp_v2 = FUN_002bf4f8(0x39,temp_v3);
    temp_v0 = (*(short **)(temp_v2 + 0xc))[1];
    temp_v1 = (int)temp_v0 / 0xc;
    FUN_002b0750(2,0x39,temp_v3,*(int *)(param_1 + 4) + param_2,param_8 * temp_v1 + param_3,
                 (int)**(short **)(temp_v2 + 0xc),(int)temp_v0 - temp_v1 * (param_9 - 3),0x6f);
  }
  return;
}

} /* extern "C" */
