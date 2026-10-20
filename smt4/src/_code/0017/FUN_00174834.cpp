/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00174834` (_code @ 0x174834, 0x20c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001747dc(void);
int FUN_00174b38(void);

typedef int romwright_code(...);
/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
} void_stack;

extern unsigned char LAB_001748f4; /* 0x1748f4 */

/* Supplied declaration required: FUN_001747dc. */
/* Supplied declaration required: FUN_00174b38. */


void FUN_00174834(void)

{
/* irregular: irregular input(s): in_r12; 7 native warning(s); review required */
  unsigned char temp_v0;
  int unaff_r6;
  int in_r12;
  
  FUN_00174b38();
  temp_v0 = (&LAB_001748f4)[unaff_r6];
  FUN_001747dc();
  if ((temp_v0 & 1) == 0) {
                    /* WARNING: Could not recover jumptable at 0x00174868. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x174718) + 0x174718U) & 0xfffffffc))();
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00174a3c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(romwright_code *)((*(int *)(in_r12 * 4 + 0x174718) + 0x174718U) & 0xfffffffc))();
  return;
}

} /* extern "C" */
