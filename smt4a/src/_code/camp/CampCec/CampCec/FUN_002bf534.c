/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf534` (_code @ 0x2bf534, 0x7cc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 5 slot(s), 18 byte(s) */
typedef struct {
    unsigned short sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_1_stack;

extern unsigned char LAB_002021c4; /* 0x2021c4 */
extern int FUN_002021cc(); /* 0x2021cc */
extern int FUN_0025cf44(); /* 0x25cf44 */
extern int FUN_00281744(); /* 0x281744 */
extern int FUN_002817ac(); /* 0x2817ac */
extern int FUN_00281814(); /* 0x281814 */
extern int FUN_002a283c(); /* 0x2a283c */
extern unsigned char LAB_002bf948; /* 0x2bf948 */
extern unsigned char LAB_002bf95c; /* 0x2bf95c */
extern unsigned char LAB_002bf970; /* 0x2bf970 */
extern unsigned char LAB_002bf988; /* 0x2bf988 */
extern unsigned char LAB_002bf9d0; /* 0x2bf9d0 */
extern unsigned char LAB_002bf9e4; /* 0x2bf9e4 */
extern int FUN_002bfd2c(); /* 0x2bfd2c */
extern int FUN_002e221c(); /* 0x2e221c */
extern int FUN_002e2284(); /* 0x2e2284 */
extern int FUN_002e2384(); /* 0x2e2384 */
extern int FUN_0031934c(); /* 0x31934c */
extern unsigned char LAB_003193a0; /* 0x3193a0 */
extern unsigned char LAB_0035a2a4; /* 0x35a2a4 */
extern int FUN_0036cfb0(); /* 0x36cfb0 */
extern unsigned char DAT_0057f110; /* 0x57f110 */
extern unsigned int *DAT_0057f114; /* 0x57f114 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_0014384c. */
/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0015155c. */
/* Supplied declaration required: FUN_00163060. */
extern int FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_0019ea64. */
extern int FUN_001ab854(void);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001acf98. */
/* Supplied declaration required: FUN_00227880. */
/* Supplied declaration required: FUN_002316c8. */
extern unsigned char FUN_002391e0(void);
/* Supplied declaration required: FUN_002804b0. */
extern unsigned int FUN_002840ac(void);
extern unsigned char FUN_002a2cf0(void);
/* Supplied declaration required: FUN_002a4664. */
/* Supplied declaration required: FUN_002a469c. */
extern unsigned char FUN_002a46b8(void);
extern unsigned char FUN_002a46d8(void);
/* Supplied declaration required: FUN_002a4aa4. */
/* Supplied declaration required: FUN_002a6480. */
/* Supplied declaration required: FUN_002c0b10. */
/* Supplied declaration required: FUN_002c0b5c. */
extern int FUN_002e3390(int);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e6dd0. */
extern int FUN_0030ef8c(unsigned char *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_00319e58. */
extern unsigned char FUN_0031cee0(void);
/* Supplied declaration required: FUN_0031f0a8. */
/* Supplied declaration required: FUN_0032e25c. */
extern unsigned int FUN_00330ab8(void);
/* Supplied declaration required: FUN_00331380. */
/* Supplied declaration required: FUN_00343cc8. */
/* Supplied declaration required: FUN_00343d04. */
extern int FUN_00345388(unsigned int);
/* Supplied declaration required: FUN_0035a074. */
/* Supplied declaration required: FUN_0037b5e0. */
/* Supplied declaration required: FUN_00387edc. */
/* Supplied declaration required: FUN_0039a0cc. */
/* Supplied declaration required: FUN_003d2d34. */
/* Supplied declaration required: FUN_003f881c. */
extern int FUN_003fd63c(unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_004310c0. */
extern int FUN_004bd340(int, unsigned int);
/* Supplied declaration required: nn_cfg_CTR_IsRestrictP2pCec. */


void FUN_002bf534(int param_1)

{
/* irregular: 2 goto(s); 43 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  unsigned char temp_v1;
  unsigned int *puVar4;
  unsigned char *puVar5;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  short *psVar11;
  int temp_v7;
  unsigned char temp_v8;
  romwright_code *temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned char *temp_v12;
  unsigned short temp_v13;
  unsigned char temp_v14 [20];
  
  if (DAT_0057f114 == (unsigned int *)0x0) {
    puVar4 = (unsigned int *)0x100;
    temp_v9 = (romwright_code *)0x1;
    FUN_00163060(0x100,0x100,0,0x1a8);
    DAT_0057f114 = puVar4;
  }
  puVar4 = DAT_0057f114;
  FUN_002e6354();
  temp_v9 = FUN_002021cc;
  temp_v10 = 0;
  puVar5 = &LAB_002bf948;
  temp_v11 = 0;
  FUN_0014e38c(&LAB_002bf948,3,0,0);
  *puVar4 = (unsigned int)puVar5;
  temp_v10 = 0;
  temp_v9 = (romwright_code *)&LAB_002021c4;
  temp_v11 = 0;
  temp_v12 = puVar5;
  FUN_0015155c(&LAB_002bf95c,0x81,0);
  temp_v12 = (unsigned char *)*puVar4;
  temp_v10 = 0;
  temp_v9 = (romwright_code *)&LAB_002021c4;
  temp_v11 = 0;
  FUN_0015155c(&LAB_002bf970,0xdd,0);
  temp_v12 = (unsigned char *)*puVar4;
  temp_v9 = FUN_0025cf44;
  temp_v10 = 0;
  temp_v11 = 0;
  FUN_0015155c(&LAB_002bf988,0xea,0);
  puVar4[0x4f] = 0xffffffff;
  puVar4[0x50] = 0;
  puVar4[0x51] = 0xffffffff;
  puVar4[0x52] = 0xffffffff;
  puVar4[0x53] = 0;
  puVar4[0x5d] = 0;
  puVar4[0x68] = 0;
  *(unsigned char *)(puVar4 + 0x69) = 0;
  if (param_1 == 0) {
    DAT_0057f110 = 0;
  }
  puVar4[2] = (unsigned int)FUN_002e2284;
  puVar4[3] = (unsigned int)&LAB_0035a2a4;
  puVar4[9] = (unsigned int)FUN_002e2384;
  puVar4[4] = (unsigned int)FUN_00281744;
  puVar4[5] = (unsigned int)FUN_002817ac;
  puVar4[6] = (unsigned int)FUN_002bfd2c;
  puVar4[7] = (unsigned int)FUN_00281814;
  puVar4[8] = (unsigned int)FUN_002e221c;
  puVar4[10] = (unsigned int)FUN_002a283c;
  puVar4[0xc] = (unsigned int)FUN_0036cfb0;
  puVar4[0xe] = (unsigned int)&LAB_003193a0;
  puVar4[0xf] = (unsigned int)FUN_0031934c;
  temp_v2 = FUN_003fd63c(0x4ca,0,1);
  puVar4[0x5a] = 0;
  nn_cfg_CTR_IsRestrictP2pCec();
  if (temp_v2 != 0) {
    puVar4[0x5a] = 1;
  }
  else {
    FUN_004310c0();
    if (temp_v2 == 0) {
      puVar4[0x5a] = 2;
    }
  }
  *(unsigned char *)(puVar4 + 0x5c) = 0;
  if (puVar4[0x5a] != 0) {
    FUN_002804b0(&LAB_002bf9d0,puVar4 + 0x39,0);
    FUN_002804b0(&LAB_002bf9e4,puVar4 + 0x3a,0);
    puVar4[0x50] = 10;
    return;
  }
  FUN_00227880();
  temp_v1 = FUN_002a2cf0();
  *(unsigned char *)(puVar4 + 0x5b) = temp_v1;
  FUN_0019ea64(0);
  *(unsigned char *)((int)puVar4 + 0x16d) = 0;
  *(unsigned char *)((int)puVar4 + 0x16e) = 1;
  *(unsigned char *)((int)puVar4 + 0x16f) = 0;
  FUN_00331380(0);
  FUN_00343d04(DAT_0057f114 + 0x2c);
  if (param_1 == 0) {
    FUN_002316c8(0);
    FUN_003d2d34(0x1000049,0,0x3c);
  }
  FUN_002804b0(&LAB_002bf9d0,puVar4 + 0x39,0);
  FUN_002804b0(&LAB_002bf9e4,puVar4 + 0x3a,0);
  FUN_0014384c(0x2e);
  FUN_001acf98(0x2e,0);
  FUN_003f881c(0x4a,0);
  temp_v2 = FUN_0018719c(0x581);
  if (temp_v2 != 0) {
    FUN_0031f0a8(4,1);
  }
  FUN_00387edc(DAT_0057f114 + 0x10);
  temp_v1 = FUN_0031cee0();
  *(unsigned char *)((int)DAT_0057f114 + 0x61) = temp_v1;
  temp_v1 = FUN_002391e0();
  *(unsigned char *)((int)DAT_0057f114 + 0x62) = temp_v1;
  temp_v1 = FUN_002a46d8();
  *(unsigned char *)((int)DAT_0057f114 + 99) = temp_v1;
  temp_v3 = FUN_002840ac();
  FUN_00343cc8(DAT_0057f114 + 0x10,temp_v3);
  FUN_002a4664(&temp_v10);
  temp_v9 = (romwright_code *)romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v9 + 2)),temp_v13);
  FUN_0035a074(DAT_0057f114 + 0x10,temp_v10,temp_v11,temp_v12);
  temp_v1 = FUN_002a46b8();
  *(unsigned char *)((int)DAT_0057f114 + 0x82) = temp_v1;
  temp_v3 = FUN_002a469c();
  FUN_0032e25c(DAT_0057f114 + 0x10,temp_v3);
  temp_v3 = FUN_00330ab8();
  DAT_0057f114[0x19] = temp_v3;
  puVar2 = DAT_0057f114;
  psVar11 = (short *)(DAT_0057f114 + 0x10);
  if (psVar11 != (short *)0x0) {
    temp_v2 = FUN_002e3390((int)DAT_0057f114 + 0x4e);
    temp_v0 = 0;
    if (temp_v2 != 0) {
      temp_v0 = *psVar11;
    }
    if (temp_v2 != 0 && temp_v0 != 0) {
      temp_v8 = *(short *)((int)puVar2 + 0x42) != 0;
      temp_v0 = 0;
      if (temp_v8) {
        temp_v0 = *(short *)(puVar2 + 0x11);
      }
      if (temp_v8 && temp_v0 != 0) {
        temp_v8 = *(short *)((int)puVar2 + 0x46) != 0;
        temp_v0 = 0;
        if (temp_v8) {
          temp_v0 = *(short *)(puVar2 + 0x12);
        }
        if (temp_v8 && temp_v0 != 0) {
          temp_v8 = *(short *)((int)puVar2 + 0x4a) != 0;
          temp_v0 = 0;
          if (temp_v8) {
            temp_v0 = *(short *)(puVar2 + 0x13);
          }
          if (temp_v8 && temp_v0 != 0) goto LAB_002bfb8c;
        }
      }
    }
  }
  FUN_002a4aa4();
  temp_v1 = FUN_0031cee0();
  *(unsigned char *)((int)DAT_0057f114 + 0x61) = temp_v1;
  temp_v1 = FUN_002391e0();
  *(unsigned char *)((int)DAT_0057f114 + 0x62) = temp_v1;
  temp_v1 = FUN_002a46d8();
  *(unsigned char *)((int)DAT_0057f114 + 99) = temp_v1;
  temp_v3 = FUN_002840ac();
  FUN_00343cc8(DAT_0057f114 + 0x10,temp_v3);
  FUN_002a4664(&temp_v10);
  temp_v9 = (romwright_code *)romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v9 + 2)),temp_v13);
  FUN_0035a074(DAT_0057f114 + 0x10,temp_v10,temp_v11,temp_v12);
  temp_v1 = FUN_002a46b8();
  *(unsigned char *)((int)DAT_0057f114 + 0x82) = temp_v1;
  temp_v3 = FUN_002a469c();
  FUN_0032e25c(DAT_0057f114 + 0x10,temp_v3);
  temp_v3 = FUN_00330ab8();
  DAT_0057f114[0x19] = temp_v3;
LAB_002bfb8c:
  temp_v2 = FUN_001ab888();
  temp_v7 = 0;
  while (((*(char *)(temp_v2 + temp_v7 + 0x1c88) < '\0' || (temp_v4 = FUN_001ab854(), temp_v4 == 0)) ||
         (temp_v5 = FUN_004bd340(temp_v4,2), temp_v5 == 0))) {
    temp_v7 = temp_v7 + 1;
    if (temp_v7 >= 0x18) {
LAB_002bfc18:
      temp_v2 = FUN_002a469c();
      if (temp_v2 == 0) {
        FUN_0032e25c(DAT_0057f114 + 0x10,0);
      }
      if ((*(char *)(puVar4 + 0x5b) != '\0') && (temp_v2 = FUN_00345388(0x20), temp_v2 != 0)) {
        FUN_002c0b10(&temp_v9);
        temp_v2 = FUN_0030ef8c(temp_v14,DAT_0057f114 + 0x24,0x14);
        if (temp_v2 != 0) {
          FUN_00319e58();
          FUN_002c0b5c(DAT_0057f114 + 0x10);
        }
      }
      temp_v2 = FUN_002a469c();
      if (temp_v2 == 0) {
        temp_v2 = FUN_002e6dd0(DAT_0057f114 + 0x24,0x14);
      }
      FUN_0039a0cc();
      puVar4[0x5d] = temp_v2;
      FUN_0037b5e0();
      temp_v2 = 0;
      do {
        FUN_002e6dd0(puVar4 + temp_v2 * 5 + 0x5e,0x14);
        temp_v7 = temp_v2 + 1;
        puVar4[temp_v2 * 5 + 0x5f] = 0x14a;
        temp_v2 = temp_v7;
      } while (temp_v7 < 2);
      return;
    }
  }
  temp_v6 = FUN_002a469c();
  if (temp_v6 != *(unsigned short *)(temp_v4 + 0x62)) {
    FUN_0032e25c(DAT_0057f114 + 0x10,(int)*(short *)(temp_v4 + 0x62));
    FUN_002a6480((int)*(short *)(temp_v4 + 0x62));
  }
  goto LAB_002bfc18;
}
