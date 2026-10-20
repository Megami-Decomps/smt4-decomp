#include "romwright_types.h"

extern "C" {

int scrSetResult(int);

/* Supplied declaration required: scrSetResult. */
extern int btlGetMainState(void);


unsigned int FUN_00325178(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v2 = 0;
  while( 1 ) {
    temp_v0 = btlGetMainState();
    temp_v1 = *(unsigned int *)(*(int *)(temp_v0 + 0x1fc0) + temp_v2 * 0x288);
    if (((temp_v1 & 0x10) != 0 && (temp_v1 & 1) != 0) && ((temp_v1 & 0x40) == 0) && ((temp_v1 & 0x100) == 0))
    break;
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x6d) {
      scrSetResult(0);
      return 1;
    }
  }
  scrSetResult(1);
  return 1;
}

} /* extern "C" */
