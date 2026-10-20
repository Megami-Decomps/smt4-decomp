#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int FUN_002b63ac(void);


unsigned int FUN_002f7bf0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  scrSetResult((int)*(short *)(temp_v0 + 0x1e));
  return 1;
}

} /* extern "C" */
