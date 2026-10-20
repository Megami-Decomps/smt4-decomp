/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016e234` (_code @ 0x16e234, 0x20c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e1dc(void);
int FUN_0016e538(void);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char LAB_0016e2f4; /* 0x16e2f4 */

/* Supplied declaration required: FUN_0016e1dc. */
/* Supplied declaration required: FUN_0016e538. */


void FUN_0016e234(void)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int unaff_r6;
  int in_r12;
  
  FUN_0016e538();
  temp_v0 = (&LAB_0016e2f4)[unaff_r6];
  FUN_0016e1dc();
  if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x0016e268. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x16e118) + 0x16e118U) & 0xfffffffc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x0016e43c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x16e118) + 0x16e118U) & 0xfffffffc))();
  return;
}

} /* extern "C" */
