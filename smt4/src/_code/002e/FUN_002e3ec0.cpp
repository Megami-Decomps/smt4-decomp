#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);


unsigned int FUN_002e3ec0(void)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v1 = scrGetArg(0);
  temp_v2 = btlGetMainState();
  temp_v0 = *(short *)(temp_v2 + 0x4968);
  temp_v3 = btlGetMainState();
  temp_v2 = (int)temp_v0;
  if ((int)temp_v0 < (int)*(short *)(temp_v3 + 0x496a)) {
    temp_v2 = (int)*(short *)(temp_v3 + 0x496a);
  }
  scrSetResult(temp_v2 <= temp_v1);
  return 1;
}

} /* extern "C" */
