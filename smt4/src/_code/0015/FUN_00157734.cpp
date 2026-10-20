/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00157734` (_code @ 0x157734, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001597d0(int, int);
int FUN_00159860(int, int);
int FUN_001598ec(int, unsigned int);
int FUN_002a3178(void);
int FUN_002b4cd4(int, int);
int nw_snd_internal_MoveValue_float_int_SetTarget(int, int);

/* Supplied declaration required: FUN_001597d0. */
/* Supplied declaration required: FUN_00159860. */
/* Supplied declaration required: FUN_001598ec. */
/* Supplied declaration required: FUN_002a3178. */
/* Supplied declaration required: FUN_002b4cd4. */
/* Supplied declaration required: nw_snd_internal_MoveValue_float_int_SetTarget. */


void FUN_00157734(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1 + param_2 * 0x10;
  if (*(char *)(temp_v1 + 0x2a4) == '\0') {
    if (*(int *)(temp_v1 + 0x30) < *(int *)(temp_v1 + 0x2c)) {
      FUN_002b4cd4(param_1,param_2);
    }
    nw_snd_internal_MoveValue_float_int_SetTarget(temp_v1 + 0x24,0);
    FUN_002a3178();
    temp_v0 = param_3;
    FUN_001597d0(param_3,(int)(char)param_2);
    if (((temp_v0 != 0) && (temp_v0 = param_3, FUN_001598ec(param_3,param_4), temp_v0 != 0)) &&
       (temp_v0 = param_3, FUN_00159860(param_3,1), temp_v0 != 0)) {
      *(int *)(temp_v1 + 0x2a0) = param_3;
      *(unsigned char *)(temp_v1 + 0x2a4) = 1;
    }
  }
  return;
}

} /* extern "C" */
