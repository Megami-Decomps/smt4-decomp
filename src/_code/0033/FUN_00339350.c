/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00339350` (_code @ 0x339350, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_003393f4; /* 0x3393f4 */

/* Supplied declaration required: FUN_002940ac. */
/* Supplied declaration required: FUN_0029411c. */
/* Supplied declaration required: FUN_002a5a48. */
/* Supplied declaration required: FUN_002ae074. */
/* Supplied declaration required: FUN_00335414. */


void FUN_00339350(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(int *)(param_1 + 0x4394) != 0) {
    FUN_002940ac();
    if (*(int *)(param_1 + 0x4398) != 0) {
      FUN_002ae074(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),&LAB_003393f4,&temp_v0);
    }
    else {
      temp_v0 = 0x40c00000;
      temp_v1 = 0;
      temp_v2 = 0;
    }
    FUN_0029411c(*(unsigned int *)(param_1 + 0x4394),&temp_v0);
    FUN_00335414(*(unsigned int *)(param_1 + 0x4394));
    FUN_002a5a48(*(unsigned int *)(param_1 + 0x4394),0x19);
  }
  return;
}
