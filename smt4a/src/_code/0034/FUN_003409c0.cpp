/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003409c0` (_code @ 0x3409c0, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00180008(int);
int FUN_0019e290(void);
int FUN_002e3328(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00180008. */
/* Supplied declaration required: FUN_0019e290. */
/* Supplied declaration required: FUN_002e3328. */
extern int FUN_004d08d0(int);


void FUN_003409c0(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = *(int *)(param_1 + 4);
  *(unsigned char *)(temp_v1 + 4) = 1;
  if (*(int *)(temp_v1 + 8) != 0) {
    FUN_0019e290();
    if (*(int *)(temp_v1 + 8) != 0) {
      temp_v0 = FUN_004d08d0(*(int *)(temp_v1 + 8) + 0x110);
      FUN_002e3328(temp_v0 - 0x110);
    }
    *(unsigned int *)(temp_v1 + 8) = 0;
  }
  FUN_00180008(0);
  return;
}

} /* extern "C" */
