/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334a54` (_code @ 0x334a54, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00570280; /* 0x570280 */

extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019a7f4. */
/* Supplied declaration required: FUN_001b2d54. */


void FUN_00334a54(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_00164a9c();
  if (*(int *)(temp_v0 + 0xc) != 0) {
    FUN_0019a7f4(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
    FUN_001b2d54(DAT_00570280,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
    *(unsigned int *)(temp_v0 + 0xc) = 0;
  }
  if (*(int *)(temp_v0 + 0x84) != -1) {
    FUN_0019a7f4(*(unsigned int *)(temp_v0 + 0x10));
    FUN_001b2d54(DAT_00570280,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
    *(unsigned int *)(temp_v0 + 0x84) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x80) = 0;
  }
  FUN_0019a5a0(temp_v0);
  return;
}
