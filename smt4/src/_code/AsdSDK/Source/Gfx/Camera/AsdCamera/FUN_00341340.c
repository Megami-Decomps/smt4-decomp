/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00341340` (_code @ 0x341340, 0x35c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00341340_arg1 fn_00341340_arg1;
struct fn_00341340_arg1 {
    unsigned char pad_0x0[0x44];
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    unsigned char pad_0x4c[0x30];
    undefined4 field_0x7c; /* +0x7c */
    undefined4 field_0x80; /* +0x80 */
};

typedef int romwright_code();
/* stack frame of param_2: 13 slot(s), 49 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned char sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

#ifndef ROMWRIGHT_PIECE_3_1_DEFINED
#define ROMWRIGHT_PIECE_3_1_DEFINED
#define romwright_piece_3_1(upper, lower) ((unsigned int)(((unsigned int)(unsigned int)(upper) << 8) | (unsigned char)(lower)))
#endif
/* Supplied declaration required: FUN_00298d50. */
/* Supplied declaration required: FUN_002a5960. */
/* Supplied declaration required: FUN_002a5dc4. */
/* Supplied declaration required: FUN_002c159c. */
/* Supplied declaration required: FUN_002c1e30. */
/* Supplied declaration required: FUN_002c1edc. */
/* Supplied declaration required: FUN_002c2044. */
/* Supplied declaration required: FUN_002c2ff0. */
extern unsigned int FUN_002c300c(void);
extern int FUN_002c5c04(fn_00341340_arg1 *);
/* Supplied declaration required: FUN_003416bc. */
/* Supplied declaration required: nw_gfx_SceneBuilder_CreateObject. */


void FUN_00341340(int *param_1,fn_00341340_arg1 *param_2)

{
/* irregular: 2 goto(s); 10 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int *piVar5;
  int temp_v4;
  int *piVar7;
  int *piVar8;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int temp_v11;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int uStack_48;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  unsigned char temp_v18;
  int temp_v19;
  
  temp_v0 = FUN_002c5c04(param_2);
  param_1[6] = temp_v0;
  temp_v9 = *(int *)(temp_v0 + 0x48);
  temp_v8 = 0;
  if (temp_v9 != 0) {
    temp_v1 = temp_v0 + 0x48 + temp_v9;
  }
  else {
    temp_v1 = 0;
  }
  if (temp_v1 != 0) {
    temp_v9 = temp_v1 + 0x1c;
  }
  if (temp_v1 == 0) {
    temp_v9 = 0;
  }
  temp_v19 = temp_v9 + *(int *)(temp_v0 + 0x44) * 0x10;
  if (temp_v9 != temp_v19) {
    do {
      temp_v1 = *(int *)(temp_v9 + 0xc);
      if (temp_v1 != 0) {
        temp_v1 = temp_v1 + temp_v9 + 0xc;
      }
      else {
        temp_v1 = 0;
      }
      temp_v2 = FUN_002c2ff0();
      temp_v3 = FUN_002c300c();
      temp_v11 = romwright_piece_3_1((((unsigned int)(temp_v11) >> 8) & 0xffffffU),1);
      temp_v12 = 8;
      temp_v13 = 4;
      uStack_48 = 0;
      temp_v14 = 0;
      temp_v16 = 4;
      piVar8 = &temp_v10;
      temp_v15 = 0;
      temp_v17 = 0;
      temp_v10 = temp_v1;
      temp_v18 = 1;
      nw_gfx_SceneBuilder_CreateObject(piVar8,temp_v2,temp_v3);
      if (piVar8 != (int *)0x0) {
        piVar5 = (int *)(**(romwright_code **)(*piVar8 + 8))(piVar8);
        do {
          if (piVar5 == (int *)0x44e858) goto LAB_0034143c;
          piVar5 = (int *)*piVar5;
        } while (piVar5 != (int *)0x0);
      }
      piVar8 = (int *)0x0;
LAB_0034143c:
      if (piVar8 != (int *)0x0) {
        piVar5 = (int *)(**(romwright_code **)(*piVar8 + 8))(piVar8);
        do {
          if (piVar5 == (int *)0x44e820) goto LAB_00341470;
          piVar5 = (int *)*piVar5;
        } while (piVar5 != (int *)0x0);
      }
      piVar8 = (int *)0x0;
LAB_00341470:
      param_1[*param_1 + 0x15b] = (int)piVar8;
      temp_v1 = piVar8[0x9a];
      temp_v6 = *(int *)(temp_v0 + 0x7c);
      if (temp_v1 != 0) {
        temp_v5 = 0;
        temp_v2 = *(unsigned int *)(*(int *)(temp_v1 + 8) + 0x10);
        if (0 < temp_v6) {
          do {
            if (*(int *)(temp_v0 + 0x80) != 0) {
              temp_v4 = temp_v0 + 0x80 + *(int *)(temp_v0 + 0x80);
            }
            else {
              temp_v4 = 0;
            }
            temp_v10 = 0;
            if (temp_v4 != 0) {
              piVar8 = (int *)(temp_v4 + temp_v5 * 0x10 + 0x28);
              temp_v10 = *piVar8;
              if (temp_v10 == 0) {
                temp_v10 = 0;
              }
              else {
                temp_v10 = (int)piVar8 + temp_v10;
              }
            }
            temp_v12 = 0x40;
            temp_v13 = romwright_piece_3_1((((unsigned int)(temp_v13) >> 8) & 0xffffffU),1);
            temp_v11 = temp_v2;
            piVar5 = (int *)FUN_002c2ff0();
            piVar7 = (int *)(**(romwright_code **)(*piVar5 + 8))(piVar5,0x74,4);
            piVar8 = (int *)0x0;
            if (piVar7 != (int *)0x0) {
              FUN_002a5dc4(piVar7,piVar5);
              FUN_002a5960(piVar7,&temp_v10,temp_v11,temp_v12,(int)(char)temp_v13);
              piVar8 = piVar7;
            }
            param_1[*param_1 * 0x20 + temp_v5 + 0x17b] = (int)piVar8;
            (**(romwright_code **)(*piVar8 + 0xc))(piVar8,temp_v1);
            temp_v4 = param_1[*param_1 * 0x20 + temp_v5 + 0x17b];
            temp_v3 = *(unsigned int *)(temp_v4 + 0x44);
            (**(romwright_code **)(temp_v4 + 0x4c))(*(unsigned int *)(temp_v4 + 0x50));
            temp_v7 = *(unsigned int *)(temp_v4 + 0x38);
            temp_v5 = temp_v5 + 1;
            *(unsigned int *)(temp_v4 + 0x38) = temp_v3;
            *(unsigned int *)(temp_v4 + 0x3c) = temp_v7;
            *(unsigned char *)(temp_v4 + 0x58) = 1;
            param_1[2] = param_1[2] + 1;
          } while (temp_v5 < temp_v6);
        }
      }
      *param_1 = *param_1 + 1;
      temp_v9 = temp_v9 + 0x10;
    } while (temp_v9 != temp_v19);
  }
  FUN_002c2044(param_1 + 0xb,1);
  param_1[0x14d] = temp_v8;
  param_1[0x14e] = temp_v8;
  param_1[0x14f] = temp_v8;
  param_1[0x150] = temp_v8;
  param_1[0x151] = temp_v8;
  param_1[0x152] = 0x40a00000;
  param_1[0x153] = temp_v8;
  param_1[0x154] = 0x41f00000;
  param_1[0x155] = 0x3f800000;
  param_1[0x156] = 0x461c4000;
  param_1[0x157] = temp_v8;
  param_1[0x158] = 0x3f800000;
  param_1[0x159] = temp_v8;
  param_1[0x15a] = 0x40a00000;
  FUN_002c159c(param_1 + 0xb);
  FUN_002c1edc(param_1 + 0xb,param_1 + 0x14d,param_1 + 0x150,param_1 + 0x157);
  FUN_002c1e30(param_1 + 0xb,1);
  FUN_00298d50(param_1 + 0xb);
  FUN_003416bc(param_1,0,0xffffffff);
  return;
}
