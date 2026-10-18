/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0023b4cc` (_code @ 0x23b4cc, 0x390 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
} void_stack;

extern unsigned char LAB_0023b870; /* 0x23b870 */
extern int DAT_0057f28c; /* 0x57f28c */
extern int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_00156850(unsigned short, unsigned int);
/* Supplied declaration required: FUN_00157558. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001634b4. */
extern int FUN_001654d8(void);
extern int FUN_001654e4(int);
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_00169294(unsigned int, unsigned int, unsigned int);
extern int FUN_001692ac(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0016c410. */
/* Supplied declaration required: FUN_0016c560. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_0020a1dc. */
/* Supplied declaration required: FUN_00218640. */
/* Supplied declaration required: FUN_002f6048. */
/* Supplied declaration required: FUN_0037ce80. */


unsigned int FUN_0023b4cc(void)

{
/* irregular: irregular input(s): in_fpscr; 14 native warning(s); review required */
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
  
  temp_v2 = DAT_0057f28c;
  FUN_00157558(DAT_0059dbb4);
  temp_v4 = DAT_0059dbb4;
  temp_v1 = FUN_001692ac(1,0);
  piVar8 = (int *)(temp_v4 + 0x1258);
  temp_v5 = *piVar8;
  temp_v6 = piVar8[temp_v5 + 2];
  *piVar8 = temp_v5 + 1;
  piVar8[temp_v5 + 3] = temp_v1;
  if (*(char *)(temp_v4 + 0x1270) != '\0' || temp_v6 != temp_v1) {
    (**(romwright_code **)(temp_v4 + 0x1274))();
    *(unsigned char *)(temp_v4 + 0x1270) = 0;
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
    FUN_00218640();
    break;
  case 0x11:
  case 0x12:
  case 0x13:
    FUN_002f6048(temp_v2);
    break;
  case 0x14:
  case 0x15:
  case 0x16:
    if (*(char *)(temp_v2 + 0x93c) == '\0') {
      FUN_00218640();
    }
    temp_v2 = DAT_0057f28c;
    temp_v7 = 0.3f;
    FUN_001879d0(DAT_0059dbb4);
    temp_v9 = temp_v2 + 0x408;
    temp_v4 = FUN_001654d8();
    temp_v1 = FUN_001654e4(temp_v2 + 0x408);
    FUN_001677c0();
    temp_v0 = *(unsigned short *)(temp_v2 + 0xcca);
    if (*(char *)(temp_v2 + 0x93c) == '\0') {
      FUN_0020a1dc(0x92);
    }
    FUN_001677c0();
    temp_v4 = temp_v4 + (int)temp_v7;
    FUN_001835b4(2,0x1e,0x57,temp_v4,temp_v1,0x97);
    FUN_001835b4(2,0x1e,0x58,temp_v4,temp_v1,0x97);
    FUN_001835b4(2,0x1e,0x59,temp_v4,temp_v1,0x97);
    FUN_001835b4(2,0x1e,0x51,temp_v4,temp_v1,0xa1);
    temp_v2 = FUN_001834a4(0x1e,0x54);
    FUN_0037ce80(temp_v0,*(short *)(temp_v2 + 8) + temp_v4,*(short *)(temp_v2 + 10) + temp_v1,0xa6);
    temp_v2 = FUN_001834a4(0x1e,0x55);
    temp_v3 = FUN_00156850(temp_v0,0);
    FUN_00100388(temp_v8,&LAB_0023b870,temp_v3);
    VectorSignedToFloat(*(short *)(temp_v2 + 8) + temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(*(short *)(temp_v2 + 10) + temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,0xffffffff,temp_v8);
    temp_v7 = 0.28f;
    FUN_001879d0(DAT_0059dbb4);
    VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_001634b4(temp_v9);
    FUN_001677c0();
  }
  temp_v2 = DAT_0059dbb4;
  piVar8 = (int *)(DAT_0059dbb4 + 0x1258);
  temp_v4 = *piVar8;
  temp_v1 = piVar8[temp_v4 + 2];
  *piVar8 = temp_v4 - 1;
  if (*(char *)(temp_v2 + 0x1270) != '\0' || temp_v1 != piVar8[temp_v4 + 1]) {
    (**(romwright_code **)(temp_v2 + 0x1274))();
    *(unsigned char *)(temp_v2 + 0x1270) = 0;
  }
  temp_v2 = DAT_0059dbb4;
  temp_v4 = FUN_00169294(6,7,0);
  piVar8 = (int *)(temp_v2 + 0x12b8);
  temp_v1 = piVar8[*piVar8 + 2];
  piVar8[*piVar8 + 2] = temp_v4;
  if (*(char *)(temp_v2 + 0x12d0) != '\0' || temp_v1 != temp_v4) {
    (**(romwright_code **)(temp_v2 + 0x12d4))();
    *(unsigned char *)(temp_v2 + 0x12d0) = 0;
  }
  FUN_0016c560(DAT_0059dbb4);
  FUN_0016c410(DAT_0059dbb4);
  return 0;
}
