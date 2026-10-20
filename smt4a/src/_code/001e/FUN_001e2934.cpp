/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e2934` (_code @ 0x1e2934, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001e28dc(void);
int FUN_001e2c38(void);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char LAB_001e29f4; /* 0x1e29f4 */

/* Supplied declaration required: FUN_001e28dc. */
/* Supplied declaration required: FUN_001e2c38. */


void FUN_001e2934(void)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int unaff_r6;
  int in_r12;
  
  FUN_001e2c38();
  temp_v0 = (&LAB_001e29f4)[unaff_r6];
  FUN_001e28dc();
  if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001e2968. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x1e2818) + 0x1e2818U) & 0xfffffffc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001e2b3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x1e2818) + 0x1e2818U) & 0xfffffffc))();
  return;
}

} /* extern "C" */
