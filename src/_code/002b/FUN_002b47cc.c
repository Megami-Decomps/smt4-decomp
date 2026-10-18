/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b47cc` (_code @ 0x2b47cc, 0x4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();

void FUN_002b47cc(void)

{
/* irregular: irregular input(s): in_stack_00000008, in_stack_0000000c; 8 native warning(s); review required */
  int unaff_r4;
  int unaff_r6;
  unsigned int unaff_r7;
  int unaff_r8;
  int unaff_r9;
  int unaff_r11;
  unsigned int *in_stack_00000008;
  char in_stack_0000000c;
  
  (**(romwright_code **)(**(int **)(unaff_r6 + 0x14) + 0xc))();
  *(int *)(unaff_r6 + 0x1c) = unaff_r8 + unaff_r9 * 4;
  *(int *)(unaff_r6 + 0x18) = unaff_r8;
  *(unsigned int *)(unaff_r6 + 0x20) = (*(unsigned int *)(unaff_r6 + 0x20) & 0xc0000000) | unaff_r7;
  if (*(int **)(unaff_r6 + 0x1c) != (int *)0x0) {
    **(int **)(unaff_r6 + 0x1c) = unaff_r4;
  }
  *(int *)(unaff_r6 + 0x1c) = *(int *)(unaff_r6 + 0x1c) + 4;
  if (unaff_r11 != 0) {
    *(unsigned int *)(unaff_r4 + 0xc) = *(unsigned int *)(unaff_r6 + 0x10);
  }
  if ((in_stack_00000008 != (unsigned int *)0x0) && (in_stack_0000000c != '\0')) {
    (**(romwright_code **)*in_stack_00000008)(in_stack_00000008);
    (**(romwright_code **)(*(int *)in_stack_00000008[1] + 0xc))((int *)in_stack_00000008[1],in_stack_00000008)
    ;
  }
  return;
}
