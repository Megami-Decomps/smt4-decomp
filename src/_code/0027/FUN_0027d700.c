/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d700` (_code @ 0x27d700, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int DAT_00448c58; /* 0x448c58 */
extern int DAT_0049f91c; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */

/* Supplied declaration required: FUN_001e4190. */
extern int FUN_002c0ba8(unsigned int);


void FUN_0027d700(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((((DAT_0049f91c == 0x12) && (DAT_0049f920 == 4 || DAT_0049f920 == 5)) &&
      (temp_v0 = FUN_002c0ba8(0xd2), temp_v0 != 0)) && (temp_v0 = FUN_002c0ba8(0xd4), temp_v0 == 0)) {
    FUN_001e4190(6,0);
    return;
  }
  FUN_001e4190(*(unsigned int *)(DAT_00448c58 + param_1 * 8 + 0x784),0);
  return;
}
