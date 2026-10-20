/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011330c` (_code @ 0x11330c, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001148a8(unsigned int);
int FUN_002ea41e(int *, int);
int FUN_002fdce8(int, int *);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_001148a8. */
/* Supplied declaration required: FUN_002ea41e. */
/* Supplied declaration required: FUN_002fdce8. */


void FUN_0011330c(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  temp_v0 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  if ((*(int *)(param_1 + 0x138) != 0) && (FUN_002ea41e(&temp_v0,param_1 + 0xd8), -1 < temp_v0)) {
    FUN_001148a8(*(unsigned int *)(param_1 + 0x138));
  }
  FUN_002ea41e(&temp_v0,param_1 + 0x70);
  FUN_002fdce8(param_1,&temp_v0);
  return;
}

} /* extern "C" */
