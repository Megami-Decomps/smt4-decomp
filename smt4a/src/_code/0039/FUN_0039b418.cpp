#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int eventTexSlotsReady(void);


unsigned int FUN_0039b418(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = eventTexSlotsReady();
  if (temp_v0 != 0) {
    scrSetResult(1);
    return 1;
  }
  scrSetResult(0);
  return 0;
}

} /* extern "C" */
