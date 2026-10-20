#include "romwright_types.h"

extern "C" {

extern unsigned char DAT_0057f698; /* 0x57f698 */


int FUN_001ab888(void)

{
  return (*(int *)((unsigned char *)&DAT_0057f698 + 0x4)) + 0x8c;
}

} /* extern "C" */
