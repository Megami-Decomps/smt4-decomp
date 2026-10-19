/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017ae34` (_code @ 0x17ae34, 0x20c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char LAB_0017aef4; /* 0x17aef4 */

/* Supplied declaration required: FUN_0017addc. */
/* Supplied declaration required: FUN_0017b138. */


void FUN_0017ae34(void)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int unaff_r6;
  int in_r12;
  
  FUN_0017b138();
  temp_v0 = (&LAB_0017aef4)[unaff_r6];
  FUN_0017addc();
  if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0017ae68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x17ad18) + 0x17ad18U) & 0xfffffffc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0017b03c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x17ad18) + 0x17ad18U) & 0xfffffffc))();
  return;
}
