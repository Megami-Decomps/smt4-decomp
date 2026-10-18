/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d4f88` (_code @ 0x2d4f88, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00435d30; /* 0x435d30 */

extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002d4f88(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002c0ac8();
  temp_v0 = DAT_00435d30;
  if (DAT_00435d30 != 0) {
    if (*(int *)(DAT_00435d30 + 4) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v0 + 4) = 0;
    }
    FUN_002c4360(DAT_00435d30);
    DAT_00435d30 = 0;
  }
  FUN_002c45b8(*(unsigned int *)(temp_v1 + 8),0);
  return;
}
