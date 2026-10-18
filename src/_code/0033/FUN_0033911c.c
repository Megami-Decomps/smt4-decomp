/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033911c` (_code @ 0x33911c, 0x9c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_003391c0; /* 0x3391c0 */

/* Supplied declaration required: FUN_00293e08. */
/* Supplied declaration required: FUN_00293e78. */
/* Supplied declaration required: FUN_002a5704. */
/* Supplied declaration required: FUN_002adde8. */
/* Supplied declaration required: FUN_003351e0. */


void FUN_0033911c(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  if (*(int *)(param_1 + 0x4394) != 0) {
    FUN_00293e08();
    if (*(int *)(param_1 + 0x4398) != 0) {
      FUN_002adde8(*(unsigned int *)(*(int *)(param_1 + 0x4398) + 8),&LAB_003391c0,&temp_v0);
    }
    else {
      temp_v0 = 0x40c00000;
      temp_v1 = 0;
      temp_v2 = 0;
    }
    FUN_00293e78(*(unsigned int *)(param_1 + 0x4394),&temp_v0);
    FUN_003351e0(*(unsigned int *)(param_1 + 0x4394));
    FUN_002a5704(*(unsigned int *)(param_1 + 0x4394),0x19);
  }
  return;
}
