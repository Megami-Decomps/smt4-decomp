/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2ab0` (_code @ 0x2a2ab0, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */

/* Supplied declaration required: FUN_002a82c4. */
/* Supplied declaration required: FUN_002c3820. */
/* Supplied declaration required: FUN_002c38a4. */


void FUN_002a2ab0(int param_1,int param_2,unsigned char param_3)

{
/* irregular: 3 native warning(s); review required */
  FUN_002c38a4(param_1 + 0x34);
  *(unsigned char *)(param_1 + param_2 + 0x30) = param_3;
  FUN_002a82c4(&DAT_004e6f64,param_2);
  FUN_002c3820(param_1 + 0x34);
  return;
}
