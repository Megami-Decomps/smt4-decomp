/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ef534` (_code @ 0x1ef534, 0x20c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ef4dc(void);
int FUN_001ef838(void);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char LAB_001ef5f4; /* 0x1ef5f4 */

/* Supplied declaration required: FUN_001ef4dc. */
/* Supplied declaration required: FUN_001ef838. */


void FUN_001ef534(void)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int unaff_r6;
  int in_r12;
  
  FUN_001ef838();
  temp_v0 = (&LAB_001ef5f4)[unaff_r6];
  FUN_001ef4dc();
  if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x001ef568. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x1ef418) + 0x1ef418U) & 0xfffffffc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x001ef73c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x1ef418) + 0x1ef418U) & 0xfffffffc))();
  return;
}

} /* extern "C" */
