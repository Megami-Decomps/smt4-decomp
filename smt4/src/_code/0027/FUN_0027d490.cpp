/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0027d490` (_code @ 0x27d490, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001e4284(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int g_mapTable; /* 0x448c58 */
extern int g_gameState; /* 0x49f91c */
extern int DAT_0049f920; /* 0x49f920 */

/* Supplied declaration required: FUN_001e4284. */
extern int FUN_002c09d0(unsigned int);


void FUN_0027d490(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if ((((g_gameState == 0x12) && (DAT_0049f920 == 4 || DAT_0049f920 == 5)) &&
      (temp_v0 = FUN_002c09d0(0xd2), temp_v0 != 0)) && (temp_v0 = FUN_002c09d0(0xd4), temp_v0 == 0)) {
    FUN_001e4284(6,0);
    return;
  }
  FUN_001e4284(*(unsigned int *)(g_mapTable + param_1 * 8 + 0x784),0);
  return;
}

} /* extern "C" */
