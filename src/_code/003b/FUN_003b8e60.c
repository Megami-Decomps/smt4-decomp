/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b8e60` (_code @ 0x3b8e60, 0x1c0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_003b9024; /* 0x3b9024 */
extern unsigned char LAB_003b9034; /* 0x3b9034 */
extern unsigned char LAB_003b9048; /* 0x3b9048 */
extern unsigned char LAB_003b9060; /* 0x3b9060 */
extern int DAT_00432fc8; /* 0x432fc8 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_0022b1f8. */
extern int FUN_0022b2e0(int);
extern unsigned short FUN_002337a0(int);
/* Supplied declaration required: FUN_0027e9e4. */
/* Supplied declaration required: FUN_0027ea24. */
/* Supplied declaration required: FUN_00291018. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002b8b78. */
extern unsigned int FUN_002c5e2c(unsigned char *);


void FUN_003b8e60(int param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v1 = FUN_0022b2e0(param_1 + 0x9c);
  temp_v2 = FUN_0019dfbc(*(unsigned int *)(param_1 + 0xd74));
  if ((temp_v2 == 2) && (temp_v1 != 0)) {
    FUN_0022b1f8(param_1);
    temp_v0 = FUN_002337a0(param_1 + 0x9c);
    *(unsigned short *)(param_1 + 0x4c) = temp_v0;
    if (*(char *)(DAT_00432fc8 + 0xc1) == '\0') {
      temp_v1 = *(int *)(param_1 + 0xdb0);
      if (temp_v1 != 1) {
        if (temp_v1 == 2) {
          *(unsigned int *)(param_1 + 0x28) = 9;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          FUN_002b8b78(0x9e);
          temp_v3 = FUN_00291018(*(unsigned int *)(param_1 + 0xd94),&LAB_003b9024);
          FUN_002971e4(*(unsigned int *)(param_1 + 0xd9c),temp_v3);
          *(unsigned int *)(param_1 + 0xdb0) = 0;
          return;
        }
        if (temp_v1 == 3) {
          *(unsigned int *)(param_1 + 0x28) = 0xb;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          temp_v3 = FUN_002c5e2c(&LAB_003b9034);
          *(unsigned int *)(param_1 + 0xda0) = temp_v3;
          temp_v3 = FUN_002c5e2c(&LAB_003b9048);
          *(unsigned int *)(param_1 + 0xda4) = temp_v3;
          temp_v1 = *(int *)(param_1 + 0xda0);
          FUN_002972f8(temp_v1,temp_v3);
          *(int *)(param_1 + 0xda8) = temp_v1;
          *(unsigned int *)(temp_v1 + 0x108) = 3;
          temp_v3 = FUN_00291018(*(int *)(param_1 + 0xda0),&LAB_003b9060);
          FUN_002971e4(*(unsigned int *)(param_1 + 0xda8),temp_v3);
          *(unsigned int *)(param_1 + 0xdb0) = 0;
          return;
        }
        if (temp_v1 != 4) {
          FUN_0027e9e4(0);
          FUN_0027ea24(*(unsigned int *)(param_1 + 0xd80),
                       *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
          *(unsigned int *)(param_1 + 0x28) = 5;
          *(unsigned int *)(param_1 + 0x2c) = 0;
          return;
        }
        FUN_0027e9e4(0);
        FUN_0027ea24(*(unsigned int *)(param_1 + 0xd80),
                     *(unsigned char *)(*(int *)(param_1 + 0xd5c) + 0x3f));
        *(unsigned int *)(param_1 + 0x28) = 5;
        *(unsigned int *)(param_1 + 0x2c) = 0;
      }
      else {
        *(unsigned int *)(param_1 + 0x28) = 9;
        *(unsigned int *)(param_1 + 0x2c) = 0;
        temp_v3 = FUN_00291018(*(unsigned int *)(param_1 + 0xd94),&LAB_003b9024);
        FUN_002971e4(*(unsigned int *)(param_1 + 0xd9c),temp_v3);
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
