/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a9b4` (_code @ 0x11a9b4, 0x444 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 7 slot(s), 28 byte(s) */
typedef struct {
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern int DAT_0043e110; /* 0x43e110 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002b6a98. */
/* Supplied declaration required: FUN_002b6c80. */
extern int FUN_002b6d94(int, unsigned short);
extern int FUN_002b6e10(void);
extern int FUN_002b6e44(void);
extern int FUN_002b6e60(void);
extern int FUN_002b6e78(void);
/* Supplied declaration required: FUN_002ba46c. */
extern unsigned int FUN_002bd13c(unsigned short);
extern unsigned int FUN_002bd258(unsigned short);
/* Supplied declaration required: FUN_002be77c. */
/* Supplied declaration required: FUN_002be7fc. */
/* Supplied declaration required: FUN_002beae4. */
/* Supplied declaration required: FUN_002bef14. */
extern int FUN_002bef70(int);
extern int FUN_002bef7c(int);
/* Supplied declaration required: FUN_002bf460. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf710. */
/* Supplied declaration required: FUN_002c3ba8. */
extern int FUN_002c5f7c(unsigned int, unsigned int);
extern int FUN_002c5fa4(unsigned int, unsigned int, unsigned int);


unsigned int FUN_0011a9b4(void)

{
/* irregular: irregular input(s): in_fpscr; 11 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  int temp_v7;
  int *piVar9;
  unsigned int in_fpscr;
  float temp_v8;
  unsigned char temp_v9 [40];
  
  temp_v4 = DAT_0043e110;
  if ((((*(int *)(DAT_0043e110 + 8) != 0) && (temp_v1 = FUN_002b6e78(), temp_v1 != 0)) && (temp_v1 != 1))
     && (temp_v1 = FUN_002b6e60(), *(short *)(temp_v1 + 0x46) != 0)) {
    FUN_002c3ba8(DAT_0044ea00);
    temp_v3 = DAT_0044ea00;
    temp_v2 = FUN_002c5f7c(1,0);
    piVar9 = (int *)(temp_v3 + 0x124c);
    temp_v6 = *piVar9;
    temp_v7 = piVar9[temp_v6 + 2];
    *piVar9 = temp_v6 + 1;
    piVar9[temp_v6 + 3] = temp_v2;
    if (*(char *)(temp_v3 + 0x1264) != '\0' || temp_v7 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x1268))();
      *(unsigned char *)(temp_v3 + 0x1264) = 0;
    }
    temp_v3 = FUN_002bef7c(temp_v4 + 0x30);
    temp_v8 = 0.27f;
    FUN_002ba46c(DAT_0044ea00);
    temp_v4 = FUN_002bef70(temp_v4 + 0x30);
    FUN_002bf710();
    temp_v2 = FUN_002bf6d0(0xe,0xda);
    temp_v6 = FUN_002b6e44();
    if (temp_v6 != 0) {
      temp_v2 = FUN_002bf6d0(0xe,0xdb);
    }
    temp_v6 = DAT_0044ea00;
    temp_v7 = temp_v3 + (int)temp_v8 + (int)*(short *)(temp_v2 + 8);
    temp_v4 = *(short *)(temp_v2 + 10) + temp_v4;
    temp_v3 = FUN_002c5fa4(6,1,0);
    piVar9 = (int *)(temp_v6 + 0x12ac);
    temp_v2 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v3;
    if (*(char *)(temp_v6 + 0x12c4) != '\0' || temp_v2 != temp_v3) {
      (**(romwright_code **)(temp_v6 + 0x12c8))();
      *(unsigned char *)(temp_v6 + 0x12c4) = 0;
    }
    FUN_002bf460(2,0xe,0xc9,temp_v7,temp_v4,0x15);
    temp_v3 = DAT_0044ea00;
    temp_v2 = FUN_002c5fa4(6,7,0);
    piVar9 = (int *)(temp_v3 + 0x12ac);
    temp_v6 = piVar9[*piVar9 + 2];
    piVar9[*piVar9 + 2] = temp_v2;
    if (*(char *)(temp_v3 + 0x12c4) != '\0' || temp_v6 != temp_v2) {
      (**(romwright_code **)(temp_v3 + 0x12c8))();
      *(unsigned char *)(temp_v3 + 0x12c4) = 0;
    }
    FUN_002bf460(2,0xe,0xca,temp_v7,temp_v4,0x1a);
    FUN_002bf460(2,0xe,0xcb,temp_v7,temp_v4,0x1a);
    FUN_002bf460(2,0xe,0xcc,temp_v7,temp_v4,0x1a);
    FUN_002bf460(2,0xe,0xcd,temp_v7,temp_v4,0x1a);
    FUN_002bf460(2,0xe,0xce,temp_v7,temp_v4,0x1f);
    FUN_002bf460(2,0xe,0xcf,temp_v7,temp_v4,0x1f);
    FUN_002beae4((int)*(short *)(temp_v1 + 0x2a),(int)*(short *)(temp_v1 + 0xe),0,0,0xe,0xd0,0xd3,0xd2,
                 0xd1,temp_v7,temp_v4,0x24,0);
    temp_v3 = FUN_002bf6d0(0xe,0xd9);
    temp_v2 = FUN_002b6e10();
    if (temp_v2 != 0) {
      temp_v1 = FUN_002b6e60();
      temp_v0 = *(unsigned short *)(temp_v1 + 0x606);
      temp_v1 = FUN_002b6e60();
      temp_v1 = FUN_002b6d94((int)*(short *)(temp_v1 + 0x604),temp_v0);
      FUN_002b6c80(*(unsigned short *)(temp_v1 + 0x5a),*(short *)(temp_v3 + 8) + temp_v7,
                   *(short *)(temp_v3 + 10) + temp_v4,0x24);
      temp_v1 = FUN_002b6e60();
      temp_v5 = FUN_002bd13c(*(unsigned short *)(temp_v1 + 0x604));
      FUN_002be7fc(temp_v9,temp_v5);
    }
    else {
      FUN_002b6a98((int)*(short *)(temp_v1 + 0x46),*(short *)(temp_v3 + 8) + temp_v7,
                   *(short *)(temp_v3 + 10) + temp_v4,0x24,0);
      temp_v5 = FUN_002bd258(*(unsigned short *)(temp_v1 + 0x46));
      FUN_002be7fc(temp_v9,temp_v5);
    }
    temp_v1 = FUN_002bf6d0(0xe,0xd8);
    VectorSignedToFloat(*(short *)(temp_v1 + 10) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v1 + 8) + temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be77c(2,0xff,temp_v9);
    FUN_002bef14();
    FUN_002bf710();
    temp_v4 = DAT_0044ea00;
    piVar9 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v1 = *piVar9;
    temp_v3 = piVar9[temp_v1 + 2];
    *piVar9 = temp_v1 - 1;
    if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v3 != piVar9[temp_v1 + 1]) {
      (**(romwright_code **)(temp_v4 + 0x1268))();
      *(unsigned char *)(temp_v4 + 0x1264) = 0;
    }
  }
  return 0;
}
