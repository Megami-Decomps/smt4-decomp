#include "romwright_types.h"

extern "C" {

extern int FUN_00162e8c(void);
extern int FUN_001861ec(unsigned char);


int FUN_00169240(int param_1)

{
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_00162e8c();
  if (temp_v0 != 0) {
    temp_v0 = FUN_00162e8c();
    if ((temp_v0 != 0) && (param_1 < 8)) {
      puVar2 = (unsigned char *)(temp_v0 + param_1 * 4 + 0x1590);
    }
    else {
      puVar2 = (unsigned char *)0x0;
    }
    temp_v0 = FUN_001861ec(*puVar2);
    if (temp_v0 != 0) {
      return temp_v0 + 8;
    }
  }
  return 0;
}

} /* extern "C" */
