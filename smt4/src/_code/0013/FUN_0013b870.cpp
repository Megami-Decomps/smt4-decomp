#include "romwright_types.h"

extern "C" {

extern unsigned int DAT_00465644; /* 0x465644 */

extern unsigned char nn_os_LightEvent_TryWait(unsigned int);


unsigned char FUN_0013b870(void)

{
  unsigned char temp_v0;
  
  temp_v0 = nn_os_LightEvent_TryWait((unsigned int)&DAT_00465644);
  return temp_v0;
}

} /* extern "C" */
