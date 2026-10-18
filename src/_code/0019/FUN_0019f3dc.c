/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0019f3dc` (_code @ 0x19f3dc, 0x6a4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp128; /* 0x128: local_128 */
} void_stack;

extern unsigned char LAB_0019f7d0; /* 0x19f7d0 */
extern unsigned char LAB_0019f7e8; /* 0x19f7e8 */
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
extern int FUN_0019e0c0(unsigned int);
extern int FUN_002734ec(int);
/* Supplied declaration required: FUN_002893ec. */
/* Supplied declaration required: FUN_00289508. */
/* Supplied declaration required: FUN_00289574. */
extern char *FUN_00289594(void);
/* Supplied declaration required: FUN_002895a8. */
/* Supplied declaration required: FUN_00289608. */
extern int FUN_002896bc(void);
/* Supplied declaration required: FUN_0028971c. */
/* Supplied declaration required: FUN_0028975c. */
/* Supplied declaration required: FUN_002897b0. */
extern int FUN_002897c0(void);
/* Supplied declaration required: FUN_002897d0. */
extern int FUN_002897e0(void);
/* Supplied declaration required: FUN_002897f0. */
extern unsigned int FUN_00289858(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00289880. */
/* Supplied declaration required: FUN_002898e4. */
/* Supplied declaration required: FUN_00289c98. */
extern int FUN_00289d58(void);
/* Supplied declaration required: FUN_00289d74. */
/* Supplied declaration required: FUN_00289de4. */
extern int FUN_00289e54(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028d6d0. */
/* Supplied declaration required: FUN_0028dc68. */
extern int FUN_002903c8(void);
extern int FUN_00290d74(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002917b8. */
/* Supplied declaration required: FUN_00291944. */
/* Supplied declaration required: FUN_00296f4c. */
/* Supplied declaration required: FUN_00297060. */
/* Supplied declaration required: FUN_002a03d8. */
/* Supplied declaration required: FUN_002a7218. */
/* Supplied declaration required: FUN_002b8838. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bff50. */
extern int FUN_002c1d5c(void);
extern int FUN_002c2a04(unsigned int);
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c43b4. */
/* Supplied declaration required: FUN_002c57c8. */
extern unsigned int FUN_002c5c04(unsigned char *);
/* Supplied declaration required: FUN_002e2028. */
/* Supplied declaration required: FUN_002f59d0. */
/* Supplied declaration required: FUN_0031be7c. */
/* Supplied declaration required: FUN_0031eb34. */


unsigned int FUN_0019f3dc(void)

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
    temp_v2 = FUN_002896bc();
    temp_v3 = DAT_00432fc8;
    if (temp_v2 == 0) {
      return 0;
    }
    temp_v4 = *(unsigned int *)(DAT_00432fc8 + 0x754);
    if ((temp_v4 & 4) != 0 || (temp_v4 & 8) != 0) {
      return 0;
    }
    *(unsigned int *)(DAT_00432fc8 + 0x754) = temp_v4 & 0xffffff8f;
    FUN_00289608(temp_v3 + 0xa8,0);
    puVar2[2] = 0x60;
    return 0;
  }
  if (temp_v3 < 0x5f) {
    if (temp_v3 == 0) {
      *(unsigned char *)((int)DAT_0043e0d0 + 0x22) = 0;
      temp_v1 = DAT_004937c4;
      puVar2[5] = DAT_004937c4;
      puVar2[6] = DAT_004937c8;
      FUN_002be624(temp_v7,&LAB_0019f7d0,temp_v1,temp_v1);
      FUN_002be624(temp_v8,&LAB_0019f7e8,puVar2[5],puVar2[5]);
      temp_v3 = FUN_00289e54(DAT_00433158,puVar2[5],0);
      if (temp_v3 != 0) {
        temp_v3 = DAT_00433158;
        FUN_00289de4(DAT_00433158,puVar2[5],0);
        puVar2[0xb] = temp_v3;
        temp_v3 = DAT_00433158;
        FUN_00289d74(DAT_00433158,puVar2[5],0);
        puVar2[0xd] = temp_v3;
        if (puVar2[0xb] == 0 || temp_v3 == 0) {
          puVar2[2] = 0x5f;
          temp_v3 = FUN_002c2a04(0);
          if (temp_v3 == 3) {
            FUN_002a03d8(0,5);
          }
          temp_v3 = FUN_002c2a04(1);
          if (temp_v3 == 3) {
            FUN_002a03d8(1,5);
          }
          temp_v3 = FUN_00289d58();
          if (temp_v3 == 0) {
            return 0;
          }
          FUN_00289c98(1);
          return 0;
        }
      }
      else {
        temp_v1 = FUN_002c5c04(temp_v7);
        puVar2[0xb] = temp_v1;
        temp_v1 = FUN_002c5c04(temp_v8);
        puVar2[0xd] = temp_v1;
      }
      FUN_002898e4();
      FUN_0028d6d0();
      FUN_00289880();
      FUN_002b8838(0x90);
      temp_v3 = puVar2[0xb];
      FUN_00297060(temp_v3,puVar2[0xd]);
      puVar2[0xc] = temp_v3;
      *(unsigned int *)(temp_v3 + 0x108) = 2;
      temp_v3 = puVar2[6];
      if (temp_v3 == -1) {
        temp_v3 = FUN_00290d74(puVar2[0xb],&DAT_004937cc);
        puVar2[6] = temp_v3;
      }
      FUN_00296f4c(puVar2[0xc],temp_v3);
      puVar2[7] = 0;
      temp_v1 = FUN_00289858(puVar2[0xc],puVar2[6]);
      temp_v5 = puVar2[5];
      FUN_002897f0(temp_v5,temp_v1);
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
      temp_v3 = FUN_002896bc();
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v1 = 1;
    }
    else {
      temp_v3 = FUN_002c2a04(0);
      if (((temp_v3 != 3) || (temp_v3 = FUN_002c2a04(1), temp_v3 != 3)) &&
         (temp_v3 = FUN_002897e0(), temp_v3 != 0)) {
        FUN_002897d0(0);
      }
      temp_v3 = FUN_002897c0();
      if (temp_v3 != 0) {
        FUN_002897b0(0);
        FUN_002897d0(0);
      }
      temp_v3 = FUN_002897e0();
      if ((temp_v3 == 0) || (temp_v3 = FUN_002c1d5c(), temp_v3 != 0)) {
        temp_v3 = FUN_0019e0c0(puVar2[0xc]);
        if (temp_v3 != 2) {
          return 0;
        }
        if (puVar2[7] != 0) {
          FUN_0028975c(puVar2[7],1);
        }
        FUN_00291944();
        FUN_002917b8();
        FUN_002bff50();
        FUN_0028971c();
        FUN_002f59d0();
        FUN_002e2028();
        FUN_0031be7c();
        FUN_0031eb34();
        if (puVar2[0xc] != 0) {
          FUN_002a7218();
          puVar2[0xc] = 0;
        }
        if (puVar2[0xb] != 0) {
          FUN_002c415c();
          puVar2[0xb] = 0;
        }
        if (puVar2[0xd] != 0) {
          FUN_002c415c();
          puVar2[0xd] = 0;
        }
        puVar2[2] = 99;
        FUN_0028dc68(0);
        return 0;
      }
      FUN_002a03d8(0,5);
      FUN_002a03d8(1,5);
      FUN_002897d0(0);
      temp_v1 = 0xb;
    }
    puVar2[2] = temp_v1;
    return 0;
  }
  if (temp_v3 == 0x60) {
    temp_v3 = FUN_002734ec(DAT_00432fc8 + 0xa8);
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_002895a8(DAT_00432fc8 + 0xa8);
    temp_v3 = FUN_002903c8();
    if (temp_v3 == 0) {
      temp_v1 = 0x62;
    }
    else {
      temp_v1 = 0x61;
    }
    puVar2[2] = temp_v1;
    if (puVar2[0xb] != 0) {
      FUN_002c415c();
      puVar2[0xb] = 0;
    }
    if (puVar2[0xd] == 0) {
      return 0;
    }
    FUN_002c415c();
    puVar2[0xd] = 0;
    return 0;
  }
  if (temp_v3 != 0x61) {
    if (temp_v3 != 0x62) {
      if (temp_v3 != 99) {
        return 0;
      }
      FUN_002c43b4(*DAT_0043e0d0,0);
      temp_v3 = DAT_00432fc8;
      *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
      if (*(char *)(temp_v3 + 0xc0) == '\0') {
        return 0;
      }
      *(unsigned char *)(temp_v3 + 0xc0) = 0;
      FUN_002893ec(temp_v3 + 0xa8,1);
      return 0;
    }
    if (DAT_0049fc14 != '\0') {
      if (DAT_0049f930 == 1) {
        FUN_002c57c8(6,0);
      }
      if (DAT_0049f930 == 2) {
        FUN_002c57c8(8,0);
      }
      if (DAT_0049f930 == 3) {
        temp_v6 = romwright_piece_2_2((short)DAT_0049fc1c,(short)DAT_0049fc18 - 200);
        FUN_002c57c8(0xe,&temp_v6,4);
      }
    }
  }
  else {
    pcVar5 = (char *)FUN_00289594();
    temp_v0 = *pcVar5;
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          temp_v6 = (unsigned int)(unsigned char)pcVar5[1];
          FUN_002c57c8(0xe,&temp_v6,4);
        }
      }
      else {
        FUN_00289574((unsigned char)pcVar5[1] + 100,pcVar5[2],0xffffffff);
        DAT_0049f924 = 0xffffffff;
        temp_v1 = 8;
        FUN_002c57c8(temp_v1,0);
      }
    }
    else {
      FUN_00289574(pcVar5[1],pcVar5[2],pcVar5[3]);
      temp_v1 = 6;
      FUN_002c57c8(temp_v1,0);
    }
    DAT_0049fc14 = '\0';
    DAT_0049f970 = 0;
    FUN_00289508();
  }
  FUN_002c43b4(*DAT_0043e0d0,0);
  *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
  puVar2[2] = 100;
  return 0;
}
