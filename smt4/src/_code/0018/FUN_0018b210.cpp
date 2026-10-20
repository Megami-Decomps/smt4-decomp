#include "romwright_types.h"

extern "C" {

int FUN_00297684(unsigned int);
int statusCameraApply(void);

typedef int romwright_code(...);
/* Supplied declaration required: FUN_00297684. */
/* Supplied declaration required: statusCameraApply. */


unsigned int FUN_0018b210(int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  romwright_code *pcVar2;
  int temp_v1;
  int pb;
  
  temp_v1 = *param_1;
  pcVar2 = *(romwright_code **)(temp_v1 + *(int *)(temp_v1 + 0xd28) * 4 + 8);
  if ((pcVar2 != (romwright_code *)0x0) && (temp_v0 = (*pcVar2)(temp_v1), temp_v0 == 2)) {
    if (*(int *)(temp_v1 + 0xd2c) != -1) {
      *(unsigned int *)(temp_v1 + 0xd24) = *(unsigned int *)(temp_v1 + 0xd28);
      *(int *)(temp_v1 + 0xd28) = *(int *)(temp_v1 + 0xd2c);
      *(unsigned int *)(temp_v1 + 0xd2c) = 0xffffffff;
    }
  }
  pb = temp_v1 + 0xa0;
  temp_v0 = *(int *)(temp_v1 + 0xd28);
  if ((0 < temp_v0) && (temp_v0 != 0xd && temp_v0 != 0xf)) {
    statusCameraApply();
    FUN_00297684(*(unsigned int *)(pb + 0x1c));
  }
  return 0;
}

} /* extern "C" */
