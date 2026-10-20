#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_005c10c0; /* 0x5c10c0 */


void FUN_003a1ab4(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  float in_s0;
  
  (*(float *)((unsigned char *)&DAT_005c10c0 + 0x8)) = (*(float *)((unsigned char *)&DAT_005c10c0 + 0x8)) + in_s0;
  return;
}

} /* extern "C" */
