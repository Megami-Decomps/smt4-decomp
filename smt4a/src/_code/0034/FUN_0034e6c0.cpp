#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

extern int FUN_001801a4(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_0034e6c0(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = FUN_001801a4();
  scrSetResult(*(unsigned short *)(temp_v0 + 0x62));
  return 1;
}

} /* extern "C" */
