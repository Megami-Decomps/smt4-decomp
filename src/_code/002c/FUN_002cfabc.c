/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfabc` (_code @ 0x2cfabc, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002a6410. */
/* Supplied declaration required: FUN_002aeb2c. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */


void FUN_002cfabc(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  if (*(int *)(temp_v0 + 0xc) != 0) {
    FUN_002aeb2c(*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
    FUN_002a6410(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x14));
    *(unsigned int *)(temp_v0 + 0xc) = 0;
  }
  if (*(int *)(temp_v0 + 0x84) != -1) {
    FUN_002aeb2c(*(unsigned int *)(temp_v0 + 0x10));
    FUN_002a6410(DAT_00433158,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 0x84));
    *(unsigned int *)(temp_v0 + 0x84) = 0xffffffff;
    *(unsigned int *)(temp_v0 + 0x80) = 0;
  }
  FUN_002c4360(temp_v0);
  return;
}
