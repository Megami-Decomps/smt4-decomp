/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004c8bb8` (_code @ 0x4c8bb8, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int FUN_00200a68(void);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: FUN_00200a68. */


void FUN_004c8bb8(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  btlGetMainState();
  temp_v0 = 0;
  FUN_00200a68();
  *(unsigned short *)(temp_v0 + 6) = *(unsigned short *)(temp_v0 + 6) | 1;
  return;
}

} /* extern "C" */
