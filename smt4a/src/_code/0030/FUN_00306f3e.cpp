/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00306f3e` (_code @ 0x306f3e, 0x5c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e9300(...);
int FUN_002e9318(int *);
int FUN_0030ed7a(int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp1C; /* 0x1c: local_1c */
} param_4_stack;

/* Supplied declaration required: FUN_002e9300. */
/* Supplied declaration required: FUN_002e9318. */
extern int FUN_0030ed4e(short *, unsigned int);
/* Supplied declaration required: FUN_0030ed7a. */


int FUN_00306f3e(int param_1,short *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int iStack_20;
  short *temp_v2;
  int uStack_18;
  unsigned int temp_v3;
  
  temp_v1 = -1;
  if ((((*(short **)(param_1 + 4) != (short *)0x0) && (param_2 != (short *)0x0)) &&
      (**(short **)(param_1 + 4) != 0)) && (*param_2 != 0)) {
    iStack_20 = param_1;
    temp_v2 = param_2;
    uStack_18 = param_3;
    temp_v3 = param_4;
    FUN_002e9300(&iStack_20);
    FUN_0030ed7a(&iStack_20);
    FUN_002e9300(&uStack_18,param_2);
    FUN_0030ed7a(&uStack_18);
    temp_v0 = FUN_0030ed4e(temp_v2,temp_v3);
    if (temp_v0 != 0) {
      temp_v1 = (temp_v0 - (int)temp_v2) >> 1;
    }
    FUN_002e9318(&uStack_18);
    FUN_002e9318(&iStack_20);
  }
  return temp_v1;
}

} /* extern "C" */
