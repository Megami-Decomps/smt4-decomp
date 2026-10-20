#include "romwright_types.h"

extern "C" {

extern int DAT_00447a78; /* 0x447a78 */


void FUN_00276904(void)

{
  int temp_v0;
  
  temp_v0 = DAT_00447a78;
  if (*(short *)(DAT_00447a78 + 0xccb8) != 0) {
    *(unsigned short *)(DAT_00447a78 + 0xccb8) = 3;
    *(unsigned short *)(temp_v0 + 0xccba) = 0;
  }
  return;
}

} /* extern "C" */
