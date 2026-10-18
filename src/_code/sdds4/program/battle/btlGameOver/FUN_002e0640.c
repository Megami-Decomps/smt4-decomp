/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e0640` (_code @ 0x2e0640, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_00435d60; /* 0x435d60 */

/* Supplied declaration required: FUN_002a755c. */
extern int FUN_002c0ac8(void);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */


void FUN_002e0640(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = FUN_002c0ac8();
  temp_v0 = DAT_00435d60;
  if (DAT_00435d60 != 0) {
    if (*(int *)(DAT_00435d60 + 0x10) != 0) {
      FUN_002a755c();
      *(unsigned int *)(temp_v0 + 0x10) = 0;
    }
    if (*(int *)(temp_v0 + 0xc) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v0 + 0xc) = 0;
    }
    if (*(int *)(temp_v0 + 0x14) != 0) {
      FUN_002c4360();
      *(unsigned int *)(temp_v0 + 0x14) = 0;
    }
    FUN_002c4360(DAT_00435d60);
    DAT_00435d60 = 0;
  }
  FUN_002c45b8(*(unsigned int *)(temp_v1 + 0x2c),0);
  return;
}
