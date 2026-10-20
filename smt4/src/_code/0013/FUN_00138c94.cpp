/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138c94` (_code @ 0x138c94, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b7148(void);
int FUN_002bef70(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern int FUN_002af390(int *, int *);
/* Supplied declaration required: FUN_002b7148. */
/* Supplied declaration required: FUN_002bef70. */


void FUN_00138c94(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  
  piVar1 = param_1;
  FUN_002b7148();
  piVar2 = piVar1;
  if (((unsigned int)piVar1 & 8) == 0) {
    *piVar1 = 0;
    piVar2 = piVar1 + 2;
    piVar1[1] = 0x200;
  }
  *piVar2 = 1;
  piVar2[1] = 0xf023d;
  temp_v0 = FUN_002af390(piVar1,piVar2 + 2);
  FUN_002b7148();
  param_1[1] = temp_v0 - *param_1;
  param_1[3] = 2;
  FUN_002bef70(param_1[2]);
  return;
}

} /* extern "C" */
