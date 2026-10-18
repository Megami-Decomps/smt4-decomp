/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a2e8` (_code @ 0x28a2e8, 0x244 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} param_1_stack;

extern int DAT_0057f290; /* 0x57f290 */

/* Supplied declaration required: FUN_001641c4. */
/* Supplied declaration required: FUN_001643b4. */
extern unsigned int FUN_00187180(unsigned int, unsigned int);
extern unsigned int FUN_00192748(unsigned int);
extern int FUN_00192798(void);
/* Supplied declaration required: FUN_001b4a90. */
/* Supplied declaration required: FUN_00203b40. */
extern int FUN_0026140c(void);
extern int FUN_002a4860(void);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002a4964. */
extern int FUN_002c2c68(int);
extern int FUN_004813bc(void);


void FUN_0028a2e8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  unsigned int temp_v8;
  unsigned int temp_v9;
  int temp_v10;
  int temp_v11;
  
  temp_v0 = DAT_0057f290;
  temp_v2 = FUN_0026140c();
  temp_v3 = temp_v0 + 0x4fc;
  temp_v4 = FUN_002a4860();
  temp_v5 = FUN_002a4894(temp_v3);
  temp_v10 = 0;
  temp_v11 = 0;
  FUN_001b4a90(temp_v0 + 0x927c,0x40,0xffffffff);
  temp_v9 = 0;
  do {
    temp_v6 = FUN_00187180(0x24,0);
    temp_v7 = FUN_00192798();
    temp_v8 = FUN_00192748(temp_v6);
    if ((temp_v9 >= temp_v8) || (*(char *)(temp_v7 + temp_v9 * 0x94 + 1) != '\x02')) {
      temp_v6 = FUN_00187180(0x24,0);
      temp_v7 = FUN_00192798();
      temp_v8 = FUN_00192748(temp_v6);
      if ((temp_v8 <= temp_v9) ||
         ((*(short *)(temp_v7 + temp_v9 * 0x94 + 4) == 0 || (temp_v7 = FUN_004813bc(), temp_v7 != 0)))) {
        temp_v7 = temp_v10 * 4;
        temp_v10 = temp_v10 + 1;
        *(unsigned int *)(temp_v0 + temp_v7 + 0x927c) = temp_v9;
      }
    }
    else {
      *(unsigned int *)(temp_v0 + temp_v10 * 4 + 0x927c) = temp_v9;
      temp_v10 = temp_v10 + 1;
      if (*(char *)(temp_v2 + temp_v11 + 0x30) == '\0') break;
      temp_v11 = temp_v11 + 1;
    }
    temp_v9 = temp_v9 + 1;
  } while ((int)temp_v9 < 0x10);
  FUN_00203b40(temp_v3,temp_v10,8,1,0,1);
  FUN_002a4964(temp_v3,temp_v5 + temp_v4);
  if (param_1 != 0) {
    temp_v2 = 0;
    do {
      *(unsigned short *)(temp_v0 + temp_v2 * 2 + 0x438) = 0xffff;
      FUN_001641c4();
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 8);
    *(unsigned short *)(temp_v0 + 0x476) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x472) = 0xffff;
    *(unsigned short *)(temp_v0 + 0x474) = 0xffff;
    FUN_001641c4();
    FUN_001641c4();
    FUN_001641c4();
    temp_v2 = 0;
    do {
      temp_v4 = FUN_002c2c68(temp_v3);
      if (temp_v4 <= temp_v2) break;
      temp_v1 = FUN_001643b4(0x1a,temp_v2 + 0xa9);
      temp_v4 = temp_v2 * 2;
      temp_v2 = temp_v2 + 1;
      *(unsigned short *)(temp_v0 + temp_v4 + 0x438) = temp_v1;
    } while (temp_v2 < 8);
    temp_v1 = FUN_001643b4(0x1a,0x1f0);
    *(unsigned short *)(temp_v0 + 0x476) = temp_v1;
    temp_v1 = FUN_001643b4(0x1a,0x1ee);
    *(unsigned short *)(temp_v0 + 0x472) = temp_v1;
    temp_v1 = FUN_001643b4(0x1a,0x1ef);
    *(unsigned short *)(temp_v0 + 0x474) = temp_v1;
  }
  return;
}
