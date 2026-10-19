/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00143424` (_code @ 0x143424, 0x2f8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} void_stack;

extern unsigned char DAT_005b3bf8; /* 0x5b3bf8 */
extern unsigned int DAT_005b3c14; /* 0x5b3c14 */
extern unsigned char *DAT_005b3c18; /* 0x5b3c18 */
extern unsigned char *DAT_005b3c1c; /* 0x5b3c1c */
extern unsigned int DAT_005b3c20; /* 0x5b3c20 */
extern int DAT_005b3c38; /* 0x5b3c38 */
extern float DAT_005b3c44; /* 0x5b3c44 */

#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001529a0. */
/* Supplied declaration required: FUN_0015493c. */
/* Supplied declaration required: FUN_0015dda4. */
/* Supplied declaration required: FUN_00168188. */
/* Supplied declaration required: FUN_0017314c. */


void FUN_00143424(void)

{
/* irregular: irregular input(s): in_fpscr; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  unsigned long long temp_v3;
  unsigned int *puVar8;
  float temp_v4;
  unsigned int *puVar10;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  unsigned int *temp_v10;
  int temp_v11;
  unsigned int *temp_v12;
  unsigned int temp_v13;
  unsigned int *temp_v14;
  unsigned int uStack_64;
  unsigned int *temp_v15;
  int temp_v16;
  unsigned int uStack_54;
  unsigned int temp_v17;
  unsigned int *temp_v18;
  unsigned int uStack_48;
  unsigned int *temp_v19;
  unsigned int *temp_v20;
  unsigned int *temp_v21;
  
  puVar2 = (unsigned int *)&temp_v6;
  puVar4 = (unsigned int *)&temp_v6;
  temp_v0 = FUN_00168188();
  temp_v3 = 0x4170000041a00000;
  temp_v4 = 1.0f;
  puVar10 = (unsigned int *)0x0;
  temp_v5 = 0x41200000;
  temp_v18 = (unsigned int *)0x41a00000;
  uStack_48 = 0x41700000;
  temp_v19 = (unsigned int *)0x41a00000;
  temp_v16 = 0;
  uStack_54 = 0x41200000;
  temp_v17 = 0;
  temp_v2 = temp_v0;
  FUN_001529a0();
  temp_v6 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v6 + 2)),0x101);
  temp_v9 = 1;
  temp_v10 = (unsigned int *)0x0;
  temp_v12 = (unsigned int *)0x0;
  temp_v13 = romwright_piece_3_1((((unsigned int)(temp_v13) >> 8) & 0xffffffU),1);
  temp_v11 = romwright_piece_3_1((((unsigned int)(temp_v11) >> 8) & 0xffffffU),1);
  temp_v8 = 0;
  temp_v7 = 0;
  DAT_005b3c14 = temp_v2;
  FUN_0017314c(&temp_v6,temp_v0);
  puVar8 = temp_v12;
  DAT_005b3c18 = (unsigned char *)puVar2;
  if ((temp_v12 != (unsigned int *)0x0) && ((char)temp_v13 != '\0')) {
    (**(romwright_code **)*temp_v12)(temp_v12);
    piVar3 = (int *)puVar8[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar8);
  }
  puVar8 = temp_v10;
  if ((temp_v10 != (unsigned int *)0x0) && ((char)temp_v11 != '\0')) {
    (**(romwright_code **)*temp_v10)(temp_v10);
    piVar3 = (int *)puVar8[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar8);
  }
  temp_v6 = romwright_piece_2_2((*(unsigned short *)((unsigned char *)&temp_v6 + 2)),0x101);
  temp_v9 = 1;
  temp_v10 = (unsigned int *)0x0;
  temp_v12 = (unsigned int *)0x0;
  temp_v13 = romwright_piece_3_1((((unsigned int)(temp_v13) >> 8) & 0xffffffU),1);
  temp_v11 = romwright_piece_3_1((((unsigned int)(temp_v11) >> 8) & 0xffffffU),1);
  temp_v8 = 0;
  temp_v7 = 0;
  FUN_0017314c(&temp_v6,temp_v0);
  puVar8 = temp_v12;
  DAT_005b3c1c = (unsigned char *)puVar4;
  if ((temp_v12 != (unsigned int *)0x0) && ((char)temp_v13 != '\0')) {
    (**(romwright_code **)*temp_v12)(temp_v12);
    piVar3 = (int *)puVar8[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar8);
  }
  puVar8 = temp_v10;
  if ((temp_v10 != (unsigned int *)0x0) && ((char)temp_v11 != '\0')) {
    (**(romwright_code **)*temp_v10)(temp_v10);
    piVar3 = (int *)puVar8[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar8);
  }
  puVar8 = (unsigned int *)((unsigned long long)temp_v3 >> 0x20);
  temp_v2 = (unsigned int)temp_v3;
  if (DAT_005b3bf8 != 0) {
    if (DAT_005b3bf8 == 2) {
      temp_v11 = temp_v2;
      temp_v12 = puVar8;
      temp_v13 = temp_v2;
      temp_v14 = puVar10;
      uStack_64 = temp_v5;
      temp_v15 = puVar10;
      temp_v20 = puVar10;
      temp_v21 = puVar10;
      temp_v1 = FUN_00168188();
      temp_v6 = 0;
      VectorUnsignedToFloat((unsigned int)DAT_005b3bf8,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0015493c(temp_v1,&temp_v11,&temp_v14,&temp_v20);
      DAT_005b3c38 = temp_v1;
    }
  }
  else {
    temp_v9 = temp_v2;
    temp_v10 = puVar8;
    temp_v11 = temp_v2;
    temp_v12 = puVar10;
    temp_v13 = temp_v5;
    temp_v14 = puVar10;
    temp_v1 = FUN_00168188();
    FUN_001529a0(temp_v1,&temp_v9,&temp_v12,0);
    DAT_005b3c38 = temp_v1;
    *(float *)(temp_v1 + 0x294) = temp_v4 / DAT_005b3c44;
    FUN_0015dda4();
  }
  temp_v16 = (unsigned int)temp_v3;
  uStack_54 = (unsigned int)((unsigned long long)temp_v3 >> 0x20);
  temp_v17 = temp_v16;
  temp_v18 = puVar10;
  uStack_48 = temp_v5;
  temp_v19 = puVar10;
  temp_v2 = FUN_00168188();
  FUN_001529a0(temp_v2,&temp_v16,&temp_v18,0);
  DAT_005b3c20 = temp_v2;
  return;
}
