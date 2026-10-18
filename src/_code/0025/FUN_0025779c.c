/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025779c` (_code @ 0x25779c, 0xf4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0024c7b4(int);
extern int FUN_00250614(int);
extern int FUN_002a89e4(void);
/* Supplied declaration required: FUN_002ae3f0. */
extern int FUN_002ae464(int);


int FUN_0025779c(int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned char temp_v7;
  
  temp_v0 = FUN_002ae464(*param_1);
  if (temp_v0 != 0) {
    temp_v5 = 99;
    temp_v0 = 99;
    temp_v4 = 0;
  }
  else {
    temp_v5 = FUN_0024c7b4(*param_1);
    temp_v0 = FUN_00250614(*param_1);
    temp_v1 = *param_1;
    FUN_002ae3f0();
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x2c);
  }
  temp_v1 = FUN_002ae464(*param_2);
  if (temp_v1 != 0) {
    temp_v1 = 99;
    temp_v6 = 99;
    temp_v3 = 0;
  }
  else {
    temp_v1 = FUN_0024c7b4(*param_2);
    temp_v6 = FUN_00250614(*param_2);
    temp_v2 = *param_2;
    FUN_002ae3f0();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x2c);
  }
  temp_v5 = temp_v5 - temp_v1;
  temp_v7 = 0;
  if (temp_v5 == 0) {
    temp_v5 = temp_v0 - temp_v6;
    temp_v7 = temp_v5 == 0;
  }
  if (((temp_v7) && (temp_v5 = temp_v3 - temp_v4, temp_v5 == 0)) && (temp_v5 = *param_1 - *param_2, temp_v5 == 0))
  {
    if (param_1[1] < 0) {
      temp_v4 = 0;
    }
    else {
      temp_v0 = FUN_002a89e4();
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
    }
    if (param_2[1] < 0) {
      temp_v3 = 0;
    }
    else {
      temp_v0 = FUN_002a89e4();
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
    }
    temp_v5 = temp_v4 - temp_v3;
  }
  return temp_v5;
}
