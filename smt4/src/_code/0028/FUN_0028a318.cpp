#include "romwright_types.h"

extern "C" {

extern int DAT_0043dcf0; /* 0x43dcf0 */

extern unsigned int FUN_00295618(void);


unsigned int FUN_0028a318(void)

{
  char temp_v0;
  unsigned int temp_v1;
  
  if (DAT_0043dcf0 != 0) {
    if (*(int *)(DAT_0043dcf0 + 0x1c) != 0x17) {
      return 0;
    }
    temp_v0 = *(char *)(DAT_0043dcf0 + 0x66c);
    if ((temp_v0 != '\x01' && temp_v0 != '\x06') && ((temp_v0 != '\a' && temp_v0 != '\r') && temp_v0 != '\f'))
    {
      temp_v1 = FUN_00295618();
      return temp_v1;
    }
  }
  return 1;
}

} /* extern "C" */
