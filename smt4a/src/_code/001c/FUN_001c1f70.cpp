/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001c1f70` (_code @ 0x1c1f70, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001c2278(int, int);
int FUN_001c6e30(int, int);
int FUN_001c6ec0(int, int);
int FUN_001c6f4c(int, unsigned int);
int FUN_001c7714(void);
int nw_snd_internal_MoveValue_float_int_SetTarget(int, int);

/* Supplied declaration required: FUN_001c2278. */
/* Supplied declaration required: FUN_001c6e30. */
/* Supplied declaration required: FUN_001c6ec0. */
/* Supplied declaration required: FUN_001c6f4c. */
/* Supplied declaration required: FUN_001c7714. */
/* Supplied declaration required: nw_snd_internal_MoveValue_float_int_SetTarget. */


void FUN_001c1f70(int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v1 = param_1 + param_2 * 0x10;
  if (*(char *)(temp_v1 + 0x294) == '\0') {
    if (*(int *)(temp_v1 + 0x20) < *(int *)(temp_v1 + 0x1c)) {
      FUN_001c2278(param_1,param_2);
    }
    nw_snd_internal_MoveValue_float_int_SetTarget(temp_v1 + 0x14,0);
    FUN_001c7714();
    temp_v0 = param_3;
    FUN_001c6e30(param_3,(int)(char)param_2);
    if (((temp_v0 != 0) && (temp_v0 = param_3, FUN_001c6f4c(param_3,param_4), temp_v0 != 0)) &&
       (temp_v0 = param_3, FUN_001c6ec0(param_3,1), temp_v0 != 0)) {
      *(int *)(temp_v1 + 0x290) = param_3;
      *(unsigned char *)(temp_v1 + 0x294) = 1;
    }
  }
  return;
}

} /* extern "C" */
