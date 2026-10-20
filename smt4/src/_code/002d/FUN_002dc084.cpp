#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int FUN_002b63ac(void);


unsigned int FUN_002dc084(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_002b63ac();
  scrSetResult(*(unsigned char *)(temp_v0 + 0x76));
  return 1;
}

} /* extern "C" */
