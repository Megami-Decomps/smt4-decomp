/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a1d54` (_code @ 0x4a1d54, 0x58 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184528(int);
int FUN_0019de98(int, unsigned int);
int FUN_0022e774(void);
int FUN_003343f0(int);
int FUN_00388758(int);
int FUN_004d0434(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_00184528. */
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_003343f0. */
/* Supplied declaration required: FUN_00388758. */
/* Supplied declaration required: FUN_004d0434. */


void FUN_004a1d54(int param_1)

{
/* irregular: 6 native warning(s); review required */
  if (*(char *)(param_1 + 0x860) == '\0') {
    FUN_00388758(1);
  }
  FUN_0019de98(0,0xf4f4f4ff);
  FUN_0022e774();
  *(unsigned short *)(param_1 + 0xa874) = 9;
  FUN_00184528(param_1 + 0xdc);
  FUN_003343f0(1);
  *(unsigned int *)(param_1 + 0x14) = 0xd;
  *(unsigned int *)(param_1 + 0x18) = 0;
  FUN_004d0434();
  return;
}

} /* extern "C" */
