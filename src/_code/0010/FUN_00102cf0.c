/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00102cf0` (_code @ 0x102cf0, 0x94 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern int DAT_0043e2ac; /* 0x43e2ac */
extern unsigned int DAT_0043e2b0; /* 0x43e2b0 */
extern unsigned int DAT_0043e2b4; /* 0x43e2b4 */

/* Supplied declaration required: FUN_002c54f0. */


void FUN_00102cf0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (DAT_0043e2ac == 0) {
    temp_v0 = 0x100;
    FUN_002c54f0(0x100,0x100,0,0x24db0,1);
    temp_v1 = 0x100;
    DAT_0043e2ac = temp_v0;
    FUN_002c54f0(0x100,0x100,0,0x24d28,1);
    temp_v2 = 0x100;
    DAT_0043e2b0 = temp_v1;
    FUN_002c54f0(0x100,0x100,0,0xc,1);
    DAT_0043e2b4 = temp_v2;
  }
  return;
}
