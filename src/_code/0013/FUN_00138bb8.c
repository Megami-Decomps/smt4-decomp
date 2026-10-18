/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138bb8` (_code @ 0x138bb8, 0x74 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002af624(int *, int *);
/* Supplied declaration required: FUN_002b7488. */
/* Supplied declaration required: FUN_002bf148. */


void FUN_00138bb8(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  piVar1 = param_1;
  FUN_002b7488();
  piVar2 = piVar1;
  if (((unsigned int)piVar1 & 8) == 0) {
    *piVar1 = 0;
    piVar2 = piVar1 + 2;
    piVar1[1] = 0x200;
  }
  *piVar2 = 1;
  piVar2[1] = 0xf023d;
  temp_v0 = FUN_002af624(piVar1,piVar2 + 2);
  FUN_002b7488();
  param_1[1] = temp_v0 - *param_1;
  param_1[3] = 2;
  FUN_002bf148(param_1[2]);
  return;
}
