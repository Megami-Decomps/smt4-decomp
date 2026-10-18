/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00295d28` (_code @ 0x295d28, 0x54 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_004e316c; /* 0x4e316c */
extern int DAT_004e3180; /* 0x4e3180 */

/* Supplied declaration required: FUN_002bda30. */
extern int FUN_002c564c(unsigned int);


unsigned int FUN_00295d28(unsigned int param_1)

{
/* irregular: irregular input(s): in_lr; 2 native warning(s); review required */
  int temp_v0;
  unsigned int unaff_r4;
  unsigned int in_lr;
  
  temp_v0 = FUN_002c564c(1);
  if (temp_v0 != 0) {
    return 0;
  }
  if ((int)param_1 >= 100000) {
    if ((param_1 - 100000 < 4) && (DAT_004e3180 != 0)) {
      temp_v0 = *(int *)(DAT_004e3180 + (param_1 - 100000) * 4 + 0x20);
      if (temp_v0 != 0) {
        FUN_002bda30(temp_v0,0,DAT_004e3180,0,unaff_r4,in_lr);
      }
      return 1;
    }
    return 0;
  }
  if ((param_1 < 8) && (DAT_004e316c != 0)) {
    temp_v0 = *(int *)(DAT_004e316c + param_1 * 4 + 0x20);
    if (temp_v0 != 0) {
      FUN_002bda30(temp_v0,0,DAT_004e316c,0,unaff_r4,in_lr);
    }
    return 1;
  }
  return 0;
}
