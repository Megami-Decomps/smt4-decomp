#include "romwright_types.h"

extern "C" {

typedef int romwright_code(...);

void FUN_001b9624(int *param_1)

{
  char temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  temp_v2 = *(char *)(param_1 + 5) != '\0';
  temp_v0 = '\0';
  if (temp_v2) {
    temp_v0 = *(char *)((int)param_1 + 0x16);
  }
  if (temp_v2 && temp_v0 != '\0') {
    temp_v1 = 0;
    if (*param_1 != 0) {
      temp_v1 = param_1[7];
    }
    if ((*param_1 != 0 && temp_v1 != 0) &&
       (*(char *)(temp_v1 + 0x11) != '\x01' && *(char *)(temp_v1 + 0x11) != '\x02')) {
      if ((romwright_code *)param_1[3] != (romwright_code *)0x0) {
        (*(romwright_code *)param_1[3])(param_1,0,param_1[4]);
      }
      *(unsigned char *)((int)param_1 + 0x16) = 0;
      *(unsigned char *)((int)param_1 + 0x15) = 0;
    }
  }
  return;
}

} /* extern "C" */
