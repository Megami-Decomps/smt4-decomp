/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf70c` (_code @ 0x3bf70c, 0x104 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00314c38(int, int, int, int, int, int);
int FUN_003fd63c(...);

/* stack frame of param_1: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00314c38. */
/* Supplied declaration required: FUN_003fd63c. */


void FUN_003bf70c(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(char *)(temp_v0 + 0x9b4) != '\0') {
    if (*(int *)(temp_v0 + 0x9dc) == 0) {
      FUN_00314c38(0x4e,8,0,0,0,0);
    }
    if (*(int *)(temp_v0 + 0x9dc) == 4) {
      FUN_00314c38(0xbf,7,0,0,0,0);
    }
    if (*(int *)(temp_v0 + 0x9dc) == 8) {
      FUN_00314c38(0xcd,3,0,0,0,0);
    }
    if (*(int *)(temp_v0 + 0x9dc) == 0xe) {
      FUN_00314c38(0xda,5,0,0,0,0);
    }
    if (*(int *)(temp_v0 + 0x9dc) == 0x12) {
      FUN_00314c38(0xed,4,0,0,0,0);
    }
    FUN_003fd63c(*(unsigned int *)(temp_v0 + 0x9d8),1);
    return;
  }
  return;
}

} /* extern "C" */
