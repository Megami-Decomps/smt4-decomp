#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0035ef38(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = btlGetMainState();
  temp_v0 = *(short *)(temp_v2 + 0x4c70);
  temp_v3 = btlGetMainState();
  temp_v2 = (int)temp_v0;
  if ((int)temp_v0 < (int)*(short *)(temp_v3 + 0x4c72)) {
    temp_v2 = (int)*(short *)(temp_v3 + 0x4c72);
  }
  scrSetResult(temp_v2 <= temp_v1);
  return 1;
}

} /* extern "C" */
