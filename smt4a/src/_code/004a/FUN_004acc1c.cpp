/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004acc1c` (_code @ 0x4acc1c, 0x198 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00195fc4(void);
int FUN_001d3f18(...);
int runtimeShiftLeftWide(...);

/* Supplied declaration required: FUN_00195fc4. */
/* Supplied declaration required: FUN_001d3f18. */
/* Supplied declaration required: runtimeShiftLeftWide. */


unsigned int FUN_004acc1c(unsigned int *param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned long long temp_v6;
  
  if (param_2 >= 0x41) {
    FUN_00195fc4();
  }
  temp_v1 = param_1[2];
  temp_v4 = 0x40 - ((0x40 - temp_v1) & 7);
  if (param_2 <= temp_v4) {
    while (temp_v1 < param_2) {
      puVar3 = (unsigned char *)param_1[3];
      param_1[3] = (unsigned int)(puVar3 + 1);
      temp_v1 = param_1[2];
      temp_v4 = *param_1;
      temp_v2 = param_1[1];
      temp_v6 = runtimeShiftLeftWide(*puVar3,0,0x38 - temp_v1);
      temp_v1 = temp_v1 + 8;
      param_1[2] = temp_v1;
      param_1[1] = (unsigned int)((unsigned long long)temp_v6 >> 0x20) | temp_v2;
      *param_1 = (unsigned int)temp_v6 | temp_v4;
    }
    temp_v4 = param_1[1];
    temp_v2 = *param_1;
    temp_v1 = FUN_001d3f18(temp_v2,temp_v4,0x40 - param_2);
    temp_v6 = runtimeShiftLeftWide(temp_v2,temp_v4,param_2);
    *(unsigned long long *)param_1 = temp_v6;
    param_1[2] = param_1[2] - param_2;
    return temp_v1;
  }
  temp_v5 = param_2 - temp_v4;
  while (temp_v1 < temp_v4) {
    puVar3 = (unsigned char *)param_1[3];
    param_1[3] = (unsigned int)(puVar3 + 1);
    temp_v1 = param_1[2];
    temp_v2 = *param_1;
    temp_v3 = param_1[1];
    temp_v6 = runtimeShiftLeftWide(*puVar3,0,0x38 - temp_v1);
    temp_v1 = temp_v1 + 8;
    param_1[2] = temp_v1;
    param_1[1] = (unsigned int)((unsigned long long)temp_v6 >> 0x20) | temp_v3;
    *param_1 = (unsigned int)temp_v6 | temp_v2;
  }
  temp_v6 = FUN_001d3f18(*param_1,param_1[1],0x40 - temp_v4);
  temp_v1 = runtimeShiftLeftWide((int)temp_v6,(int)((unsigned long long)temp_v6 >> 0x20),temp_v5);
  puVar3 = (unsigned char *)param_1[3];
  param_1[3] = (unsigned int)(puVar3 + 1);
  temp_v0 = *puVar3;
  temp_v4 = FUN_001d3f18(temp_v0,0);
  temp_v6 = runtimeShiftLeftWide(temp_v0,0,temp_v5 + 0x38);
  *(unsigned long long *)param_1 = temp_v6;
  param_1[2] = 8 - temp_v5;
  return temp_v4 | temp_v1;
}

} /* extern "C" */
