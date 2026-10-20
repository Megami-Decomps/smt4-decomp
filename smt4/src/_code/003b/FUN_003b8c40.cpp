/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8c40` (_code @ 0x3b8c40, 0x1c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022b064(int);
int FUN_0027e774(int);
int FUN_0027e7b4(unsigned int, int);
int FUN_00290d74(...);
int FUN_00296f4c(unsigned int, unsigned int);
int FUN_00297060(int, unsigned int);
int FUN_002b8838(int);

extern unsigned char LAB_003b8e04; /* 0x3b8e04 */
extern unsigned char LAB_003b8e14; /* 0x3b8e14 */
extern unsigned char LAB_003b8e28; /* 0x3b8e28 */
extern unsigned char LAB_003b8e40; /* 0x3b8e40 */
extern int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_0019e0c0(unsigned int);
/* Supplied declaration required: FUN_0022b064. */
extern int FUN_0022b14c(int);
extern unsigned short FUN_0023360c(int);
/* Supplied declaration required: FUN_0027e774. */
/* Supplied declaration required: FUN_0027e7b4. */
/* Supplied declaration required: FUN_00290d74. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002b8838. */
extern unsigned int FUN_002c5c04(unsigned char *);


void FUN_003b8c40(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = FUN_0022b14c(param_1 + 0x9c);
  temp_v2 = FUN_0019e0c0(*(unsigned int *)(param_1 + 0xd74));
  if ((temp_v2 == 2) && (temp_v1 != 0)) {
    FUN_0022b064(param_1);
    temp_v0 = FUN_0023360c(param_1 + 0x9c);
    *(unsigned short *)(param_1 + 0x4c) = temp_v0;
    if (*(char *)(DAT_00432fc8 + 0xc1) == '\0') {
      temp_v1 = *(int *)(param_1 + 0xdb0);
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          *(unsigned int *)(param_1 + 0x28) = 9;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          FUN_002b8838(0x9e);
          temp_v3 = FUN_00290d74(*(unsigned int *)(param_1 + 0xd94),&LAB_003b8e04);
          FUN_00296f4c(*(unsigned int *)(param_1 + 0xd9c),temp_v3);
          *(unsigned int *)(param_1 + 0xdb0) = 0;
          return;
        }
        if (temp_v1 == 3) {
          *(unsigned int *)(param_1 + 0x28) = 0xb;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          temp_v3 = FUN_002c5c04(&LAB_003b8e14);
          *(unsigned int *)(param_1 + 0xda0) = temp_v3;
          temp_v3 = FUN_002c5c04(&LAB_003b8e28);
          *(unsigned int *)(param_1 + 0xda4) = temp_v3;
          temp_v1 = *(int *)(param_1 + 0xda0);
          FUN_00297060(temp_v1,temp_v3);
          *(int *)(param_1 + 0xda8) = temp_v1;
          *(unsigned int *)(temp_v1 + 0x108) = 3;
          temp_v3 = FUN_00290d74(*(int *)(param_1 + 0xda0),&LAB_003b8e40);
          FUN_00296f4c(*(unsigned int *)(param_1 + 0xda8),temp_v3);
          *(unsigned int *)(param_1 + 0xdb0) = 0;
          return;
        }
        if (temp_v1 != 4) {
          FUN_0027e774(0);
          FUN_0027e7b4(*(unsigned int *)(param_1 + 0xd80),
                       *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
          *(unsigned int *)(param_1 + 0x28) = 5;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          return;
        }
        FUN_0027e774(0);
        FUN_0027e7b4(*(unsigned int *)(param_1 + 0xd80),
                     *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
        *(unsigned int *)(param_1 + 0x28) = 5;
        *(unsigned int *)(param_1 + 0x2c) = 0;
      }
      else {
        *(unsigned int *)(param_1 + 0x28) = 9;
        *(unsigned int *)(param_1 + 0x2c) = 0;
        temp_v3 = FUN_00290d74(*(unsigned int *)(param_1 + 0xd94),&LAB_003b8e04);
        FUN_00296f4c(*(unsigned int *)(param_1 + 0xd9c),temp_v3);
      }
      *(unsigned int *)(param_1 + 0xdb0) = 0;
      return;
    }
    *(unsigned char *)(DAT_00432fc8 + 0xc1) = 0;
    *(unsigned int *)(param_1 + 0x28) = 10;
    *(unsigned int *)(param_1 + 0x2c) = 0;
  }
  return;
}

} /* extern "C" */
