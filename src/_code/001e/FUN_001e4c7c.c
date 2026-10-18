/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e4c7c` (_code @ 0x1e4c7c, 0x7cc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_001e53c8; /* 0x1e53c8 */
extern unsigned char LAB_001e53e0; /* 0x1e53e0 */
extern int DAT_00432fc8; /* 0x432fc8 */
extern int DAT_00433158; /* 0x433158 */
extern unsigned int *DAT_0043e0d0; /* 0x43e0d0 */

extern int FUN_0019dfbc(unsigned int);
extern int FUN_001ab900(void);
/* Supplied declaration required: FUN_0025b968. */
extern int FUN_0025b978(void);
/* Supplied declaration required: FUN_00282e6c. */
/* Supplied declaration required: FUN_00287990. */
/* Supplied declaration required: FUN_00289984. */
/* Supplied declaration required: FUN_002899c4. */
/* Supplied declaration required: FUN_00289a58. */
extern unsigned int FUN_00289ac0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_00289fdc. */
/* Supplied declaration required: FUN_0028a04c. */
extern int FUN_0028a0bc(int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_0028df0c. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
extern int FUN_002971e4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b902c(unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bffbc(unsigned int);
/* Supplied declaration required: FUN_002c0128. */
/* Supplied declaration required: FUN_002c0ba8. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
extern int FUN_002c583c(unsigned int);
extern unsigned int FUN_002c5e2c(unsigned char *);
/* Supplied declaration required: FUN_002cb854. */
extern int FUN_002d85a4(void);
/* Supplied declaration required: FUN_002e1fb4. */
/* Supplied declaration required: FUN_002f5988. */
/* Supplied declaration required: FUN_0031bfcc. */
/* Supplied declaration required: FUN_0031ecb0. */


unsigned int FUN_001e4c7c(void)

{
/* irregular: 28 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned char *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [128];
  unsigned char temp_v6 [128];
  
  puVar1 = DAT_0043e0d0;
  puVar5 = temp_v5;
  if ((*(unsigned int *)(DAT_00432fc8 + 0x754) & 4) != 0 || (*(unsigned int *)(DAT_00432fc8 + 0x754) & 8) != 0) {
    return 0;
  }
  temp_v0 = DAT_0043e0d0[2];
  if (temp_v0 == 3) {
    DAT_0043e0d0[3] = DAT_0043e0d0[3] + 1;
    temp_v0 = FUN_0019dfbc(puVar1[0xc]);
    if (temp_v0 != 2) {
      temp_v0 = FUN_001ab900();
      if (temp_v0 != 0) {
        return 0;
      }
      temp_v0 = FUN_002bffbc(2);
      if (temp_v0 == 0) {
        return 0;
      }
      if (*(char *)(puVar1 + 9) != '\0') {
        if (puVar1[7] == 0) {
          return 0;
        }
        FUN_002c0ba8();
        return 0;
      }
    }
    else if ((*(char *)(puVar1 + 9) != '\0') && (puVar1[7] != 0)) {
      FUN_002899c4(puVar1[7],1);
    }
    FUN_00291be8();
    FUN_00291a5c();
    FUN_002c0128();
    FUN_00289984();
    FUN_002f5988();
    FUN_002e1fb4();
    FUN_0031bfcc();
    FUN_0031ecb0();
    if (puVar1[0xc] != 0) {
      FUN_002a755c();
      puVar1[0xc] = 0;
    }
    if (puVar1[0xb] != 0) {
      FUN_002c4360();
      puVar1[0xb] = 0;
    }
    if (puVar1[0xd] != 0) {
      FUN_002c4360();
      puVar1[0xd] = 0;
    }
    puVar1[2] = 1;
    FUN_0028df0c(0);
    FUN_00287990(0);
    FUN_00287990(1);
    FUN_0029c650(0xf);
    FUN_002899c4(0x522,0,1);
    return 0;
  }
  if (temp_v0 >= 3) {
    if (temp_v0 == 0x58) {
      temp_v0 = FUN_002d85a4();
      if (temp_v0 == 0) {
        return 0;
      }
      puVar1[2] = 1;
      return 0;
    }
    if (temp_v0 != 99) {
      return 0;
    }
    FUN_002c45b8(*DAT_0043e0d0,0);
    *(unsigned int *)(DAT_00432fc8 + 0x754) = *(unsigned int *)(DAT_00432fc8 + 0x754) & 0xffffff8f;
    return 0;
  }
  if (temp_v0 == 0) {
    temp_v0 = DAT_0043e0d0[2];
    DAT_0043e0d0[3] = 0;
    *(unsigned char *)((int)puVar1 + 0x22) = 1;
    temp_v0 = temp_v0 + 1;
    puVar1[2] = temp_v0;
    return 0;
  }
  if (temp_v0 != 1) {
    if (temp_v0 != 2) {
      return 0;
    }
    if ((*(char *)(DAT_0043e0d0 + 8) != '\0') && (temp_v0 = FUN_0025b978(), temp_v0 == 0)) {
      FUN_0025b968(1);
      *(unsigned char *)((int)puVar1 + 0x21) = 1;
    }
    FUN_002be7fc(temp_v5,&LAB_001e53c8,puVar1[5],puVar1[5]);
    FUN_002be7fc(temp_v6,&LAB_001e53e0,puVar1[5],puVar1[5]);
    temp_v0 = FUN_0028a0bc(DAT_00433158,puVar1[5],0);
    if (temp_v0 != 0) {
      temp_v0 = DAT_00433158;
      FUN_0028a04c(DAT_00433158,puVar1[5],0);
      puVar1[0xb] = temp_v0;
      temp_v0 = DAT_00433158;
      FUN_00289fdc(DAT_00433158,puVar1[5],0);
      puVar1[0xd] = temp_v0;
      if (puVar1[0xb] == 0 || temp_v0 == 0) {
        puVar1[2] = 1;
        puVar1[3] = 0;
        return 0;
      }
    }
    else {
      FUN_002cb854();
      if (puVar5 == (unsigned char *)0x0) {
        puVar1[2] = 1;
        puVar1[3] = 0;
        return 0;
      }
      temp_v3 = FUN_002c5e2c(temp_v5);
      puVar1[0xb] = temp_v3;
      temp_v3 = FUN_002c5e2c(temp_v6);
      puVar1[0xd] = temp_v3;
    }
    FUN_00289b4c();
    FUN_0028d974();
    FUN_00289ae8();
    FUN_002b8b78(0x90);
    if (*(char *)((int)puVar1 + 0x21) != '\0') {
      FUN_0025b968(0);
      *(unsigned char *)((int)puVar1 + 0x21) = 0;
    }
    if (*(char *)((int)puVar1 + 0x23) != '\0') {
      FUN_00282e6c(0,0xff);
      FUN_00282e6c(1,0xff);
    }
    temp_v0 = puVar1[0xb];
    FUN_002972f8(temp_v0,puVar1[0xd]);
    puVar1[0xc] = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
    temp_v0 = FUN_002971e4(puVar1[0xc],puVar1[6]);
    if (temp_v0 != 0) {
      puVar1[2] = puVar1[2] + 1;
      puVar1[3] = 0;
      puVar1[7] = 0;
      temp_v3 = FUN_00289ac0(puVar1[0xc],puVar1[6]);
      temp_v4 = puVar1[5];
      FUN_00289a58(temp_v4,temp_v3);
      puVar1[7] = temp_v4;
      return 0;
    }
    puVar1[2] = 1;
    puVar1[3] = 0;
    return 0;
  }
  temp_v0 = FUN_002b902c(5);
  if (temp_v0 != 0) {
    temp_v0 = puVar1[4] - 1;
    if (temp_v0 >= 6) {
      temp_v0 = 0;
    }
    else if (temp_v0 < 0) {
      temp_v0 = 5;
    }
    else {
      temp_v0 = puVar1[4] - 1;
    }
    puVar1[4] = temp_v0;
  }
  temp_v0 = FUN_002b902c(6);
  temp_v1 = puVar1[4];
  if (temp_v0 != 0) {
    if (temp_v1 + 1 >= 6) {
      temp_v1 = 0;
    }
    else if (temp_v1 + 1 < 0) {
      temp_v1 = 5;
    }
    else {
      temp_v1 = temp_v1 + 1;
    }
    puVar1[4] = temp_v1;
  }
  temp_v0 = 999;
  switch(temp_v1) {
  case 0:
    temp_v1 = FUN_002b902c(4);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] - 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[5] - 1;
        }
      }
      puVar1[5] = temp_v2;
    }
    temp_v1 = FUN_002b902c(3);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] + 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[5] + 1;
        }
      }
      puVar1[5] = temp_v2;
    }
    temp_v1 = FUN_002b902c(8);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] - 10;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[5] - 10;
        }
      }
      puVar1[5] = temp_v2;
    }
    temp_v1 = FUN_002b902c(7);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[5] + 10;
      if (temp_v1 >= 1000) {
        temp_v0 = 0;
      }
      else if (-1 < temp_v1) {
        temp_v0 = temp_v1;
      }
      puVar1[5] = temp_v0;
    }
    temp_v0 = FUN_002bffbc(0);
    if (temp_v0 != 0) {
      puVar1[2] = 2;
    }
    break;
  case 1:
    temp_v1 = FUN_002b902c(4);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] - 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[6] - 1;
        }
      }
      puVar1[6] = temp_v2;
    }
    temp_v1 = FUN_002b902c(3);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] + 1;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[6] + 1;
        }
      }
      puVar1[6] = temp_v2;
    }
    temp_v1 = FUN_002b902c(8);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] - 10;
      if (temp_v1 >= 1000) {
        temp_v2 = 0;
      }
      else {
        temp_v2 = temp_v0;
        if (-1 < temp_v1) {
          temp_v2 = puVar1[6] - 10;
        }
      }
      puVar1[6] = temp_v2;
    }
    temp_v1 = FUN_002b902c(7);
    if (temp_v1 != 0) {
      temp_v1 = puVar1[6] + 10;
      if (temp_v1 >= 1000) {
        temp_v0 = 0;
      }
      else if (-1 < temp_v1) {
        temp_v0 = temp_v1;
      }
      puVar1[6] = temp_v0;
    }
    temp_v0 = FUN_002bffbc(0);
    if (temp_v0 != 0) {
      puVar1[2] = 2;
    }
    break;
  case 2:
    temp_v0 = FUN_002bffbc(0);
    if (temp_v0 != 0) {
      puVar1[2] = 0x58;
    }
    break;
  case 3:
    temp_v0 = FUN_002c583c(2);
    if ((temp_v0 == 0) &&
       ((temp_v0 = FUN_002b902c(4), temp_v0 != 0 || (temp_v0 = FUN_002b902c(3), temp_v0 != 0)))) {
      *(unsigned char *)(puVar1 + 8) = *(char *)(puVar1 + 8) != '\x01';
    }
    break;
  case 4:
    temp_v0 = FUN_002b902c(4);
    if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(3), temp_v0 != 0)) {
      *(unsigned char *)((int)puVar1 + 0x23) = *(char *)((int)puVar1 + 0x23) != '\x01';
    }
    break;
  case 5:
    temp_v0 = FUN_002b902c(4);
    if ((temp_v0 != 0) || (temp_v0 = FUN_002b902c(3), temp_v0 != 0)) {
      *(unsigned char *)(puVar1 + 9) = *(char *)(puVar1 + 9) != '\x01';
    }
  }
  temp_v0 = FUN_002bffbc(2);
  if (temp_v0 != 0) {
    temp_v0 = 99;
    puVar1[2] = temp_v0;
  }
  return 0;
}
