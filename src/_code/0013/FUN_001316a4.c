/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001316a4` (_code @ 0x1316a4, 0x44 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 3 slot(s), 10 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned short sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_00140dec; /* 0x140dec */

/* Supplied declaration required: FUN_002b48dc. */


void FUN_001316a4(int param_1,unsigned short param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned short temp_v0 [16];
  
  if (*(int *)(param_1 + 0x42c) != 0) {
    temp_v0[0] = param_2;
    FUN_002b48dc(temp_v0,*(unsigned int *)(param_1 + 0x430),*(int *)(param_1 + 0x42c),0x18,
                 &LAB_00140dec);
                    /* WARNING: Treating indirect jump as return */
    return;
  }
  return;
}
