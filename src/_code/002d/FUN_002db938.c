/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002db938` (_code @ 0x2db938, 0x30 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00295208. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */


void FUN_002db938(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  if (*(int *)(temp_v0 + 0x34) != 0) {
    FUN_00295208();
    *(unsigned int *)(temp_v0 + 0x34) = 0;
  }
  FUN_002c4360(temp_v0);
  return;
}
