/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002db8c4` (_code @ 0x2db8c4, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_00295208. */
/* Supplied declaration required: FUN_002aeb2c. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */


void FUN_002db8c4(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002c0ac8();
  if (*(int *)(temp_v0 + 0x48) != 0) {
    FUN_00295208();
    *(unsigned int *)(temp_v0 + 0x48) = 0;
  }
  else if (*(int *)(temp_v0 + 0xc) != 1) {
    FUN_002aeb2c(*(unsigned int *)(temp_v0 + 0x3c),*(unsigned int *)(temp_v0 + 0x40));
    if (-1 < *(int *)(temp_v0 + 0x44)) {
      FUN_002aeb2c(*(unsigned int *)(temp_v0 + 0x3c));
    }
    if (*(char *)(temp_v0 + 100) != '\0') {
      FUN_002aeb2c(0x32,0);
    }
  }
  FUN_002c4360(temp_v0);
  return;
}
