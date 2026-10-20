/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001079d8` (_code @ 0x1079d8, 0x320 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00119e54(int, int *, unsigned int **, unsigned int **, int);
int FUN_00120b5c(void);
int FUN_002c05f4(...);
int asdMemoryGetDefaultAllocator(void);
int VectorUnsignedToFloat(unsigned int, int);
int nw_gfx_Camera_DynamicBuilder_Create(unsigned char *, unsigned int);
int nw_gfx_SceneNode_AttachChild(...);

typedef int romwright_code(...);
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
extern unsigned int g_asdModelSlotArray0; /* 0x464b9c */
extern unsigned int DAT_00464ba0; /* 0x464ba0 */

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00119e54. */
/* Supplied declaration required: FUN_00120b5c. */
/* Supplied declaration required: FUN_002c05f4. */
/* Supplied declaration required: asdMemoryGetDefaultAllocator. */
/* Supplied declaration required: nw_gfx_Camera_DynamicBuilder_Create. */
/* Supplied declaration required: nw_gfx_SceneNode_AttachChild. */


void FUN_001079d8(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  int *piVar3;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_fpscr;
  unsigned long long temp_v3;
  unsigned int *puVar7;
  float temp_v4;
  unsigned int *puVar9;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned char temp_v7;
  int temp_v8;
  unsigned int *temp_v9;
  int temp_v10;
  unsigned int *temp_v11;
  unsigned int temp_v12;
  unsigned int *temp_v13;
  unsigned int temp_v14;
  unsigned int *temp_v15;
  int temp_v16;
  unsigned int uStack_5c;
  unsigned int temp_v17;
  unsigned int *temp_v18;
  unsigned int uStack_50;
  unsigned int *temp_v19;
  unsigned int *temp_v20;
  unsigned int *temp_v21;
  
  temp_v0 = asdMemoryGetDefaultAllocator();
  temp_v3 = 0x4170000041a00000;
  temp_v4 = 1.0f;
  puVar9 = (unsigned int *)0x0;
  temp_v5 = 0x41200000;
  temp_v18 = (unsigned int *)0x41a00000;
  uStack_50 = 0x41700000;
  temp_v19 = (unsigned int *)0x41a00000;
  temp_v16 = 0;
  uStack_5c = 0x41200000;
  temp_v17 = 0;
  temp_v2 = temp_v0;
  FUN_002c05f4();
  temp_v6 = 1;
  temp_v7 = 1;
  temp_v10 = 1;
  temp_v11 = (unsigned int *)0x0;
  puVar2 = &temp_v6;
  temp_v13 = (unsigned int *)0x0;
  temp_v14 = romwright_piece_3_1((((unsigned int)(temp_v14) >> 8) & 0xffffffU),1);
  temp_v12 = romwright_piece_3_1((((unsigned int)(temp_v12) >> 8) & 0xffffffU),1);
  temp_v9 = (unsigned int *)0x0;
  temp_v8 = 0;
  DAT_00464b10 = temp_v2;
  nw_gfx_Camera_DynamicBuilder_Create(puVar2,temp_v0);
  puVar7 = temp_v13;
  DAT_00464b14 = puVar2;
  if ((temp_v13 != (unsigned int *)0x0) && ((char)temp_v14 != '\0')) {
    (**(romwright_code **)*temp_v13)(temp_v13);
    piVar3 = (int *)puVar7[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar7);
  }
  puVar7 = temp_v11;
  if ((temp_v11 != (unsigned int *)0x0) && ((char)temp_v12 != '\0')) {
    (**(romwright_code **)*temp_v11)(temp_v11);
    piVar3 = (int *)puVar7[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar7);
  }
  temp_v6 = 1;
  temp_v7 = 1;
  temp_v10 = 1;
  temp_v11 = (unsigned int *)0x0;
  puVar2 = &temp_v6;
  temp_v13 = (unsigned int *)0x0;
  temp_v14 = romwright_piece_3_1((((unsigned int)(temp_v14) >> 8) & 0xffffffU),1);
  temp_v12 = romwright_piece_3_1((((unsigned int)(temp_v12) >> 8) & 0xffffffU),1);
  temp_v9 = (unsigned int *)0x0;
  temp_v8 = 0;
  nw_gfx_Camera_DynamicBuilder_Create(puVar2,temp_v0);
  puVar7 = temp_v13;
  DAT_00464b18 = puVar2;
  if ((temp_v13 != (unsigned int *)0x0) && ((char)temp_v14 != '\0')) {
    (**(romwright_code **)*temp_v13)(temp_v13);
    piVar3 = (int *)puVar7[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar7);
  }
  puVar7 = temp_v11;
  if ((temp_v11 != (unsigned int *)0x0) && ((char)temp_v12 != '\0')) {
    (**(romwright_code **)*temp_v11)(temp_v11);
    piVar3 = (int *)puVar7[1];
    (**(romwright_code **)(*piVar3 + 0xc))(piVar3,puVar7);
  }
  nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray0,DAT_00464b10);
  puVar7 = (unsigned int *)((unsigned long long)temp_v3 >> 0x20);
  temp_v2 = (unsigned int)temp_v3;
  if (DAT_00464af4 != 0) {
    if (DAT_00464af4 == 2) {
      temp_v10 = temp_v2;
      temp_v11 = puVar7;
      temp_v12 = temp_v2;
      temp_v13 = puVar9;
      temp_v14 = temp_v5;
      temp_v15 = puVar9;
      temp_v20 = puVar9;
      temp_v21 = puVar9;
      temp_v1 = asdMemoryGetDefaultAllocator();
      VectorUnsignedToFloat((unsigned int)DAT_00464af4,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_00119e54(temp_v1,&temp_v10,&temp_v13,&temp_v20,0);
      DAT_00464b34 = temp_v1;
    }
  }
  else {
    temp_v8 = temp_v2;
    temp_v9 = puVar7;
    temp_v10 = temp_v2;
    temp_v11 = puVar9;
    temp_v12 = temp_v5;
    temp_v13 = puVar9;
    temp_v1 = asdMemoryGetDefaultAllocator();
    FUN_002c05f4(temp_v1,&temp_v8,&temp_v11,0);
    DAT_00464b34 = temp_v1;
    *(float *)(temp_v1 + 0x294) = temp_v4 / DAT_00464b40;
    FUN_00120b5c();
  }
  nw_gfx_SceneNode_AttachChild(g_asdModelSlotArray0,DAT_00464b34);
  temp_v16 = (unsigned int)temp_v3;
  uStack_5c = (unsigned int)((unsigned long long)temp_v3 >> 0x20);
  temp_v17 = temp_v16;
  temp_v18 = puVar9;
  uStack_50 = temp_v5;
  temp_v19 = puVar9;
  temp_v2 = asdMemoryGetDefaultAllocator();
  FUN_002c05f4(temp_v2,&temp_v16,&temp_v18,0);
  DAT_00464b1c = temp_v2;
  nw_gfx_SceneNode_AttachChild(DAT_00464ba0,temp_v2);
  return;
}

} /* extern "C" */
