/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00430f5c` (_code @ 0x430f5c, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0016e800(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

/* Supplied declaration required: FUN_0016e800. */
extern int FUN_00189738(unsigned int *, unsigned int, unsigned int);


unsigned int FUN_00430f5c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = 0xffffffff;
  temp_v0 = FUN_00189738(temp_v1,4,0xb0000);
  if (temp_v0 < 0) {
    FUN_0016e800(temp_v0,0x430f84);
  }
  return temp_v1[0] >> 0x18;
}

} /* extern "C" */
