/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039493c` (_code @ 0x39493c, 0x28 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004e21b8; /* 0x4e21b8 */

/* Supplied declaration required: FUN_00132cc8. */
extern int FUN_002c583c(unsigned int);


unsigned char FUN_0039493c(void)

{
/* irregular: irregular input(s): in_lr, in_r3; 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int in_r3;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v0 = FUN_002c583c(1);
  if (temp_v0 == 0) {
    puVar1 = &DAT_004e21b8;
    FUN_00132cc8(&DAT_004e21b8,0x6000001,0xffffffff,in_r3,unaff_r4,in_lr);
    return puVar1 != (unsigned char *)0x0;
  }
  return 1;
}
