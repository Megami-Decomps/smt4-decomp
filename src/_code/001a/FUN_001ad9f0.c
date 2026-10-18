/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001ad9f0` (_code @ 0x1ad9f0, 0x358 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
} void_stack;

extern unsigned char LAB_001add58; /* 0x1add58 */
extern int DAT_0043dd50; /* 0x43dd50 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00186a48. */
/* Supplied declaration required: FUN_00190990. */
/* Supplied declaration required: FUN_00197e34. */
/* Supplied declaration required: FUN_0029acc4. */
/* Supplied declaration required: FUN_002b93c8. */
/* Supplied declaration required: FUN_002ba12c. */
extern unsigned int FUN_002bcddc(unsigned short, unsigned int);
/* Supplied declaration required: FUN_002be5a4. */
/* Supplied declaration required: FUN_002be624. */
extern int FUN_002bed98(int);
extern int FUN_002beda4(void);
/* Supplied declaration required: FUN_002bf288. */
extern int FUN_002bf4f8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002c5da8(unsigned int, unsigned int, unsigned int);


unsigned int FUN_001ad9f0(void)

{
/* irregular: irregular input(s): in_fpscr; 13 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int *piVar8;
  unsigned int in_fpscr;
  float temp_v7;
  unsigned char temp_v8 [64];
  int temp_v9;
  
  temp_v2 = DAT_0043dd50;
  FUN_002c39a4(DAT_0044ea00);
  temp_v4 = DAT_0044ea00;
  temp_v1 = FUN_002c5d80(1,0);
  piVar8 = (int *)(temp_v4 + 0x124c);
  temp_v5 = *piVar8;
  temp_v6 = piVar8[temp_v5 + 2];
  *piVar8 = temp_v5 + 1;
  piVar8[temp_v5 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x1264) != '\0' || temp_v6 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x1268))();
    *(unsigned char *)(temp_v4 + 0x1264) = 0;
  }
  switch(*(unsigned int *)(temp_v2 + 4)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
    FUN_00197e34();
    break;
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_00186a48();
    break;
  case 0x14:
  case 0x15:
  case 0x16:
    if (*(char *)(temp_v2 + 0x5f0) == '\0') {
      FUN_00197e34();
    }
    temp_v2 = DAT_0043dd50;
    temp_v7 = 0.3f;
    FUN_002ba12c(DAT_0044ea00);
    temp_v9 = temp_v2 + 0x408;
    temp_v4 = FUN_002beda4();
    temp_v1 = FUN_002bed98(temp_v2 + 0x408);
    temp_v0 = *(unsigned short *)(temp_v2 + 0x97e);
    if (*(char *)(temp_v2 + 0x5f0) == '\0') {
      FUN_00190990(0x92);
    }
    temp_v4 = temp_v4 + (int)temp_v7;
    FUN_002bf288(2,0x29,0x57,temp_v4,temp_v1,0x97);
    FUN_002bf288(2,0x29,0x58,temp_v4,temp_v1,0x97);
    FUN_002bf288(2,0x29,0x59,temp_v4,temp_v1,0x97);
    FUN_002bf288(2,0x29,0x51,temp_v4,temp_v1,0xa1);
    temp_v2 = FUN_002bf4f8(0x29,0x54);
    FUN_0029acc4(temp_v0,*(short *)(temp_v2 + 8) + temp_v4,*(short *)(temp_v2 + 10) + temp_v1,0xa6);
    temp_v2 = FUN_002bf4f8(0x29,0x55);
    temp_v3 = FUN_002bcddc(temp_v0,0);
    FUN_002be624(temp_v8,&LAB_001add58,temp_v3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002be5a4(3,0xffffffff,temp_v8);
    temp_v7 = 0.28f;
    FUN_002ba12c(DAT_0044ea00);
    VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_002b93c8(temp_v9);
  }
  temp_v2 = DAT_0044ea00;
  piVar8 = (int *)(DAT_0044ea00 + 0x124c);
  temp_v4 = *piVar8;
  temp_v1 = piVar8[temp_v4 + 2];
  *piVar8 = temp_v4 - 1;
  if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v1 != piVar8[temp_v4 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1268))();
    *(unsigned char *)(temp_v2 + 0x1264) = 0;
  }
  temp_v2 = DAT_0044ea00;
  temp_v4 = FUN_002c5da8(6,7,0);
  piVar8 = (int *)(temp_v2 + 0x12ac);
  temp_v1 = piVar8[*piVar8 + 2];
  piVar8[*piVar8 + 2] = temp_v4;
  if (*(char *)(temp_v2 + 0x12c4) != '\0' || temp_v1 != temp_v4) {
    (**(romwright_code **)(temp_v2 + 0x12c8))();
    *(unsigned char *)(temp_v2 + 0x12c4) = 0;
  }
  FUN_002c198c(DAT_0044ea00);
  FUN_002c18e4(DAT_0044ea00);
  return 0;
}
