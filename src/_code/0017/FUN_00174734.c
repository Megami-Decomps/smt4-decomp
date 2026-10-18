/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00174734` (_code @ 0x174734, 0x10a bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char LAB_001747f4; /* 0x1747f4 */

/* Supplied declaration required: FUN_001746dc. */
/* Supplied declaration required: FUN_00174a38. */


void FUN_00174734(void)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int unaff_r6;
  int in_r12;
  
  FUN_00174a38();
  temp_v0 = (&LAB_001747f4)[unaff_r6];
  FUN_001746dc();
  if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00174768. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x174618) + 0x174618U) & 0xfffffffc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0017493c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x174618) + 0x174618U) & 0xfffffffc))();
  return;
}
