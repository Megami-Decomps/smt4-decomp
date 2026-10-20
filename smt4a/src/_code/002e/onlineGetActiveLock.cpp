#include "romwright_types.h"

extern "C" {

extern unsigned char g_flagBlock; /* 0x594958 */

extern int FUN_002e6e26(void);


int onlineGetActiveLock(void)

{
  int temp_v0;
  
  if ((*(signed char *)((unsigned char *)&g_flagBlock + 0x11)) != '\0') {
    temp_v0 = FUN_002e6e26();
    return temp_v0 + 0x88;
  }
  temp_v0 = FUN_002e6e26();
  return temp_v0 + 0x58;
}

} /* extern "C" */
