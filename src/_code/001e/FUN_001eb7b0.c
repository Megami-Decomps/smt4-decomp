/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001eb7b0` (_code @ 0x1eb7b0, 0x514 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} param_6_stack;

extern unsigned char LAB_001ebb8c; /* 0x1ebb8c */
extern unsigned char LAB_001ebb98; /* 0x1ebb98 */
extern unsigned char LAB_001ebba0; /* 0x1ebba0 */

/* Supplied declaration required: FUN_00210c0c. */
/* Supplied declaration required: FUN_00259b28. */
/* Supplied declaration required: FUN_002b6c80. */
/* Supplied declaration required: FUN_002b9364. */
/* Supplied declaration required: FUN_002bda10. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002bef14. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */


void FUN_001eb7b0(unsigned int *param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

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
  FUN_002bef14();
  FUN_002bf710();
  param_4 = param_4 + *(int *)(param_3 + 4);
  param_5 = *(int *)(param_3 + 8) + param_5;
  if (param_6 != 0) {
    FUN_002bf460(2,0x39,0x56,param_4,param_5,0x6f);
    return;
  }
  if (*(char *)(param_2 + 0x37) != '\0') {
    if (*(char *)(param_2 + 0x37) == '\x01') {
      FUN_002bf558(2,0x39,10,param_4,param_5,0x6f);
      unaff_r10 = 0xc0c0c000;
      unaff_r11 = 0xffffff00;
    }
  }
  else {
    FUN_002bf558(2,0x39,9,param_4,param_5,0x6f);
    unaff_r10 = 0x32323200;
    unaff_r11 = 0;
  }
  temp_v0 = FUN_002bf6d0(0x39,0x75);
  FUN_002bda10(*param_1,unaff_r11);
  FUN_00259b28(*param_1,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0x70);
  if ((*(unsigned char *)(param_2 + 0x20) & 2) != 0) {
    temp_v0 = FUN_002bf6d0(0x39,0x76);
    if (*(char *)(param_2 + 0x37) == '\0') {
      temp_v4 = 0x840000;
    }
    else {
      temp_v4 = 0xf33700;
    }
    FUN_002bda10(param_1[2],temp_v4);
    FUN_00259b28(param_1[2],*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0x70);
  }
  temp_v0 = FUN_002bf6d0(0x39,0x77);
  FUN_002bda10(param_1[1],unaff_r10);
  FUN_00259b28(param_1[1],*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0x70);
  FUN_002bf460(2,0x39,0x5a,param_4,param_5,0x70);
  temp_v1 = (unsigned int)*(unsigned short *)(temp_v8 + 0x10);
  if (temp_v1 != 0) {
    FUN_002b9364();
    temp_v0 = FUN_002bf6d0(0x39,0x78);
    FUN_002b6c80(*(unsigned short *)(temp_v1 + 0x90),*(short *)(temp_v0 + 8) + param_4,
                 *(short *)(temp_v0 + 10) + param_5,0x71);
  }
  FUN_002be4dc(unaff_r10);
  FUN_002be7fc(temp_v9,&LAB_001ebb8c,*(unsigned char *)(param_2 + 0x36));
  temp_v0 = FUN_002bf6d0(0x39,0x74);
  FUN_002be16c(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x74,
               temp_v9);
  temp_v1 = *(unsigned int *)(param_2 + 0x28) / 0xe10;
  temp_v2 = *(unsigned int *)(param_2 + 0x28) % 0xe10;
  FUN_002be7fc(temp_v7,&LAB_001ebb98,temp_v2 % 0x3c);
  temp_v0 = FUN_002bf6d0(0x39,0x7c);
  FUN_002be16c(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
               temp_v7);
  FUN_002be7fc(temp_v7,&LAB_001ebba0,0x3a);
  temp_v0 = FUN_002bf6d0(0x39,0x79);
  FUN_002be16c(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
               temp_v7);
  FUN_002be7fc(temp_v7,&LAB_001ebb98,temp_v2 / 0x3c);
  temp_v0 = FUN_002bf6d0(0x39,0x7e);
  FUN_002be16c(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
               temp_v7);
  FUN_002be7fc(temp_v7,&LAB_001ebba0,0x3a);
  temp_v0 = FUN_002bf6d0(0x39,0x7a);
  FUN_002be16c(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
               temp_v7);
  temp_v0 = 0;
  temp_v2 = 4;
  do {
    temp_v6 = temp_v2 & 0xff;
    temp_v5 = 1;
    if (temp_v1 != 0) {
      if (temp_v6 != 1) {
LAB_001ebb50:
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
        if (temp_v5 != 10) goto LAB_001ebbd0;
      }
      temp_v7[temp_v0] = 0x20;
    }
    else {
      if (temp_v6 != 1) goto LAB_001ebb50;
      temp_v5 = 0;
LAB_001ebbd0:
      FUN_002be7fc(temp_v7 + temp_v0,&LAB_001ebb8c,temp_v5,temp_v6);
    }
    temp_v2 = temp_v2 - 1;
    temp_v0 = temp_v0 + 1;
    if ((int)temp_v2 < 1) {
      temp_v7[temp_v0] = 0;
      temp_v0 = FUN_002bf6d0(0x39,0x82);
      FUN_002be16c(0,*(short *)(temp_v0 + 8) + param_4,*(short *)(temp_v0 + 10) + param_5,0,5,0x71,
                   temp_v7);
      temp_v0 = FUN_002bf6d0(0x39,0x89);
      FUN_00210c0c(*(unsigned int *)(param_2 + 0x30),*(short *)(temp_v0 + 8) + param_4,
                   *(short *)(temp_v0 + 10) + param_5,0x71);
      FUN_002bef14();
      FUN_002bf710();
      return;
    }
  } while( 1 );
}
