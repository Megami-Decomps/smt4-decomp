/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e1614` (_code @ 0x2e1614, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_00237210(unsigned int);
int FUN_0023a55c(void);
int FUN_0028520c(void);
int FUN_002ef750(void);
int FUN_0035bea0(void);
int FUN_0037b240(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_00237210. */
/* Supplied declaration required: FUN_0023a55c. */
/* Supplied declaration required: FUN_0028520c. */
/* Supplied declaration required: FUN_002ef750. */
/* Supplied declaration required: FUN_0035bea0. */
/* Supplied declaration required: FUN_0037b240. */


void FUN_002e1614(unsigned int *param_1)

{
/* irregular: 9 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  param_1 = (unsigned int *)*param_1;
  FUN_00237210(param_1[0x28]);
  FUN_0035bea0();
  FUN_0037b240();
  temp_v1 = 0;
  do {
    temp_v0 = (int)(short)temp_v1;
    FUN_0028520c();
    if (temp_v0 != 0) {
      FUN_0023a55c();
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x40);
  FUN_002ef750();
  if (param_1[0x26] != 0) {
    FUN_0019a5a0();
    param_1[0x26] = 0;
  }
  if (param_1[0x27] != 0) {
    FUN_0019c364();
    param_1[0x27] = 0;
  }
  FUN_001631d0(*param_1,0);
  return;
}

} /* extern "C" */
