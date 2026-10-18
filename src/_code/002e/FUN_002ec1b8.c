/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ec1b8` (_code @ 0x2ec1b8, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_5: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_5_stack;

/* Supplied declaration required: FUN_00210c0c. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */


void FUN_002ec1b8(int param_1,int param_2,int param_3,unsigned int param_4,int param_5)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  
  FUN_002bef14();
  FUN_002bf710();
  param_2 = *(int *)(param_1 + 4) + param_2;
  param_3 = *(int *)(param_1 + 8) + param_3;
  if (param_5 != 0) {
    FUN_002bf558(2,0x39,8,param_2,param_3,0x6f);
  }
  else {
    FUN_002bf558(2,0x39,7,param_2,param_3,0x6f);
  }
  FUN_002be4dc(0xb4ff8200);
  temp_v0 = FUN_002bf6d0(0x39,0x53);
  FUN_00210c0c(param_4,*(short *)(temp_v0 + 8) + param_2,*(short *)(temp_v0 + 10) + param_3,0x71);
  FUN_002bef14();
  FUN_002bf710();
  return;
}
