/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002497f8` (_code @ 0x2497f8, 0xf4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ae164(void);

extern int FUN_0024c5a0(int);
extern int FUN_002503d4(int);
extern int gameGetUnitRecord(void);
/* Supplied declaration required: FUN_002ae164. */
extern int idIsAbove400(int);


int FUN_002497f8(int *param_1,int *param_2)

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
  
  temp_v0 = idIsAbove400(*param_1);
  if (temp_v0 != 0) {
    temp_v0 = 99;
    temp_v6 = 99;
    temp_v4 = 0;
  }
  else {
    temp_v0 = FUN_0024c5a0(*param_1);
    temp_v6 = FUN_002503d4(*param_1);
    temp_v1 = *param_1;
    FUN_002ae164();
    temp_v4 = (unsigned int)*(unsigned short *)(temp_v1 + 0x2c);
  }
  temp_v1 = idIsAbove400(*param_2);
  if (temp_v1 != 0) {
    temp_v5 = 99;
    temp_v1 = 99;
    temp_v3 = 0;
  }
  else {
    temp_v5 = FUN_0024c5a0(*param_2);
    temp_v1 = FUN_002503d4(*param_2);
    temp_v2 = *param_2;
    FUN_002ae164();
    temp_v3 = (unsigned int)*(unsigned short *)(temp_v2 + 0x2c);
  }
  temp_v5 = temp_v5 - temp_v0;
  temp_v7 = 0;
  if (temp_v5 == 0) {
    temp_v5 = temp_v1 - temp_v6;
    temp_v7 = temp_v5 == 0;
  }
  if (((temp_v7) && (temp_v5 = temp_v4 - temp_v3, temp_v5 == 0)) && (temp_v5 = *param_2 - *param_1, temp_v5 == 0))
  {
    if (param_1[1] < 0) {
      temp_v4 = 0;
    }
    else {
      temp_v0 = gameGetUnitRecord();
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
    }
    if (param_2[1] < 0) {
      temp_v3 = 0;
    }
    else {
      temp_v0 = gameGetUnitRecord();
      temp_v3 = (unsigned int)*(unsigned short *)(temp_v0 + 0x46);
    }
    temp_v5 = temp_v3 - temp_v4;
  }
  return temp_v5;
}

} /* extern "C" */
