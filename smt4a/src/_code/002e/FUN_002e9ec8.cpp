/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e9ec8` (_code @ 0x2e9ec8, 0x2e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ff088(int *, int, int *);

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;

/* Supplied declaration required: FUN_002ff088. */
extern int FUN_002ff370(int *, unsigned int *);


unsigned int FUN_002e9ec8(int param_1,unsigned int param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int iStack_10;
  int uStack_c;
  
  iStack_10 = param_1;
  uStack_c = param_2;
  FUN_002ff088(&temp_v2,param_1 + 0x20,&uStack_c);
  temp_v3 = *(unsigned int *)(param_1 + 0x30);
  temp_v0 = FUN_002ff370(&temp_v2,(unsigned int *)&temp_v3);
  if (temp_v0 != 0) {
    temp_v1 = 0;
  }
  else {
    temp_v1 = *(unsigned int *)(temp_v2 + 0x14);
  }
  return temp_v1;
}

} /* extern "C" */
