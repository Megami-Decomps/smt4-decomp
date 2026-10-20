#include "romwright_types.h"

extern "C" {

int scrGetArg(int);

extern int btlGetMainState(void);
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_003b1dc4(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  temp_v2 = btlGetMainState();
  *(unsigned short *)(temp_v2 + temp_v1 * 2 + 0x2344) = temp_v0;
  return 1;
}

} /* extern "C" */
