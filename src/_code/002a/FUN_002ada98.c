/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ada98` (_code @ 0x2ada98, 0x78 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int FUN_002b5c2c(int *);
/* Supplied declaration required: FUN_002b5c40. */


void FUN_002ada98(int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int *piStack_24;
  int temp_v2;
  
  piVar1 = param_1;
  FUN_002b5c40();
  if (piVar1 != (int *)0x0) {
    do {
      piStack_24 = (int *)((int)param_1 + 2);
      temp_v0 = *param_1;
      param_1 = piStack_24;
    } while ((short)temp_v0 != 0x3a);
    temp_v1 = 4;
    temp_v0 = FUN_002b5c2c(piStack_24);
    temp_v2 = (temp_v0 + 1) * 2;
    (**(romwright_code **)(*piVar1 + 0x18))(piVar1,&temp_v1,param_3,param_4);
  }
  return;
}
