/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f2d8` (_code @ 0x19f2d8, 0x6a4 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp128; /* 0x128: local_128 */
} void_stack;

extern unsigned char LAB_0019f6cc; /* 0x19f6cc */
extern unsigned char LAB_0019f6e4; /* 0x19f6e4 */
extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_00433158; /* 0x433158 */
extern unsigned int *DAT_0043e0d0; /* 0x43e0d0 */
extern unsigned int DAT_004937c4; /* 0x4937c4 */
extern unsigned int DAT_004937c8; /* 0x4937c8 */
extern unsigned char DAT_004937cc; /* 0x4937cc */
extern unsigned int DAT_0049f924; /* 0x49f924 */
extern int DAT_0049f930; /* 0x49f930 */
extern unsigned int DAT_0049f970; /* 0x49f970 */
extern signed char DAT_0049fc14; /* 0x49fc14 */
extern unsigned int DAT_0049fc18; /* 0x49fc18 */
extern unsigned int DAT_0049fc1c; /* 0x49fc1c */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
extern int FUN_0019dfbc(unsigned int);
extern int FUN_0027375c(int);
/* Supplied declaration required: FUN_00289654. */
/* Supplied declaration required: FUN_00289770. */
/* Supplied declaration required: FUN_002897dc. */
extern char *FUN_002897fc(void);
/* Supplied declaration required: FUN_00289810. */
/* Supplied declaration required: FUN_00289870. */
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_00289984. */
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00289a18. */
extern int FUN_00289a28(void);
/* Supplied declaration required: FUN_00289a38. */
extern int FUN_00289a48(void);
/* Supplied declaration required: FUN_00289a58. */
extern unsigned int FUN_00289ac0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_00289f00. */
extern int FUN_00289fc0(void);
/* Supplied declaration required: FUN_00289fdc. */
/* Supplied declaration required: FUN_0028a04c. */
extern int FUN_0028a0bc(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_0028df0c. */
extern int FUN_0029066c(void);
extern int FUN_00291018(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002c0128. */
extern int FUN_002c1f28(void);
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c59b8. */
extern unsigned int FUN_002c5e2c(unsigned char *);
/* Supplied declaration required: FUN_002e1fb4. */
/* Supplied declaration required: FUN_002f5988. */
/* Supplied declaration required: FUN_0031bfcc. */
/* Supplied declaration required: FUN_0031ecb0. */


unsigned int FUN_0019f2d8(void)

{
/* irregular: 33 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  char *pcVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char temp_v7 [128];
  unsigned char temp_v8 [132];
  
  puVar2 = DAT_0043e0d0;
  if ((*(unsigned int *)(DAT_00432fc8 + 0x754) & 4) != 0 || (*(unsigned int *)(DAT_00432fc8 + 0x754) & 8) != 0) {
    return 0;
  }
  temp_v3 = DAT_0043e0d0[2];
  if (temp_v3 == 0x5f) {
    temp_v2 = FUN_00289924();
    temp_v3 = DAT_00432fc8;
    if (temp_v2 == 0) {
      return 0;
    }
    temp_v4 = *(unsigned int *)(DAT_00432fc8 + 0x754);
    if ((temp_v4 & 4) != 0 || (temp_v4 & 8) != 0) {
      return 0;
    }
    *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v4 & 0xffffff8f;
    FUN_00289870(temp_v3 + 0xa8,0);
    puVar2[2] = 0x60;
    return 0;
  }
  if (temp_v3 < 0x5f) {
    if (temp_v3 == 0) {
      *(unsigned char *)((int)DAT_0043e0d0 + 0x22) = 0;
      temp_v1 = DAT_004937c4;
      puVar2[5] = DAT_004937c4;
      puVar2[6] = DAT_004937c8;
      FUN_002be7fc(temp_v7,&LAB_0019f6cc,temp_v1,temp_v1);
      FUN_002be7fc(temp_v8,&LAB_0019f6e4,puVar2[5],puVar2[5]);
      temp_v3 = FUN_0028a0bc(DAT_00433158,puVar2[5],0);
      if (temp_v3 != 0) {
        temp_v3 = DAT_00433158;
        FUN_0028a04c(DAT_00433158,puVar2[5],0);
        puVar2[0xb] = temp_v3;
        temp_v3 = DAT_00433158;
        FUN_00289fdc(DAT_00433158,puVar2[5],0);
        puVar2[0xd] = temp_v3;
        if (puVar2[0xb] == 0 || temp_v3 == 0) {
          puVar2[2] = 0x5f;
          temp_v3 = FUN_002c2bd0(0);
          if (temp_v3 == 3) {
            FUN_002a0678(0,5);
          }
          temp_v3 = FUN_002c2bd0(1);
          if (temp_v3 == 3) {
            FUN_002a0678(1,5);
          }
          temp_v3 = FUN_00289fc0();
          if (temp_v3 == 0) {
            return 0;
          }
          FUN_00289f00(1);
          return 0;
        }
      }
      else {
        temp_v1 = FUN_002c5e2c(temp_v7);
        puVar2[0xb] = temp_v1;
        temp_v1 = FUN_002c5e2c(temp_v8);
        puVar2[0xd] = temp_v1;
      }
      FUN_00289b4c();
      FUN_0028d974();
      FUN_00289ae8();
      FUN_002b8b78(0x90);
      temp_v3 = puVar2[0xb];
      FUN_002972f8(temp_v3,puVar2[0xd]);
      puVar2[0xc] = temp_v3;
      *(unsigned int *)(temp_v3 + 0x108) = 2;
      temp_v3 = puVar2[6];
      if (temp_v3 == -1) {
        temp_v3 = FUN_00291018(puVar2[0xb],&DAT_004937cc);
        puVar2[6] = temp_v3;
      }
      FUN_002971e4(puVar2[0xc],temp_v3);
      puVar2[7] = 0;
      temp_v1 = FUN_00289ac0(puVar2[0xc],puVar2[6]);
      temp_v5 = puVar2[5];
      FUN_00289a58(temp_v5,temp_v1);
      puVar2[2] = puVar2[2] + 1;
      puVar2[7] = temp_v5;
      return 0;
    }
    if (temp_v3 != 1) {
      if (temp_v3 == 10) {
        return 0;
      }
      if (temp_v3 != 0xb) {
        return 0;
      }
      temp_v3 = FUN_00289924();
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v1 = 1;
    }
    else {
      temp_v3 = FUN_002c2bd0(0);
      if (((temp_v3 != 3) || (temp_v3 = FUN_002c2bd0(1), temp_v3 != 3)) &&
         (temp_v3 = FUN_00289a48(), temp_v3 != 0)) {
        FUN_00289a38(0);
      }
      temp_v3 = FUN_00289a28();
      if (temp_v3 != 0) {
        FUN_00289a18(0);
        FUN_00289a38(0);
      }
      temp_v3 = FUN_00289a48();
      if ((temp_v3 == 0) || (temp_v3 = FUN_002c1f28(), temp_v3 != 0)) {
        temp_v3 = FUN_0019dfbc(puVar2[0xc]);
        if (temp_v3 != 2) {
          return 0;
        }
        if (puVar2[7] != 0) {
          FUN_002899c4(puVar2[7],1);
        }
        FUN_00291be8();
        FUN_00291a5c();
        FUN_002c0128();
        FUN_00289984();
        FUN_002f5988();
        FUN_002e1fb4();
        FUN_0031bfcc();
        FUN_0031ecb0();
        if (puVar2[0xc] != 0) {
          FUN_002a755c();
          puVar2[0xc] = 0;
        }
        if (puVar2[0xb] != 0) {
          FUN_002c4360();
          puVar2[0xb] = 0;
        }
        if (puVar2[0xd] != 0) {
          FUN_002c4360();
          puVar2[0xd] = 0;
        }
        puVar2[2] = 99;
        FUN_0028df0c(0);
        return 0;
      }
      FUN_002a0678(0,5);
      FUN_002a0678(1,5);
      FUN_00289a38(0);
      temp_v1 = 0xb;
    }
    puVar2[2] = temp_v1;
    return 0;
  }
  if (temp_v3 == 0x60) {
    temp_v3 = FUN_0027375c(DAT_00432fc8 + 0xa8);
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_00289810(DAT_00432fc8 + 0xa8);
    temp_v3 = FUN_0029066c();
    if (temp_v3 == 0) {
      temp_v1 = 0x62;
    }
    else {
      temp_v1 = 0x61;
    }
    puVar2[2] = temp_v1;
    if (puVar2[0xb] != 0) {
      FUN_002c4360();
      puVar2[0xb] = 0;
    }
    if (puVar2[0xd] == 0) {
      return 0;
    }
    FUN_002c4360();
    puVar2[0xd] = 0;
    return 0;
  }
  if (temp_v3 != 0x61) {
    if (temp_v3 != 0x62) {
      if (temp_v3 != 99) {
        return 0;
      }
      FUN_002c45b8(*DAT_0043e0d0,0);
      temp_v3 = DAT_00432fc8;
      *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
      if (*(char *)(temp_v3 + 0xc0) == '\0') {
        return 0;
      }
      *(unsigned char *)(temp_v3 + 0xc0) = 0;
      FUN_00289654(temp_v3 + 0xa8,1);
      return 0;
    }
    if (DAT_0049fc14 != '\0') {
      if (DAT_0049f930 == 1) {
        FUN_002c59b8(6,0);
      }
      if (DAT_0049f930 == 2) {
        FUN_002c59b8(8,0);
      }
      if (DAT_0049f930 == 3) {
        temp_v6 = romwright_piece_2_2((short)DAT_0049fc1c,(short)DAT_0049fc18 - 200);
        FUN_002c59b8(0xe,&temp_v6,4);
      }
    }
  }
  else {
    pcVar5 = (char *)FUN_002897fc();
    temp_v0 = *pcVar5;
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          temp_v6 = (unsigned int)(unsigned char)pcVar5[1];
          FUN_002c59b8(0xe,&temp_v6,4);
        }
      }
      else {
        FUN_002897dc((unsigned char)pcVar5[1] + 100,pcVar5[2],0xffffffff);
        DAT_0049f924 = 0xffffffff;
        temp_v1 = 8;
        FUN_002c59b8(temp_v1,0);
      }
    }
    else {
      FUN_002897dc(pcVar5[1],pcVar5[2],pcVar5[3]);
      temp_v1 = 6;
      FUN_002c59b8(temp_v1,0);
    }
    DAT_0049fc14 = '\0';
    DAT_0049f970 = 0;
    FUN_00289770();
  }
  FUN_002c45b8(*DAT_0043e0d0,0);
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
  puVar2[2] = 100;
  return 0;
}
