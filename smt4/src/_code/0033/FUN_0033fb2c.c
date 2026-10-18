/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033fb2c` (_code @ 0x33fb2c, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int DAT_0043427c; /* 0x43427c */

extern int FUN_0027e928(unsigned int);
extern int FUN_002a8740(void);
extern int FUN_002a8764(void);


unsigned int FUN_0033fb2c(unsigned int *param_1)

{
  short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  if (param_1 != (unsigned int *)0x0) {
    if ((*param_1 & 2) != 0) {
      temp_v1 = FUN_0027e928(DAT_0043427c);
      if ((*(unsigned int **)(temp_v1 + 0x20) != (unsigned int *)0x0) && ((**(unsigned int **)(temp_v1 + 0x20) & 2) != 0)) {
        temp_v1 = FUN_002a8764();
        temp_v4 = 0;
        if (*(char *)(temp_v1 + 0x910b) != '\0') {
          do {
            if (((-1 < *(char *)(temp_v1 + temp_v4 + 0x90f0)) && (temp_v2 = FUN_002a8740(), temp_v2 != 0))
               && (-1 < *(char *)(temp_v1 + temp_v4 + 0x90f0))) {
              return 1;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v1 + 0x910b));
        }
      }
    }
    else if (((*param_1 & 8) != 0) && (temp_v0 = *(short *)((int)param_1 + 0xce), (int)temp_v0 != 0)) {
      temp_v1 = FUN_002a8764();
      temp_v4 = 0;
      if (*(char *)(temp_v1 + 0x910b) != '\0') {
        do {
          if (-1 < *(char *)(temp_v1 + temp_v4 + 0x90f0)) {
            temp_v2 = FUN_002a8740();
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
