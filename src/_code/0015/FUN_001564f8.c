/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001564f8` (_code @ 0x1564f8, 0x9c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002c3a24. */
/* Supplied declaration required: FUN_002c3aa8. */


void FUN_001564f8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  short temp_v1;
  int temp_v2;
  
  if (*(int *)(param_2 + 4) == 0) {
    *(unsigned char *)(param_2 + 0x11) = 3;
    return;
  }
  *(unsigned int *)(param_2 + 0x14) = 0;
  *(unsigned char *)(param_2 + 0x11) = 1;
  FUN_002c3aa8(param_1 + 0x70);
  temp_v2 = *(int *)(param_1 + 0x30);
  if (temp_v2 == 0) {
    *(int *)(param_1 + 0x30) = param_2;
  }
  else {
    for (temp_v0 = *(int *)(temp_v2 + 0x14); temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 0x14)) {
      temp_v2 = temp_v0;
    }
    *(int *)(temp_v2 + 0x14) = param_2;
  }
  temp_v1 = *(short *)(param_1 + 6);
  if (temp_v1 == 0) {
    temp_v1 = 1;
    *(unsigned short *)(param_1 + 6) = 1;
  }
  *(short *)(param_2 + 0x12) = temp_v1;
  *(short *)(param_1 + 6) = *(short *)(param_1 + 6) + 1;
  FUN_002c3a24(param_1 + 0x70);
  return;
}
