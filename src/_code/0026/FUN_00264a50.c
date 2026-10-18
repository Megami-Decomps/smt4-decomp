/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00264a50` (_code @ 0x264a50, 0xc4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned int FUN_002483b8(int);
extern int FUN_00248418(void);
extern int FUN_002c2b1c(void);


void FUN_00264a50(unsigned int param_1,unsigned int param_2)

{
/* irregular: 2 goto(s) */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  
  temp_v3 = 0;
  temp_v0 = FUN_00248418();
  if (0 < temp_v0) {
    do {
      temp_v1 = FUN_002483b8(temp_v3);
      if (*(unsigned char *)(temp_v1 + 8) == 0xff) {
        return;
      }
      if ((*(unsigned char *)(temp_v1 + 0xb) != param_1) || (*(unsigned char *)(temp_v1 + 0xc) != param_2)) {
        temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0xd);
        temp_v4 = temp_v2 == param_1;
        if (temp_v4) {
          temp_v2 = (unsigned int)*(unsigned char *)(temp_v1 + 0xe);
        }
        if (temp_v4 && temp_v2 == param_2) goto LAB_00264ac8;
        temp_v4 = *(unsigned char *)(temp_v1 + 0xf) == param_1;
        if (temp_v4) {
          temp_v1 = (unsigned int)*(unsigned char *)(temp_v1 + 0x10);
        }
        if (temp_v4 && temp_v1 == param_2) goto LAB_00264ac8;
      }
      else {
LAB_00264ac8:
        temp_v0 = FUN_002c2b1c();
        if (-1 < temp_v3) {
          temp_v0 = temp_v0 + ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1b)) >> 5) * 4;
          *(unsigned int *)(temp_v0 + 0x7d4) = *(unsigned int *)(temp_v0 + 0x7d4) | (1 << ((temp_v3 % 0x20) & 0xffU));
        }
      }
      temp_v3 = temp_v3 + 1;
      temp_v0 = FUN_00248418();
    } while (temp_v3 < temp_v0);
  }
  return;
}
