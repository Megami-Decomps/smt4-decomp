#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_00373af4(void)

{
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  if (temp_v0 < 0x10) {
    temp_v2 = btlGetMainState();
    *(unsigned int *)(temp_v2 + temp_v0 * 4 + 0x4c88) = temp_v1;
  }
  return 1;
}

} /* extern "C" */
