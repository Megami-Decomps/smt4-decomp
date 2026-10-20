#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057ffd0; /* 0x57ffd0 */


unsigned int FUN_0029202c(void)

{
  return (*(unsigned int *)((unsigned char *)&DAT_0057ffd0 + 0x18));
}

} /* extern "C" */
