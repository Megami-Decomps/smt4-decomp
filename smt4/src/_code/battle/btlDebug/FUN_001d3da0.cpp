/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d3da0` (_code @ 0x1d3da0, 0x30 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003c64ec(int, unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned char DAT_00434388; /* 0x434388 */

extern unsigned int FUN_002c08f0(void);
/* Supplied declaration required: FUN_003c64ec. */


void FUN_001d3da0(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  temp_v0 = FUN_002c08f0();
  if ((*(int *)((unsigned char *)&DAT_00434388 + 0x8)) != 0) {
    FUN_003c64ec((*(int *)((unsigned char *)&DAT_00434388 + 0x8)),temp_v0);
    return;
  }
  return;
}

} /* extern "C" */
