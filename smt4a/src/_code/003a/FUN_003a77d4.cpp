/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a77d4` (_code @ 0x3a77d4, 0xa4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ad9b4(void);
int gameFlagSetValue(int, int);
int FUN_00417b70(unsigned int);

extern int gameGetPlayerData(void);
extern int FUN_0019f1a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001ad9b4. */
extern int FUN_003de734(unsigned int);
extern int FUN_003df390(unsigned int);
/* Supplied declaration required: gameFlagSetValue. */
/* Supplied declaration required: FUN_00417b70. */


unsigned int FUN_003a77d4(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned short temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = gameGetPlayerData();
  temp_v0 = *(unsigned short *)(temp_v1 + 0x62);
  temp_v3 = 100;
  do {
    temp_v1 = FUN_0019f1a4(temp_v3 & 0xffff,0);
    if ((temp_v1 == 0) && (temp_v1 = FUN_003df390(temp_v3 & 0xffff), temp_v1 != 0)) {
      temp_v2 = temp_v3;
      FUN_001ad9b4();
      if ((temp_v2 != 0) &&
         ((*(short *)(temp_v2 + 0x120) != 0 && ((int)*(short *)(temp_v2 + 0x120) <= (int)(unsigned int)temp_v0))))
      {
        temp_v1 = FUN_003de734(temp_v3 & 0xffff);
        if (temp_v1 != 0) {
          gameFlagSetValue(temp_v1,1);
        }
        FUN_00417b70(temp_v3 & 0xffff);
      }
    }
    temp_v3 = temp_v3 + 1;
  } while ((int)temp_v3 < 400);
  return 1;
}

} /* extern "C" */
