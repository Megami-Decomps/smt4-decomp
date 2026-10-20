/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026db58` (_code @ 0x26db58, 0x178 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0028dbe0(unsigned int);
int FUN_0033c468(unsigned int);

extern int g_partyPanel; /* 0x43dcf0 */

/* Supplied declaration required: FUN_0028dbe0. */
extern short *FUN_0029acb0(void);
extern int gameGetUnitRecord(unsigned int);
/* Supplied declaration required: FUN_0033c468. */


unsigned int FUN_0026db58(void)

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
    FUN_0033c468(*(unsigned int *)(temp_v3 + 0x6c8));
    psVar2 = (short *)FUN_0029acb0();
    if (*(int *)(*(int *)(temp_v3 + 0x6c8) + 0x34) < 0) {
      if (*psVar2 < 0) {
        temp_v1 = FUN_0028dbe0(*(unsigned int *)(temp_v3 + 0x6c8));
        if (temp_v1 != -1) {
          temp_v4 = FUN_0028dbe0(*(unsigned int *)(temp_v3 + 0x6c8));
        }
      }
    }
    else {
      temp_v1 = gameGetUnitRecord(*(unsigned int *)(*(int *)(temp_v3 + 0x6c8) + 0x34));
      if ((unsigned int)*(unsigned short *)(temp_v1 + 0x46) == (int)*psVar2) {
        temp_v1 = FUN_0028dbe0(*(unsigned int *)(temp_v3 + 0x6c8));
        if (temp_v1 != -1) {
          temp_v4 = FUN_0028dbe0(*(unsigned int *)(temp_v3 + 0x6c8));
        }
      }
    }
    temp_v2 = temp_v2 + 1;
  } while (temp_v2 < 4);
  temp_v2 = 0;
  do {
    temp_v3 = temp_v0 + temp_v2 * 4;
    FUN_0033c468(*(unsigned int *)(temp_v3 + 0x6d8));
    psVar2 = (short *)FUN_0029acb0();
    if (*(int *)(*(int *)(temp_v3 + 0x6d8) + 0x34) < 0) {
      if (*psVar2 < 0) {
        temp_v1 = FUN_0028dbe0(*(unsigned int *)(temp_v3 + 0x6d8));
        if (temp_v1 != -1) {
          temp_v4 = FUN_0028dbe0(*(unsigned int *)(temp_v3 + 0x6d8));
        }
      }
    }
    else {
      temp_v1 = gameGetUnitRecord(*(unsigned int *)(*(int *)(temp_v3 + 0x6d8) + 0x34));
      if ((unsigned int)*(unsigned short *)(temp_v1 + 0x46) == (int)*psVar2) {
        temp_v1 = FUN_0028dbe0(*(unsigned int *)(temp_v3 + 0x6d8));
        if (temp_v1 != -1) {
          temp_v4 = FUN_0028dbe0(*(unsigned int *)(temp_v3 + 0x6d8));
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
