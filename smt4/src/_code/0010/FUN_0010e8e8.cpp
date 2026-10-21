/* NON_MATCHING: merged retail boundary: sound-volume setter ends at0x38; a separate applet sleep-event query starts at0x3c and ends at0x5c inside this unit. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_004e30b8; /* 0x4e30b8 */
extern unsigned int DAT_004e3124; /* 0x4e3124 */
extern signed char DAT_004e3134; /* 0x4e3134 */


void FUN_0010e8e8(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  if (DAT_004e3134 != '\0') {
    DAT_004e3124 = in_s0;
    DAT_004e30b8 = in_s0;
    return;
  }
  return;
}

} /* extern "C" */
