/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a8460` (_code @ 0x3a8460, 0xc8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_0019dfbc(unsigned int);
extern int FUN_002337a0(int);
/* Supplied declaration required: FUN_002356d4. */
extern int FUN_00297674(void);
/* Supplied declaration required: FUN_0029c6dc. */
/* Supplied declaration required: FUN_0029d100. */
/* Supplied declaration required: FUN_002a0f68. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002e30dc. */


void FUN_003a8460(int param_1)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0x5a0));
  if (temp_v0 != 2) {
    return;
  }
  temp_v0 = FUN_00297674();
  if (temp_v0 == 0) {
    temp_v0 = FUN_002337a0(param_1 + 0x20);
    temp_v1 = (unsigned int)*(unsigned short *)(param_1 + temp_v0 * 0x20 + 0x5ac);
    FUN_0029d100(temp_v1,*(unsigned char *)(param_1 + 0x5a5),0);
    FUN_0029c6dc(-temp_v1,0);
    FUN_002a0f68(1);
    *(unsigned int *)(param_1 + 0x14) = 4;
    *(unsigned int *)(param_1 + 0x18) = 0;
    FUN_002e30dc();
    FUN_002b8b78(0x2d);
    return;
  }
  FUN_002356d4(0);
  FUN_002a0f68(0);
  *(unsigned int *)(param_1 + 0x14) = 2;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_002b8b78(0x2d);
  return;
}
