/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00334560` (_code @ 0x334560, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_0057f28c; /* 0x57f28c */

extern int FUN_00162858(void);
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: FUN_00184c00. */
/* Supplied declaration required: FUN_00202400. */
extern int FUN_002a4860(void);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002ae320. */
extern int FUN_002f7730(int, unsigned int);
/* Supplied declaration required: FUN_003d498c. */
/* Supplied declaration required: FUN_003dc530. */
/* Supplied declaration required: FUN_003defe0. */
extern int FUN_004186f4(unsigned int);


void FUN_00334560(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v5 = DAT_0057f28c;
  *(unsigned char *)(DAT_0057f28c + 0x90c) = 1;
  FUN_003dc530();
  temp_v1 = FUN_002a4860();
  temp_v2 = FUN_002a4894(temp_v5 + 0x948);
  temp_v0 = *(unsigned short *)(temp_v5 + (temp_v2 + temp_v1) * 2 + 0xa10);
  temp_v6 = (unsigned int)temp_v0;
  FUN_003d498c(temp_v6,1);
  *(unsigned short *)(temp_v5 + 0xcce) = temp_v0;
  temp_v1 = DAT_0057f28c;
  temp_v2 = FUN_004186f4(temp_v6);
  if ((temp_v2 == 0) && (temp_v3 = temp_v6, FUN_003defe0(), temp_v3 != 0)) {
    temp_v2 = 0;
    if (temp_v2 < *(int *)(temp_v1 + 0x918)) {
      do {
        temp_v4 = FUN_002f7730(temp_v2,temp_v6);
        if (temp_v4 == 3) break;
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < *(int *)(temp_v1 + 0x918));
    }
    if (*(int *)(temp_v1 + 0x918) <= temp_v2) {
      temp_v2 = 0;
    }
    *(int *)(temp_v1 + 0x910) = temp_v2;
    *(int *)(temp_v1 + 0x914) = temp_v2;
  }
  if (*(short *)(temp_v5 + 0xcd0) >= 3) {
    FUN_002ae320();
  }
  FUN_00184758(temp_v5 + 0x34,0);
  FUN_00184c00(temp_v5 + 0x34,8,0);
  temp_v5 = FUN_00162858();
  if (temp_v5 != 0) {
    FUN_00202400();
  }
  temp_v5 = DAT_0057f28c;
  *(unsigned int *)(DAT_0057f28c + 8) = *(unsigned int *)(DAT_0057f28c + 4);
  *(unsigned int *)(temp_v5 + 4) = 1;
  *(unsigned int *)(temp_v5 + 0x10) = 0;
  return;
}
