/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf854` (_code @ 0x2cf854, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern signed char DAT_005f1b70; /* 0x5f1b70 */
extern int DAT_005f1b74; /* 0x5f1b74 */
extern int DAT_005f1b94; /* 0x5f1b94 */

extern unsigned int gameDataTableGetFlag(void);


unsigned int FUN_002cf854(void)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = gameDataTableGetFlag();
  switch(temp_v1) {
  case 0:
  case 3:
    temp_v0 = DAT_005f1b74;
    break;
  case 1:
  case 2:
  case 4:
    temp_v0 = DAT_005f1b94;
    break;
  default:
    return 0;
  }
  if ((DAT_005f1b70 != '\0') && (temp_v0 >= 100)) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
