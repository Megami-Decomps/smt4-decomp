/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00394720` (_code @ 0x394720, 0x28 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_004e21b8; /* 0x4e21b8 */

/* Supplied declaration required: FUN_00132da4. */
extern int FUN_002c564c(unsigned int);


unsigned char FUN_00394720(void)

{
/* irregular: irregular input(s): in_lr, in_r3; 1 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned int in_r3;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 == 0) {
    puVar1 = &DAT_004e21b8;
    FUN_00132da4(&DAT_004e21b8,0x6000001,0xffffffff,in_r3,unaff_r4,in_lr);
    return puVar1 != (unsigned char *)0x0;
  }
  return 1;
}
