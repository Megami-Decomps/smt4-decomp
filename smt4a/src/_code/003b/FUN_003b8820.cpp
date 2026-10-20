#include "romwright_types.h"

extern "C" {

int scrSetResult(unsigned int);

extern unsigned int FUN_00213b5c(void);
/* Supplied declaration required: scrSetResult. */


unsigned int FUN_003b8820(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0xffffffff;
  temp_v0 = FUN_00213b5c();
  switch(temp_v0) {
  case 0:
    temp_v1 = 0;
    break;
  case 1:
    temp_v1 = 1;
    break;
  case 2:
    temp_v1 = 2;
    break;
  case 3:
    temp_v1 = 3;
    break;
  case 4:
    temp_v1 = 4;
  }
  scrSetResult(temp_v1);
  return 1;
}

} /* extern "C" */
