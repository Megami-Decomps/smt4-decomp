/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00225ddc` (_code @ 0x225ddc, 0x75c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00137ee0(...);
int FUN_001631d0(...);
int FUN_001656e0(...);
int FUN_002852f0(...);
int FUN_00324c48(...);
int FUN_004731d8(void);
int FUN_0047db34(...);
int FUN_0047e32c(...);

int FUN_00100388(...);
int FUN_001681cc(int);
int FUN_001695a0(void);
int FUN_00183318(int);
int FUN_0019a5a0(void);
int FUN_0019c364(void);
int FUN_0020214c(void);
int FUN_0024b0c0(unsigned int, unsigned int);
int FUN_00275bc8(int, unsigned int);
int FUN_00275f44(unsigned int, int);
int FUN_002844e4(void);
int FUN_002e6dd0(...);
int FUN_0031a400(void);
int FUN_00342010(void);
int FUN_0035b304(void);
int FUN_0035bea0(void);
int FUN_0035d88c(...);
int FUN_0037b240(void);
int FUN_0037b450(void);
int FUN_0037de3c(int);
int FUN_003b61ec(void);
int FUN_003b6a3c(void);
int FUN_003bb45c(void);
int FUN_003d54f8(...);
int FUN_003fd63c(...);
int FUN_0046be60(int, unsigned int, int);
int FUN_0046bed0(int, unsigned int, int);
int FUN_0047e430(int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp128; /* 0x128: local_128 */
} void_stack;

extern unsigned char LAB_00226234; /* 0x226234 */
extern unsigned char LAB_0022624c; /* 0x22624c */
extern int DAT_00570260; /* 0x570260 */
extern int DAT_00570280; /* 0x570280 */
extern unsigned int *DAT_0057f568; /* 0x57f568 */
extern unsigned int DAT_005e1f70; /* 0x5e1f70 */
extern unsigned int DAT_005e1f74; /* 0x5e1f74 */
extern unsigned char DAT_005e1f78; /* 0x5e1f78 */
extern unsigned int DAT_005f1604; /* 0x5f1604 */
extern int DAT_005f1610; /* 0x5f1610 */
extern unsigned int DAT_005f1658; /* 0x5f1658 */
extern signed char DAT_005f1b70; /* 0x5f1b70 */
extern unsigned int DAT_005f1b74; /* 0x5f1b74 */
extern unsigned int DAT_005f1b78; /* 0x5f1b78 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00137ee0. */
extern int FUN_0013def0(unsigned int);
extern int FUN_00162ea4(void);
/* Supplied declaration required: FUN_001631d0. */
/* Supplied declaration required: FUN_001656e0. */
/* Supplied declaration required: FUN_001681cc. */
/* Supplied declaration required: FUN_001695a0. */
/* Supplied declaration required: FUN_00183318. */
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_0019c364. */
/* Supplied declaration required: FUN_0020214c. */
extern int FUN_00224880(unsigned int);
/* Supplied declaration required: FUN_0024b0c0. */
/* Supplied declaration required: FUN_00275bc8. */
/* Supplied declaration required: FUN_00275f44. */
/* Supplied declaration required: FUN_002844e4. */
/* Supplied declaration required: FUN_002852f0. */
extern int FUN_002a4b60(void);
extern int FUN_002e07f4(void);
/* Supplied declaration required: FUN_002e6dd0. */
/* Supplied declaration required: FUN_0031a400. */
extern int FUN_0031d270(void);
/* Supplied declaration required: FUN_00324c48. */
/* Supplied declaration required: FUN_00342010. */
extern int FUN_00357bc8(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_0035b304. */
/* Supplied declaration required: FUN_0035bea0. */
/* Supplied declaration required: FUN_0035d88c. */
extern int FUN_0036fe58(void);
/* Supplied declaration required: FUN_0037b240. */
/* Supplied declaration required: FUN_0037b450. */
/* Supplied declaration required: FUN_0037de3c. */
extern int FUN_00399e04(void);
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_003b6a3c. */
/* Supplied declaration required: FUN_003bb45c. */
/* Supplied declaration required: FUN_003d54f8. */
/* Supplied declaration required: FUN_003fd63c. */
/* Supplied declaration required: FUN_0046be60. */
/* Supplied declaration required: FUN_0046bed0. */
extern int FUN_0046e08c(int, unsigned int, unsigned int);
extern char *FUN_004731a4(void);
/* Supplied declaration required: FUN_004731d8. */
extern int FUN_00473244(void);
/* Supplied declaration required: FUN_0047db34. */
extern int FUN_0047dfec(int);
/* Supplied declaration required: FUN_0047e32c. */
/* Supplied declaration required: FUN_0047e430. */


unsigned int FUN_00225ddc(void)

{
/* irregular: 36 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  char *pcVar7;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6 [128];
  unsigned char temp_v7 [132];
  
  puVar2 = DAT_0057f568;
  if ((*(unsigned int *)(DAT_00570260 + 0x754) & 4) != 0 || (*(unsigned int *)(DAT_00570260 + 0x754) & 8) != 0) {
    return 0;
  }
  temp_v3 = DAT_0057f568[2];
  if (temp_v3 == 0x5f) {
    temp_v1 = FUN_002e07f4();
    temp_v3 = DAT_00570260;
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v4 = *(unsigned int *)(DAT_00570260 + 0x754);
    if ((temp_v4 & 4) != 0 || (temp_v4 & 8) != 0) {
      return 0;
    }
    *(unsigned int *)(DAT_00570260 + 0x754) = temp_v4 & 0xffffff8f;
    FUN_0047e430(temp_v3 + 0xa8,0);
    puVar2[2] = 0x60;
    return 0;
  }
  if (temp_v3 < 0x5f) {
    if (temp_v3 == 0) {
      *(unsigned char *)((int)DAT_0057f568 + 0x22) = 0;
      temp_v2 = DAT_005e1f70;
      puVar2[5] = DAT_005e1f70;
      puVar2[6] = DAT_005e1f74;
      FUN_00100388(temp_v6,&LAB_00226234,temp_v2,temp_v2);
      FUN_00100388(temp_v7,&LAB_0022624c,puVar2[5],puVar2[5]);
      temp_v3 = FUN_0046e08c(DAT_00570280,puVar2[5],0);
      if (temp_v3 != 0) {
        temp_v3 = DAT_00570280;
        FUN_0046bed0(DAT_00570280,puVar2[5],0);
        puVar2[0xb] = temp_v3;
        temp_v3 = DAT_00570280;
        FUN_0046be60(DAT_00570280,puVar2[5],0);
        puVar2[0xd] = temp_v3;
        if (puVar2[0xb] == 0 || temp_v3 == 0) {
          puVar2[2] = 0x5f;
          temp_v3 = FUN_0013def0(0);
          if (temp_v3 == 3) {
            FUN_003d54f8(0,5);
          }
          temp_v3 = FUN_0013def0(1);
          if (temp_v3 == 3) {
            FUN_003d54f8(1,5);
          }
          temp_v3 = FUN_00399e04();
          if (temp_v3 == 0) {
            return 0;
          }
          FUN_00183318(1);
          return 0;
        }
      }
      else {
        puVar4 = temp_v6;
        FUN_0020214c();
        puVar2[0xb] = (unsigned int)puVar4;
        puVar4 = temp_v7;
        FUN_0020214c();
        puVar2[0xd] = (unsigned int)puVar4;
      }
      FUN_0031a400();
      FUN_00342010();
      FUN_003b61ec();
      FUN_001681cc(0x92);
      temp_v3 = puVar2[0xb];
      FUN_00275bc8(temp_v3,puVar2[0xd]);
      puVar2[0xc] = temp_v3;
      *(unsigned int *)(temp_v3 + 0x108) = 2;
      temp_v3 = puVar2[6];
      if (temp_v3 == -1) {
        temp_v3 = FUN_00357bc8(puVar2[0xb],&DAT_005e1f78);
        puVar2[6] = temp_v3;
      }
      FUN_00275f44(puVar2[0xc],temp_v3);
      puVar2[7] = 0;
      FUN_0024b0c0(puVar2[0xc],puVar2[6]);
      puVar2[2] = puVar2[2] + 1;
      puVar2[7] = 0;
      return 0;
    }
    if (temp_v3 != 1) {
      if (temp_v3 == 10) {
        return 0;
      }
      if (temp_v3 != 0xb) {
        return 0;
      }
      temp_v3 = FUN_002e07f4();
      if (temp_v3 == 0) {
        return 0;
      }
      temp_v2 = 1;
    }
    else {
      temp_v3 = FUN_0013def0(0);
      if (((temp_v3 != 3) || (temp_v3 = FUN_0013def0(1), temp_v3 != 3)) &&
         (temp_v3 = FUN_0031d270(), temp_v3 != 0)) {
        FUN_0035d88c(0);
      }
      temp_v3 = FUN_0036fe58();
      if (temp_v3 != 0) {
        FUN_0037de3c(0);
        FUN_0035d88c(0);
      }
      temp_v3 = FUN_0031d270();
      if ((temp_v3 == 0) || (temp_v3 = FUN_00162ea4(), temp_v3 != 0)) {
        temp_v3 = FUN_00224880(puVar2[0xc]);
        if (temp_v3 == 2) {
          if (puVar2[7] != 0) {
            FUN_003fd63c(puVar2[7],1);
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
          puVar2[2] = 99;
          FUN_002852f0(0);
        }
        temp_v3 = 0;
        if (*(char *)(puVar2 + 0x1f) == '\0') {
          return 0;
        }
        do {
          if (puVar2[temp_v3 * 2 + 0xf] != 0) {
            FUN_001656e0(puVar2[temp_v3 * 2 + 0xf],0);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 8);
        temp_v3 = 0;
        do {
          if ((puVar2[temp_v3 * 2 + 0xf] != 0) &&
             (temp_v1 = FUN_002a4b60(), temp_v1 == puVar2[temp_v3 * 2 + 0x10])) {
            FUN_001656e0(puVar2[temp_v3 * 2 + 0xf],1);
          }
          temp_v3 = temp_v3 + 1;
        } while (temp_v3 < 8);
        return 0;
      }
      FUN_003d54f8(0,5);
      FUN_003d54f8(1,5);
      FUN_0035d88c(0);
      temp_v2 = 0xb;
    }
    puVar2[2] = temp_v2;
    return 0;
  }
  if (temp_v3 == 0x60) {
    temp_v3 = FUN_0047dfec(DAT_00570260 + 0xa8);
    if (temp_v3 == 0) {
      return 0;
    }
    FUN_0047e32c(DAT_00570260 + 0xa8);
    temp_v3 = FUN_00473244();
    if (temp_v3 == 0) {
      temp_v2 = 0x62;
    }
    else {
      temp_v2 = 0x61;
    }
    puVar2[2] = temp_v2;
    if (puVar2[0xb] != 0) {
      FUN_0019a5a0();
      puVar2[0xb] = 0;
    }
    if (puVar2[0xd] == 0) {
      return 0;
    }
    FUN_0019a5a0();
    puVar2[0xd] = 0;
    return 0;
  }
  if (temp_v3 != 0x61) {
    if (temp_v3 != 0x62) {
      if (temp_v3 != 99) {
        return 0;
      }
      FUN_001631d0(*DAT_0057f568,0);
      temp_v3 = DAT_00570260;
      *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xffffff8f;
      if (*(char *)(temp_v3 + 0xc0) != '\0') {
        *(unsigned char *)(temp_v3 + 0xc0) = 0;
        FUN_0047db34(temp_v3 + 0xa8,1);
      }
      if (*(char *)(puVar2 + 0xe) == '\0') {
        return 0;
      }
      *(unsigned char *)(puVar2 + 0xe) = 0;
      FUN_00137ee0(1,0);
      return 0;
    }
    if (DAT_005f1b70 != '\0') {
      if (DAT_005f1610 == 1) {
        FUN_00137ee0(6,0);
      }
      if (DAT_005f1610 == 2) {
        FUN_00137ee0(8,0);
      }
      if (DAT_005f1610 == 3) {
        temp_v5 = romwright_piece_2_2((short)DAT_005f1b78,(short)DAT_005f1b74 - 200);
        FUN_00137ee0(0xe,&temp_v5,4);
      }
    }
  }
  else {
    pcVar7 = (char *)FUN_004731a4();
    temp_v0 = *pcVar7;
    if (temp_v0 != '\x01') {
      if (temp_v0 != '\x02') {
        if (temp_v0 == '\x03') {
          temp_v5 = (unsigned int)(unsigned char)pcVar7[1];
          FUN_00137ee0(0xe,&temp_v5,4);
        }
      }
      else {
        FUN_00324c48((unsigned char)pcVar7[1] + 100,pcVar7[2],0xffffffff);
        DAT_005f1604 = 0xffffffff;
        temp_v2 = 8;
        FUN_00137ee0(temp_v2,0);
      }
    }
    else {
      FUN_00324c48(pcVar7[1],pcVar7[2],pcVar7[3]);
      temp_v2 = 6;
      FUN_00137ee0(temp_v2,0);
    }
    DAT_005f1b70 = '\0';
    DAT_005f1658 = 0;
    FUN_004731d8();
  }
  FUN_001631d0(*DAT_0057f568,0);
  *(unsigned int *)(DAT_00570260 + 0x754) = *(unsigned int *)(DAT_00570260 + 0x754) & 0xffffff8f;
  puVar2[2] = 100;
  return 0;
}

} /* extern "C" */
