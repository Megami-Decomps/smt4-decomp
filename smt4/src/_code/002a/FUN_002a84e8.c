/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a84e8` (_code @ 0x2a84e8, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern int FUN_002b5a48(int *);
/* Supplied declaration required: FUN_002b5a5c. */


void FUN_002a84e8(int *param_1)

{
/* irregular: 1 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  int temp_v1;
  int *piStack_1c;
  int temp_v2;
  
  piVar1 = param_1;
  FUN_002b5a5c();
  if (piVar1 != (int *)0x0) {
    do {
      piStack_1c = (int *)((int)param_1 + 2);
      temp_v0 = *param_1;
      param_1 = piStack_1c;
    } while ((short)temp_v0 != 0x3a);
    temp_v1 = 4;
    temp_v0 = FUN_002b5a48(piStack_1c);
    temp_v2 = (temp_v0 + 1) * 2;
    (**(romwright_code **)(*piVar1 + 8))(piVar1,&temp_v1);
  }
  return;
}
