/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8e58` (_code @ 0x3b8e58, 0x3bc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003b9218; /* 0x3b9218 */
extern unsigned char LAB_003b9220; /* 0x3b9220 */
extern int DAT_0044cfb8; /* 0x44cfb8 */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0022afc4. */
/* Supplied declaration required: FUN_0022b03c. */
/* Supplied declaration required: FUN_0022b064. */
extern int FUN_0022b14c(int);
extern int FUN_0022b238(int, int);
/* Supplied declaration required: FUN_0022b244. */
/* Supplied declaration required: FUN_0022b6c4. */
/* Supplied declaration required: FUN_00234f04. */
/* Supplied declaration required: FUN_0023d344. */
/* Supplied declaration required: FUN_002636d0. */
/* Supplied declaration required: FUN_0027e774. */
/* Supplied declaration required: FUN_0027e7b4. */
extern int FUN_002903f0(void);
extern unsigned int FUN_00290d74(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00295ba4. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_0029ee6c. */
/* Supplied declaration required: FUN_002a71fc. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_003419cc. */
/* Supplied declaration required: FUN_003b8404. */


void FUN_003b8e58(int param_1)

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
              FUN_002a71fc(1);
              FUN_0022b064(param_1);
              FUN_0022b03c(param_1 + 0x9c);
              FUN_0022b6c4(param_1 + 0x9c);
              *(unsigned char *)(param_1 + 0x6cc) = 0;
              temp_v1 = 0x28;
              DAT_0044cfb8 = 0;
            }
            else {
              FUN_002a71fc(1);
              if ((*(char *)(*(int *)(param_1 + 0xd60) + 0x7c) != '\0') &&
                 (temp_v1 = FUN_002903f0(), temp_v1 != 0)) {
                FUN_00296f4c(*(unsigned int *)(param_1 + 0xd9c),0x34);
                if (*(char *)(param_1 + 0x6cc) == '\0') {
                  *(unsigned char *)(param_1 + 0x6cc) = 1;
                }
                FUN_002b8838(0x90);
                FUN_0029ee6c(0,0x323232ff);
                temp_v1 = 0x1e;
              }
              else {
                if (*(char *)(param_1 + 0xe58) != '\0') {
                  temp_v1 = FUN_0022b238(param_1 + 0x9c,(int)*(short *)(param_1 + 0x4c));
                  puVar4 = (unsigned int *)(param_1 + 0xe5c);
                  if (!(*(short *)(param_1 + 0x3c) == 4 || *(short *)(param_1 + 0x3c) == 3)) {
                    FUN_0022afc4(*(unsigned int *)(param_1 + 0xe5c),(int)*(short *)(temp_v1 + 0x28),
                                 (int)*(char *)(temp_v1 + 0x2a));
                  }
                  else {
                    temp_v0 = *(char *)(temp_v1 + 0x2a);
                    if (!(temp_v0 == '\0' || temp_v0 == '\x06')) {
                      FUN_0022afc4(*(unsigned int *)(param_1 + 0xe5c),(int)*(short *)(temp_v1 + 0x28));
                      FUN_0022b244(*puVar4,0);
                      temp_v2 = *puVar4;
                    }
                    else {
                      FUN_0023d344(*(unsigned int *)(param_1 + 0xe5c));
                      FUN_0022afc4(*puVar4,(int)*(short *)(temp_v1 + 0x28),
                                   (int)*(char *)(temp_v1 + 0x2a));
                      FUN_003419cc(*puVar4,&LAB_003b9220);
                      FUN_0022b244(*puVar4,1);
                      temp_v2 = *puVar4;
                    }
                    FUN_00234f04(temp_v2,temp_v0 != '\0' && temp_v0 != '\x06');
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
          temp_v1 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd74));
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
        FUN_00295ba4(0);
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
      FUN_002be624(temp_v3,&LAB_003b9218,*(int *)(param_1 + 0xd60) + 0x6c);
      temp_v2 = FUN_00290d74(*(unsigned int *)(param_1 + 0xd6c),temp_v3);
      FUN_002a71fc(0);
      FUN_002b8838(0x90);
      FUN_00296f4c(*(unsigned int *)(param_1 + 0xd74),temp_v2);
      *(unsigned char *)(param_1 + 0x6cc) = 1;
      temp_v1 = *(int *)(param_1 + 0x2c) + 1;
      *(int *)(param_1 + 0x2c) = temp_v1;
      return;
    }
  }
  else {
    if (temp_v1 == 0x1e) {
      FUN_002a71fc(0);
      temp_v1 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd9c));
      if (temp_v1 != 2) {
        return;
      }
      *(unsigned int *)(param_1 + 0x2c) = 0x1f;
      FUN_0022b064(param_1);
      FUN_0022b03c(param_1 + 0x9c);
      FUN_0022b6c4(param_1 + 0x9c);
      *(unsigned char *)(param_1 + 0x6cc) = 0;
      DAT_0044cfb8 = 0;
      FUN_002636d0(1);
      FUN_0027e774(0);
      FUN_0027e7b4(*(unsigned int *)(param_1 + 0xd80),
                   *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
      return;
    }
    if (temp_v1 == 0x1f) {
      temp_v1 = FUN_0022b14c(param_1 + 0x9c);
      if (temp_v1 == 0) {
        return;
      }
      FUN_002a71fc(1);
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
      FUN_003b8404(param_1,*(unsigned int *)(param_1 + 0xd60));
      return;
    }
    temp_v1 = FUN_0022b14c(param_1 + 0x9c);
    if (temp_v1 == 0) {
      return;
    }
  }
  *(unsigned int *)(param_1 + 0x28) = 5;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  FUN_0027e774(0);
  FUN_0027e7b4(*(unsigned int *)(param_1 + 0xd80),*(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
  DAT_0044cfb8 = 0;
  *(unsigned char *)(param_1 + 0x6ce) = 0;
  return;
}
