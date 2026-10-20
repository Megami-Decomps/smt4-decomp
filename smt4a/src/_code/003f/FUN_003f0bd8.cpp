/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f0bd8` (_code @ 0x3f0bd8, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataTable04FindById(void);
int FUN_003eaf20(void);
int FUN_004c5da4(int, int);

extern unsigned int DAT_00573ad8; /* 0x573ad8 */
extern unsigned int DAT_00573adc; /* 0x573adc */

/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_003eaf20. */
/* Supplied declaration required: FUN_004c5da4. */


void FUN_003f0bd8(int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  
  puVar3 = (unsigned int *)(param_1 + 0x45a0);
  if (((param_2 == 0) ||
      ((*puVar3 & DAT_00573ad8) == 0 && (*(unsigned int *)(param_1 + 0x45a4) & DAT_00573adc) == 0)) &&
     (temp_v0 = param_1, FUN_003eaf20(), temp_v0 != 0)) {
    temp_v0 = (int)*(short *)(temp_v0 + 8);
    FUN_004c5da4(temp_v0,param_2);
    if (((temp_v0 != 0) && (dataTable04FindById(), temp_v0 != 0)) && (param_2 != 0)) {
      temp_v1 = DAT_00573adc | *(unsigned int *)(param_1 + 0x45a4);
      *puVar3 = DAT_00573ad8 | *puVar3;
      *(unsigned int *)(param_1 + 0x45a4) = temp_v1;
    }
  }
  return;
}

} /* extern "C" */
