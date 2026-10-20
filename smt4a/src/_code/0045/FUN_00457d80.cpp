/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00457d80` (_code @ 0x457d80, 0x654 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001bc768(...);
int FUN_001bc7ec(...);
int FUN_00457160(float *, unsigned int);
int VectorSignedToFloat(unsigned int, int);
int VectorUnsignedToFloat(unsigned int, int);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_MTX34MultAsm(...);
int nw_gfx_Camera_GetFar(int);
int nw_gfx_Camera_GetNear(int);
int nw_gfx_internal_NWCopyMtx24Reverse(...);
int nw_gfx_internal_NWCopyVec3Reverse(...);
int nw_gfx_internal_NWCopyVec4Reverse(...);

typedef int romwright_code(...);
/* stack frame of param_3: 36 slot(s), 144 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spF4; /* 0xf4: local_f4 */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int spFC; /* 0xfc: local_fc */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
    unsigned int sp10C; /* 0x10c: local_10c */
    unsigned int sp110; /* 0x110: local_110 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp158; /* 0x158: local_158 */
} param_3_stack;

extern unsigned int *g_commandBufferCursor; /* 0x5b40e0 */
extern unsigned int DAT_005c4c2c; /* 0x5c4c2c */
extern unsigned int DAT_0064c054; /* 0x64c054 */
extern unsigned int DAT_0064c058; /* 0x64c058 */
extern unsigned int DAT_0064c05c; /* 0x64c05c */
extern unsigned int DAT_0064c060; /* 0x64c060 */
extern unsigned int DAT_0064c064; /* 0x64c064 */
extern unsigned int DAT_0064c068; /* 0x64c068 */
extern unsigned int DAT_0064c06c; /* 0x64c06c */
extern unsigned int DAT_0064c070; /* 0x64c070 */
extern unsigned int DAT_0064c074; /* 0x64c074 */
extern unsigned int DAT_0064c078; /* 0x64c078 */
extern unsigned int DAT_0064c07c; /* 0x64c07c */
extern unsigned int DAT_0064c080; /* 0x64c080 */

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_001bc768. */
/* Supplied declaration required: FUN_001bc7ec. */
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: FUN_00457160. */
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */
/* Supplied declaration required: nw_gfx_Camera_GetFar. */
/* Supplied declaration required: nw_gfx_Camera_GetNear. */
/* Supplied declaration required: nw_gfx_internal_NWCopyMtx24Reverse. */
/* Supplied declaration required: nw_gfx_internal_NWCopyVec3Reverse. */
/* Supplied declaration required: nw_gfx_internal_NWCopyVec4Reverse. */


void FUN_00457d80(int param_1,int param_2,int param_3)

{
/* irregular: 1 unstructured edge(s); irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  unsigned int temp_v7;
  unsigned long long temp_v8;
  float temp_v9;
  unsigned long long temp_v10;
  float temp_v11;
  unsigned int uStack_154;
  unsigned int uStack_150;
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned int uStack_144;
  unsigned int uStack_140;
  unsigned int temp_v14;
  unsigned int temp_v15;
  unsigned int uStack_134;
  float fStack_130;
  float temp_v16;
  float temp_v17 [2];
  int *temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  float temp_v21;
  unsigned int temp_v22;
  int temp_v23;
  unsigned int temp_v24;
  unsigned int temp_v25;
  float temp_v26;
  unsigned int temp_v27;
  int temp_v28;
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31;
  float temp_v32;
  unsigned int uStack_d4;
  unsigned int uStack_d0;
  unsigned int uStack_cc;
  unsigned int temp_v33;
  unsigned int uStack_c4;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int temp_v34;
  unsigned int uStack_b4;
  float temp_v35;
  float fStack_ac;
  float temp_v36 [4];
  unsigned int temp_v37 [15];
  float *temp_v38;
  int temp_v39;
  int iStack_2c;
  int iStack_28;
  
  iStack_28 = param_3;
  iStack_2c = param_2;
  temp_v39 = param_1;
  temp_v37[1] = 0x2000;
  temp_v37[4] = 0x100;
  temp_v37[5] = 0x200;
  temp_v37[0] = 0;
  temp_v37[2] = 0x2100;
  temp_v37[3] = 0x2200;
  *g_commandBufferCursor = temp_v37[*(unsigned int *)(param_3 + 0x1c) & 0xff] | 0x1000;
  g_commandBufferCursor[1] = 0xa0080;
  temp_v36[0] = 0.0f;
  temp_v36[1] = 0.0f;
  temp_v36[2] = 0.0f;
  temp_v0 = *(unsigned int *)(param_2 + 0x14);
  temp_v4 = *(int *)(param_3 + 0x168);
  temp_v1 = temp_v0 & 0xfffff9ff;
  g_commandBufferCursor = g_commandBufferCursor + 2;
  *(unsigned int *)(param_2 + 0x14) = temp_v1;
  if (temp_v4 >= 2) {
    temp_v1 = temp_v1 | 0x2000;
  }
  else {
    temp_v1 = temp_v0 & 0xffffd9ff;
  }
  *(unsigned int *)(param_2 + 0x14) = temp_v1 & 0xfffff7ff;
  if (temp_v4 >= 3) {
    temp_v1 = (temp_v1 & 0xfffff7ff) | 0x4000;
  }
  else {
    temp_v1 = temp_v1 & 0xffffb7ff;
  }
  *(unsigned int *)(param_2 + 0x14) = temp_v1;
  temp_v3 = 0;
  temp_v23 = 0;
  if (0 < temp_v4) {
    temp_v10 = 0xbf8000003f800000;
    temp_v8 = 0x4000000000000000;
    do {
      puVar6 = (unsigned int *)(param_3 + temp_v3 * 0x58 + 0x16c);
      if (*(char *)((int)puVar6 + 0x25) != '\0') {
        if (*(char *)(puVar6 + 9) != '\0') {
          temp_v6 = (float)puVar6[4];
          FUN_00457160(&temp_v32,puVar6[3] & 0xff);
          temp_v11 = temp_v32;
          uStack_154 = uStack_d4;
          uStack_150 = uStack_d0;
          temp_v12 = uStack_cc;
          temp_v13 = temp_v33;
          uStack_144 = uStack_c4;
          uStack_140 = uStack_c0;
          temp_v14 = uStack_bc;
          temp_v15 = temp_v34;
          uStack_134 = uStack_b4;
          fStack_130 = temp_v35;
          temp_v16 = fStack_ac;
          *(float *)&puVar6[10] = temp_v32;
          puVar6[0xb] = uStack_d4;
          puVar6[0xc] = uStack_d0;
          puVar6[0xd] = uStack_cc;
          puVar6[0xe] = temp_v33;
          puVar6[0xf] = uStack_c4;
          puVar6[0x10] = uStack_c0;
          puVar6[0x11] = uStack_bc;
          puVar6[0x12] = temp_v34;
          puVar6[0x13] = uStack_b4;
          *(float *)&puVar6[0x14] = temp_v35;
          *(float *)&puVar6[0x15] = fStack_ac;
          *(unsigned char *)(puVar6 + 9) = 0;
        }
        else {
          temp_v6 = (float)puVar6[10];
          uStack_154 = puVar6[0xb];
          uStack_150 = puVar6[0xc];
          temp_v12 = puVar6[0xd];
          temp_v13 = puVar6[0xe];
          uStack_144 = puVar6[0xf];
          uStack_140 = puVar6[0x10];
          temp_v14 = puVar6[0x11];
          temp_v15 = puVar6[0x12];
          uStack_134 = puVar6[0x13];
          fStack_130 = (float)puVar6[0x14];
          temp_v16 = (float)puVar6[0x15];
          temp_v11 = temp_v6;
        }
        temp_v0 = puVar6[1] & 0xff;
        temp_v9 = (float)((unsigned long long)temp_v8 >> 0x20);
        temp_v7 = (unsigned int)temp_v8;
        switch(temp_v0) {
        case 0:
          temp_v6 = (float)VectorSignedToFloat(*puVar6,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v36[temp_v3] = temp_v6;
          *(unsigned int *)(param_2 + 0x14) = *(unsigned int *)(param_2 + 0x14) | (1 << ((temp_v3 + 9U) & 0xff));
          break;
        case 1:
          temp_v6 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v36[temp_v3] = temp_v6 + temp_v9;
          temp_v5 = *(int *)(temp_v39 + 0xa4);
          if (temp_v5 != 0) {
            temp_v11 = *(float *)(temp_v5 + 0x178);
            uStack_154 = *(unsigned int *)(temp_v5 + 0x17c);
            uStack_150 = *(unsigned int *)(temp_v5 + 0x180);
            temp_v12 = *(unsigned int *)(temp_v5 + 0x184);
            temp_v13 = *(unsigned int *)(temp_v5 + 0x188);
            uStack_144 = *(unsigned int *)(temp_v5 + 0x18c);
            uStack_140 = *(unsigned int *)(temp_v5 + 400);
            temp_v14 = *(unsigned int *)(temp_v5 + 0x194);
            temp_v15 = *(unsigned int *)(temp_v5 + 0x198);
            uStack_134 = *(unsigned int *)(temp_v5 + 0x19c);
            fStack_130 = *(float *)(temp_v5 + 0x1a0);
            temp_v16 = *(float *)(temp_v5 + 0x1a4);
          }
          break;
        case 2:
          temp_v6 = (float)VectorUnsignedToFloat(temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v36[temp_v3] = temp_v6 + temp_v9;
          break;
        case 3:
          if ((int)puVar6[2] >= 0) {
            temp_v5 = *(int *)(*(int *)(temp_v39 + 0xac) + puVar6[2] * 4);
          }
          else {
            temp_v5 = *(int *)(temp_v39 + 0xa4);
          }
          if (temp_v3 == 0) {
            temp_v29 = temp_v14;
            temp_v28 = temp_v12;
          }
          else {
            temp_v31 = temp_v14;
            temp_v30 = temp_v12;
          }
          temp_v12 = temp_v7;
          temp_v14 = temp_v7;
          nn_math_ARMv6_MTX34MultAsm(&temp_v11,&temp_v11,temp_v5 + 0x228);
          nn_math_ARMv6_MTX34MultAsm(&temp_v11,&temp_v11,temp_v5 + 0x148);
          temp_v23 = 1;
          break;
        case 4:
          if ((int)puVar6[2] >= 0) {
            temp_v5 = *(int *)(*(int *)(temp_v39 + 0xac) + puVar6[2] * 4);
          }
          else {
            temp_v5 = *(int *)(temp_v39 + 0xa4);
          }
          temp_v28 = temp_v12;
          temp_v29 = temp_v14;
          temp_v12 = temp_v7;
          temp_v14 = temp_v7;
          nw_gfx_Camera_GetNear(temp_v5);
          temp_v9 = temp_v6;
          nw_gfx_Camera_GetFar(temp_v5);
          temp_v18 = (int *)(**(romwright_code **)(**(int **)(temp_v5 + 0x260) + 0x14))();
          nn_math_ARMv6_MTX34CopyAsm(&temp_v32,temp_v5 + 0x228);
          temp_v2 = *temp_v18;
          if (temp_v2 != -0x80000000) {
            if (temp_v2 != 0x20000000) {
              if (temp_v2 == 0x40000000) {
                temp_v35 = (float)((unsigned long long)temp_v10 >> 0x20) / (temp_v6 - temp_v9);
                fStack_ac = temp_v9 * temp_v35;
              }
              nn_math_ARMv6_MTX34MultAsm(&temp_v11,&temp_v11,&temp_v32);
              nn_math_ARMv6_MTX34MultAsm(&temp_v11,&temp_v11,temp_v5 + 0x148);
              temp_v23 = 1;
              break;
            }
            temp_v38 = temp_v17;
            temp_v6 = (float)temp_v10 / (temp_v6 - temp_v9);
            if (((DAT_005c4c2c & 1) == 0) && (temp_v2 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v2 != 0)) {
              DAT_0064c054 = (unsigned int)temp_v10;
              DAT_0064c058 = (unsigned int)temp_v8;
              DAT_0064c05c = DAT_0064c058;
              DAT_0064c060 = DAT_0064c058;
              DAT_0064c064 = DAT_0064c058;
              DAT_0064c068 = DAT_0064c054;
              DAT_0064c06c = DAT_0064c058;
              DAT_0064c070 = DAT_0064c058;
              DAT_0064c074 = DAT_0064c058;
              DAT_0064c078 = DAT_0064c058;
              DAT_0064c07c = DAT_0064c054;
              DAT_0064c080 = DAT_0064c058;
            }
          }
          else {
            temp_v38 = temp_v17;
            temp_v6 = (float)temp_v10 / (temp_v6 - temp_v9);
            if (((DAT_005c4c2c & 1) == 0) && (temp_v2 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v2 != 0)) {
              DAT_0064c054 = (unsigned int)temp_v10;
              DAT_0064c058 = (unsigned int)temp_v8;
              DAT_0064c05c = DAT_0064c058;
              DAT_0064c060 = DAT_0064c058;
              DAT_0064c064 = DAT_0064c058;
              DAT_0064c068 = DAT_0064c054;
              DAT_0064c06c = DAT_0064c058;
              DAT_0064c070 = DAT_0064c058;
              DAT_0064c074 = DAT_0064c058;
              DAT_0064c078 = DAT_0064c058;
              DAT_0064c07c = DAT_0064c054;
              DAT_0064c080 = DAT_0064c058;
            }
          }
          nn_math_ARMv6_MTX34CopyAsm(temp_v38,&DAT_0064c054);
          temp_v17[1] = 0.0f;
          temp_v18 = (int *)0x0;
          temp_v19 = 0;
          temp_v20 = 0;
          temp_v22 = 0;
          temp_v23 = 0;
          temp_v24 = 0;
          temp_v25 = 0;
          temp_v27 = 0;
          temp_v17[0] = temp_v6;
          temp_v21 = temp_v6;
          temp_v26 = temp_v6;
          nn_math_ARMv6_MTX34MultAsm(&temp_v11,&temp_v11,temp_v17);
          nn_math_ARMv6_MTX34MultAsm(&temp_v11,&temp_v11,&temp_v32);
          nn_math_ARMv6_MTX34MultAsm(&temp_v11,&temp_v11,temp_v5 + 0x148);
          temp_v23 = 1;
          break;
        }
        puVar1 = g_commandBufferCursor;
        temp_v5 = 3;
        if (temp_v3 == 2) {
          temp_v5 = 2;
        }
        temp_v0 = temp_v3 * 3 + 0x8000000b;
        if (temp_v5 != 1) {
          if (temp_v5 != 2) {
            if (temp_v5 != 3) {
              if (temp_v5 == 4) {
                *g_commandBufferCursor = temp_v0;
                puVar1[1] = 0xf02c0;
                FUN_001bc7ec(puVar1 + 2,&temp_v11,0xff02c1);
                g_commandBufferCursor = g_commandBufferCursor + 0x14;
              }
            }
            else {
              *g_commandBufferCursor = temp_v0;
              puVar1[1] = 0xf02c0;
              FUN_001bc768(puVar1 + 2,&temp_v11,0xbf02c1);
              g_commandBufferCursor = g_commandBufferCursor + 0x10;
            }
          }
          else {
            puVar5 = g_commandBufferCursor + 2;
            *g_commandBufferCursor = temp_v0;
            puVar1[1] = 0x808f02c0;
            nw_gfx_internal_NWCopyMtx24Reverse(puVar5,&temp_v11);
            g_commandBufferCursor = g_commandBufferCursor + 10;
          }
        }
        else {
          puVar5 = g_commandBufferCursor + 2;
          *g_commandBufferCursor = temp_v0;
          puVar1[1] = 0x804f02c0;
          nw_gfx_internal_NWCopyVec4Reverse(puVar5,&temp_v11);
          g_commandBufferCursor = g_commandBufferCursor + 6;
        }
      }
      puVar1 = g_commandBufferCursor;
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v4);
    if (temp_v23 != 0) {
      *g_commandBufferCursor = 0x80000013;
      puVar1[1] = 0x804f02c0;
      nw_gfx_internal_NWCopyVec4Reverse(puVar1 + 2,&temp_v28);
      g_commandBufferCursor = g_commandBufferCursor + 6;
    }
  }
  puVar1 = g_commandBufferCursor;
  *g_commandBufferCursor = 0x8000000a;
  puVar1[1] = 0x804f02c0;
  nw_gfx_internal_NWCopyVec3Reverse(puVar1 + 2,temp_v36);
  g_commandBufferCursor = g_commandBufferCursor + 6;
  return;
}

} /* extern "C" */
