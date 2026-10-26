/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7ff0` (_code @ 0x3f7ff0, 0x554 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002255c0(int **, int, int);
int FUN_00225a14(unsigned int, int, unsigned int, int);
int nn_math_ARMv6_MTX34InverseAsm(...);
int FUN_002b77f4(...);
int FUN_003fd340(...);
int FUN_003fddec(...);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_MTX34InvTransposeAsm(unsigned char [52], int *);
int nn_math_ARMv6_MTX34MultAsm(...);
int nw_gfx_BasicRenderQueue_nw_gfx_BasicRenderElement_unsigned_long_long_nw_ut_MoveArray_nw_gfx_BasicRenderElement_unsigned_long_long_nw_gfx_BasicRenderKeyFactory_unsigned_long_long_En(...);
int nw_gfx_SceneHelper_CalculateDepth(...);

typedef struct fn_003f7ff0_arg3 fn_003f7ff0_arg3;
struct fn_003f7ff0_arg3 {
    unsigned char pad_0x0[0x2c];
    void *field_0x2c; /* +0x2c */
    void *field_0x30; /* +0x30 */
    unsigned char pad_0x34[0x28];
    undefined4 field_0x5c; /* +0x5c */
};

typedef int romwright_code(...);
/* stack frame of param_10: 22 slot(s), 88 byte(s) */
typedef struct {
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp1E8; /* 0x1e8: local_1e8 */
    unsigned int sp1EC; /* 0x1ec: local_1ec */
    unsigned int sp1F0; /* 0x1f0: local_1f0 */
    unsigned int sp1F8; /* 0x1f8: local_1f8 */
} param_10_stack;

/* Supplied declaration required: FUN_002255c0. */
/* Supplied declaration required: FUN_00225a14. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InverseAsm. */
/* Supplied declaration required: FUN_002b77f4. */
/* Supplied declaration required: FUN_003fd340. */
/* Supplied declaration required: FUN_003fddec. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34InvTransposeAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nw_gfx_BasicRenderQueue_nw_gfx_BasicRenderElement_unsigned_long_long_nw_ut_MoveArray_nw_gfx_BasicRenderElement_unsigned_long_long_nw_gfx_BasicRenderKeyFactory_unsigned_long_long_En. */
extern int nw_gfx_Model_IsMeshVisible(int *);
/* Supplied declaration required: nw_gfx_SceneHelper_CalculateDepth. */


void FUN_003f7ff0(unsigned int param_1,unsigned int param_2,unsigned int param_3,fn_003f7ff0_arg3 *param_4
                 ,int param_5,unsigned int param_6,unsigned int param_7,unsigned int param_8,unsigned int param_9,
                 unsigned int param_10)

{
/* irregular: 1 goto(s); 11 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  int *piVar3;
  unsigned char *puVar4;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  void *pvVar8;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  void *pvVar12;
  int *piVar13;
  int *piVar14;
  int *piVar15;
  unsigned int *puVar16;
  int temp_v8;
  unsigned int uStack_1f4;
  int temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  unsigned char temp_v12 [8];
  unsigned char temp_v13 [8];
  unsigned char temp_v14 [48];
  unsigned char temp_v15 [48];
  unsigned char temp_v16 [56];
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  int *temp_v23;
  int temp_v24;
  unsigned int temp_v25;
  int temp_v26;
  unsigned int temp_v27;
  unsigned int *temp_v28;
  unsigned char temp_v29 [48];
  int temp_v30;
  unsigned int temp_v31;
  int iStack_c8;
  int *temp_v32;
  unsigned int temp_v33;
  unsigned char temp_v34 [48];
  unsigned char temp_v35 [52];
  unsigned int temp_v36;
  unsigned int temp_v37;
  
  temp_v8 = param_2;
  uStack_1f4 = param_3;
  if (param_9 != 1) {
    if (param_8 == 1) {
      temp_v10 = (param_6 & 0xffff00ff) | ((param_7 & 0xff) << 8);
      pvVar8 = param_4->field_0x2c;
      pvVar12 = param_4->field_0x30;
      puVar4 = temp_v12;
      temp_v11 = param_10;
      temp_v9 = param_5;
      FUN_003fddec(puVar4,pvVar8,pvVar12,param_1);
      return;
    }
    puVar16 = (unsigned int *)param_4->field_0x2c;
    temp_v28 = (unsigned int *)param_4->field_0x30;
    temp_v21 = ((param_6 | (param_9 & 0xffffff00)) & 0xffff00ff) | ((param_7 & 0xff) << 8);
    temp_v20 = param_5;
    temp_v22 = param_10;
    temp_v17 = param_1;
    temp_v18 = param_2;
    temp_v19 = param_3;
    if (puVar16 != temp_v28) {
      do {
        piVar14 = (int *)*puVar16;
        if (piVar14 != (int *)0x0) {
          piVar3 = (int *)(**(romwright_code **)(*piVar14 + 8))(piVar14);
          do {
            if (piVar3 == (int *)0x472288) {
              piVar3 = piVar14;
              if (piVar14 != (int *)0x0) {
                *(unsigned char *)(piVar14[0x88] + 0x18) = 0;
              }
              goto LAB_003f80b4;
            }
            piVar3 = (int *)*piVar3;
          } while (piVar3 != (int *)0x0);
        }
        piVar3 = (int *)0x0;
LAB_003f80b4:
        temp_v1 = temp_v33;
        if ((*(char *)((int)piVar14 + 0x1f6) != '\0') && ((~piVar14[0xe] & 1U) == 0)) {
          if (piVar3 != (int *)0x0) {
            if ((char)piVar3[0x8c] == '\0') {
              FUN_00225a14(temp_v17,piVar3[0x88],temp_v18,temp_v20);
            }
            temp_v5 = temp_v20 + 0x148;
            temp_v2 = temp_v20 + 0x148;
            if ((~*(unsigned int *)(*(int *)(piVar3[0x88] + 8) + 0x28) & 1) == 0) {
              nn_math_ARMv6_MTX34InvTransposeAsm(temp_v35,piVar14 + 0x23);
              nn_math_ARMv6_MTX34MultAsm(piVar14 + 0x6f,temp_v2,temp_v35);
            }
            else if ((piVar14[0x3e] & 0x200U) != 0) {
              nn_math_ARMv6_MTX34CopyAsm(piVar14 + 0x6f,temp_v5);
            }
            else {
              nn_math_ARMv6_MTX34InverseAsm(temp_v29,piVar14 + 0x23);
              FUN_002b77f4(&temp_v8,temp_v29);
              nn_math_ARMv6_MTX34MultAsm(temp_v14,temp_v29,&temp_v8);
              nn_math_ARMv6_MTX34MultAsm(piVar14 + 0x6f,temp_v5,temp_v14);
            }
            piVar13 = (int *)piVar3[0x5c];
            piVar15 = (int *)piVar3[0x5d];
            if (piVar13 == piVar15) {
              temp_v5 = piVar3[2];
              if (*(int *)(temp_v5 + 0xb8) != 0) {
                piVar13 = (int *)(*(int *)(temp_v5 + 0xb8) + temp_v5 + 0xb8);
              }
              else {
                piVar13 = (int *)0x0;
              }
              piVar15 = piVar13 + *(int *)(temp_v5 + 0xb4);
            }
            temp_v24 = piVar3[2];
            temp_v27 = (unsigned int)((unsigned char)temp_v21 | *(unsigned char *)(piVar14 + 0x7d)) |
                        (temp_v37 & 0xffffff00);
            temp_v25 = temp_v19;
            temp_v26 = temp_v20;
            temp_v23 = piVar3;
            temp_v1 = temp_v33;
            temp_v37 = temp_v27;
            if (piVar13 != piVar15) {
              do {
                if (*piVar13 != 0) {
                  temp_v5 = *piVar13 + (int)piVar13;
                }
                else {
                  temp_v5 = 0;
                }
                temp_v2 = nw_gfx_Model_IsMeshVisible(temp_v23);
                if (temp_v2 != 0) {
                  FUN_002255c0(&temp_v23,temp_v5,temp_v26);
                  temp_v32 = temp_v23;
                  temp_v30 = 0;
                  temp_v31 = 0;
                  iStack_c8 = temp_v5;
                  nw_gfx_BasicRenderQueue_nw_gfx_BasicRenderElement_unsigned_long_long_nw_ut_MoveArray_nw_gfx_BasicRenderElement_unsigned_long_long_nw_gfx_BasicRenderKeyFactory_unsigned_long_long_En
                            (temp_v25,&temp_v30,
                             *(unsigned int *)(*(int *)(*(int *)(temp_v23[0x59] +
                                                        *(int *)(temp_v5 + 0x1c) * 4) + 0x2c) + 0x20)
                             & 0xff,temp_v27 & 0xff);
                }
                piVar13 = piVar13 + 1;
                temp_v1 = temp_v33;
              } while (piVar13 != piVar15);
            }
          }
          else {
            temp_v5 = temp_v20 + 0x148;
            if ((piVar14[0x3e] & 0x200U) != 0) {
              nn_math_ARMv6_MTX34CopyAsm(piVar14 + 0x6f,temp_v5);
            }
            else {
              nn_math_ARMv6_MTX34InverseAsm(temp_v15,piVar14 + 0x23);
              FUN_002b77f4(temp_v16,temp_v15);
              nn_math_ARMv6_MTX34MultAsm(temp_v34,temp_v15,temp_v16);
              nn_math_ARMv6_MTX34MultAsm(piVar14 + 0x6f,temp_v5,temp_v34);
            }
            temp_v1 = temp_v21;
            if ((piVar14 != (int *)0x0) &&
               (temp_v5 = (**(romwright_code **)(*piVar14 + 8))(), temp_v1 = temp_v21, temp_v5 == 0x4721e0)) {
              temp_v1 = temp_v21 >> 8;
            }
            temp_v5 = temp_v20;
            temp_v0 = temp_v19;
            piVar3 = (int *)piVar14[0x5c];
            piVar13 = (int *)piVar14[0x5d];
            temp_v3 = (unsigned int)*(unsigned char *)(piVar14 + 0x7d) | (temp_v1 & 0xff);
            if (piVar3 == piVar13) {
              temp_v2 = piVar14[2];
              if (*(int *)(temp_v2 + 0xb8) != 0) {
                piVar3 = (int *)(*(int *)(temp_v2 + 0xb8) + temp_v2 + 0xb8);
              }
              else {
                piVar3 = (int *)0x0;
              }
              piVar13 = piVar3 + *(int *)(temp_v2 + 0xb4);
            }
            temp_v2 = piVar14[2];
            temp_v36 = temp_v3 | (temp_v36 & 0xffffff00);
            temp_v1 = temp_v33;
            for (; temp_v33 = temp_v3, piVar3 != piVar13; piVar3 = piVar3 + 1) {
              if (*piVar3 != 0) {
                temp_v6 = *piVar3 + (int)piVar3;
              }
              else {
                temp_v6 = 0;
              }
              temp_v4 = nw_gfx_Model_IsMeshVisible(piVar14);
              if (temp_v4 != 0) {
                temp_v4 = *(int *)(temp_v2 + 200);
                if (temp_v4 != 0) {
                  temp_v4 = temp_v2 + 200 + temp_v4;
                }
                else {
                  temp_v4 = 0;
                }
                piVar15 = (int *)(temp_v4 + *(int *)(temp_v6 + 0x18) * 4);
                temp_v4 = *piVar15;
                if (temp_v4 != 0) {
                  temp_v4 = temp_v4 + (int)piVar15;
                }
                temp_v7 = *(int *)(temp_v4 + 0x1c);
                if (temp_v7 != 0) {
                  temp_v7 = temp_v4 + 0x1c + temp_v7;
                }
                else {
                  temp_v7 = 0;
                }
                nw_gfx_SceneHelper_CalculateDepth(temp_v7 + 4,piVar14 + 0x23,temp_v5);
                temp_v30 = 0;
                temp_v31 = 0;
                iStack_c8 = temp_v6;
                temp_v32 = piVar14;
                nw_gfx_BasicRenderQueue_nw_gfx_BasicRenderElement_unsigned_long_long_nw_ut_MoveArray_nw_gfx_BasicRenderElement_unsigned_long_long_nw_gfx_BasicRenderKeyFactory_unsigned_long_long_En
                          (temp_v0,&temp_v30,
                           *(unsigned int *)(*(int *)(*(int *)(piVar14[0x59] + *(int *)(temp_v6 + 0x1c) * 4)
                                             + 0x2c) + 0x20) & 0xff,temp_v33);
              }
              temp_v3 = temp_v33;
              temp_v1 = temp_v33;
            }
          }
        }
        temp_v33 = temp_v1;
        puVar16 = puVar16 + 1;
        if (puVar16 == temp_v28) {
          return;
        }
      } while( 1 );
    }
  }
  else {
    temp_v10 = ((param_6 | (param_8 & 0xffffff00)) & 0xffff00ff) | ((param_7 & 0xff) << 8);
    pvVar8 = param_4->field_0x2c;
    pvVar12 = param_4->field_0x30;
    temp_v9 = param_5;
    temp_v11 = param_10;
    puVar4 = temp_v13;
    if (param_8 == 1) {
      temp_v11 = param_10;
      temp_v9 = param_5;
      FUN_003fddec(puVar4,pvVar8,pvVar12,param_1);
      return;
    }
    FUN_003fd340(puVar4,pvVar8,pvVar12,param_1);
  }
  return;
}

} /* extern "C" */
