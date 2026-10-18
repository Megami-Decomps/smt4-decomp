/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0020edb0` (_code @ 0x20edb0, 0x84 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_004342c8; /* 0x4342c8 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int *DAT_00435d60; /* 0x435d60 */
extern int DAT_00439a70; /* 0x439a70 */
extern int DAT_00439a74; /* 0x439a74 */
extern unsigned int DAT_00439a78; /* 0x439a78 */
extern int DAT_00439a7c; /* 0x439a7c */
extern unsigned int DAT_00439a80; /* 0x439a80 */
extern int DAT_00439a84; /* 0x439a84 */
extern unsigned int DAT_00439a88; /* 0x439a88 */
extern unsigned int DAT_00439a8c; /* 0x439a8c */
extern unsigned int DAT_00439a90; /* 0x439a90 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

extern int FUN_0019dfbc(unsigned int);
/* Supplied declaration required: FUN_001e1774. */
/* Supplied declaration required: FUN_002072d0. */
/* Supplied declaration required: FUN_00219744. */
extern int FUN_0022013c(unsigned int);
/* Supplied declaration required: FUN_002273ac. */
extern int FUN_0023eec0(unsigned int *);
/* Supplied declaration required: FUN_0023f3d8. */
/* Supplied declaration required: FUN_00247084. */
/* Supplied declaration required: FUN_00252630. */
/* Supplied declaration required: FUN_00267f68. */
/* Supplied declaration required: FUN_00282a90. */
extern int FUN_002876d0(unsigned int);
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_0029c660. */
/* Supplied declaration required: FUN_0029e2f4. */
/* Supplied declaration required: FUN_002a0640. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a6214. */
extern int FUN_002a63f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002aea7c. */
/* Supplied declaration required: FUN_002aeb2c. */
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b9008. */
extern int FUN_002b9094(void);
extern int FUN_002bf41c(unsigned int);
extern int FUN_002bffbc(unsigned int);
extern int FUN_002c0ac8(void);
extern int FUN_002c0b94(void);
extern unsigned int FUN_002c0ba8(void);
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c5b04. */
/* Supplied declaration required: FUN_002ef664. */
/* Supplied declaration required: FUN_0033a9b4. */
/* Supplied declaration required: FUN_003db484. */


int FUN_0020edb0(void)

{
/* irregular: 4 goto(s); irregular input(s): in_d8, in_d9; 34 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  unsigned int temp_v2;
  char *pcVar5;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int unaff_r4;
  float temp_v5;
  float temp_v6;
  unsigned long long in_d8;
  unsigned long long temp_v7;
  float temp_v8;
  unsigned int temp_v9;
  unsigned long long in_d9;
  unsigned long long temp_v10;
  
  temp_v1 = FUN_002c0ac8();
  puVar2 = DAT_00435d60;
  if (DAT_00435d60 == (unsigned int *)0x0) {
    return 0;
  }
  temp_v3 = DAT_00435d60[2];
  DAT_00435d60[2] = temp_v3 + 1U;
  if (temp_v3 + 1U >= 0x10000) {
    puVar2[2] = 0xffff;
  }
  if ((*(int *)(temp_v1 + 0x88) != 2) ||
     (temp_v4 = *(unsigned int *)(temp_v1 + 0x44a4) & 4,
     (*(unsigned int *)(temp_v1 + 0x44a0) & 0x40000) != 0 || temp_v4 != 0)) {
    temp_v1 = FUN_0022013c(*(unsigned int *)(temp_v1 + 0x2c));
    if (temp_v1 != 0) {
      return -1;
    }
    return 0;
  }
  switch(*puVar2) {
  case 0:
    FUN_003db484(DAT_00435d18,"Dead_eyes");
    *puVar2 = 1;
    temp_v1 = DAT_00435d18;
    FUN_00247084();
    goto joined_r0x00335c08;
  case 1:
    temp_v1 = DAT_00435d18;
    FUN_00247084();
joined_r0x00335c08:
    if (temp_v1 == 0) {
      return 0;
    }
    puVar2[2] = 0;
    *puVar2 = 2;
FUN_003359f4:
    if (puVar2[2] == DAT_00439a70) {
      FUN_00282a90(0,0,0,0,8,0,0xb,0);
      FUN_00267f68(DAT_00439ca8);
    }
    if (puVar2[2] == DAT_00439a84) {
      FUN_0023f3d8(0,0,DAT_00439a88,0x10,0,DAT_00439a8c,0,2,0xffffffff);
    }
    if (puVar2[2] == DAT_00439a74) {
      FUN_0029c660(0,DAT_00439a78,0xff);
    }
    if (puVar2[2] == DAT_00439a7c) {
      FUN_0029c660(1,DAT_00439a80,0xff);
    }
    if ((unsigned int)puVar2[2] <= DAT_00439a90) {
      return 0;
    }
    *puVar2 = 3;
    if ((puVar2[1] & 1) == 0) {
      pcVar5 = "battle/gameover/gameover.bf";
    }
    else {
      pcVar5 = "battle/gameover/level_event.bf";
    }
    FUN_00297704(pcVar5,puVar2 + 3,0);
    if ((puVar2[1] & 1) == 0) {
      pcVar5 = "battle/gameover/gameover.mbm";
    }
    else {
      pcVar5 = "battle/gameover/level_event.mbm";
    }
    FUN_00297704(pcVar5,puVar2 + 5,0);
    temp_v1 = FUN_002c0b94();
    temp_v0 = *(char *)(temp_v1 + 0x24b29);
    if (temp_v0 != -1) {
      *(char *)(temp_v1 + 0x24b29) = temp_v0 + '\x01';
    }
    *puVar2 = 4;
    break;
  case 2:
    goto FUN_003359f4;
  case 3:
    if ((puVar2[1] & 1) == 0) {
      pcVar5 = "battle/gameover/gameover.bf";
    }
    else {
      pcVar5 = "battle/gameover/level_event.bf";
    }
    FUN_00297704(pcVar5,puVar2 + 3,0);
    if ((puVar2[1] & 1) == 0) {
      pcVar5 = "battle/gameover/gameover.mbm";
    }
    else {
      pcVar5 = "battle/gameover/level_event.mbm";
    }
    FUN_00297704(pcVar5,puVar2 + 5,0);
    temp_v1 = FUN_002c0b94();
    temp_v0 = *(char *)(temp_v1 + 0x24b29);
    if (temp_v0 != -1) {
      *(char *)(temp_v1 + 0x24b29) = temp_v0 + '\x01';
    }
    *puVar2 = 4;
    break;
  case 4:
    break;
  case 5:
    temp_v1 = FUN_002bf41c(puVar2[6]);
    if (temp_v1 != 0) {
      return 0;
    }
    *puVar2 = 6;
    goto FUN_0023f1d0;
  case 6:
    goto FUN_0023f1d0;
  case 7:
    temp_v1 = FUN_0019dfbc(puVar2[4]);
    if (temp_v1 != 2) {
      temp_v1 = 0;
    }
    else {
      FUN_00291be8();
      FUN_00291a5c();
      temp_v1 = FUN_00293c98();
      if (((puVar2[1] & 1) == 0) && (*(int *)(temp_v1 + 0x4978) != 1)) {
        *puVar2 = 8;
        temp_v1 = FUN_0023eec0(puVar2);
      }
      else {
        *(unsigned int *)(temp_v1 + 0x4978) = 1;
        temp_v1 = -1;
        *puVar2 = 9;
      }
    }
    return temp_v1;
  case 8:
    temp_v9 = 0x42700000;
    temp_v10 = 0x42700000;
    temp_v7 = 0x3f80000000000000;
    if (puVar2[7] == 0) {
      puVar2[10] = 0;
      puVar2[0xd] = 0x3fc00000;
      puVar2[0xe] = 300;
      puVar2[9] = 0x42700000;
      puVar2[0xb] = 0x3f800000;
      puVar2[0xc] = 0x3f800000;
      FUN_002c5b04(0x2d,0,0,temp_v4,in_d8,in_d9,unaff_r4);
      temp_v1 = 1;
      do {
        FUN_002a6214(0x2d,temp_v1);
        temp_v9 = (unsigned int)temp_v10;
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 7);
      temp_v2 = 0;
      puVar2[0xf] = 0;
      FUN_0029e2f4();
      puVar2[0xf] = temp_v2;
      temp_v1 = FUN_002876d0(0x1000051);
      if (temp_v1 != 1) {
        FUN_002a0640(0x1000051,0);
      }
      puVar2[7] = puVar2[7] + 1;
    }
    temp_v1 = FUN_002c2bd0(0);
    if ((temp_v1 == 0) &&
       ((temp_v1 = FUN_002b9094(), temp_v1 == 6 || (temp_v1 = FUN_002bffbc(0), temp_v1 != 0)))) {
      puVar2[7] = 2;
      puVar2[0xe] = 0;
    }
    else if (puVar2[7] == 0) {
      return 0;
    }
    temp_v5 = (float)puVar2[9];
    temp_v8 = (float)((unsigned long long)temp_v7 >> 0x20);
    puVar2[9] = temp_v5 - temp_v8;
    temp_v6 = (float)temp_v7;
    if (temp_v5 - temp_v8 <= temp_v6) {
      puVar2[9] = temp_v9;
      *(float *)&puVar2[10] = temp_v6;
      *(float *)&puVar2[0xb] = temp_v8;
    }
    temp_v1 = puVar2[9];
    if ((temp_v1 < 0x41f00001) && ((float)puVar2[0xc] <= temp_v6)) {
      *(float *)&puVar2[0xc] = temp_v6;
      *(float *)&puVar2[0xd] = temp_v8;
    }
    temp_v5 = 0.033333335f;
    if (temp_v1 >= 0x41f00001) {
      puVar2[10] = (float)puVar2[10] + 0.033333335f;
      puVar2[0xb] = (float)puVar2[0xb] + 0.016666668f;
      puVar2[0xc] = (float)puVar2[0xc] - 0.033333335f;
      puVar2[0xd] = (float)puVar2[0xd] + 0.016666668f;
    }
    if (temp_v1 < 0x41f00000) {
      puVar2[10] = (float)puVar2[10] - 0.033333335f;
      puVar2[0xb] = (float)puVar2[0xb] + 0.016666668f;
      puVar2[0xc] = (float)puVar2[0xc] + 0.033333335f;
      puVar2[0xd] = (float)puVar2[0xd] + 0.016666668f;
    }
    if (puVar2[7] == 1) {
      temp_v1 = FUN_002a63f8(0x2d,6);
      if (temp_v1 == 0) {
        return 0;
      }
      temp_v1 = FUN_002c2bd0(0);
      if (temp_v1 == 3) {
        FUN_002a0678(0,0x1e);
      }
      temp_v1 = FUN_002c2bd0(0);
      if (temp_v1 == 2) {
        return 0;
      }
      if ((int)puVar2[8] < 0x3f800000) {
        puVar2[8] = (float)puVar2[8] + temp_v5;
      }
      else {
        puVar2[0xe] = 300;
      }
    }
    if (puVar2[7] == 2) {
      temp_v1 = puVar2[0xe];
      puVar2[0xe] = temp_v1 - 1;
      if (-1 < temp_v1 - 1) {
        return 0;
      }
      puVar2[7] = 3;
      puVar2[0xe] = 300;
      FUN_0029c660(0,0x2d,0xff);
    }
    if ((puVar2[7] == 3) && (temp_v1 = FUN_002c2bd0(0), temp_v1 == 3)) {
      temp_v1 = 1;
      do {
        FUN_002aeb2c(0x2d,temp_v1);
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 7);
      FUN_002aea7c(0x2d);
      FUN_002b9008();
      FUN_0029c650(0xf);
      *puVar2 = 9;
    }
    return 0;
  case 9:
    return -1;
  default:
    return 0;
  }
  temp_v1 = 0;
  if (puVar2[3] != 0) {
    temp_v1 = puVar2[5];
  }
  if (puVar2[3] == 0 || temp_v1 == 0) {
    return temp_v1;
  }
  temp_v1 = FUN_002c2bd0(0);
  if ((temp_v1 != 3) || (temp_v1 = FUN_002c2bd0(1), temp_v1 != 3)) {
    return 0;
  }
  temp_v9 = FUN_00293c98();
  FUN_0033a9b4();
  FUN_00252630();
  FUN_00219744(temp_v9);
  FUN_002072d0(temp_v9);
  FUN_001e1774(temp_v9);
  if (DAT_004342c8 != 0) {
    FUN_002273ac();
  }
  if ((puVar2[1] & 1) == 0) {
    temp_v9 = FUN_002c0ba8();
    temp_v2 = 0x17;
    FUN_002ef664(0x17,temp_v9);
    puVar2[6] = temp_v2;
    FUN_002899c4(0x817,1);
    *puVar2 = 5;
    temp_v1 = FUN_002bf41c(puVar2[6]);
    if (temp_v1 != 0) {
      return 0;
    }
  }
  *puVar2 = 6;
FUN_0023f1d0:
  temp_v1 = FUN_002c2bd0(0);
  if ((temp_v1 == 3) && (temp_v1 = FUN_002c2bd0(1), temp_v1 == 3)) {
    FUN_00289b4c();
    FUN_0028d974();
    FUN_00289ae8();
    FUN_002b8b78(0xa9);
    temp_v1 = puVar2[3];
    FUN_002972f8(temp_v1,puVar2[5]);
    puVar2[4] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 1;
    FUN_002971e4(puVar2[4],0);
    *puVar2 = 7;
    temp_v1 = FUN_0019dfbc(puVar2[4]);
    if (temp_v1 != 2) {
      temp_v1 = 0;
    }
    else {
      FUN_00291be8();
      FUN_00291a5c();
      temp_v1 = FUN_00293c98();
      if (((puVar2[1] & 1) == 0) && (*(int *)(temp_v1 + 0x4978) != 1)) {
        *puVar2 = 8;
        temp_v1 = FUN_0023eec0(puVar2);
      }
      else {
        *(unsigned int *)(temp_v1 + 0x4978) = 1;
        temp_v1 = -1;
        *puVar2 = 9;
      }
    }
    return temp_v1;
  }
  return 0;
}
