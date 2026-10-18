/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036c91c` (_code @ 0x36c91c, 0x120 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_9: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_9_stack;

extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00185dd4. */


void FUN_0036c91c(int param_1,int param_2,int param_3,unsigned int param_4,unsigned int param_5,
                 int param_6,unsigned int param_7,int param_8,int param_9)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  if (0 < param_9 - 3) {
    FUN_001835b4(2,0x2e,0x39,*(int *)(param_1 + 4) + param_2,param_3,100);
    FUN_001835b4(2,0x2e,0x3e,*(int *)(param_1 + 4) + param_2,param_3,100);
    FUN_001835b4(2,0x2e);
    FUN_001835b4(2,0x2e);
    if (param_6 == 0) {
      temp_v3 = 0x3f;
    }
    else {
      temp_v3 = 0x40;
    }
    temp_v1 = FUN_001834a4(0x2e,temp_v3);
    temp_v2 = (int)(*(short **)(temp_v1 + 0xc))[1];
    temp_v0 = (int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1b)) >> 5;
    FUN_00185dd4(2,0x2e,temp_v3,*(int *)(param_1 + 4) + param_2,temp_v0 * param_8 + param_3,
                 (int)**(short **)(temp_v1 + 0xc),temp_v2 - temp_v0 * (param_9 - 3),0x65);
  }
  return;
}
