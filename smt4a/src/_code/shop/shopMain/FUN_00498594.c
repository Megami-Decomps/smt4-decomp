/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00498594` (_code @ 0x498594, 0x118 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_00184528. */
extern int FUN_00284140(int);
/* Supplied declaration required: FUN_004954e8. */
/* Supplied declaration required: FUN_00496a0c. */
/* Supplied declaration required: FUN_0049706c. */
/* Supplied declaration required: FUN_00498994. */
/* Supplied declaration required: FUN_004d0434. */
/* Supplied declaration required: FUN_004d044c. */
/* Supplied declaration required: FUN_004d0458. */
extern int FUN_004d0464(void);
extern int FUN_004d0494(void);
extern int FUN_004d04f4(void);
extern int FUN_004d0554(void);


void FUN_00498594(int param_1)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  FUN_004954e8();
  FUN_00498994(param_1);
  temp_v0 = FUN_004d0464();
  if ((temp_v0 != 0) || (temp_v0 = FUN_00284140((int)*(short *)(param_1 + 0x1602c)), temp_v0 == 6)) {
    *(unsigned int *)(param_1 + 0xb44) = *(unsigned int *)(*(int *)(param_1 + 0xb44) * 8 + 0x588f78);
    FUN_00496a0c(param_1,1);
    FUN_004d0458();
    return;
  }
  temp_v0 = FUN_004d0494();
  if ((temp_v0 == 0) && (temp_v0 = FUN_00284140((int)*(short *)(param_1 + 0x1602e)), temp_v0 != 6)) {
    temp_v0 = FUN_004d0554();
    if (temp_v0 != 0) {
      FUN_00184528(param_1 + 0x3cc,1);
      FUN_004d0434();
      *(unsigned int *)(param_1 + 0x10) = *(unsigned int *)(param_1 + 4);
      *(unsigned int *)(param_1 + 4) = 0x13;
      *(unsigned int *)(param_1 + 8) = 0;
    }
    else {
      temp_v0 = FUN_004d04f4();
      if (temp_v0 != 0) {
        FUN_004d044c();
        FUN_0049706c(param_1);
        return;
      }
    }
    return;
  }
  *(unsigned int *)(param_1 + 0xb44) = *(unsigned int *)(*(int *)(param_1 + 0xb44) * 8 + 0x588f7c);
  FUN_00496a0c(param_1,1);
  FUN_004d0458();
  return;
}
