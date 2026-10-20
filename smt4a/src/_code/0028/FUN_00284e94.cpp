#include "romwright_types.h"

extern "C" {

extern int DAT_0057f268; /* 0x57f268 */

extern unsigned int FUN_0026c3a0(void);


unsigned int FUN_00284e94(void)

{
  char temp_v0;
  unsigned int temp_v1;
  
  if (DAT_0057f268 != 0) {
    if (*(int *)(DAT_0057f268 + 0x1c) != 0x1b) {
      return 0;
    }
    temp_v0 = *(char *)(DAT_0057f268 + 0x9b4);
    if ((temp_v0 != '\x01' && temp_v0 != '\x06') && ((temp_v0 != '\a' && temp_v0 != '\r') && temp_v0 != '\f'))
    {
      temp_v1 = FUN_0026c3a0();
      return temp_v1;
    }
  }
  return 1;
}

} /* extern "C" */
