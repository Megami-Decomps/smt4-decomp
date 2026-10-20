#include "romwright_types.h"

extern "C" {

int scrSetResult(int);
int btlGetMainState(void);

extern int FUN_002499b4(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
extern int scrGetArg(void);


unsigned int FUN_0030b240(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  btlGetMainState();
  temp_v1 = FUN_002499b4();
  if (temp_v1 != 0) {
    { int lim = *(unsigned short *)(temp_v1 + 0x1cc); scrSetResult(temp_v0 <= lim); }
  }
  else {
    scrSetResult(0);
  }
  return 1;
}

} /* extern "C" */
