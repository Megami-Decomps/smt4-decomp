/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00436338` (_code @ 0x436338, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004352b0(int *, int *);
int FUN_00435318(int *, int);
int FUN_00437e98(void);
int FUN_00515568(int, int [2], int);
int FUN_00515618(int *, int);

/* stack frame of param_3: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_3_stack;

/* Supplied declaration required: FUN_004352b0. */
/* Supplied declaration required: FUN_00435318. */
/* Supplied declaration required: FUN_00437e98. */
/* Supplied declaration required: FUN_00515568. */
/* Supplied declaration required: FUN_00515618. */


int * FUN_00436338(int *param_1,int *param_2,int *param_3)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  int temp_v1 [2];
  int temp_v2;
  int temp_v3;
  
  FUN_004352b0(&temp_v2,param_1);
  if ((temp_v2 != 0) && (FUN_00515618(&temp_v3,*param_3 + 8), temp_v3 != 0)) {
    temp_v1[0] = temp_v2;
    FUN_00515568(temp_v3 + 8,temp_v1,param_1[5]);
    *param_1 = *(int *)(*param_1 + 4);
    piVar2 = param_1;
    FUN_00435318(param_1,temp_v3 + 0x10);
    if (piVar2 == (int *)0x0) {
      temp_v0 = temp_v3 + 0x10;
      FUN_00437e98();
      if (temp_v0 == 0) {
        return (int *)0x2;
      }
      *param_2 = temp_v2;
      *param_1 = *(int *)(*param_1 + 4);
      piVar2 = (int *)0x0;
    }
    return piVar2;
  }
  return (int *)0x2;
}

} /* extern "C" */
