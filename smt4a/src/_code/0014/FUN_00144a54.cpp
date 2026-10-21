/* NON_MATCHING: merged retail boundary: sound-volume setter ends at0x38; a separate applet sleep-event query starts at0x3c and ends at0x5c inside this unit. */
#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_0063f448; /* 0x63f448 */
extern unsigned int DAT_0063f4b4; /* 0x63f4b4 */
extern signed char DAT_0063f4c4; /* 0x63f4c4 */


void FUN_00144a54(void)

{
/* irregular: irregular input(s): in_s0; 1 native warning(s); review required */
  unsigned int in_s0;
  
  if (DAT_0063f4c4 != '\0') {
    DAT_0063f4b4 = in_s0;
    DAT_0063f448 = in_s0;
    return;
  }
  return;
}

} /* extern "C" */
