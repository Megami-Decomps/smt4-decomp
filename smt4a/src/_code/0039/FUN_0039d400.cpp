#include "romwright_types.h"

extern "C" {

int btlGetMainState(void);
int scrSetResult(int);

/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrSetResult. */
extern int FUN_003ec7b0(void);


unsigned int FUN_0039d400(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  btlGetMainState();
  temp_v0 = FUN_003ec7b0();
  scrSetResult(temp_v0 != 0);
  return 1;
}

} /* extern "C" */
