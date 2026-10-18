/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0049c7a8` (_code @ 0x49c7a8, 0xa0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

/* Supplied declaration required: FUN_00192608. */
extern int FUN_0019271c(void);
/* Supplied declaration required: FUN_0048026c. */
extern int FUN_00480a00(void);


int FUN_0049c7a8(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v1 = 0;
  temp_v0 = FUN_0019271c();
  if (!((temp_v0 == 4 || temp_v0 == 5) || temp_v0 == 6)) {
    if (temp_v0 != 7) {
      FUN_00192608();
      if (param_1 != 0) {
        temp_v1 = FUN_00480a00();
      }
    }
    else {
      FUN_00192608();
      temp_v1 = (int)*(short *)(param_1 + 0x38);
    }
  }
  else {
    temp_v0 = param_1;
    FUN_00192608();
    temp_v2 = 0;
    temp_v3 = 0;
    temp_v4 = 0;
    temp_v5 = 0;
    FUN_0048026c(param_1,&temp_v2);
    temp_v1 = (int)*(short *)(temp_v0 + 0x36) + (int)(short)temp_v2;
  }
  return temp_v1;
}
