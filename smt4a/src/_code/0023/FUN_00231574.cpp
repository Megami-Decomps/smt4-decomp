/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00231574` (_code @ 0x231574, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00371c3c(int, int);
int FUN_0038b3f8(int, int);
int FUN_003a7a88(int, int);

extern int g_unite; /* 0x57f290 */

extern unsigned long long FUN_002a4844(int);
/* Supplied declaration required: FUN_00371c3c. */
/* Supplied declaration required: FUN_0038b3f8. */
/* Supplied declaration required: FUN_003a7a88. */


void FUN_00231574(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned char temp_v9;
  unsigned char temp_v10;
  unsigned long long temp_v11;
  
  temp_v0 = g_unite;
  temp_v11 = FUN_002a4844(g_unite + 0x623c);
  if (*(char *)(temp_v0 + 0x420) == '\x02') {
    temp_v11 = FUN_002a4844(temp_v0 + 0x8f14);
  }
  temp_v5 = (unsigned int)((unsigned long long)temp_v11 >> 0x20);
  temp_v8 = 0;
  temp_v1 = temp_v0 + (int)temp_v11 * 2;
  do {
    temp_v2 = temp_v0 + temp_v8 * 2;
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x6688);
    if (temp_v3 != 0) {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62a0);
    }
    if (temp_v3 != 0 && temp_v3 != temp_v5) {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62a2);
      temp_v9 = temp_v3 != temp_v5;
      if (temp_v9) {
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62a4);
      }
      temp_v10 = temp_v3 != temp_v5;
      if (temp_v9 && temp_v10) {
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v1 + 0x62a6);
      }
      if ((temp_v9 && temp_v10) && temp_v3 != temp_v5) {
        temp_v4 = (int)*(short *)(temp_v2 + 0x6688);
        FUN_003a7a88(temp_v4,1);
        temp_v5 = temp_v6;
        if (temp_v4 != 0) {
          FUN_0038b3f8((int)*(short *)(temp_v2 + 0x6688),1);
          *(unsigned short *)(temp_v2 + 0x6688) = 0;
          temp_v5 = temp_v7;
        }
      }
    }
    temp_v8 = temp_v8 + 1;
  } while (temp_v8 < 4);
  temp_v1 = 0;
  do {
    temp_v8 = temp_v0 + ((int)temp_v11 + temp_v1) * 2;
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v8 + 0x62a0);
    if (temp_v3 != 0) {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + 0x6688);
    }
    if (temp_v3 != 0 && temp_v3 != temp_v5) {
      temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + 0x668a);
      temp_v9 = temp_v3 != temp_v5;
      if (temp_v9) {
        temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + 0x668c);
      }
      if ((temp_v9 && temp_v3 != temp_v5) && (temp_v5 = (unsigned int)*(unsigned short *)(temp_v0 + 0x668e), temp_v3 != temp_v5))
      {
        temp_v2 = 0;
        do {
          if (*(short *)(temp_v0 + temp_v2 * 2 + 0x6688) == 0) {
            FUN_00371c3c((int)*(short *)(temp_v8 + 0x62a0),1);
            temp_v2 = temp_v0 + temp_v2 * 2;
            temp_v5 = temp_v2 + 0x6600;
            *(unsigned short *)(temp_v2 + 0x6688) = *(unsigned short *)(temp_v8 + 0x62a0);
            break;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 < 4);
      }
    }
    temp_v1 = temp_v1 + 1;
    if (temp_v1 >= 4) {
      return;
    }
  } while( 1 );
}

} /* extern "C" */
