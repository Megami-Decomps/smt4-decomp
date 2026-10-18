/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e8f34` (_code @ 0x1e8f34, 0x10a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char LAB_001e8ff4; /* 0x1e8ff4 */

/* Supplied declaration required: FUN_001e8edc. */
/* Supplied declaration required: FUN_001e9238. */


void FUN_001e8f34(void)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int unaff_r6;
  int in_r12;
  
  FUN_001e9238();
  temp_v0 = (&LAB_001e8ff4)[unaff_r6];
  FUN_001e8edc();
  if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001e8f68. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x1e8e18) + 0x1e8e18U) & 0xfffffffc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001e913c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x1e8e18) + 0x1e8e18U) & 0xfffffffc))();
  return;
}
