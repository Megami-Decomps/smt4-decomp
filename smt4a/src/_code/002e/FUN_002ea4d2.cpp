/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ea4d2` (_code @ 0x2ea4d2, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea20c(int *);
int FUN_002ea446(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002ea20c. */
/* Supplied declaration required: FUN_002ea446. */


unsigned int FUN_002ea4d2(int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_14;
  
  temp_v0 = param_3;
  uStack_14 = param_4;
  if ((*(int *)(param_1 + 0xf8) != -1) &&
     (FUN_002ea20c(&temp_v0), *(int *)(param_1 + 0xf8) <= temp_v0 - *(int *)(param_1 + 0x100))) {
    return 0;
  }
  FUN_002ea446(param_1,0xfa);
  return 1;
}

} /* extern "C" */
