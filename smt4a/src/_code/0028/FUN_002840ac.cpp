#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


int FUN_002840ac(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x27ea8;
}

} /* extern "C" */
