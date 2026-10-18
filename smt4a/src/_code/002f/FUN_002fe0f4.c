/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fe0f4` (_code @ 0x2fe0f4, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Supplied declaration required: FUN_002ea6bc. */
/* Supplied declaration required: FUN_002ea6cc. */
extern unsigned int FUN_002ec674(int);


void FUN_002fe0f4(int param_1,int param_2,int param_3,int param_4,unsigned int param_5)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = *(int *)(param_1 + 0x1c) - *(int *)(param_1 + 0x18);
  for (temp_v1 = 0; temp_v1 < param_4; temp_v1 = temp_v1 + 1) {
    if ((*(int *)(param_2 + temp_v1 * 4) != 0) && (*(int *)(param_3 + temp_v1 * 4) != 0)) {
      FUN_002ea6bc(param_5);
    }
  }
  if (temp_v2 != 0) {
    temp_v0 = FUN_002ec674(param_1 + 0xc);
    FUN_002ea6bc(param_5,temp_v0,temp_v2);
  }
  FUN_002ea6cc(param_5);
  return;
}
