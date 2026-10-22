/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003df57c` (_code @ 0x3df57c, 0x128 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int dataFindKeyedRecordWithOverrides(void);
int dataTable04FindById(void);
int FUN_002efc44(unsigned int, int, int);

extern int gameGetPlayerData(void);
/* Supplied declaration required: dataFindKeyedRecordWithOverrides. */
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_002efc44. */
extern int gameDataFlagTestBit(unsigned int);


void FUN_003df57c(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = param_1;
  dataTable04FindById();
  if (temp_v0 != 0) {
    if (param_2 != 0) {
      temp_v1 = gameGetPlayerData();
      temp_v2 = 0;
      do {
        temp_v3 = temp_v1 + temp_v2 * 2;
        if (*(unsigned short *)(temp_v3 + 0x34) == param_1) {
          temp_v1 = (int)*(char *)(temp_v2 + temp_v1 + 0x44);
          FUN_002efc44(temp_v0,temp_v1,4);
          return;
        }
        if (*(unsigned short *)(temp_v3 + 0x36) == param_1) {
          temp_v1 = (int)*(char *)(temp_v2 + temp_v1 + 0x45);
          FUN_002efc44(temp_v0,temp_v1,4);
          return;
        }
        temp_v2 = temp_v2 + 2;
      } while (temp_v2 < 8);
      temp_v1 = 0;
      FUN_002efc44(temp_v0,temp_v1,4);
    }
    else {
      temp_v1 = gameDataFlagTestBit(0xc);
      if (temp_v1 != 0) {
        dataFindKeyedRecordWithOverrides();
      }
      temp_v1 = gameDataFlagTestBit(0xd);
      if (temp_v1 != 0) {
        dataFindKeyedRecordWithOverrides();
      }
      temp_v1 = gameDataFlagTestBit(0xe);
      if (temp_v1 != 0) {
        dataFindKeyedRecordWithOverrides();
      }
      temp_v1 = gameDataFlagTestBit(0xf);
      if (temp_v1 != 0) {
        dataFindKeyedRecordWithOverrides();
      }
    }
  }
  return;
}

} /* extern "C" */
