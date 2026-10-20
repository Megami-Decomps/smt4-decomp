#include "romwright_types.h"

extern "C" {

extern int DAT_0057f574; /* 0x57f574 */


unsigned char FUN_001632fc(void)

{
  return *(int *)(DAT_0057f574 + 8) != 0;
}

} /* extern "C" */
