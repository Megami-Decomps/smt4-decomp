/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dad8c` (_code @ 0x4dad8c, 0x184 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0014af84(void);
extern int FUN_002a46f8(void);
extern int FUN_002a4b28(unsigned int);
/* Supplied declaration required: FUN_002e6354. */


int FUN_004dad8c(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char acStack_405 [1009];
  
  temp_v1 = FUN_002a46f8();
  temp_v3 = (unsigned int)*(unsigned short *)(temp_v1 + 8);
  temp_v1 = FUN_002a46f8();
  temp_v0 = *(unsigned short *)(temp_v1 + 10);
  FUN_002e6354(acStack_405 + 5,1000);
  if (temp_v3 <= temp_v0) {
    do {
      temp_v1 = FUN_002a4b28(temp_v3 & 0xffff);
      if (temp_v1 != 0) {
        temp_v1 = FUN_0014af84();
        temp_v2 = (unsigned int)*(unsigned short *)(temp_v1 + temp_v3 * 0x50 + 0x5e84);
        if ((temp_v2 - 1 < 999) && ((unsigned char)acStack_405[temp_v2 + 5] < 0x14)) {
          acStack_405[temp_v2 + 5] = acStack_405[temp_v2 + 5] + 1;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while ((int)temp_v3 <= (int)(unsigned int)temp_v0);
  }
  temp_v1 = 999;
  do {
    temp_v3 = (unsigned int)(unsigned char)acStack_405[temp_v1 + 5];
    if (temp_v3 != 0) {
      if (temp_v3 >= 3) {
        if (temp_v1 == 0) {
          return 1;
        }
        return temp_v1;
      }
      temp_v2 = temp_v3;
      if (((((((temp_v1 >= 2) && (acStack_405[temp_v1 + 4] != '\0')) && (temp_v2 = temp_v3 * 2, temp_v2 >= 3))
            || (((temp_v1 >= 3 && (acStack_405[temp_v1 + 3] != '\0')) &&
                (temp_v2 = temp_v2 + temp_v3, temp_v2 >= 3)))) ||
           (((temp_v1 >= 4 && (acStack_405[temp_v1 + 2] != '\0')) && (temp_v2 = temp_v2 + temp_v3, temp_v2 >= 3)))
           ) || ((((temp_v1 >= 5 && (acStack_405[temp_v1 + 1] != '\0')) &&
                  (temp_v2 = temp_v2 + temp_v3, temp_v2 >= 3)) ||
                 (((temp_v1 >= 6 && (acStack_405[temp_v1] != '\0')) && (temp_v2 + temp_v3 >= 3)))))) &&
         (temp_v1 != 0)) {
        return temp_v1;
      }
    }
    temp_v1 = temp_v1 - 1;
    if (temp_v1 < 1) {
      return 1;
    }
  } while( 1 );
}
