/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00309e90` (_code @ 0x309e90, 0x104 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_9: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_9_stack;

/* Supplied declaration required: FUN_002b0908. */
/* Supplied declaration required: FUN_002bf460. */
extern int FUN_002bf6d0(unsigned int, unsigned int);


void FUN_00309e90(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6,unsigned int param_7,int param_8,int param_9)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  FUN_002bf460(2,0x39,0xf5,*(int *)(param_1 + 4) + param_2,param_3,0x6e);
  FUN_002bf460(2,0x39);
  FUN_002bf460(2,0x39);
  if (param_6 == 0) {
    temp_v3 = 0xf6;
  }
  else {
    temp_v3 = 0xf7;
  }
  temp_v1 = FUN_002bf6d0(0x39,temp_v3);
  temp_v2 = (int)(*(short **)(temp_v1 + 0xc))[1];
  temp_v0 = (int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1c)) >> 4;
  FUN_002b0908(2,0x39,temp_v3,*(int *)(param_1 + 4) + param_2,temp_v0 * param_8 + param_3,
               (int)**(short **)(temp_v1 + 0xc),temp_v2 - temp_v0 * (param_9 - 0xb),0x6f);
  return;
}
