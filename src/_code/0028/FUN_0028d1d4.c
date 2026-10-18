/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d1d4` (_code @ 0x28d1d4, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern int FUN_0023de14(void);
/* Supplied declaration required: FUN_00297e30. */
extern unsigned int FUN_00297f40(int, unsigned int);
/* Supplied declaration required: FUN_002983dc. */


void FUN_0028d1d4(int param_1,int param_2,int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  *(int *)(param_1 + 0x305c) = param_2;
  if (param_3 == 0) {
    FUN_002983dc(param_1,0x29,1);
    return;
  }
  if ((param_2 == 0) && (temp_v0 = FUN_0023de14(), temp_v0 != 0)) {
    FUN_002983dc(param_1,1);
    temp_v1 = FUN_00297f40(param_1,1);
    FUN_00297e30(param_1,temp_v1,*(unsigned int *)(param_1 + 0x305c));
    return;
  }
  FUN_002983dc(param_1,9,1);
  return;
}
