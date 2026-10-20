/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002190e4` (_code @ 0x2190e4, 0x64 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002503d4(...);
int FUN_00257568(unsigned int *, unsigned int *);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002503d4. */
/* Supplied declaration required: FUN_00257568. */
extern int FUN_002ae1d8(unsigned int);


void FUN_002190e4(unsigned int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_002ae1d8(*param_1);
  if (temp_v0 != 0) {
    temp_v0 = 99;
  }
  else {
    temp_v0 = FUN_002503d4(*param_1);
  }
  temp_v1 = FUN_002ae1d8(*param_2);
  if (temp_v1 != 0) {
    temp_v1 = 99;
  }
  else {
    temp_v1 = FUN_002503d4();
  }
  if (temp_v0 != temp_v1) {
    return;
  }
  FUN_00257568(param_1,param_2);
  return;
}

} /* extern "C" */
