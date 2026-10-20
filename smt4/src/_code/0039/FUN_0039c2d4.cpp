/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0039c2d4` (_code @ 0x39c2d4, 0x6c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002bd8e8(int, int, int);
int FUN_002beed0(int, int, int, int, int, int);

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_002bd8e8. */
/* Supplied declaration required: FUN_002beed0. */


void FUN_0039c2d4(int param_1)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned char *)(param_1 + 0x9ec) = 1;
  *(unsigned int *)(param_1 + 0x9f0) = 0;
  *(unsigned int *)(param_1 + 0x9f4) = 0;
  *(unsigned char *)(param_1 + 0x9ed) = 0;
  *(unsigned char *)(param_1 + 0x9ee) = 0;
  FUN_002beed0(param_1 + 0x9f8,0x1c,0x1121,0x1d,param_1 + 0x5f8,0x15);
  FUN_002bd8e8(param_1 + 0x9f8,5,0);
  return;
}

} /* extern "C" */
