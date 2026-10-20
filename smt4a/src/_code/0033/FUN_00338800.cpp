/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00338800` (_code @ 0x338800, 0x50 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0019a5a0(int);
int FUN_002b2f08(void);
int FUN_002b40ec(void);
int FUN_00350ca4(unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002b2f08. */
/* Supplied declaration required: FUN_002b40ec. */
/* Supplied declaration required: FUN_00350ca4. */


void FUN_00338800(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  if (*(int *)(param_1 + 0x2c) != 0) {
    FUN_002b40ec();
  }
  temp_v0 = *(int *)(param_1 + 0x28);
  if (temp_v0 != 0) {
    FUN_00350ca4(*(unsigned int *)(temp_v0 + 0x10));
    FUN_00350ca4(*(unsigned int *)(temp_v0 + 0x14));
    FUN_0019a5a0(temp_v0);
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    FUN_002b2f08();
  }
  FUN_0019a5a0(param_1);
  return;
}

} /* extern "C" */
