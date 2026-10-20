#include "romwright_types.h"

extern "C" {

extern int FUN_00163e40(void);
extern int FUN_00164a9c(int);
extern int FUN_003599bc(int);


void FUN_00341f00(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v2 = 1;
  do {
    temp_v0 = FUN_003599bc(temp_v2);
    if ((temp_v0 != -1) && (temp_v1 = FUN_00163e40(), temp_v1 != 0)) {
      temp_v0 = FUN_00164a9c(temp_v0);
      *(unsigned char *)(temp_v0 + 0x8c) = 0;
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  return;
}

} /* extern "C" */
