/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00186948` (_code @ 0x186948, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_001b4120. */


void FUN_00186948(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int temp_v2;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  temp_v0 = param_1 << 8;
  temp_v1 = 0x2025e;
  uStack_30 = 1;
  uStack_2c = 0xf025f;
  uStack_28 = 0x80000000;
  uStack_24 = 0xf0227;
  uStack_20 = 0xf;
  uStack_1c = 0xf0232;
  temp_v2 = 1;
  uStack_14 = 0x30253;
  uStack_10 = 0;
  uStack_c = 0x10245;
  FUN_001b4120(&temp_v0,0x30);
                    /* WARNING: Treating indirect jump as return */
  return;
}
