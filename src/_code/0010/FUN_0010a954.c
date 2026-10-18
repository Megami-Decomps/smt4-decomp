/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a954` (_code @ 0x10a954, 0x540 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} void_stack;

extern unsigned char LAB_0010ad3c; /* 0x10ad3c */
extern unsigned char LAB_0010ad44; /* 0x10ad44 */
extern unsigned char LAB_0010ad48; /* 0x10ad48 */
extern int DAT_0043e190; /* 0x43e190 */
extern unsigned int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: SBORROW4 (INT_SBORROW). */
/* Supplied declaration required: FUN_001188d0. */
/* Supplied declaration required: FUN_00124c48. */
/* Supplied declaration required: FUN_001260b8. */
/* Supplied declaration required: FUN_002bdeb8. */
/* Supplied declaration required: FUN_002be16c. */
/* Supplied declaration required: FUN_002be4dc. */
/* Supplied declaration required: FUN_002be548. */
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
extern unsigned int FUN_002be828(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bef14. */
extern int FUN_002bef70(int);
/* Supplied declaration required: FUN_002bef7c. */
/* Supplied declaration required: FUN_002bef88. */
/* Supplied declaration required: FUN_002befdc. */
/* Supplied declaration required: FUN_002bf460. */
/* Supplied declaration required: FUN_002bf558. */
/* Supplied declaration required: FUN_002bf6d0. */
/* Supplied declaration required: FUN_002bf710. */
extern unsigned int FUN_002c5f7c(unsigned int, unsigned int);


unsigned int FUN_0010a954(void)

{
/* irregular: irregular input(s): in_fpscr; 19 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  unsigned int in_fpscr;
  unsigned char temp_v9 [76];
  
  temp_v1 = DAT_0043e190;
  if (*(char *)(DAT_0043e190 + 0x83) != '\0') {
    return 0;
  }
  if (*(char *)(DAT_0043e190 + 9) != '\v') {
    if (*(char *)(DAT_0043e190 + 9) == '\x13') {
      if (*(char *)(DAT_0043e190 + 8) != '\0') {
        FUN_002bf710();
        temp_v3 = FUN_002c5f7c(1,0);
        FUN_002befdc(DAT_0044ea00,3,temp_v3);
        FUN_002bf460(2,0x3a,0x8d,0,0,6);
        FUN_002bef88(DAT_0044ea00,3);
        FUN_002bf710();
      }
      FUN_001260b8(temp_v1);
      FUN_001188d0(DAT_0043e190);
    }
  }
  else {
    if (*(char *)(DAT_0043e190 + 8) != '\0') {
      FUN_002bf710();
      temp_v3 = FUN_002c5f7c(1,0);
      FUN_002befdc(DAT_0044ea00,3,temp_v3);
      FUN_002bf460(2,0xe,0x101,0,0,6);
      FUN_002bef88(DAT_0044ea00,3);
      FUN_002bf710();
    }
    FUN_001260b8(temp_v1);
    FUN_001188d0(DAT_0043e190);
  }
  if ((*(char *)(DAT_0043e190 + 0x7d) != '\0') && (*(char *)(DAT_0043e190 + 0x7f) == '\0')) {
    FUN_00124c48(0);
  }
  if (*(char *)(DAT_0043e190 + 0x7e) != '\0') {
    temp_v1 = FUN_002bef7c(DAT_0043e190 + 0x754);
    temp_v2 = FUN_002bef70(DAT_0043e190 + 0x754);
    temp_v3 = FUN_002c5f7c(1,0);
    FUN_002befdc(DAT_0044ea00,3,temp_v3);
    FUN_002bf710();
    FUN_002bef14();
    temp_v4 = FUN_002bf6d0(0xe,200);
    FUN_002bf558(2,0xe,10,*(short *)(temp_v4 + 8) + temp_v1,*(short *)(temp_v4 + 10) + temp_v2,0xb);
    temp_v3 = FUN_002be828(*(unsigned int *)(DAT_0043e190 + 0x68),0);
    FUN_002be7fc(temp_v9,&LAB_0010ad3c,temp_v3);
    temp_v5 = FUN_002bf6d0(0xe,0xc2);
    VectorSignedToFloat((int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,0xff,temp_v9,(int)*(short *)(temp_v5 + 10));
    temp_v5 = FUN_002bf6d0(0xe,0xc1);
    FUN_002be548((int)(short)*(unsigned int *)(DAT_0043e190 + 0x68),
                 (int)*(short *)(temp_v4 + 8) + (int)*(short *)(temp_v5 + 8) + temp_v1,
                 (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0x10,0);
    FUN_002be4dc(0xff);
    temp_v5 = FUN_002bf6d0(0xe,0xc6);
    FUN_002be16c(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                 (int)*(short *)(temp_v5 + 10) + (int)*(short *)(temp_v4 + 10) + temp_v2,1,4,0x10,
                 &LAB_0010ad44,*(unsigned int *)(DAT_0043e190 + 0x6c));
    temp_v5 = FUN_002bf6d0(0xe,199);
    FUN_002be16c(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v4 + 8) + temp_v1,
                 (int)*(short *)(temp_v4 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0,1,0x10,
                 &LAB_0010ad48);
    FUN_002bef14();
    FUN_002bef88(DAT_0044ea00,3);
  }
  temp_v1 = DAT_0043e190;
  if (*(int *)(DAT_0043e190 + 0x8c) != 0) {
    temp_v2 = DAT_0043e190 + 0x984;
    temp_v4 = FUN_002bef7c();
    temp_v2 = FUN_002bef70(temp_v2);
    temp_v3 = FUN_002c5f7c(1,0);
    FUN_002befdc(DAT_0044ea00,3,temp_v3);
    FUN_002bf710();
    FUN_002bef14();
    temp_v5 = FUN_002bf6d0(0xe,0xc0);
    FUN_002bf558(2,0xe,0x11,*(short *)(temp_v5 + 8) + temp_v4,*(short *)(temp_v5 + 10) + temp_v2,0xb);
    FUN_002bdeb8(*(unsigned short *)(temp_v1 + 0x90),*(short *)(temp_v5 + 8) + temp_v4,
                 *(short *)(temp_v5 + 10) + temp_v2,0);
    temp_v7 = 100000000;
    temp_v8 = (unsigned int)*(unsigned short *)(temp_v1 + 0x90);
    temp_v1 = -1;
    temp_v6 = 0;
    do {
      temp_v0 = temp_v7 - temp_v8;
      if (temp_v8 >= temp_v7) {
        temp_v0 = temp_v1;
      }
      if (temp_v0 < 0 != (temp_v8 < temp_v7 && SBORROW4(temp_v7,temp_v8))) {
        temp_v1 = temp_v6;
      }
      temp_v6 = temp_v6 + 1;
      temp_v7 = temp_v7 / 10;
    } while (temp_v7 != 0);
    if (temp_v1 >= 0) {
      temp_v1 = FUN_002bf6d0(0xe,0x65 - temp_v1);
    }
    else {
      temp_v1 = FUN_002bf6d0(0xe,0x5d);
    }
    FUN_002be4dc(0xff);
    FUN_002be16c(0,(int)*(short *)(temp_v5 + 8) + (int)*(short *)(temp_v1 + 8) + temp_v4,
                 (int)*(short *)(temp_v1 + 10) + (int)*(short *)(temp_v5 + 10) + temp_v2,0,0xf,0x10,
                 &LAB_0010ad48);
    FUN_002bef14();
    FUN_002bef88(DAT_0044ea00,3);
  }
  return 0;
}
