#include "romwright_types.h"

extern "C" {

extern int FUN_002bf244(void);
extern int FUN_002c08f0(int);
extern int FUN_00322ad4(void);


void FUN_002e20b4(void)

{
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00322ad4();
  if ((temp_v0 != -1) && (temp_v1 = FUN_002bf244(), temp_v1 != 0)) {
    temp_v0 = FUN_002c08f0(temp_v0);
    *(unsigned char *)(temp_v0 + 0x94) = 0;
  }
  return;
}

} /* extern "C" */
