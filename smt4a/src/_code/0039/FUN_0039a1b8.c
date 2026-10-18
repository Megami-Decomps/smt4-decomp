/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039a1b8` (_code @ 0x39a1b8, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_10: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_10_stack;

extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00185dd4. */
extern int aeabi_idivmod(int, unsigned int);


void FUN_0039a1b8(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6,unsigned int param_7,int param_8,int param_9,unsigned int param_10)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  short *psVar4;
  
  FUN_001835b4(2,0x2e,0xf8,*(int *)(param_1 + 4) + param_2,param_3,100);
  FUN_001835b4(2,0x2e,0xf5,*(int *)(param_1 + 4) + param_2,param_3,100);
  FUN_001835b4(2,0x2e);
  FUN_001835b4(2,0x2e);
  if (param_6 == 0) {
    temp_v1 = 0xf6;
  }
  else {
    temp_v1 = 0xf7;
  }
  temp_v0 = FUN_001834a4(0x2e,temp_v1);
  psVar4 = *(short **)(temp_v0 + 0xc);
  temp_v2 = (int)psVar4[1];
  temp_v0 = aeabi_idivmod(temp_v2,param_10);
  FUN_00185dd4(2,0x2e,temp_v1,*(int *)(param_1 + 4) + param_2,param_8 * temp_v0 + param_3,(int)*psVar4,
               temp_v2 - temp_v0 * (param_9 - 0xb),0x65);
  return;
}
