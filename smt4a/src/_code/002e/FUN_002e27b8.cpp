#include "romwright_types.h"

extern "C" {

int FUN_002613f0(int);

extern int gameGetSlotRecord(int);
/* Supplied declaration required: FUN_002613f0. */


int FUN_002e27b8(void)

{
/* irregular: 1 goto(s); 1 native warning(s); review required */
  unsigned short *psVar1;
  int temp_v0;
  unsigned short *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v2 = 0;
  do {
    psVar1 = (unsigned short *)FUN_002613f0(temp_v2);
    if (*psVar1 != 0) {
      temp_v1 = 0;
      do {
        temp_v0 = gameGetSlotRecord(temp_v1);
        if ((temp_v0 != 0) && (*(unsigned short *)(temp_v0 + 0x62) == *psVar1)) {
          temp_v3 = temp_v3 + 1;
          goto LAB_002e2834;
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 0x18);
      puVar3 = (unsigned short *)FUN_002613f0(temp_v2);
      *puVar3 = 0;
      puVar3[1] = 0;
      puVar3[2] = 0;
      puVar3[3] = 0;
    }
LAB_002e2834:
    temp_v2 = temp_v2 + 1;
    if (temp_v2 >= 0x18) {
      return temp_v3;
    }
  } while( 1 );
}

} /* extern "C" */
