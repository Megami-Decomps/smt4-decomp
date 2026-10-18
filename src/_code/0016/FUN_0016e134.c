/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e134` (_code @ 0x16e134, 0x10a bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char LAB_0016e1f4; /* 0x16e1f4 */

/* Supplied declaration required: FUN_0016e0dc. */
/* Supplied declaration required: FUN_0016e438. */


void FUN_0016e134(void)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int unaff_r6;
  int in_r12;
  
  FUN_0016e438();
  temp_v0 = (&LAB_0016e1f4)[unaff_r6];
  FUN_0016e0dc();
  if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0016e168. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x16e018) + 0x16e018U) & 0xfffffffc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0016e33c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x16e018) + 0x16e018U) & 0xfffffffc))();
  return;
}
