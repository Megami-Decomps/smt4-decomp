#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0044e908; /* 0x44e908 */


int FUN_0012f59c(void)

{
  return (int)(*(signed char *)((unsigned char *)&DAT_0044e908 + 0x1));
}

} /* extern "C" */
