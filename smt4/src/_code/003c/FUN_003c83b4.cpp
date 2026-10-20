#include "romwright_types.h"

extern "C" {

extern int FUN_00229f30(unsigned short);
extern int FUN_002b6b20(void);
extern int FUN_002b6b38(void);


unsigned short FUN_003c83b4(void)

{
  int temp_v0;
  unsigned short temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_002b6b38();
  if (temp_v0 == 2) {
    temp_v0 = FUN_002b6b20();
    temp_v0 = FUN_00229f30(*(unsigned short *)(temp_v0 + 0x46));
    temp_v1 = *(unsigned short *)(temp_v0 + 6);
  }
  return temp_v1;
}

} /* extern "C" */
