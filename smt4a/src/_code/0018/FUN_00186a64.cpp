/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00186a64` (_code @ 0x186a64, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017cff0(int);
int FUN_0019eafc(void);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Supplied declaration required: FUN_0017cff0. */
extern int FUN_001960f0(int *, int *);
/* Supplied declaration required: FUN_0019eafc. */


void FUN_00186a64(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  piVar1 = param_1;
  FUN_0019eafc();
  piVar2 = piVar1;
  if (((unsigned int)piVar1 & 8) == 0) {
    *piVar1 = 0;
    piVar2 = piVar1 + 2;
    piVar1[1] = 0x200;
  }
  *piVar2 = 1;
  piVar2[1] = 0xf023d;
  temp_v0 = FUN_001960f0(piVar1,piVar2 + 2);
  FUN_0019eafc();
  param_1[1] = temp_v0 - *param_1;
  param_1[3] = 2;
  FUN_0017cff0(param_1[2]);
  return;
}

} /* extern "C" */
