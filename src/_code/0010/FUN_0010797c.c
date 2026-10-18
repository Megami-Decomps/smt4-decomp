/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010797c` (_code @ 0x10797c, 0x320 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 17 slot(s), 59 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned char sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned char sp87; /* 0x87: local_87 */
    unsigned char sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
} void_stack;

extern unsigned char DAT_00464af4; /* 0x464af4 */
extern unsigned int DAT_00464b10; /* 0x464b10 */
extern unsigned char *DAT_00464b14; /* 0x464b14 */
extern unsigned char *DAT_00464b18; /* 0x464b18 */
extern unsigned int DAT_00464b1c; /* 0x464b1c */
extern int DAT_00464b34; /* 0x464b34 */
extern float DAT_00464b40; /* 0x464b40 */
extern unsigned int DAT_00464b9c; /* 0x464b9c */
extern unsigned int DAT_00464ba0; /* 0x464ba0 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00119d74. */
/* Supplied declaration required: FUN_00120a7c. */
/* Supplied declaration required: FUN_002c028c. */
/* Supplied declaration required: FUN_002c03ec. */
/* Supplied declaration required: FUN_002c07cc. */
/* Supplied declaration required: FUN_002c31bc. */


void FUN_0010797c(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int *piVar3;
  int temp_v1;
  unsigned int in_fpscr;
  unsigned long long temp_v2;
  unsigned int *puVar6;
  float temp_v3;
  unsigned int *puVar8;
  unsigned int temp_v4;
  unsigned char temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  unsigned int *temp_v8;
  int temp_v9;
  unsigned int *temp_v10;
  unsigned int temp_v11;
  unsigned int *temp_v12;
  unsigned int temp_v13;
  unsigned int *temp_v14;
  int temp_v15;
  unsigned int uStack_5c;
  unsigned int temp_v16;
  unsigned int *temp_v17;
  unsigned int uStack_50;
  unsigned int *temp_v18;
  unsigned int *temp_v19;
  unsigned int *temp_v20;
  
  temp_v0 = FUN_002c31bc();
  temp_v2 = 0x4170000041a00000;
  temp_v3 = 1.0f;
  puVar8 = (unsigned int *)0x0;
  temp_v4 = 0x41200000;
  temp_v17 = (unsigned int *)0x41a00000;
  uStack_50 = 0x41700000;
  temp_v18 = (unsigned int *)0x41a00000;
  temp_v15 = 0;
  uStack_5c = 0x41200000;
  temp_v16 = 0;
  DAT_00464b10 = FUN_002c07cc();
  temp_v5 = 1;
  temp_v6 = 1;
  temp_v9 = 1;
  temp_v10 = (unsigned int *)0x0;
  puVar2 = &temp_v5;
  temp_v12 = (unsigned int *)0x0;
  temp_v13 = romwright_piece_3_1(temp_v13._1_3_,1);
  temp_v11 = romwright_piece_3_1(temp_v11._1_3_,1);
  temp_v8 = (unsigned int *)0x0;
  temp_v7 = 0;
  FUN_002c03ec(puVar2,temp_v0);
  puVar6 = temp_v12;
  DAT_00464b14 = puVar2;
  if ((temp_v12 != (unsigned int *)0x0) && ((char)temp_v13 != '\0')) {
    (**(romwright_code **)*temp_v12)(temp_v12);
    piVar3 = (int *)puVar6[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar6);
  }
  puVar6 = temp_v10;
  if ((temp_v10 != (unsigned int *)0x0) && ((char)temp_v11 != '\0')) {
    (**(romwright_code **)*temp_v10)(temp_v10);
    piVar3 = (int *)puVar6[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar6);
  }
  temp_v5 = 1;
  temp_v6 = 1;
  temp_v9 = 1;
  temp_v10 = (unsigned int *)0x0;
  puVar2 = &temp_v5;
  temp_v12 = (unsigned int *)0x0;
  temp_v13 = romwright_piece_3_1(temp_v13._1_3_,1);
  temp_v11 = romwright_piece_3_1(temp_v11._1_3_,1);
  temp_v8 = (unsigned int *)0x0;
  temp_v7 = 0;
  FUN_002c03ec(puVar2,temp_v0);
  puVar6 = temp_v12;
  DAT_00464b18 = puVar2;
  if ((temp_v12 != (unsigned int *)0x0) && ((char)temp_v13 != '\0')) {
    (**(romwright_code **)*temp_v12)(temp_v12);
    piVar3 = (int *)puVar6[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar6);
  }
  puVar6 = temp_v10;
  if ((temp_v10 != (unsigned int *)0x0) && ((char)temp_v11 != '\0')) {
    (**(romwright_code **)*temp_v10)(temp_v10);
    piVar3 = (int *)puVar6[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar6);
  }
  FUN_002c028c(DAT_00464b9c,DAT_00464b10);
  puVar6 = (unsigned int *)((unsigned long long)temp_v2 >> 0x20);
  temp_v0 = (unsigned int)temp_v2;
  if (DAT_00464af4 != 0) {
    if (DAT_00464af4 == 2) {
      temp_v9 = temp_v0;
      temp_v10 = puVar6;
      temp_v11 = temp_v0;
      temp_v12 = puVar8;
      temp_v13 = temp_v4;
      temp_v14 = puVar8;
      temp_v19 = puVar8;
      temp_v20 = puVar8;
      temp_v1 = FUN_002c31bc();
      VectorUnsignedToFloat((unsigned int)DAT_00464af4,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00119d74(temp_v1,&temp_v9,&temp_v12,&temp_v19,0);
      DAT_00464b34 = temp_v1;
    }
  }
  else {
    temp_v7 = temp_v0;
    temp_v8 = puVar6;
    temp_v9 = temp_v0;
    temp_v10 = puVar8;
    temp_v11 = temp_v4;
    temp_v12 = puVar8;
    temp_v0 = FUN_002c31bc();
    DAT_00464b34 = FUN_002c07cc(temp_v0,&temp_v7,&temp_v10,0);
    *(float *)(DAT_00464b34 + 0x294) = temp_v3 / DAT_00464b40;
    FUN_00120a7c();
  }
  FUN_002c028c(DAT_00464b9c,DAT_00464b34);
  temp_v15 = (unsigned int)temp_v2;
  uStack_5c = (unsigned int)((unsigned long long)temp_v2 >> 0x20);
  temp_v16 = temp_v15;
  temp_v17 = puVar8;
  uStack_50 = temp_v4;
  temp_v18 = puVar8;
  temp_v0 = FUN_002c31bc();
  DAT_00464b1c = FUN_002c07cc(temp_v0,&temp_v15,&temp_v17,0);
  FUN_002c028c(DAT_00464ba0,DAT_00464b1c);
  return;
}
