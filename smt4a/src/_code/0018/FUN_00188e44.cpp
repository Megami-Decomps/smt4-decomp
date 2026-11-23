/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00188e44` (_code @ 0x188e44, 0x16c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_pl_CTR_CreateGameCoinSaveFile(void);
int faultReportKind5(void);
int archivePathDeviceOpen(unsigned int, unsigned int, int);
int archiveDeviceSendPathRequest(void);
int fileSystemRequireReady(void);
int svcSleepThread(int, int);
int SBORROW4(...);

extern unsigned char DAT_005c0adc; /* 0x5c0adc */

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: nn_pl_CTR_CreateGameCoinSaveFile. */
/* Supplied declaration required: faultReportKind5. */
/* Supplied declaration required: archivePathDeviceOpen. */
/* Supplied declaration required: archiveDeviceSendPathRequest. */
/* Supplied declaration required: fileSystemRequireReady. */
/* Supplied declaration required: svcSleepThread. */


unsigned int FUN_00188e44(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5;
  
  temp_v4 = 0;
  do {
    while( 1 ) {
      while( 1 ) {
        temp_v3 = (*(unsigned int *)((unsigned char *)&DAT_005c0adc + 0x4));
        temp_v2 = param_1 + 8;
        *(unsigned int *)(param_1 + 0x14) = 0;
        *(unsigned int *)(param_1 + 0x18) = 0;
        *(unsigned int *)(param_1 + 0xc) = 0;
        *(unsigned int *)(param_1 + 0x10) = 0;
        archivePathDeviceOpen(temp_v2,temp_v3,3);
        temp_v3 = (*(unsigned int *)((unsigned char *)&DAT_005c0adc + 0x4));
        if (-1 < (int)temp_v2) {
          return temp_v4;
        }
        temp_v0 = (temp_v2 & 0x3fc00) >> 10;
        if (((temp_v0 != 0x11) || ((temp_v2 & 0x3ff) < 0xe6)) || ((temp_v2 & 0x3ff) >= 0x154)) break;
        svcSleepThread(10000000,0);
      }
      if (((temp_v0 != 0x11) || ((temp_v2 & 0x3ff) < 100)) || ((temp_v2 & 0x3ff) >= 0xb4)) break;
      nn_pl_CTR_CreateGameCoinSaveFile();
      temp_v4 = 1;
    }
    if (((temp_v0 == 0x11) && ((temp_v2 & 0x3ff) >= 0x168)) && ((temp_v2 & 0x3ff) < 0x186)) {
      fileSystemRequireReady();
      archiveDeviceSendPathRequest();
      if (((((temp_v3 & 0x3fc00) != 0x4400) || ((temp_v3 & 0x3ff) < 100)) || ((temp_v3 & 0x3ff) >= 0xb4))
         && ((int)temp_v3 < 0)) {
        faultReportKind5();
      }
      nn_pl_CTR_CreateGameCoinSaveFile();
      temp_v4 = 1;
      continue;
    }
    if (temp_v0 == 0x11) {
      temp_v0 = temp_v2 & 0x3ff;
      temp_v5 = SBORROW4(0x186,temp_v0);
      temp_v1 = 0x186 - temp_v0;
      if (temp_v0 >= 0x186) {
        temp_v5 = SBORROW4(temp_v0,400);
        temp_v1 = temp_v0 - 400;
      }
      if (temp_v1 < 0 != temp_v5) {
        fileSystemRequireReady();
        archiveDeviceSendPathRequest();
        if (((((temp_v3 & 0x3fc00) != 0x4400) || ((temp_v3 & 0x3ff) < 100)) || ((temp_v3 & 0x3ff) >= 0xb4))
           && ((int)temp_v3 < 0)) {
          faultReportKind5();
        }
        nn_pl_CTR_CreateGameCoinSaveFile();
        temp_v4 = 1;
        continue;
      }
    }
    if ((int)temp_v2 < 0) {
      faultReportKind5();
    }
  } while( 1 );
}

} /* extern "C" */
