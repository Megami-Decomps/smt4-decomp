/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00298978` (_code @ 0x298978, 0x85c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_00299154; /* 0x299154 */
extern unsigned char LAB_0029916c; /* 0x29916c */
extern int DAT_00570260; /* 0x570260 */
extern int DAT_00570280; /* 0x570280 */
extern unsigned int *DAT_0057f568; /* 0x57f568 */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00164af0(unsigned int);
extern int FUN_001656a0(unsigned int);
/* Supplied declaration required: FUN_001656e0. */
/* Supplied declaration required: FUN_00167f94. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001695a0. */
extern int FUN_00180008(unsigned int);
/* Supplied declaration required: FUN_0018719c. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0020214c. */
/* Supplied declaration required: FUN_00212204. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: FUN_002371b4. */
extern int FUN_00239414(void);
/* Supplied declaration required: FUN_0024b0c0. */
/* Supplied declaration required: FUN_00275bc8. */
extern int FUN_00275f44(unsigned int, unsigned int);
extern int FUN_0028029c(void);
/* Supplied declaration required: FUN_002844e4. */
/* Supplied declaration required: FUN_002852f0. */
extern int FUN_002a4b60(void);
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_00342010. */
extern int FUN_003483bc(void);
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0035bea0. */
/* Supplied declaration required: FUN_0037b240. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003b6a3c. */
/* Supplied declaration required: FUN_003bb45c. */
/* Supplied declaration required: FUN_003d2d6c. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_0046be60. */
/* Supplied declaration required: FUN_0046bed0. */
extern int FUN_0046e08c(int, unsigned int, unsigned int);


unsigned int FUN_00298978(void)

{
/* irregular: 31 native warning(s); review required */
  unsigned char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char *puVar7;
  unsigned char *puVar8;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [128];
  
  puVar2 = DAT_0057f568;
  puVar7 = temp_v4;
  puVar8 = temp_v4;
  if ((*(unsigned int *)(DAT_00570260 + 0x754) & 4) != 0 || (*(unsigned int *)(DAT_00570260 + 0x754) & 8) != 0) {
    return 0;
  }
  temp_v1 = DAT_0057f568[2];
  if (temp_v1 == 3) {
    temp_v0 = 0;
    DAT_0057f568[3] = DAT_0057f568[3] + 1;
    temp_v1 = FUN_00224880(puVar2[0xc]);
    if (temp_v1 != 2) {
      temp_v1 = FUN_00239414();
      if ((temp_v1 == 0) && (temp_v1 = FUN_001656a0(2), temp_v1 != 0)) {
        if (*(char *)(puVar2 + 9) != '\0') {
          if (puVar2[7] != 0) {
            FUN_0018719c();
          }
        }
        else {
          temp_v0 = 1;
        }
      }
    }
    else {
      temp_v0 = 1;
    }
    if (*(char *)(puVar2 + 0x1f) != '\0') {
      temp_v1 = 0;
      do {
        if (puVar2[temp_v1 * 2 + 0xf] != 0) {
          FUN_001656e0(puVar2[temp_v1 * 2 + 0xf],0);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 8);
      temp_v1 = 0;
      do {
        if ((puVar2[temp_v1 * 2 + 0xf] != 0) &&
           (temp_v2 = FUN_002a4b60(), temp_v2 == puVar2[temp_v1 * 2 + 0x10])) {
          FUN_001656e0(puVar2[temp_v1 * 2 + 0xf],1);
        }
        temp_v1 = temp_v1 + 1;
      } while (temp_v1 < 8);
    }
    if (!temp_v0) {
      return 0;
    }
    temp_v1 = 0;
    if (*(char *)(puVar2 + 9) != '\0') {
      temp_v1 = puVar2[7];
    }
    if (*(char *)(puVar2 + 9) != '\0' && temp_v1 != 0) {
      FUN_003fd63c(temp_v1,1);
    }
    puVar3 = DAT_0057f568;
    if (DAT_0057f568 != (unsigned int *)0x0) {
      *(unsigned char *)(DAT_0057f568 + 0x1f) = 0;
      FUN_002e6dd0(puVar3 + 0xf,0x40);
    }
    FUN_0035b304();
    FUN_0037b450();
    FUN_001695a0();
    FUN_002844e4();
    FUN_0037b240();
    FUN_0035bea0();
    FUN_003b6a3c();
    FUN_003bb45c();
    if (puVar2[0xc] != 0) {
      FUN_0019c364();
      puVar2[0xc] = 0;
    }
    if (puVar2[0xb] != 0) {
      FUN_0019a5a0();
      puVar2[0xb] = 0;
    }
    if (puVar2[0xd] != 0) {
      FUN_0019a5a0();
      puVar2[0xd] = 0;
    }
    puVar2[2] = 1;
    FUN_002852f0(0);
    FUN_00212204(0);
    FUN_00212204(1);
    FUN_003d2d6c(0xf);
    FUN_003fd63c(0x522,0,1);
    return 0;
  }
  if (temp_v1 >= 3) {
    if (temp_v1 == 0x58) {
      temp_v1 = FUN_003483bc();
      if (temp_v1 == 0) {
        return 0;
      }
      puVar2[2] = 1;
      return 0;
    }
    if (temp_v1 != 99) {
      return 0;
    }
    FUN_001631d0(*DAT_0057f568,0);
    *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xffffff8f;
    return 0;
  }
  if (temp_v1 == 0) {
    temp_v1 = DAT_0057f568[2];
    DAT_0057f568[3] = 0;
    *(unsigned char *)((int)puVar2 + 0x22) = 1;
    temp_v1 = temp_v1 + 1;
    puVar2[2] = temp_v1;
    return 0;
  }
  if (temp_v1 != 1) {
    if (temp_v1 != 2) {
      return 0;
    }
    if ((*(char *)(DAT_0057f568 + 8) != '\0') && (temp_v1 = FUN_0028029c(), temp_v1 == 0)) {
      FUN_002371b4(1);
      *(unsigned char *)((int)puVar2 + 0x21) = 1;
    }
    FUN_00100388(temp_v4,&LAB_00299154,puVar2[5],puVar2[5]);
    FUN_00100388(temp_v5,&LAB_0029916c,puVar2[5],puVar2[5]);
    temp_v1 = FUN_0046e08c(DAT_00570280,puVar2[5],0);
    if (temp_v1 != 0) {
      temp_v1 = DAT_00570280;
      FUN_0046bed0(DAT_00570280,puVar2[5],0);
      puVar2[0xb] = temp_v1;
      temp_v1 = DAT_00570280;
      FUN_0046be60(DAT_00570280,puVar2[5],0);
      puVar2[0xd] = temp_v1;
      if (puVar2[0xb] == 0 || temp_v1 == 0) {
        puVar2[2] = 1;
        puVar2[3] = 0;
        return 0;
      }
    }
    else {
      FUN_00167f94();
      if (puVar7 == (unsigned char *)0x0) {
        puVar2[2] = 1;
        puVar2[3] = 0;
        return 0;
      }
      FUN_0020214c();
      puVar2[0xb] = (unsigned int)puVar8;
      puVar7 = temp_v5;
      FUN_0020214c();
      puVar2[0xd] = (unsigned int)puVar7;
    }
    FUN_0031a400();
    FUN_00342010();
    FUN_003b61ec();
    FUN_001681cc(0x92);
    if (*(char *)((int)puVar2 + 0x21) != '\0') {
      FUN_002371b4(0);
      *(unsigned char *)((int)puVar2 + 0x21) = 0;
    }
    if (*(char *)((int)puVar2 + 0x23) != '\0') {
      FUN_0022677c(0,0xff);
      FUN_0022677c(1,0xff);
    }
    temp_v1 = puVar2[0xb];
    FUN_00275bc8(temp_v1,puVar2[0xd]);
    puVar2[0xc] = temp_v1;
    *(unsigned int *)(temp_v1 + 0x108) = 2;
    temp_v1 = FUN_00275f44(puVar2[0xc],puVar2[6]);
    if (temp_v1 != 0) {
      puVar2[2] = puVar2[2] + 1;
      puVar2[3] = 0;
      puVar2[7] = 0;
      FUN_0024b0c0(puVar2[0xc],puVar2[6]);
      puVar2[7] = 0;
      return 0;
    }
    puVar2[2] = 1;
    puVar2[3] = 0;
    return 0;
  }
  temp_v1 = FUN_00164af0(5);
  if (temp_v1 != 0) {
    temp_v1 = puVar2[4] - 1;
    if (temp_v1 >= 6) {
      temp_v1 = 0;
    }
    else if (temp_v1 < 0) {
      temp_v1 = 5;
    }
    else {
      temp_v1 = puVar2[4] - 1;
    }
    puVar2[4] = temp_v1;
  }
  temp_v1 = FUN_00164af0(6);
  temp_v2 = puVar2[4];
  if (temp_v1 != 0) {
    if (temp_v2 + 1 >= 6) {
      temp_v2 = 0;
    }
    else if (temp_v2 + 1 < 0) {
      temp_v2 = 5;
    }
    else {
      temp_v2 = temp_v2 + 1;
    }
    puVar2[4] = temp_v2;
  }
  temp_v1 = 999;
  switch(temp_v2) {
  case 0:
    temp_v2 = FUN_00164af0(4);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[5] - 1;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[5] - 1;
        }
      }
      puVar2[5] = temp_v3;
    }
    temp_v2 = FUN_00164af0(3);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[5] + 1;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[5] + 1;
        }
      }
      puVar2[5] = temp_v3;
    }
    temp_v2 = FUN_00164af0(8);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[5] - 10;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[5] - 10;
        }
      }
      puVar2[5] = temp_v3;
    }
    temp_v2 = FUN_00164af0(7);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[5] + 10;
      if (temp_v2 >= 1000) {
        temp_v1 = 0;
      }
      else if (-1 < temp_v2) {
        temp_v1 = temp_v2;
      }
      puVar2[5] = temp_v1;
    }
    temp_v1 = FUN_001656a0(0);
    if (temp_v1 != 0) {
      puVar2[2] = 2;
    }
    break;
  case 1:
    temp_v2 = FUN_00164af0(4);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[6] - 1;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[6] - 1;
        }
      }
      puVar2[6] = temp_v3;
    }
    temp_v2 = FUN_00164af0(3);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[6] + 1;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[6] + 1;
        }
      }
      puVar2[6] = temp_v3;
    }
    temp_v2 = FUN_00164af0(8);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[6] - 10;
      if (temp_v2 >= 1000) {
        temp_v3 = 0;
      }
      else {
        temp_v3 = temp_v1;
        if (-1 < temp_v2) {
          temp_v3 = puVar2[6] - 10;
        }
      }
      puVar2[6] = temp_v3;
    }
    temp_v2 = FUN_00164af0(7);
    if (temp_v2 != 0) {
      temp_v2 = puVar2[6] + 10;
      if (temp_v2 >= 1000) {
        temp_v1 = 0;
      }
      else if (-1 < temp_v2) {
        temp_v1 = temp_v2;
      }
      puVar2[6] = temp_v1;
    }
    temp_v1 = FUN_001656a0(0);
    if (temp_v1 != 0) {
      puVar2[2] = 2;
    }
    break;
  case 2:
    temp_v1 = FUN_001656a0(0);
    if (temp_v1 != 0) {
      puVar2[2] = 0x58;
    }
    break;
  case 3:
    temp_v1 = FUN_00180008(2);
    if ((temp_v1 == 0) &&
       ((temp_v1 = FUN_00164af0(4), temp_v1 != 0 || (temp_v1 = FUN_00164af0(3), temp_v1 != 0)))) {
      *(unsigned char *)(puVar2 + 8) = *(char *)(puVar2 + 8) != '\x01';
    }
    break;
  case 4:
    temp_v1 = FUN_00164af0(4);
    if ((temp_v1 != 0) || (temp_v1 = FUN_00164af0(3), temp_v1 != 0)) {
      *(unsigned char *)((int)puVar2 + 0x23) = *(char *)((int)puVar2 + 0x23) != '\x01';
    }
    break;
  case 5:
    temp_v1 = FUN_00164af0(4);
    if ((temp_v1 != 0) || (temp_v1 = FUN_00164af0(3), temp_v1 != 0)) {
      *(unsigned char *)(puVar2 + 9) = *(char *)(puVar2 + 9) != '\x01';
    }
  }
  temp_v1 = FUN_001656a0(2);
  if (temp_v1 != 0) {
    temp_v1 = 99;
    puVar2[2] = temp_v1;
  }
  return 0;
}
