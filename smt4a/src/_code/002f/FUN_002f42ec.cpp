/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f42ec` (_code @ 0x2f42ec, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea0b8(unsigned int *);
int FUN_002f4364(void);

typedef int romwright_code(...);
extern unsigned char DAT_00558cc4; /* 0x558cc4 */

/* Supplied declaration required: FUN_002ea0b8. */
/* Supplied declaration required: FUN_002f4364. */


void FUN_002f42ec(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  
  *param_1 = (unsigned int)&DAT_00558cc4;
  uStack_18 = param_2;
  uStack_14 = param_3;
  uStack_10 = param_4;
  if ((int *)param_1[4] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[4] + 4))();
    param_1[4] = 0;
  }
  if (*(char *)(param_1 + 7) != '\0') {
    (**(romwright_code **)(*(int *)param_1[3] + 0x18))();
    (**(romwright_code **)(*(int *)param_1[8] + 0x14))((int *)param_1[8],*(unsigned short *)((int)param_1 + 0x26))
    ;
    *(unsigned char *)(param_1 + 7) = 0;
  }
  if ((int *)param_1[3] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[3] + 0x60))(&uStack_18);
    if ((int *)param_1[3] != (int *)0x0) {
      (**(romwright_code **)(*(int *)param_1[3] + 4))();
    }
    param_1[3] = 0;
  }
  if ((int *)param_1[6] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[6] + 4))();
  }
  if ((int *)param_1[5] != (int *)0x0) {
    (**(romwright_code **)(*(int *)param_1[5] + 4))();
  }
  FUN_002f4364();
  FUN_002ea0b8(param_1);
  return;
}

} /* extern "C" */
