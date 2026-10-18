/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001dc8c8` (_code @ 0x1dc8c8, 0x88 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int DAT_00433260; /* 0x433260 */

/* Supplied declaration required: FUN_00262c64. */
extern int FUN_002bf41c(unsigned int);
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002cd824. */
/* Supplied declaration required: FUN_00310b24. */
/* Supplied declaration required: FUN_0032ff4c. */


void FUN_001dc8c8(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002c0ac8();
  temp_v1 = FUN_002bf41c(*(unsigned int *)(temp_v0 + 0x528));
  if (temp_v1 != 0) {
    FUN_002c45b8(*(unsigned int *)(temp_v0 + 0x528),0);
  }
  temp_v1 = FUN_002bf41c(*(unsigned int *)(temp_v0 + 0x52c));
  if (temp_v1 != 0) {
    FUN_002c45b8(*(unsigned int *)(temp_v0 + 0x52c),0);
  }
  FUN_00262c64();
  FUN_002cd824();
  if (*(char *)(temp_v0 + 0x530) == '\0') {
    FUN_00310b24();
  }
  FUN_002c4360(temp_v0);
  DAT_00433260 = 0;
  FUN_0032ff4c();
  return;
}
