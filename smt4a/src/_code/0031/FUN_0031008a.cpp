#include "romwright_types.h"

extern "C" {

extern unsigned char FUN_00306d0e(int, unsigned char, unsigned int);


void FUN_0031008a(int param_1)

{
  unsigned char temp_v0;
  int temp_v1;
  
  if (*(char *)(param_1 + 5) != '\0') {
    temp_v1 = *(int *)(*(int *)(param_1 + 0xc) + 0xb0);
    if (temp_v1 != 0) {
      temp_v0 = FUN_00306d0e(temp_v1,*(unsigned char *)(*(int *)(param_1 + 0xc) + 4),1);
      *(unsigned char *)(param_1 + 5) = temp_v0 ^ 1;
    }
  }
  return;
}

} /* extern "C" */
