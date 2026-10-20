/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021c1e0` (_code @ 0x21c1e0, 0x170 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_003f3f08(unsigned int);
int FUN_003f4b44(unsigned int);

extern int g_partyPanel; /* 0x57f268 */

extern int gameGetSlotRecord(unsigned int);
extern short *FUN_002c7e24(void);
/* Supplied declaration required: FUN_003f3f08. */
/* Supplied declaration required: FUN_003f4b44. */


unsigned int FUN_0021c1e0(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  short *psVar2;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = g_partyPanel;
  temp_v2 = 0;
  temp_v4 = 0xffffffff;
  do {
    temp_v3 = temp_v0 + temp_v2 * 4;
    FUN_003f4b44(*(unsigned int *)(temp_v3 + 0xa10));
    psVar2 = (short *)FUN_002c7e24();
    if (*(int *)(*(int *)(temp_v3 + 0xa10) + 0x34) < 0) {
      if (*psVar2 < 0) {
        temp_v1 = FUN_003f3f08(*(unsigned int *)(temp_v3 + 0xa10));
        if (temp_v1 != -1) {
          temp_v4 = FUN_003f3f08(*(unsigned int *)(temp_v3 + 0xa10));
        }
      }
    }
    else {
      temp_v1 = gameGetSlotRecord(*(unsigned int *)(*(int *)(temp_v3 + 0xa10) + 0x34));
      if ((unsigned int)*(unsigned short *)(temp_v1 + 0x62) == (int)*psVar2) {
        temp_v1 = FUN_003f3f08(*(unsigned int *)(temp_v3 + 0xa10));
        if (temp_v1 != -1) {
          temp_v4 = FUN_003f3f08(*(unsigned int *)(temp_v3 + 0xa10));
        }
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 4;
    FUN_003f4b44(*(unsigned int *)(temp_v3 + 0xa20));
    psVar2 = (short *)FUN_002c7e24();
    if (*(int *)(*(int *)(temp_v3 + 0xa20) + 0x34) < 0) {
      if (*psVar2 < 0) {
        temp_v1 = FUN_003f3f08(*(unsigned int *)(temp_v3 + 0xa20));
        if (temp_v1 != -1) {
          temp_v4 = FUN_003f3f08(*(unsigned int *)(temp_v3 + 0xa20));
        }
      }
    }
    else {
      temp_v1 = gameGetSlotRecord(*(unsigned int *)(*(int *)(temp_v3 + 0xa20) + 0x34));
      if ((unsigned int)*(unsigned short *)(temp_v1 + 0x62) == (int)*psVar2) {
        temp_v1 = FUN_003f3f08(*(unsigned int *)(temp_v3 + 0xa20));
        if (temp_v1 != -1) {
          temp_v4 = FUN_003f3f08(*(unsigned int *)(temp_v3 + 0xa20));
        }
      }
    }
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x18) {
      return temp_v4;
    }
  } while( 1 );
}

} /* extern "C" */
