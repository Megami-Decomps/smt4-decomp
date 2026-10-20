/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016cdd8` (_code @ 0x16cdd8, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned int DAT_0062d2ec; /* 0x62d2ec */
extern unsigned int DAT_0062d2fc; /* 0x62d2fc */

/* Supplied declaration required: FUN_0016e800. */
extern int FUN_0016f9bc(unsigned int *, unsigned int);
extern int FUN_0018a8ec(unsigned int);


void FUN_0016cdd8(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  DAT_0062d2fc = param_1;
  temp_v0 = FUN_0016f9bc(&DAT_0062d2ec,0x209);
  if (temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x16cdfc);
  }
  temp_v0 = FUN_0018a8ec(0x209);
  if (temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x16ce10);
    return;
  }
  return;
}

} /* extern "C" */
