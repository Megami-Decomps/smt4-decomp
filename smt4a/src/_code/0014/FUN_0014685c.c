/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0014685c` (_code @ 0x14685c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

extern unsigned char LAB_00146890; /* 0x146890 */

/* Supplied declaration required: FUN_001589a0. */


void FUN_0014685c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  FUN_001589a0(&LAB_00146890,param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}
