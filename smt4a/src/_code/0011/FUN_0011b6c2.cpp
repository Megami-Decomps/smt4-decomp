#include "romwright_types.h"

extern "C" {

extern int FUN_0010aaf0(int, int);
extern int FUN_0010ab42(void);


void FUN_0011b6c2(int param_1)

{
  int temp_v0;
  
  temp_v0 = FUN_0010ab42();
  if ((temp_v0 != 0) && (temp_v0 = FUN_0010aaf0(param_1,param_1 + 0x18), temp_v0 != 0)) {
    *(unsigned char *)(param_1 + 0x14) = 1;
  }
  return;
}

} /* extern "C" */
