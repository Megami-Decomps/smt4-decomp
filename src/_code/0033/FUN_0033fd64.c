/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033fd64` (_code @ 0x33fd64, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027eb98(unsigned int);
extern int FUN_002a89e4(void);
extern int FUN_002a8a08(void);


unsigned int FUN_0033fd64(unsigned int *param_1)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  if (param_1 != (unsigned int *)0x0) {
    if ((*param_1 & 2) != 0) {
      temp_v1 = FUN_0027eb98(DAT_0043427c);
      if ((*(unsigned int **)(temp_v1 + 0x20) != (unsigned int *)0x0) && ((**(unsigned int **)(temp_v1 + 0x20) & 2) != 0)) {
        temp_v1 = FUN_002a8a08();
        temp_v4 = 0;
        if (*(char *)(temp_v1 + 0x910b) != '\0') {
          do {
            if (((-1 < *(char *)(temp_v1 + temp_v4 + 0x90f0)) && (temp_v2 = FUN_002a89e4(), temp_v2 != 0))
               && (-1 < *(char *)(temp_v1 + temp_v4 + 0x90f0))) {
              return 1;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x910b));
        }
      }
    }
    else if (((*param_1 & 8) != 0) && (temp_v0 = *(short *)((int)param_1 + 0xce), (int)temp_v0 != 0)) {
      temp_v1 = FUN_002a8a08();
      temp_v4 = 0;
      if (*(char *)(temp_v1 + 0x910b) != '\0') {
        do {
          if (-1 < *(char *)(temp_v1 + temp_v4 + 0x90f0)) {
            temp_v2 = FUN_002a89e4();
            temp_v3 = 0;
            if (temp_v2 != 0) {
              temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x46);
            }
            if ((temp_v2 != 0 && temp_v3 != (int)temp_v0) && (-1 < *(char *)(temp_v1 + temp_v4 + 0x90f0))) {
              return 1;
            }
          }
          temp_v4 = temp_v4 + 1;
        } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x910b));
      }
    }
  }
  return 0;
}
