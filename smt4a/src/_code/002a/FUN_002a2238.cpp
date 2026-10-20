/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a2238` (_code @ 0x2a2238, 0x5a4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_001527d8(...);
int FUN_00164b5c(int, int, int, int, int, int);
int FUN_001677c0(void);
int FUN_00169a1c(...);
int FUN_00180310(...);
int FUN_001835b4(...);
int FUN_00183bb0(void);
int FUN_00184310(void);
int FUN_00184e64(...);
int FUN_0025cc78(...);
int FUN_002e1b64(...);

/* stack frame of param_6: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
} param_6_stack;

extern unsigned char LAB_002a2624; /* 0x2a2624 */
extern unsigned char LAB_002a2634; /* 0x2a2634 */
extern unsigned char LAB_002a263c; /* 0x2a263c */

/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_001527d8. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00169a1c. */
/* Supplied declaration required: FUN_00180310. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00184e64. */
extern unsigned int FUN_0019acdc(short, unsigned int);
extern int FUN_0019e52c(unsigned short);
/* Supplied declaration required: FUN_0025cc78. */
/* Supplied declaration required: FUN_002e1b64. */
extern unsigned short FUN_0036fcd0(unsigned int, unsigned int);


void FUN_002a2238(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
/* irregular: 2 goto(s); 12 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int unaff_r8;
  unsigned int unaff_r11;
  unsigned char temp_v9 [16];
  unsigned char temp_v10 [12];
  
  FUN_00183bb0();
  FUN_001677c0();
  param_4 = param_4 + *(int *)(param_3 + 4);
  param_5 = *(int *)(param_3 + 8) + param_5;
  if (param_6 != 0) {
    FUN_001835b4(2,0x2e,0x56,param_4,param_5,0x65);
    return;
  }
  if (*(char *)(param_2 + 0x21) != '\0') {
    if (*(char *)(param_2 + 0x21) == '\x01') {
      FUN_00164b5c(2,0x2e,10,param_4,param_5,0x65);
      unaff_r11 = 0xc0c0c000;
      unaff_r8 = 0xffffff00;
      if ((*(unsigned char *)(param_2 + 0x20) & 4) != 0) {
        FUN_001835b4(2,0x2e,0x166,param_4,param_5,0x65);
        unaff_r8 = 0xe6c80000;
      }
    }
  }
  else {
    FUN_00164b5c(2,0x2e,9,param_4,param_5,0x65);
    unaff_r11 = 0x32323200;
    unaff_r8 = 0;
    if ((*(unsigned char *)(param_2 + 0x20) & 4) != 0) {
      FUN_001835b4(2,0x2e,0x165,param_4,param_5,0x65);
      unaff_r8 = 0x896e0000;
    }
  }
  temp_v1 = FUN_001834a4(0x2e,0x75);
  FUN_001527d8(*param_1,unaff_r8);
  FUN_0025cc78(*param_1,*(short *)(temp_v1 + 8) + param_4,*(short *)(temp_v1 + 10) + param_5,0x66);
  if ((*(unsigned char *)(param_2 + 0x20) & 2) != 0) {
    temp_v1 = FUN_001834a4(0x2e,0x76);
    if (*(char *)(param_2 + 0x21) == '\0') {
      temp_v6 = 0x6e0000;
    }
    else {
      temp_v6 = 0xf33700;
    }
    FUN_001527d8(param_1[2],temp_v6);
    FUN_0025cc78(param_1[2],*(short *)(temp_v1 + 8) + param_4,*(short *)(temp_v1 + 10) + param_5,0x66);
  }
  FUN_001835b4(2,0x2e,0x5a,param_4,param_5,0x66);
  temp_v2 = (unsigned int)*(unsigned short *)(param_2 + 0x34);
  if (temp_v2 != 0) {
    FUN_00184310();
    temp_v1 = FUN_001834a4(0x2e,0x78);
    FUN_00169a1c(*(unsigned short *)(temp_v2 + 0x9c),*(short *)(temp_v1 + 8) + param_4,
                 *(short *)(temp_v1 + 10) + param_5,0x67);
  }
  if (*(short *)(param_2 + 0x38) != 0) {
    temp_v6 = FUN_0019acdc(*(short *)(param_2 + 0x38),0);
    temp_v0 = FUN_0036fcd0(temp_v6,0);
    temp_v1 = FUN_0019e52c(temp_v0);
    FUN_00184310();
    temp_v3 = FUN_001834a4(0x2e,0x100);
    FUN_00169a1c(*(unsigned short *)(temp_v1 + 0x9c),*(short *)(temp_v3 + 8) + param_4,
                 *(short *)(temp_v3 + 10) + param_5,0x67);
  }
  FUN_00184e64(unaff_r11);
  FUN_00100388(temp_v9,&LAB_002a2624,*(unsigned short *)(param_2 + 0x36));
  temp_v1 = FUN_001834a4(0x2e,0x74);
  FUN_00180310(0,*(short *)(temp_v1 + 8) + param_4,*(short *)(temp_v1 + 10) + param_5,0,5,0x6a,
               temp_v9);
  FUN_00184e64(0xb9d7d700);
  temp_v2 = *(unsigned int *)(param_2 + 0x28) / 0xe10;
  temp_v4 = *(unsigned int *)(param_2 + 0x28) % 0xe10;
  FUN_00100388(temp_v10,&LAB_002a2634,temp_v4 % 0x3c);
  temp_v1 = FUN_001834a4(0x2e,0x7c);
  FUN_00180310(0,*(short *)(temp_v1 + 8) + param_4,*(short *)(temp_v1 + 10) + param_5,0,5,0x67,
               temp_v10);
  FUN_00100388(temp_v10,&LAB_002a263c,0x3a);
  temp_v1 = FUN_001834a4(0x2e,0x79);
  FUN_00180310(0,*(short *)(temp_v1 + 8) + param_4,*(short *)(temp_v1 + 10) + param_5,0,5,0x67,
               temp_v10);
  FUN_00100388(temp_v10,&LAB_002a2634,temp_v4 / 0x3c);
  temp_v1 = FUN_001834a4(0x2e,0x7e);
  FUN_00180310(0,*(short *)(temp_v1 + 8) + param_4,*(short *)(temp_v1 + 10) + param_5,0,5,0x67,
               temp_v10);
  FUN_00100388(temp_v10,&LAB_002a263c,0x3a);
  temp_v1 = FUN_001834a4(0x2e,0x7a);
  FUN_00180310(0,*(short *)(temp_v1 + 8) + param_4,*(short *)(temp_v1 + 10) + param_5,0,5,0x67,
               temp_v10);
  temp_v1 = 0;
  temp_v4 = 4;
  do {
    temp_v8 = temp_v4 & 0xff;
    temp_v7 = 1;
    if (temp_v2 != 0) {
      if (temp_v8 != 1) {
LAB_002a2694:
        if ((temp_v4 & 1) == 0) {
          temp_v7 = 10;
        }
        for (temp_v5 = (temp_v8 - 1) >> 1; temp_v5 != 0; temp_v5 = temp_v5 - 1) {
          temp_v7 = temp_v7 * 100;
        }
      }
      if (temp_v7 <= temp_v2) {
        temp_v7 = temp_v2;
        if (temp_v8 != 1) {
          if ((temp_v4 & 1) == 0) {
            temp_v7 = temp_v2 / 10;
          }
          for (temp_v5 = (temp_v8 - 1) >> 1; temp_v5 != 0; temp_v5 = temp_v5 - 1) {
            temp_v8 = (unsigned int)(((unsigned long long)temp_v7 / 10) * 0xcccccccd);
            temp_v7 = (unsigned int)(((unsigned long long)temp_v7 / 10) / 10);
          }
        }
        temp_v7 = temp_v7 % 10;
        if (temp_v7 != 10) goto LAB_002a26e8;
      }
      temp_v10[temp_v1] = 0x20;
    }
    else {
      if (temp_v8 != 1) goto LAB_002a2694;
      temp_v7 = 0;
LAB_002a26e8:
      FUN_00100388(temp_v10 + temp_v1,&LAB_002a2624,temp_v7,temp_v8);
    }
    temp_v4 = temp_v4 - 1;
    temp_v1 = temp_v1 + 1;
    if ((int)temp_v4 < 1) {
      temp_v10[temp_v1] = 0;
      temp_v1 = FUN_001834a4(0x2e,0x82);
      FUN_00180310(0,*(short *)(temp_v1 + 8) + param_4,*(short *)(temp_v1 + 10) + param_5,0,5,0x67,
                   temp_v10);
      temp_v1 = FUN_001834a4(0x2e,0x89);
      FUN_002e1b64(*(unsigned int *)(param_2 + 0x30),*(short *)(temp_v1 + 8) + param_4,
                   *(short *)(temp_v1 + 10) + param_5,0x67);
      FUN_00183bb0();
      FUN_001677c0();
      return;
    }
  } while( 1 );
}

} /* extern "C" */
