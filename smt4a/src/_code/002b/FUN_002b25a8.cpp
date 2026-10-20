/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b25a8` (_code @ 0x2b25a8, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int gameFlagIsSet(...);

extern int g_btlMain; /* 0x573920 */

/* Supplied declaration required: gameFlagIsSet. */
extern int flagSelectVariant(void);
extern int FUN_002e2b38(void);


unsigned int FUN_002b25a8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = gameFlagIsSet();
  if (temp_v0 == 0) {
    temp_v0 = flagSelectVariant();
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        return 0;
      }
      temp_v0 = gameFlagIsSet(0x4db);
      if (temp_v0 != 0) {
        return 1;
      }
    }
    else {
      temp_v0 = FUN_002e2b38();
      if (temp_v0 == 0) {
        return 0;
      }
    }
    temp_v0 = g_btlMain;
    if (g_btlMain != 0) {
      temp_v1 = gameFlagIsSet(0x1fd);
      if (temp_v1 != 0) {
        return 1;
      }
      if (*(int *)(temp_v0 + 0xac) == 1) {
        return 1;
      }
    }
  }
  return 0;
}

} /* extern "C" */
