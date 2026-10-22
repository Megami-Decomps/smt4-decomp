/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003e45bc` (_code @ 0x3e45bc, 0x134 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataFindKeyedRecordWithOverrides(void);
int FUN_002f0bd8(void);
int updateUnlockedEntryCount(void);
int gameFlagSetValue(...);

/* Supplied declaration required: dataFindKeyedRecordWithOverrides. */
/* Supplied declaration required: FUN_002f0bd8. */
extern int gameDataBlockGetArea2D68(void);
extern int FUN_003e4230(unsigned int);
/* Supplied declaration required: updateUnlockedEntryCount. */
/* Supplied declaration required: gameFlagSetValue. */


unsigned int FUN_003e45bc(unsigned int param_1,int param_2,int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *pbVar4;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v1 = gameDataBlockGetArea2D68();
  temp_v2 = gameDataBlockGetArea2D68();
  if ((((unsigned int)*(unsigned char *)(temp_v2 + (param_1 >> 3)) & (1 << (param_1 & 7))) == 0) &&
     ((param_2 != 0 || (temp_v2 = FUN_003e4230(param_1), temp_v2 == 0)))) {
    if (param_3 == 0) {
      pbVar4 = (unsigned char *)(((int)(param_1 + ((unsigned int)((int)param_1 >> 0x1f) >> 0x1d)) >> 3) + temp_v1);
      temp_v0 = (unsigned char)(1 << (((int)param_1 % 8) & 0xffU));
      *pbVar4 = *pbVar4 | temp_v0;
      pbVar4[0x12] = temp_v0 | pbVar4[0x12];
      updateUnlockedEntryCount();
      dataFindKeyedRecordWithOverrides();
      FUN_002f0bd8();
      temp_v3 = param_1;
      dataFindKeyedRecordWithOverrides();
      if (*(char *)(temp_v3 + 0x22) == '\0') {
        temp_v1 = temp_v1 + (*(unsigned short *)(temp_v3 + 0x2a) & 0x3f) * 2;
        *(short *)(temp_v1 + 0x24) = *(short *)(temp_v1 + 0x24) + 1;
      }
      if (param_1 != 0x2e) {
        if (param_1 != 0x18) {
          if (param_1 != 0x76) {
            return 1;
          }
          gameFlagSetValue(0x527,0,1);
          return 1;
        }
        temp_v4 = 0x521;
      }
      else {
        temp_v4 = 0x520;
      }
      gameFlagSetValue(temp_v4,0,1);
    }
    return 1;
  }
  return 0;
}

} /* extern "C" */
