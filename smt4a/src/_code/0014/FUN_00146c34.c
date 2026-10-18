/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00146c34` (_code @ 0x146c34, 0x24 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_005c1be8; /* 0x5c1be8 */

/* Supplied declaration required: FUN_00146a74. */
/* Supplied declaration required: FUN_00146c58. */
/* Supplied declaration required: FUN_00146c6c. */
/* Supplied declaration required: FUN_00146cbc. */
/* Supplied declaration required: FUN_0017fc74. */
/* Supplied declaration required: FUN_002e3140. */
extern unsigned int func_0x001623b4(unsigned int *, unsigned int, unsigned int);


void FUN_00146c34(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1 [2];
  
  FUN_00146a74();
  FUN_00146cbc();
  FUN_00146c6c();
  FUN_00146c58();
  FUN_0017fc74();
  temp_v0 = func_0x001623b4(temp_v1,0xffff8001,0x14);
  if ((temp_v0 & 0x80000000) != 0) {
    FUN_002e3140();
  }
  DAT_005c1be8 = temp_v1[0];
                    /* WARNING: Treating indirect jump as return */
  return;
}
