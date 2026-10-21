/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b2bd8` (_code @ 0x1b2bd8, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(unsigned int, unsigned char *, unsigned int, unsigned int);
int FUN_001b31ac(void);
int FUN_001b31e0(void);

extern unsigned char LAB_001b2c9c; /* 0x1b2c9c */

/* Supplied declaration required: textFormatBuffer. */
extern int FUN_001b315c(unsigned int);
/* Supplied declaration required: FUN_001b31ac. */
/* Supplied declaration required: FUN_001b31e0. */


int FUN_001b2bd8(int param_1,int param_2,char *param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  char *pcVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = 0;
  if (temp_v5 < *(int *)(param_1 + 0x310)) {
    do {
      temp_v6 = *(int *)(param_1 + 0x318) + temp_v5 * 0x50;
      temp_v1 = FUN_001b315c(temp_v6);
      if (temp_v1 != 0) {
        temp_v2 = temp_v6;
        FUN_001b31ac();
        temp_v3 = temp_v6;
        FUN_001b31e0();
        temp_v4 = 0;
        if (temp_v4 < temp_v3) {
          do {
            pcVar5 = (char *)(temp_v2 + temp_v4 * 0x40);
            temp_v0 = *pcVar5;
            if (temp_v0 == param_2) {
              pcVar5 = *(char **)(pcVar5 + 0x3c);
            }
            if (temp_v0 == param_2 && pcVar5 == param_3) {
              textFormatBuffer(param_4,&LAB_001b2c9c,temp_v6 + 0x24,temp_v2 + temp_v4 * 0x40 + 1);
              return *(int *)(temp_v6 + 0x4c) + temp_v4 * 0x10;
            }
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < temp_v3);
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < *(int *)(param_1 + 0x310));
  }
  return 0;
}

} /* extern "C" */
