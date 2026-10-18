/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010095c` (_code @ 0x10095c, 0x14a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_4: 10 slot(s), 40 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_4_stack;

extern unsigned char LAB_00100ab4; /* 0x100ab4 */
extern unsigned char LAB_00100ab8; /* 0x100ab8 */
extern unsigned char LAB_00100ac4; /* 0x100ac4 */
extern unsigned char DAT_0055cb48; /* 0x55cb48 */
extern unsigned char DAT_0055cbd8; /* 0x55cbd8 */
extern char *DAT_005c4bd0; /* 0x5c4bd0 */
extern int DAT_005c4bd4; /* 0x5c4bd4 */
extern int DAT_005c4bd8; /* 0x5c4bd8 */
extern char s_rwstderr_1_005c4bdc[11]; /* 0x5c4bdc */
extern unsigned char *DAT_0064bfa0; /* 0x64bfa0 */
extern unsigned int DAT_0064bfa4; /* 0x64bfa4 */
extern unsigned int DAT_0064bfa8; /* 0x64bfa8 */
extern unsigned int DAT_0064bfac; /* 0x64bfac */
extern unsigned char DAT_0064bfb0; /* 0x64bfb0 */

extern unsigned char *FUN_00100d60(char *, unsigned int);
/* Supplied declaration required: FUN_00100d88. */
extern unsigned int FUN_00100dc8(int *);
/* Supplied declaration required: FUN_002e3328. */
/* Supplied declaration required: FUN_002e3338. */
/* Supplied declaration required: FUN_002e3494. */
/* Supplied declaration required: FUN_002e3ef4. */
extern int FUN_002e3f2c(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_002e3f68. */
/* Supplied declaration required: FUN_002e3f74. */


unsigned int FUN_0010095c(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8 [4];
  int *temp_v9;
  unsigned int *temp_v10;
  unsigned char *temp_v11;
  unsigned char temp_v12 [4];
  unsigned char temp_v13 [4];
  unsigned char temp_v14 [8];
  unsigned int temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned int temp_v18;
  
  temp_v15 = param_1;
  temp_v16 = param_2;
  temp_v17 = param_3;
  temp_v18 = param_4;
  if (DAT_005c4bd0 == (char *)0x0) {
    puVar3 = (unsigned char *)FUN_00100d60(s_rwstderr_1_005c4bdc,0x3a);
    if (puVar3 != (unsigned char *)0x0) {
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
      FUN_00100d88(puVar3,&LAB_00100ab8,&DAT_005c4bd4);
      if ((puVar3 != (unsigned char *)0x1) || (DAT_005c4bd4 < 1)) {
        DAT_005c4bd4 = 1;
      }
    }
    temp_v10 = (unsigned int *)&DAT_0064bfa0;
    DAT_0064bfa4 = 0x200;
    DAT_0064bfa8 = 0;
    DAT_0064bfac = 0;
    DAT_0064bfa0 = &DAT_0055cb48;
    temp_v11 = &DAT_0064bfb0;
    temp_v2 = FUN_002e3ef4(&temp_v9,&LAB_00100ac4,temp_v14);
    temp_v3 = FUN_002e3f2c(temp_v11,temp_v2);
    FUN_002e3f68(&temp_v9);
    *(unsigned char **)(temp_v3 - 0x10) = &DAT_0055cbd8;
    temp_v2 = FUN_002e3ef4(&temp_v6,s_rwstderr_1_005c4bdc,temp_v13);
    temp_v4 = FUN_00100dc8(&temp_v5);
    DAT_005c4bd8 = (**(romwright_code **)(DAT_0064bfa0 + 0xc))(&DAT_0064bfa0,temp_v2,temp_v4);
    if ((temp_v5 != 0) &&
       (temp_v3 = *(int *)(temp_v5 + 0x1c) - 1, *(int *)(temp_v5 + 0x1c) = temp_v3, temp_v3 == 0)) {
      FUN_002e3494(*(unsigned int *)(temp_v5 + 0x18));
      FUN_002e3494(*(unsigned int *)(temp_v5 + 8));
      FUN_002e3f74(temp_v5);
      FUN_002e3328();
    }
    FUN_002e3f68(&temp_v6);
    DAT_005c4bd0 = s_rwstderr_1_005c4bdc;
  }
  temp_v1 = temp_v17;
  temp_v0 = DAT_005c4bd8;
  temp_v3 = DAT_005c4bd4;
  temp_v2 = 0;
  if (DAT_005c4bd8 != -1) {
    temp_v9 = &temp_v7;
    temp_v6 = FUN_002e3ef4(temp_v8,&LAB_00100ab4,temp_v12);
    temp_v5 = temp_v1;
    (**(romwright_code **)(DAT_0064bfa0 + 0x10))(temp_v9,&DAT_0064bfa0,temp_v0,temp_v3);
    FUN_002e3f68(temp_v8);
    if (*(int *)(temp_v7 - 4) != 0) {
      temp_v2 = temp_v15;
      FUN_002e3338(temp_v15,temp_v16,temp_v7,temp_v18);
      FUN_002e3f68(&temp_v7);
    }
    else {
      FUN_002e3f68(&temp_v7);
      temp_v2 = 0;
    }
  }
  return temp_v2;
}
