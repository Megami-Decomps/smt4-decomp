/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033fc50` (_code @ 0x33fc50, 0x110 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00295d7c(int);
extern int FUN_0029ebac(int, unsigned int);
extern int FUN_002a8740(int);
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002c424c. */
extern int FUN_003bc9b8(void);


unsigned int FUN_0033fc50(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  char *pcVar2;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  char acStack_30 [28];
  
  temp_v0 = FUN_002a8764();
  temp_v4 = 0;
  FUN_002c424c(acStack_30,0x18,0xffffffff);
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
        temp_v1 = FUN_002a8740((int)acStack_30[temp_v0]);
        if ((((temp_v1 != 0) && (temp_v2 = FUN_003bc9b8(), temp_v2 != 0)) &&
            (temp_v2 = FUN_00295d7c(temp_v1), temp_v2 == 0)) &&
           (((temp_v2 = FUN_0029ebac(temp_v1,1), temp_v2 == 0 &&
             (temp_v2 = FUN_0029ebac(temp_v1,10), temp_v2 == 0)) &&
            (temp_v1 = FUN_0029ebac(temp_v1,2), temp_v1 == 0)))) {
          return 1;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < (int)temp_v4);
    }
  }
  return 0;
}
