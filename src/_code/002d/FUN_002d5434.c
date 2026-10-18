/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002d5434` (_code @ 0x2d5434, 0x50 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_00263e60(int);
/* Supplied declaration required: FUN_002a7b7c. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c583c. */


void FUN_002d5434(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 4);
  *(unsigned char *)(temp_v1 + 4) = 1;
  if (*(int *)(temp_v1 + 8) != 0) {
    FUN_002a7b7c();
    if (*(int *)(temp_v1 + 8) != 0) {
      temp_v0 = FUN_00263e60(*(int *)(temp_v1 + 8) + 0x110);
      FUN_002b2520(temp_v0 - 0x110);
    }
    *(unsigned int *)(temp_v1 + 8) = 0;
  }
  FUN_002c583c(0);
  return;
}
