#include "romwright_types.h"

extern "C" {

extern int btlGetMainState(void);
extern unsigned int scrGetArg(unsigned int);


unsigned int FUN_002dbfe8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v0 = btlGetMainState();
  temp_v1 = scrGetArg(0);
  *(unsigned int *)(temp_v0 + 0x49dc) = temp_v1;
  return 1;
}

} /* extern "C" */
