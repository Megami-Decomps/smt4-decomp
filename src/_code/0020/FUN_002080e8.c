/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002080e8` (_code @ 0x2080e8, 0x74 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern signed char DAT_0049fc14; /* 0x49fc14 */
extern int DAT_0049fc18; /* 0x49fc18 */
extern int DAT_0049fc38; /* 0x49fc38 */

extern unsigned int FUN_0027d98c(void);


unsigned int FUN_002080e8(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = FUN_0027d98c();
  switch(temp_v1) {
  case 0:
  case 3:
    temp_v0 = DAT_0049fc18;
    break;
  case 1:
  case 2:
  case 4:
    temp_v0 = DAT_0049fc38;
    break;
  default:
    return 0;
  }
  if ((DAT_0049fc14 != '\0') && (temp_v0 >= 100)) {
    return 1;
  }
  return 0;
}
