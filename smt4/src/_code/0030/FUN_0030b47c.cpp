#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);


unsigned int FUN_0030b47c(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = btlGetMainState();
  scrSetResult(*(unsigned int *)(temp_v0 + 0x49c0));
  return 1;
}

} /* extern "C" */
