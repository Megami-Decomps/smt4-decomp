/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00473b6c` (_code @ 0x473b6c, 0xb4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_00195fc8. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_002e6dd4. */
extern unsigned int FUN_00426e94(void);
/* Supplied declaration required: FUN_004285cc. */


void FUN_00473b6c(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  
  if (*(int *)(param_1 + 0x5b0) != 0) {
    FUN_004285cc();
    FUN_002e3328();
    *(unsigned int *)(param_1 + 0x5b0) = 0;
  }
  if (*(int *)(param_1 + 0x5b4) != 0) {
    FUN_0019a5a0();
    *(int *)(param_1 + 0x5b4) = 0;
  }
  temp_v0 = 0x10000;
  FUN_001630d4(0x10000,0x100,0,0x20000);
  *(unsigned int *)(param_1 + 0x5b4) = temp_v0;
  FUN_002e6dd4();
  if (*(int *)(param_1 + 0x5b4) != 0) {
    temp_v1 = 0x10;
    FUN_0016007c();
    temp_v0 = 0;
    if (temp_v1 != 0) {
      temp_v0 = FUN_00426e94();
    }
    *(unsigned int *)(param_1 + 0x5b0) = temp_v0;
    return;
  }
  FUN_00195fc8();
  return;
}
