/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eb89c` (_code @ 0x1eb89c, 0x514 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00210d08(...);
int FUN_002598f0(...);
int FUN_002b6940(...);
int devilGetRecord(void);
int FUN_002bd82c(...);
int FUN_002bdf94(...);
int drawSetColorFromRGBA8(...);
int FUN_002be624(...);
int FUN_002bed3c(void);
int FUN_002bf288(...);
int FUN_002bf380(int, int, int, int, int, int);
int FUN_002bf538(void);

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_6_stack;

extern unsigned char LAB_001ebc78; /* 0x1ebc78 */
extern unsigned char LAB_001ebc84; /* 0x1ebc84 */
extern unsigned char LAB_001ebc8c; /* 0x1ebc8c */

/* Supplied declaration required: FUN_00210d08. */
/* Supplied declaration required: FUN_002598f0. */
/* Supplied declaration required: FUN_002b6940. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: FUN_002bd82c. */
/* Supplied declaration required: FUN_002bdf94. */
/* Supplied declaration required: drawSetColorFromRGBA8. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002bed3c. */
/* Supplied declaration required: FUN_002bf288. */
/* Supplied declaration required: FUN_002bf380. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf538. */


void FUN_001eb89c(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 2 goto(s); 12 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int unaff_r10;
  unsigned int unaff_r11;
  unsigned char temp_v7 [4];
  int temp_v8;
  unsigned char temp_v9 [28];
  
  temp_v8 = param_2 + 0x38;
  FUN_002bed3c();
  FUN_002bf538();
  param_4 = param_4 + *(int *)(param_3 + 4);
  param_5 = *(int *)(param_3 + 8) + param_5;
  if (param_6 != 0) {
    FUN_002bf288(2,0x39,0x56,param_4,param_5,0x6f);
    return;
  }
  if (*(char *)(param_2 + 0x37) != '\0') {
    if (*(char *)(param_2 + 0x37) == '\x01') {
      FUN_002bf380(2,0x39,10,param_4,param_5,0x6f);
      unaff_r10 = 0xc0c0c000;
      unaff_r11 = 0xffffff00;
    }
  }
  else {
    FUN_002bf380(2,0x39,9,param_4,param_5,0x6f);
    unaff_r10 = 0x32323200;
    unaff_r11 = 0;
  }
  temp_v0 = FUN_002bf4f8(0x39,0x75);
  FUN_002bd82c(*param_1,unaff_r11);
  FUN_002598f0(*param_1,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0x70);
  if ((*(unsigned char *)(param_2 + 0x20) & 2) != 0) {
    temp_v0 = FUN_002bf4f8(0x39,0x76);
    if (*(char *)(param_2 + 0x37) == '\0') {
      temp_v4 = 0x840000;
    }
    else {
      temp_v4 = 0xf33700;
    }
    FUN_002bd82c(param_1[2],temp_v4);
    FUN_002598f0(param_1[2],*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0x70);
  }
  temp_v0 = FUN_002bf4f8(0x39,0x77);
  FUN_002bd82c(param_1[1],unaff_r10);
  FUN_002598f0(param_1[1],*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0x70);
  FUN_002bf288(2,0x39,0x5a,param_4,param_5,0x70);
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v8 + 0x10);
  if (temp_v1 != 0) {
    devilGetRecord();
    temp_v0 = FUN_002bf4f8(0x39,0x78);
    FUN_002b6940(*(unsigned short *)(temp_v1 + 0x90),*(short *)(temp_v0 + 8) + param_4,
                 *(short *)(temp_v0 + 10) + param_5,0x71);
  }
  drawSetColorFromRGBA8(unaff_r10);
  FUN_002be624(temp_v9,&LAB_001ebc78,*(unsigned char *)(param_2 + 0x36));
  temp_v0 = FUN_002bf4f8(0x39,0x74);
  FUN_002bdf94(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x74,
               temp_v9);
  temp_v1 = *(unsigned int *)(param_2 + 0x28) / 0xe10;
  temp_v2 = *(unsigned int *)(param_2 + 0x28) % 0xe10;
  FUN_002be624(temp_v7,&LAB_001ebc84,temp_v2 % 0x3c);
  temp_v0 = FUN_002bf4f8(0x39,0x7c);
  FUN_002bdf94(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
               temp_v7);
  FUN_002be624(temp_v7,&LAB_001ebc8c,0x3a);
  temp_v0 = FUN_002bf4f8(0x39,0x79);
  FUN_002bdf94(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
               temp_v7);
  FUN_002be624(temp_v7,&LAB_001ebc84,temp_v2 / 0x3c);
  temp_v0 = FUN_002bf4f8(0x39,0x7e);
  FUN_002bdf94(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
               temp_v7);
  FUN_002be624(temp_v7,&LAB_001ebc8c,0x3a);
  temp_v0 = FUN_002bf4f8(0x39,0x7a);
  FUN_002bdf94(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
               temp_v7);
  temp_v0 = 0;
  temp_v2 = 4;
  do {
    temp_v6 = temp_v2 & 0xff;
    temp_v5 = 1;
    if (temp_v1 != 0) {
      if (temp_v6 != 1) {
LAB_001ebc3c:
        if ((temp_v2 & 1) == 0) {
          temp_v5 = 10;
        }
        for (temp_v3 = (temp_v6 - 1) >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
          temp_v5 = temp_v5 * 100;
        }
      }
      if (temp_v5 <= temp_v1) {
        temp_v5 = temp_v1;
        if (temp_v6 != 1) {
          if ((temp_v2 & 1) == 0) {
            temp_v5 = temp_v1 / 10;
          }
          for (temp_v3 = (temp_v6 - 1) >> 1; temp_v3 != 0; temp_v3 = temp_v3 - 1) {
            temp_v6 = (unsigned int)(((unsigned long long)temp_v5 / 10) * 0xcccccccd);
            temp_v5 = (unsigned int)(((unsigned long long)temp_v5 / 10) / 10);
          }
        }
        temp_v5 = temp_v5 % 10;
        if (temp_v5 != 10) goto LAB_001ebcbc;
      }
      temp_v7[temp_v0] = 0x20;
    }
    else {
      if (temp_v6 != 1) goto LAB_001ebc3c;
      temp_v5 = 0;
LAB_001ebcbc:
      FUN_002be624(temp_v7 + temp_v0,&LAB_001ebc78,temp_v5,temp_v6);
    }
    temp_v2 = temp_v2 - 1;
    temp_v0 = temp_v0 + 1;
    if ((int)temp_v2 < 1) {
      temp_v7[temp_v0] = 0;
      temp_v0 = FUN_002bf4f8(0x39,0x82);
      FUN_002bdf94(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
                   temp_v7);
      temp_v0 = FUN_002bf4f8(0x39,0x89);
      FUN_00210d08(*(unsigned int *)(param_2 + 0x30),*(short *)(temp_v0 + 8) + param_4,
                   *(short *)(temp_v0 + 10) + param_5,0x71);
      FUN_002bed3c();
      FUN_002bf538();
      return;
    }
  } while( 1 );
}

} /* extern "C" */
