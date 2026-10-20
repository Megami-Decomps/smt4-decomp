#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern int scrGetArg(unsigned int);


unsigned int FUN_002f12c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = btlGetMainState();
  temp_v1 = scrGetArg(0);
  scrSetResult(*(unsigned int *)(temp_v0 + temp_v1 * 4 + 0x22a8));
  return 1;
}

} /* extern "C" */
