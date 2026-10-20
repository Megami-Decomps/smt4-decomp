#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);
extern int scrGetArg(void);


unsigned int FUN_003124d8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = scrGetArg();
  temp_v1 = btlGetMainState();
  scrSetResult(*(short *)(temp_v1 + 0x1fca) <= temp_v0);
  return 1;
}

} /* extern "C" */
