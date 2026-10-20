/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033a670` (_code @ 0x33a670, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int unitStateClearEventBits(...);
int SCARRY4(unsigned int, int);

/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
/* Supplied declaration required: unitStateClearEventBits. */
extern int gameGetUnitRecord(int);
extern int gameGetSlotTable(void);
extern int gameGetPlayerData(void);


void FUN_0033a670(int param_1)

{
/* irregular: 1 goto(s); 2 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int *puVar6;
  
  temp_v3 = 0;
  do {
    puVar6 = (unsigned int *)(*(int *)(param_1 + 0x1fc0) + temp_v3 * 0x288);
    if ((((puVar6 != (unsigned int *)0x0) && (temp_v1 = *puVar6, (temp_v1 & 1) != 0)) && ((temp_v1 & 0x40) == 0))
       && ((temp_v1 & 0x10) == 0)) {
      if (puVar6[0x9e] != 0) {
        unitStateClearEventBits(puVar6[0x9e] + 0x72);
        temp_v1 = puVar6[0x9e];
        temp_v0 = *(unsigned short *)(temp_v1 + 0x72);
        if ((temp_v0 & 2) != 0) {
          *(unsigned short *)(temp_v1 + 0x2a) = 0;
        }
      }
      else if (puVar6[0x9f] != 0) {
        unitStateClearEventBits(puVar6[0x9f] + 0x44);
        temp_v1 = puVar6[0x9f];
        temp_v0 = *(unsigned short *)(temp_v1 + 0x44);
        if ((temp_v0 & 2) != 0) {
          *(unsigned short *)(temp_v1 + 0x2a) = 0;
        }
      }
      else if (puVar6[0xa0] != 0) {
        unitStateClearEventBits(puVar6[0xa0] + 0x44);
      }
    }
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 0x6d) {
      temp_v3 = gameGetSlotTable();
      temp_v4 = -1;
      if (*(unsigned char *)(temp_v3 + 0x910b) == 0xffffffff || SCARRY4((unsigned int)*(unsigned char *)(temp_v3 + 0x910b),1)) {
        return;
      }
LAB_0033a748:
      temp_v2 = gameGetPlayerData();
      temp_v2 = temp_v2 + 0x72;
      do {
        unitStateClearEventBits(temp_v2);
        do {
          temp_v4 = temp_v4 + 1;
          if ((int)(unsigned int)*(unsigned char *)(temp_v3 + 0x910b) <= temp_v4) {
            return;
          }
          if (temp_v4 < 0) goto LAB_0033a748;
          temp_v2 = gameGetUnitRecord(temp_v4);
        } while (temp_v2 == 0);
        temp_v2 = temp_v2 + 0x44;
      } while( 1 );
    }
  } while( 1 );
}

} /* extern "C" */
