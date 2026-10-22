/* NON_MATCHING: vptr constant is restored; recovered destructor member traversal and load scheduling differ. */
#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);
extern unsigned char DAT_00422058; /* 0x422058 */


extern unsigned int DAT_00421570[];
unsigned int * FUN_0036b0a0(unsigned int *param_1)

{
  unsigned int param_2;
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int *piVar6;
  
  *param_1 = (unsigned int)DAT_00421570;
  temp_v1 = param_1[0x19];
  temp_v3 = param_1[0x1a];
  puVar1 = param_1;
  if (temp_v1 < temp_v3) {
    puVar1 = (unsigned int *)((temp_v3 - temp_v1) * 0x2000000);
  }
  temp_v2 = (int)(temp_v3 - temp_v1) >> 6;
  if (temp_v1 < temp_v3) {
    temp_v3 = (unsigned int)puVar1 >> 0x1f;
  }
  else {
    temp_v3 = 0;
  }
  temp_v0 = temp_v3 + 1;
  if (temp_v0 < temp_v2 + 1) {
    do {
      temp_v0 = temp_v0 + 2;
    } while (temp_v0 < temp_v2 + 1);
  }
  param_1[0x1a] = temp_v1;
  if ((int *)param_1[0x18] != (int *)0x0 && temp_v1 != 0) {
    (**(romwright_code **)(*(int *)param_1[0x18] + 0xc))();
  }
  param_1[0xc] = (unsigned int)&(*(unsigned char *)((unsigned char *)&(*(unsigned char *)((unsigned char *)&DAT_00422058 - 0xbf0)) + 0xbf0));
  *param_1 = (unsigned int)&(*(unsigned char *)((unsigned char *)&DAT_00422058 - 0xbf0));
  temp_v2 = param_1[9];
  param_1[10] = temp_v2;
  piVar6 = (int *)param_1[8];
  if (piVar6 != (int *)0x0) {
    temp_v2 = param_1[9];
  }
  if (piVar6 != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*piVar6 + 0xc))(piVar6);
  }
  temp_v2 = param_1[5];
  piVar6 = (int *)param_1[4];
  param_1[6] = temp_v2;
  if (piVar6 != (int *)0x0) {
    temp_v2 = param_1[5];
  }
  if (piVar6 != (int *)0x0 && temp_v2 != 0) {
    (**(romwright_code **)(*piVar6 + 0xc))(piVar6);
  }
  return param_1;
}

} /* extern "C" */
