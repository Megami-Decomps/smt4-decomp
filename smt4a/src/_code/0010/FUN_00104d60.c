/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00104d60` (_code @ 0x104d60, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp80; /* 0x80: local_80 */
} param_5_stack;

/* Supplied declaration required: FUN_002ea774. */
/* Supplied declaration required: FUN_002ea974. */
/* Supplied declaration required: FUN_002ea9c0. */
/* Supplied declaration required: FUN_002ea9dc. */
/* Supplied declaration required: FUN_002eaba4. */
/* Supplied declaration required: FUN_002eb2ec. */


int FUN_00104d60(int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 6 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2 [104];
  
  FUN_002ea974(temp_v2);
  FUN_002ea9c0(temp_v2,param_2);
  FUN_002eb2ec(temp_v2,param_5);
  temp_v1 = param_1;
  FUN_002ea774(param_1,temp_v2,param_4,0);
  piVar1 = *(int **)(param_1 + 8);
  if (piVar1 != (int *)0x0) {
    if (*(int *)(param_3 + 0x10) != 0) {
      temp_v0 = (**(romwright_code **)(*piVar1 + 0x18))(piVar1,param_1,temp_v1 + 8,param_3,temp_v1);
    }
    else {
      temp_v0 = (**(romwright_code **)(*piVar1 + 0x18))(piVar1,param_1,temp_v1 + 8,0,temp_v1);
    }
    if (temp_v0 == 0) {
      FUN_002eaba4(param_1,temp_v1);
      temp_v1 = 0;
    }
  }
  FUN_002ea9dc(temp_v2);
  return temp_v1;
}
