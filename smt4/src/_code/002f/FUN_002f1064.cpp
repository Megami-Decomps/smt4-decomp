#include "romwright_types.h"

extern "C" {

extern int FUN_002939f4(void);
extern unsigned int FUN_00296cc8(unsigned int);


unsigned int FUN_002f1064(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  if (temp_v0 < 0x10) {
    temp_v2 = FUN_002939f4();
    *(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x497c) = temp_v1;
  }
  return 1;
}

} /* extern "C" */
