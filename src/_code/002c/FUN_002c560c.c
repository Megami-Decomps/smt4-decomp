/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c560c` (_code @ 0x2c560c, 0x10 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_001008c8(void);
extern unsigned int *FUN_002c6644(void);
/* Supplied declaration required: FUN_002c66f2. */


int FUN_002c560c(void)

{
/* irregular: irregular input(s): in_stack_00000000, in_stack_00000004; 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int unaff_r6;
  int unaff_r7;
  int temp_v1;
  unsigned char temp_v2;
  short in_stack_00000000;
  short *in_stack_00000004;
  
  temp_v1 = unaff_r7 << 3;
  FUN_002c66f2(2);
  while( 1 ) {
    temp_v2 = temp_v1 == 0;
    temp_v1 = temp_v1 - 1;
    if (temp_v2) {
      return -2;
    }
    temp_v0 = FUN_001008c8();
    unaff_r6 = unaff_r6 + 1;
    if (temp_v0 == -1) break;
    if (temp_v0 != -2) {
      if (in_stack_00000004 != (short *)0x0) {
        *in_stack_00000004 = in_stack_00000000;
      }
      temp_v1 = 0;
      if (in_stack_00000000 != 0) {
        temp_v1 = unaff_r6;
      }
      return temp_v1;
    }
  }
  puVar2 = (unsigned int *)FUN_002c6644();
  *puVar2 = 4;
  return -1;
}
