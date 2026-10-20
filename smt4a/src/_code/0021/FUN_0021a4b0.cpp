/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a4b0` (_code @ 0x21a4b0, 0x13c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0015f858(unsigned int, int);
int sysPlaySe(int);
int FUN_001846d0(int, int);
int FUN_001ad9b4(void);
int FUN_001b34b8(void);
int FUN_002e342c(unsigned char [132], unsigned int);
int FUN_003180c4(int, unsigned char [132]);
int FUN_00359974(int, unsigned int, unsigned int, int);
int FUN_003d474c(void);
int FUN_003dc38c(unsigned int);
int FUN_003dea6c(unsigned int, int, int);
int FUN_00417e08(unsigned int);
int optionsSetFlag1(void);

extern int DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: FUN_0015f858. */
/* Supplied declaration required: sysPlaySe. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_001ad9b4. */
/* Supplied declaration required: FUN_001b34b8. */
extern int FUN_00275f44(unsigned int, unsigned int);
extern int FUN_002a4860(void);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_003d474c. */
/* Supplied declaration required: FUN_003dc38c. */
/* Supplied declaration required: FUN_003dea6c. */
/* Supplied declaration required: FUN_00417e08. */
/* Supplied declaration required: optionsSetFlag1. */


void FUN_0021a4b0(void)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [132];
  
  temp_v2 = DAT_0057f28c;
  *(unsigned char *)(DAT_0057f28c + 0x93f) = 1;
  temp_v0 = FUN_002a4860();
  temp_v1 = FUN_002a4894(temp_v2 + 0x9ac);
  temp_v4 = (unsigned int)*(unsigned short *)(temp_v2 + (temp_v1 + temp_v0) * 2 + 0xad6);
  FUN_00417e08(temp_v4);
  FUN_001b34b8();
  optionsSetFlag1();
  FUN_003dc38c(temp_v4);
  FUN_001846d0(temp_v2 + 0x264,2);
  FUN_003dea6c(temp_v4,0,1);
  FUN_001ad9b4();
  if ((temp_v4 == 0) || (*(char *)(temp_v4 + 6) != '\v')) {
    temp_v2 = FUN_00275f44(*(unsigned int *)(temp_v2 + 0x8fc),3);
    if (temp_v2 == 0) {
      return;
    }
  }
  else {
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v4 + 0xf2);
    FUN_0015f858(temp_v3,0);
    FUN_002e342c(temp_v5,temp_v3);
    FUN_003180c4(0,temp_v5);
    FUN_00359974(0x18,*(unsigned int *)(temp_v4 + 0xf4),0xffffffff,0);
    temp_v2 = FUN_00275f44(*(unsigned int *)(temp_v2 + 0x8fc),0x13);
    if (temp_v2 == 0) {
      return;
    }
  }
  sysPlaySe(0xa0);
  FUN_003d474c();
  temp_v2 = DAT_0057f28c;
  *(unsigned int *)(DAT_0057f28c + 8) = *(unsigned int *)(DAT_0057f28c + 4);
  *(unsigned int *)(temp_v2 + 4) = 0xc;
  *(unsigned int *)(temp_v2 + 0x10) = 0;
  return;
}

} /* extern "C" */
