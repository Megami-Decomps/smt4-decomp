/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017ad34` (_code @ 0x17ad34, 0x10a bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char LAB_0017adf4; /* 0x17adf4 */

/* Supplied declaration required: FUN_0017acdc. */
/* Supplied declaration required: FUN_0017b038. */


void FUN_0017ad34(void)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int unaff_r6;
  int in_r12;
  
  FUN_0017b038();
  temp_v0 = (&LAB_0017adf4)[unaff_r6];
  FUN_0017acdc();
  if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0017ad68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x17ac18) + 0x17ac18U) & 0xfffffffc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0017af3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x17ac18) + 0x17ac18U) & 0xfffffffc))();
  return;
}
