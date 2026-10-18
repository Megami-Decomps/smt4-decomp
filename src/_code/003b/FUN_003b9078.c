/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b9078` (_code @ 0x3b9078, 0x3bc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003b9438; /* 0x3b9438 */
extern unsigned char LAB_003b9440; /* 0x3b9440 */
extern int DAT_0044cfb8; /* 0x44cfb8 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0022b158. */
/* Supplied declaration required: FUN_0022b1d0. */
/* Supplied declaration required: FUN_0022b1f8. */
extern int FUN_0022b2e0(int);
extern int FUN_0022b3cc(int, int);
/* Supplied declaration required: FUN_0022b3d8. */
/* Supplied declaration required: FUN_0022b858. */
/* Supplied declaration required: FUN_0023509c. */
/* Supplied declaration required: FUN_0023d4a0. */
/* Supplied declaration required: FUN_002638fc. */
/* Supplied declaration required: FUN_0027e9e4. */
/* Supplied declaration required: FUN_0027ea24. */
extern int FUN_00290694(void);
extern unsigned int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00295e48. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a7540. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_00341c04. */
/* Supplied declaration required: FUN_003b8624. */


void FUN_003b9078(int param_1)

{
/* irregular: 18 native warning(s); review required */
  char temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int *puVar4;
  unsigned char temp_v3 [36];
  
  temp_v1 = *(int *)(param_1 + 0x2c);
  if (temp_v1 == 0x15) {
    temp_v1 = *(int *)(param_1 + 0x38) + 1;
    *(int *)(param_1 + 0x38) = temp_v1;
    if (temp_v1 >= 0xf) {
      *(unsigned int *)(param_1 + 0x2c) = 99;
    }
    return;
  }
  if (temp_v1 < 0x16) {
    if (temp_v1 != 10) {
      if (temp_v1 >= 10) {
        if (temp_v1 != 0xb) {
          if (temp_v1 == 0x14) {
            if (DAT_0044cfb8 != 0) {
              FUN_002a7540(1);
              FUN_0022b1f8(param_1);
              FUN_0022b1d0(param_1 + 0x9c);
              FUN_0022b858(param_1 + 0x9c);
              *(unsigned char *)(param_1 + 0x6cc) = 0;
              temp_v1 = 0x28;
              DAT_0044cfb8 = 0;
            }
            else {
              FUN_002a7540(1);
              if ((*(char *)(*(int *)(param_1 + 0xd60) + 0x7c) != '\0') &&
                 (temp_v1 = FUN_00290694(), temp_v1 != 0)) {
                FUN_002971e4(*(unsigned int *)(param_1 + 0xd9c),0x34);
                if (*(char *)(param_1 + 0x6cc) == '\0') {
                  *(unsigned char *)(param_1 + 0x6cc) = 1;
                }
                FUN_002b8b78(0x90);
                FUN_0029f10c(0,0x323232ff);
                temp_v1 = 0x1e;
              }
              else {
                if (*(char *)(param_1 + 0xe58) != '\0') {
                  temp_v1 = FUN_0022b3cc(param_1 + 0x9c,(int)*(short *)(param_1 + 0x4c));
                  puVar4 = (unsigned int *)(param_1 + 0xe5c);
                  if (!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) {
                    FUN_0022b158(*(unsigned int *)(param_1 + 0xe5c),(int)*(short *)(temp_v1 + 0x28),
                                 (int)*(char *)(temp_v1 + 0x2a));
                  }
                  else {
                    temp_v0 = *(char *)(temp_v1 + 0x2a);
                    if (!(temp_v0 == '\0' || temp_v0 == '\x06')) {
                      FUN_0022b158(*(unsigned int *)(param_1 + 0xe5c),(int)*(short *)(temp_v1 + 0x28));
                      FUN_0022b3d8(*puVar4,0);
                      temp_v2 = *puVar4;
                    }
                    else {
                      FUN_0023d4a0(*(unsigned int *)(param_1 + 0xe5c));
                      FUN_0022b158(*puVar4,(int)*(short *)(temp_v1 + 0x28),
                                   (int)*(char *)(temp_v1 + 0x2a));
                      FUN_00341c04(*puVar4,&LAB_003b9440);
                      FUN_0022b3d8(*puVar4,1);
                      temp_v2 = *puVar4;
                    }
                    FUN_0023509c(temp_v2,temp_v0 != '\0' && temp_v0 != '\x06');
                  }
                }
                *(unsigned int *)(param_1 + 0x38) = 0;
                temp_v1 = *(int *)(param_1 + 0x2c) + 1;
              }
            }
            *(int *)(param_1 + 0x2c) = temp_v1;
            return;
          }
        }
        else {
          temp_v1 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xd74));
          if (temp_v1 == 2) {
            *(unsigned int *)(param_1 + 0x2c) = 0x14;
            return;
          }
        }
        return;
      }
      if (temp_v1 == 0) {
        temp_v1 = 1;
      }
      else {
        if (temp_v1 != 1) {
          return;
        }
        DAT_0044cfb8 = 0;
        FUN_00295e48(0);
        temp_v1 = 10;
      }
      *(int *)(param_1 + 0x2c) = temp_v1;
      return;
    }
    else if (DAT_0044cfb8 == 0) {
      if (*(char *)(*(int *)(param_1 + 0xd60) + 0x6c) == '0') {
        *(unsigned int *)(param_1 + 0x2c) = 0x14;
        return;
      }
      FUN_002be7fc(temp_v3,&LAB_003b9438,*(int *)(param_1 + 0xd60) + 0x6c);
      temp_v2 = FUN_00291018(*(unsigned int *)(param_1 + 0xd6c),temp_v3);
      FUN_002a7540(0);
      FUN_002b8b78(0x90);
      FUN_002971e4(*(unsigned int *)(param_1 + 0xd74),temp_v2);
      *(unsigned char *)(param_1 + 0x6cc) = 1;
      temp_v1 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v1;
      return;
    }
  }
  else {
    if (temp_v1 == 0x1e) {
      FUN_002a7540(0);
      temp_v1 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xd9c));
      if (temp_v1 != 2) {
        return;
      }
      *(unsigned int *)(param_1 + 0x2c) = 0x1f;
      FUN_0022b1f8(param_1);
      FUN_0022b1d0(param_1 + 0x9c);
      FUN_0022b858(param_1 + 0x9c);
      *(unsigned char *)(param_1 + 0x6cc) = 0;
      DAT_0044cfb8 = 0;
      FUN_002638fc(1);
      FUN_0027e9e4(0);
      FUN_0027ea24(*(unsigned int *)(param_1 + 0xd80),
                   *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
      return;
    }
    if (temp_v1 == 0x1f) {
      temp_v1 = FUN_0022b2e0(param_1 + 0x9c);
      if (temp_v1 == 0) {
        return;
      }
      FUN_002a7540(1);
      *(unsigned int *)(param_1 + 0x28) = 5;
      *(unsigned int *)(param_1 + 0x2c) = 0;
      DAT_0044cfb8 = 0;
      *(unsigned char *)(param_1 + 0x6ce) = 0;
      return;
    }
    if (temp_v1 != 0x28) {
      if (temp_v1 != 99) {
        return;
      }
      FUN_003b8624(param_1,*(unsigned int *)(param_1 + 0xd60));
      return;
    }
    temp_v1 = FUN_0022b2e0(param_1 + 0x9c);
    if (temp_v1 == 0) {
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x28) = 5;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  FUN_0027e9e4(0);
  FUN_0027ea24(*(unsigned int *)(param_1 + 0xd80),*(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
  DAT_0044cfb8 = 0;
  *(unsigned char *)(param_1 + 0x6ce) = 0;
  return;
}
