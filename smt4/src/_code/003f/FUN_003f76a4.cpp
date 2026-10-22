/* NON_MATCHING: vptr constant is restored; recovered destructor member traversal and load scheduling differ. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

extern unsigned int DAT_004213b8[];
unsigned int * FUN_003f76a4(unsigned int *param_1)

{
  unsigned int param_2;
  int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  *param_1 = (unsigned int)DAT_004213b8;
  temp_v2 = param_1[3];
  temp_v3 = param_1[4];
  puVar2 = param_1;
  if (temp_v2 < temp_v3) {
    puVar2 = (unsigned int *)((temp_v3 - temp_v2) * 0x8000000);
  }
  temp_v0 = (int)(temp_v3 - temp_v2) >> 4;
  if (temp_v2 < temp_v3) {
    temp_v3 = (unsigned int)puVar2 >> 0x1f;
  }
  else {
    temp_v3 = 0;
  }
  temp_v1 = temp_v3 + 1;
  if (temp_v1 < temp_v0 + 1) {
    do {
      temp_v1 = temp_v1 + 2;
    } while (temp_v1 < temp_v0 + 1);
  }
  param_1[4] = temp_v2;
  if ((int *)param_1[2] != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*(int *)param_1[2] + 0xc))();
  }
  return param_1;
}

} /* extern "C" */
