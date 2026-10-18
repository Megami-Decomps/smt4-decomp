/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038315c` (_code @ 0x38315c, 0x374 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_00223c00. */
/* Supplied declaration required: FUN_0023554c. */
/* Supplied declaration required: FUN_002356d4. */
/* Supplied declaration required: FUN_00235744. */
extern int FUN_00248728(void);
/* Supplied declaration required: FUN_002638dc. */
/* Supplied declaration required: FUN_0026a02c. */
/* Supplied declaration required: FUN_00291140. */
extern int FUN_00291154(void);
/* Supplied declaration required: FUN_00297674. */
/* Supplied declaration required: FUN_0029cee4. */
/* Supplied declaration required: FUN_0029e8c0. */
/* Supplied declaration required: FUN_0029e8e8. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002b91c4. */
extern int FUN_002c0ba8(unsigned int);
extern int FUN_002c1830(unsigned int, unsigned int);
extern int FUN_002d8da8(void);
/* Supplied declaration required: FUN_002f61c4. */
extern unsigned int FUN_00385cc4(int, unsigned char);


void FUN_0038315c(int param_1)

{
/* irregular: 14 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = FUN_0019dfbc(**(unsigned int **)(param_1 + 0x5c4));
  if (temp_v0 != 2) {
    temp_v0 = FUN_00291154();
    if (temp_v0 != 0) {
      temp_v0 = FUN_00291140();
      if (*(char *)(param_1 + 0x18) == '\0') {
        temp_v1 = 0x405808;
      }
      else {
        temp_v1 = 0x40580b;
      }
      temp_v2 = FUN_00385cc4(param_1 + 0x20,*(unsigned char *)(temp_v1 + temp_v0));
      FUN_0029f10c(temp_v2,0x323232ff);
      if (temp_v0 != -1) {
        if (*(char *)(param_1 + 0x18) != '\0') {
          if (temp_v0 != 0) {
            temp_v0 = FUN_002d8da8();
            if (temp_v0 != 0) {
              FUN_0029cee4(0);
            }
          }
          else {
            temp_v0 = FUN_00248728();
            if (temp_v0 == 0) {
              FUN_0029e8e8(1,0);
              FUN_0029e8c0(0xffffff9c,0);
              FUN_002356d4(1);
            }
          }
        }
        temp_v0 = FUN_002c1830(10,1);
        if ((temp_v0 != 0) && (temp_v0 = FUN_002c0ba8(0x24), temp_v0 != 0)) {
          FUN_002b91c4(0x100016f);
          FUN_0026a02c();
          FUN_00223c00();
          FUN_002638dc();
          *(unsigned char *)(param_1 + 0xd55) = 0;
          temp_v2 = FUN_00291140();
          *(unsigned int *)(param_1 + 0xfbc) = temp_v2;
          if ((*(char *)(param_1 + 0x18) != '\0') && (temp_v0 = FUN_00291140(), temp_v0 == 0)) {
            *(unsigned char *)(param_1 + 0xd55) = 1;
            FUN_0029cee4(0);
          }
          FUN_002f61c4();
          *(unsigned int *)(param_1 + 4) = 0xb;
          *(unsigned int *)(param_1 + 8) = 0;
        }
      }
    }
    return;
  }
  if (*(char *)(param_1 + 0x18) != '\0') {
    FUN_00235744(0);
    temp_v2 = FUN_00297674();
    switch(temp_v2) {
    case 0:
      FUN_002638dc();
      *(unsigned int *)(param_1 + 4) = 7;
      *(unsigned int *)(param_1 + 8) = 0;
      break;
    case 1:
      temp_v0 = FUN_00248728();
      if (temp_v0 != 0) {
        FUN_0029cee4(0);
      }
      FUN_002638dc();
      *(unsigned int *)(param_1 + 4) = 8;
      *(unsigned int *)(param_1 + 8) = 0;
      break;
    case 2:
      temp_v0 = FUN_00248728();
      if (temp_v0 != 0) {
        FUN_0029cee4(0);
      }
      FUN_002638dc();
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 4) = 9;
      break;
    case 3:
      temp_v0 = FUN_00248728();
      if (temp_v0 != 0) {
        FUN_0029cee4(0);
      }
      FUN_002638dc();
      *(unsigned int *)(param_1 + 4) = 10;
      *(unsigned int *)(param_1 + 8) = 0;
      FUN_0029cee4(0);
      break;
    case 0xffffffff:
      temp_v0 = FUN_00248728();
      if (temp_v0 != 0) {
        FUN_0029cee4(0);
      }
      FUN_0023554c();
      *(unsigned int *)(param_1 + 4) = 0xf;
      *(unsigned int *)(param_1 + 8) = 0;
    }
    temp_v0 = FUN_00297674();
  }
  else {
    FUN_00235744(0);
    temp_v0 = FUN_00297674();
    if (temp_v0 != -1) {
      if (temp_v0 != 0) {
        if (temp_v0 != 1) {
          if (temp_v0 == 2) {
            FUN_002638dc();
            *(unsigned int *)(param_1 + 4) = 10;
            *(unsigned int *)(param_1 + 8) = 0;
          }
        }
        else {
          FUN_002638dc();
          *(unsigned int *)(param_1 + 4) = 9;
          *(unsigned int *)(param_1 + 8) = 0;
        }
      }
      else {
        FUN_002638dc();
        *(unsigned int *)(param_1 + 4) = 8;
        *(unsigned int *)(param_1 + 8) = 0;
      }
    }
    else {
      *(unsigned int *)(param_1 + 8) = 0;
      *(unsigned int *)(param_1 + 4) = 0xf;
      FUN_0023554c();
    }
    temp_v0 = FUN_00297674();
  }
  if (temp_v0 != -1) {
    temp_v2 = FUN_00297674();
    *(unsigned int *)(param_1 + 0xfbc) = temp_v2;
    return;
  }
  *(unsigned int *)(param_1 + 0xfbc) = 0;
  return;
}
