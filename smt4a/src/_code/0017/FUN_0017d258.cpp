/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017d258` (_code @ 0x17d258, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001962c0(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp4; /* 0x4: local_4 */
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_5_stack;

extern unsigned int DAT_0061a50c; /* 0x61a50c */

/* Supplied declaration required: FUN_001962c0. */


void FUN_0017d258(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
                 unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  FUN_001962c0(DAT_0061a50c,param_1,param_2,param_3,param_4,param_5);
                    /* WARNING: Treating indirect jump as return */
  return;
}

} /* extern "C" */
