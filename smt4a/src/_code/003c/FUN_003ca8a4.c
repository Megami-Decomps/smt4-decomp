/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ca8a4` (_code @ 0x3ca8a4, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057f590; /* 0x57f590 */

/* Supplied declaration required: FUN_0014e188. */


unsigned int FUN_003ca8a4(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_0057f590;
  *(unsigned char *)(DAT_0057f590 + 400) = 2;
  *(unsigned char *)(temp_v0 + 0x191) = 0;
  *(unsigned char *)(temp_v0 + 0x192) = 0;
  FUN_0014e188(temp_v0 + 0x1820,0x13,0xffffffff,temp_v0 + 0x194,0xb);
  return 1;
}
