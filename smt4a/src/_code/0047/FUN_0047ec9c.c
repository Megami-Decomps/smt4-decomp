/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0047ec9c` (_code @ 0x47ec9c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_0063e4a0; /* 0x63e4a0 */

/* Supplied declaration required: FUN_001787a8. */
extern int FUN_00180008(unsigned int);


unsigned char FUN_0047ec9c(void)

{
/* irregular: irregular input(s): in_lr, in_r3; 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int in_r3;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v0 = FUN_00180008(1);
  if (temp_v0 == 0) {
    puVar1 = &DAT_0063e4a0;
    FUN_001787a8(&DAT_0063e4a0,0x6000001,0xffffffff,in_r3,unaff_r4,in_lr);
    return puVar1 != (unsigned char *)0x0;
  }
  return 1;
}
