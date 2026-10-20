#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int btlGetMainState(void);

extern int FUN_002499b4(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
extern int scrGetArg(void);


unsigned int FUN_00322ee0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = 0;
  if (temp_v0 == 0) {
    temp_v1 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v1 = 10;
  }
  else if (temp_v0 == 2) {
    temp_v1 = 0xb;
  }
  btlGetMainState();
  temp_v0 = FUN_002499b4();
  if (temp_v0 != 0) {
    scrSetResult((int)*(short *)(temp_v0 + temp_v1 * 2 + 0x72) <= -1);
  }
  else {
    scrSetResult(0);
  }
  return 1;
}

} /* extern "C" */
