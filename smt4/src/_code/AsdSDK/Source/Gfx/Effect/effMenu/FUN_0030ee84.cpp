#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_004724c8; /* 0x4724c8 */


void FUN_0030ee84(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  (*(float *)((unsigned char *)&DAT_004724c8 + 0x8)) = (*(float *)((unsigned char *)&DAT_004724c8 + 0x8)) + in_s0;
  return;
}

} /* extern "C" */
