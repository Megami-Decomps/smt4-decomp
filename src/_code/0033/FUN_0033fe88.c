/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033fe88` (_code @ 0x33fe88, 0x110 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00296020(int);
extern int FUN_0029ee4c(int, unsigned int);
extern int FUN_002a89e4(int);
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002c4450. */
extern int FUN_003bcbe0(void);


unsigned int FUN_0033fe88(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  char acStack_30 [28];
  
  temp_v0 = FUN_002a8a08();
  temp_v4 = 0;
  FUN_002c4450(acStack_30,0x18,0xffffffff);
  temp_v3 = (unsigned int)*(unsigned char *)(temp_v0 + 0x910b);
  if (temp_v3 != 0) {
    pcVar2 = (char *)(temp_v0 + 0x90f0);
    do {
      if (-1 < *pcVar2) {
        acStack_30[temp_v4] = *pcVar2;
        temp_v4 = temp_v4 + 1;
      }
      temp_v3 = temp_v3 - 1;
      pcVar2 = pcVar2 + 1;
    } while (temp_v3 != 0);
    temp_v0 = 0;
    if (temp_v4 != 0) {
      do {
        temp_v1 = FUN_002a89e4((int)acStack_30[temp_v0]);
        if ((((temp_v1 != 0) && (temp_v2 = FUN_003bcbe0(), temp_v2 != 0)) &&
            (temp_v2 = FUN_00296020(temp_v1), temp_v2 == 0)) &&
           (((temp_v2 = FUN_0029ee4c(temp_v1,1), temp_v2 == 0 &&
             (temp_v2 = FUN_0029ee4c(temp_v1,10), temp_v2 == 0)) &&
            (temp_v1 = FUN_0029ee4c(temp_v1,2), temp_v1 == 0)))) {
          return 1;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)temp_v4);
    }
  }
  return 0;
}
