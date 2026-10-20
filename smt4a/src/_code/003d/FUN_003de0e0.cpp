/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003de0e0` (_code @ 0x3de0e0, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_00203d04(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_001632fc(void);
/* Supplied declaration required: FUN_00203d04. */


void FUN_003de0e0(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  param_1 = (unsigned int *)*param_1;
  if ((*(char *)((int)param_1 + 0x1d) != '\0') && (temp_v0 = FUN_001632fc(), temp_v0 != 0)) {
    *(unsigned char *)((int)param_1 + 0x1d) = 0;
    FUN_00203d04(1);
  }
  FUN_001631d0(*param_1,0);
  return;
}

} /* extern "C" */
