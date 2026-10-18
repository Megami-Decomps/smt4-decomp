/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bf1b8` (_code @ 0x3bf1b8, 0x114 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
extern int FUN_0023ec3c(unsigned int);
extern int FUN_00293c98(void);
extern int FUN_0029ee4c(int, unsigned int);
extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);


unsigned int FUN_003bf1b8(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  
  temp_v1 = FUN_00293c98();
  if (*(int *)(temp_v1 + 0xc4) < 0) {
    temp_v7 = 0;
    temp_v1 = FUN_002a8a08();
    temp_v6 = 0;
    if (*(char *)(temp_v1 + 0x910b) != '\0') {
      do {
        if (-1 < *(char *)(temp_v1 + temp_v6 + 0x90f0)) {
          temp_v2 = FUN_002a89e4();
          temp_v3 = FUN_0029ee4c(temp_v2,10);
          if (temp_v3 != 0) {
            temp_v0 = *(unsigned char *)(temp_v2 + 0x600);
            if (temp_v0 < 2) {
              temp_v3 = 0x19;
            }
            else if (temp_v0 == 2) {
              temp_v3 = 0x4b;
            }
            else if (temp_v0 == 3) {
              temp_v3 = 0x5a;
            }
            else {
              temp_v3 = 99;
            }
            temp_v4 = FUN_00293c98();
            if ((*(unsigned int *)(temp_v4 + 0x44a8) & 0x10000) != 0) {
              temp_v3 = 100;
            }
            temp_v5 = FUN_0023ec3c(99);
            temp_v8 = SBORROW4(temp_v5,temp_v3);
            temp_v4 = temp_v5 - temp_v3;
            if (temp_v5 < temp_v3) {
              temp_v8 = SBORROW4(temp_v7,1);
              temp_v4 = temp_v7 - 1;
            }
            if (temp_v4 < 0 != temp_v8) {
              temp_v4 = FUN_00293c98();
              temp_v3 = temp_v7 * 4;
              temp_v7 = temp_v7 + 1;
              *(unsigned int *)(temp_v4 + temp_v3 + 0x158) = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
            }
          }
        }
        temp_v6 = temp_v6 + 1;
      } while (temp_v6 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x910b));
      if (0 < temp_v7) {
        temp_v1 = FUN_00293c98();
        *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) | 0x200;
        return 1;
      }
    }
  }
  return 0;
}
