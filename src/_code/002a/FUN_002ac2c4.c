/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ac2c4` (_code @ 0x2ac2c4, 0x88 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

/* Supplied declaration required: FUN_00155634. */
/* Supplied declaration required: FUN_002b4bf8. */
/* Supplied declaration required: FUN_002b743c. */
extern int *FUN_002bafb0(void);


void FUN_002ac2c4(unsigned int param_1,int param_2,int *param_3)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  unsigned int temp_v0;
  
  temp_v0 = 2;
  if (param_2 != 0) {
    if (param_2 != 1) {
      if (param_2 == 2 || param_2 == 3) {
        temp_v0 = 1;
      }
    }
    else {
      temp_v0 = 3;
      FUN_002b4bf8();
    }
  }
  else {
    FUN_002b4bf8();
  }
  if ((romwright_code *)param_3[0x4b] != (romwright_code *)0x0) {
    (*(romwright_code *)param_3[0x4b])(param_3,temp_v0,param_3[0x4c]);
  }
  param_3[0x4d] = 0;
  *(unsigned char *)((int)param_3 + 0xc5) = 0;
  *(unsigned char *)((int)param_3 + 0xc6) = 0;
  *(unsigned char *)((int)param_3 + 199) = 0;
  piVar1 = (int *)FUN_002bafb0();
  FUN_002b743c(piVar1 + 1,param_3 + 0x4f);
  if (param_3 != (int *)0x0) {
    FUN_00155634(param_3);
    *param_3 = *piVar1;
    *piVar1 = (int)param_3;
    return;
  }
  return;
}
