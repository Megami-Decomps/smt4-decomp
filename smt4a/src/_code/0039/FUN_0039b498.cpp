#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int eventTexHandlesReady(void);


unsigned int FUN_0039b498(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = eventTexHandlesReady();
  if (temp_v0 != 0) {
    scrSetResult(1);
    return 1;
  }
  scrSetResult(0);
  return 0;
}

} /* extern "C" */
