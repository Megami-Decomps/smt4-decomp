/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0048cce0` (_code @ 0x48cce0, 0x60 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e220(int, int, int, int, int, int);
int FUN_00184758(int, int, int);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_0014e220. */
/* Supplied declaration required: FUN_00184758. */


void FUN_0048cce0(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  *(unsigned char *)(param_2 + 0x369) = 1;
  *(unsigned char *)(param_2 + 0x368) = 0;
  *(unsigned char *)(param_2 + 0x36a) = 0;
  FUN_0014e220(param_1 + 0x136c,0x13,0x111a,0x1c,param_1 + 0xc20,0x15);
  FUN_00184758(param_1 + 0x136c,5,0);
  return;
}

} /* extern "C" */
