/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b7d30` (_code @ 0x2b7d30, 0x90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Supplied declaration required: FUN_002adba8. */
/* Supplied declaration required: FUN_002b7dc4. */
/* Supplied declaration required: FUN_002b81e4. */


void FUN_002b7d30(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned long long temp_v0;
  unsigned long long uStack_18;
  unsigned long long uStack_10;
  
  FUN_002b81e4();
  FUN_002b7dc4(0xffffffff,0xffffffff,0xffffffff);
  temp_v0 = 0x1024500000001;
  uStack_18 = 0xf023100000001;
  uStack_10 = 0x1025300000000;
  FUN_002adba8(&temp_v0,0x18,1);
                    /* WARNING: Treating indirect jump as return */
  return;
}
