/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_SceneBuilder_CreateObjectByResourceType` (_code @ 0x2aaa88, 0xd90 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0012acc0(...);
int FUN_0012b8a0(...);
int FUN_0012ca58(int *, unsigned int *, unsigned int *, unsigned int);
int FUN_002b3acc(...);
int nw_gfx_AmbientLight_GetMemorySizeInternal(...);
int nw_gfx_AnimGroup_GetMemorySizeForInitialize(...);
int nw_gfx_Camera_Create(int *, unsigned int *, int *, unsigned int);
int nw_gfx_Camera_GetMemorySizeInternal(unsigned int *, unsigned int *, int, int);
int nw_gfx_Fog_GetMemorySizeInternal(...);
int nw_gfx_FragmentLight_GetMemorySizeInternal(unsigned int *, unsigned int *, int, int);
int nw_gfx_HemiSphereLight_GetMemorySizeInternal(unsigned int *, unsigned int *, int, int);
int nw_gfx_Model_GetMemorySizeForInitialize(...);
int nw_gfx_ParticleEmitter_GetMemorySizeInternal(unsigned int *, unsigned int *, unsigned int *);
int nw_gfx_ParticleModel_GetDeviceMemorySizeInternal(...);
int nw_gfx_ParticleModel_GetMemorySizeInternal(...);
int nw_gfx_SceneBuilder_BuildChildren(...);
int nw_gfx_SceneEnvironmentSetting_GetMemorySizeInternal(unsigned int *, unsigned int *);
int nw_gfx_TransformNode_GetMemorySizeForInitialize(unsigned int *, unsigned int *, int, int);

typedef struct fn_002aaa88_arg0 fn_002aaa88_arg0;
struct fn_002aaa88_arg0 {
    unsigned char pad_0x0[0x4];
    byte field_0x4; /* +0x4 */
    unsigned char pad_0x5[0x3];
    int field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    int field_0x14; /* +0x14 */
    int field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    int field_0x20; /* +0x20 */
    byte field_0x24; /* +0x24 */
};

typedef int romwright_code(...);
/* stack frame of param_9: 15 slot(s), 60 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
} param_9_stack;

#ifndef ROMWRIGHT_PIECE_1_1_DEFINED
#define ROMWRIGHT_PIECE_1_1_DEFINED
#define romwright_piece_1_1(upper, lower) ((unsigned short)(((unsigned short)(unsigned char)(upper) << 8) | (unsigned char)(lower)))
#endif
#ifndef ROMWRIGHT_PIECE_2_2_DEFINED
#define ROMWRIGHT_PIECE_2_2_DEFINED
#define romwright_piece_2_2(upper, lower) ((unsigned int)(((unsigned int)(unsigned short)(upper) << 16) | (unsigned short)(lower)))
#endif
/* Supplied declaration required: FUN_0012acc0. */
extern int *FUN_0012adb8(int *, unsigned int *, unsigned int *, unsigned int);
extern int *FUN_0012b288(int *, unsigned int *, unsigned int *, unsigned int);
extern int *FUN_0012b64c(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012b8a0. */
extern int *FUN_0012c424(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_0012ca58. */
extern int *FUN_0012d520(unsigned int *, unsigned int *, unsigned int);
extern int *FUN_0012db88(int *, unsigned int *, unsigned int *, unsigned int);
extern int *FUN_0012e780(int *, unsigned int *, unsigned int *, unsigned int);
extern int *FUN_0012f1c8(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: FUN_002b3acc. */
/* Supplied declaration required: nw_gfx_AmbientLight_GetMemorySizeInternal. */
/* Supplied declaration required: nw_gfx_AnimGroup_GetMemorySizeForInitialize. */
/* Supplied declaration required: nw_gfx_Camera_Create. */
/* Supplied declaration required: nw_gfx_Camera_GetMemorySizeInternal. */
/* Supplied declaration required: nw_gfx_Fog_GetMemorySizeInternal. */
/* Supplied declaration required: nw_gfx_FragmentLight_GetMemorySizeInternal. */
/* Supplied declaration required: nw_gfx_HemiSphereLight_GetMemorySizeInternal. */
/* Supplied declaration required: nw_gfx_Model_GetMemorySizeForInitialize. */
/* Supplied declaration required: nw_gfx_ParticleEmitter_GetMemorySizeInternal. */
/* Supplied declaration required: nw_gfx_ParticleModel_GetDeviceMemorySizeInternal. */
/* Supplied declaration required: nw_gfx_ParticleModel_GetMemorySizeInternal. */
/* Supplied declaration required: nw_gfx_SceneBuilder_BuildChildren. */
/* Supplied declaration required: nw_gfx_SceneEnvironmentSetting_GetMemorySizeInternal. */
extern int *nw_gfx_TransformNode_Create(int *, unsigned int *, unsigned int *, unsigned int);
/* Supplied declaration required: nw_gfx_TransformNode_GetMemorySizeForInitialize. */


int * nw_gfx_SceneBuilder_CreateObjectByResourceType(fn_002aaa88_arg0 *param_1,unsigned int *param_2,int param_3,int *param_4,unsigned int *param_5,
                  unsigned int param_6,int param_7,int param_8,int param_9)

{
/* irregular: 24 goto(s); 20 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  unsigned int *puVar3;
  int *piVar4;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned char temp_v6;
  unsigned int temp_v7;
  unsigned int *temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  unsigned int temp_v12;
  int temp_v13;
  int temp_v14;
  int temp_v15;
  int temp_v16;
  int temp_v17;
  int temp_v18;
  int temp_v19;
  unsigned int temp_v20;
  unsigned int *temp_v21;
  
  if (param_5 == (unsigned int *)0x0) {
    return (int *)0x0;
  }
  temp_v0 = *param_5;
  temp_v2 = temp_v0 + 0xbfffffbe;
  if (temp_v0 != 0x40000042) {
    if ((int)temp_v0 < 0x40000042) {
      if (temp_v0 == 0x40000006) {
        temp_v10 = 1;
        temp_v8 = (unsigned int *)param_1->field_0xc;
        temp_v9 = param_1->field_0x8;
        (*(unsigned short *)((unsigned char *)&temp_v7 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
        if (param_9 == 0) {
          FUN_0012ca58(param_4,param_5,&temp_v7,param_6);
          piVar2 = param_4;
          goto LAB_002ab79c;
        }
        if (param_2 != (unsigned int *)0x0) {
          nw_gfx_ParticleEmitter_GetMemorySizeInternal(param_2,param_5,&temp_v7);
        }
        goto LAB_002ab22c;
      }
      if ((int)temp_v0 < 0x40000006) {
        if (temp_v0 == 0x800000) {
          if (param_9 != 0) {
            if (param_2 != (unsigned int *)0x0) {
              nw_gfx_SceneEnvironmentSetting_GetMemorySizeInternal(param_2,param_5);
            }
            goto LAB_002ab22c;
          }
          piVar2 = (int *)FUN_0012d520(param_5,&temp_v7,param_6);
          goto LAB_002ab79c;
        }
        if (temp_v0 == 0x40000000) {
          temp_v8 = (unsigned int *)param_1->field_0xc;
          temp_v9 = param_1->field_0x8;
          temp_v10 = param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v7 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            piVar2 = (int *)FUN_0012f1c8(param_4,param_5,&temp_v7,param_6);
            goto LAB_002ab79c;
          }
          if (param_2 != (unsigned int *)0x0) {
            *param_2 = (((*param_2 + param_2[1]) - 1) & ~(param_2[1] - 1)) + 0x4c;
            temp_v0 = param_2[1];
            param_2[1] = 0x20;
            temp_v4 = 0x20;
            if (param_2[2] >= 0x20) {
              temp_v4 = param_2[2];
            }
            param_2[2] = temp_v4;
            param_2[1] = temp_v0;
            *param_2 = ((*param_2 + 0x1f) & 0xffffffe0) + temp_v9 * 4;
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            if (temp_v8 != (unsigned int *)0x0) {
              temp_v0 = param_2[1] - 1;
              temp_v4 = (((*param_2 + param_2[1]) - 1) & ~temp_v0) + 0x14;
              *param_2 = temp_v4;
              temp_v0 = (((param_2[1] + temp_v4) - 1) & ~temp_v0) + (int)temp_v8 * 4;
            }
            else {
              temp_v0 = (((*param_2 + param_2[1]) - 1) & ~(param_2[1] - 1)) + 0x14;
            }
            *param_2 = temp_v0;
            temp_v6 = ((int)temp_v7 << 0x10) >> 0x18 != 0;
            if (temp_v6) {
              temp_v0 = param_5[10];
            }
            if (temp_v6 && temp_v0 != 0) {
              temp_v4 = (((*param_2 + param_2[1]) - 1) & ~(param_2[1] - 1)) + 0x2c;
              *param_2 = temp_v4;
              temp_v4 = (((temp_v4 + param_2[1]) - 1) & ~(param_2[1] - 1)) + temp_v0 * 4;
              *param_2 = temp_v4;
              *param_2 = (((temp_v4 + param_2[1]) - 1) & ~(param_2[1] - 1)) + temp_v0 * temp_v10 * 4;
            }
          }
          goto LAB_002ab22c;
        }
        if (temp_v0 == 0x40000002) {
          temp_v10 = param_1->field_0xc;
          temp_v11 = param_1->field_0x8;
          temp_v12 = (unsigned int)param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            piVar2 = (int *)nw_gfx_TransformNode_Create(param_4,param_5,(unsigned int *)&temp_v9,param_6);
            goto LAB_002ab79c;
          }
          if (param_2 != (unsigned int *)0x0) {
            *param_2 = (((*param_2 + param_2[1]) - 1) & ~(param_2[1] - 1)) + 0x148;
            temp_v7 = (unsigned int)temp_v11;
            temp_v8 = (unsigned int *)temp_v12;
            nw_gfx_TransformNode_GetMemorySizeForInitialize(param_2,param_5,temp_v9,temp_v10);
          }
          goto LAB_002ab22c;
        }
      }
      else {
        if (temp_v0 == 0x4000000a) {
          temp_v10 = param_1->field_0xc;
          temp_v11 = param_1->field_0x8;
          temp_v12 = (unsigned int)param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            nw_gfx_Camera_Create(param_4,param_5,&temp_v9,param_6);
            piVar2 = param_4;
            goto LAB_002ab79c;
          }
          if (param_2 != (unsigned int *)0x0) {
            temp_v7 = (unsigned int)temp_v11;
            temp_v8 = (unsigned int *)temp_v12;
            nw_gfx_Camera_GetMemorySizeInternal(param_2,param_5,temp_v9,temp_v10);
          }
          goto LAB_002ab22c;
        }
        if (temp_v0 == 0x40000012) {
          temp_v0 = (unsigned int)temp_v12 >> 0x10;
          temp_v13 = param_1->field_0xc;
          temp_v14 = param_1->field_0x8;
          temp_v16 = param_1->field_0x10;
          temp_v17 = param_1->field_0x14;
          temp_v18 = param_1->field_0x18;
          (*(unsigned short *)((unsigned char *)&temp_v12 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          temp_v12 = (unsigned int)romwright_piece_2_2((short)temp_v0,(unsigned short)temp_v12);
          temp_v15 = param_1->field_0x1c;
          if (param_9 == 0) {
            piVar2 = (int *)FUN_0012e780(param_4,param_5,&temp_v12,param_6);
            goto LAB_002ab79c;
          }
          if (param_2 != (unsigned int *)0x0) {
            *param_2 = (((param_2[1] + *param_2) - 1) & ~(param_2[1] - 1)) + 0x220;
            temp_v7 = (unsigned int)temp_v14;
            temp_v8 = (unsigned int *)temp_v15;
            temp_v9 = temp_v16;
            temp_v10 = temp_v17;
            temp_v11 = temp_v18;
            nw_gfx_Model_GetMemorySizeForInitialize(param_2,param_5,temp_v12,temp_v13);
          }
          goto LAB_002ab22c;
        }
      }
    }
    else {
      if (temp_v2 == 0xe0) {
        temp_v10 = param_1->field_0xc;
        temp_v11 = param_1->field_0x8;
        temp_v12 = (unsigned int)param_1->field_0x1c;
        (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
        if (param_9 == 0) {
          piVar2 = (int *)FUN_0012c424(param_4,param_5,(unsigned int *)&temp_v9,param_6);
          goto LAB_002ab79c;
        }
        if (param_2 != (unsigned int *)0x0) {
          temp_v7 = (unsigned int)temp_v11;
          temp_v8 = (unsigned int *)temp_v12;
          nw_gfx_HemiSphereLight_GetMemorySizeInternal(param_2,param_5,temp_v9,temp_v10);
        }
        goto LAB_002ab22c;
      }
      if (temp_v2 < 0xe0) {
        if (temp_v2 != 0x50) {
          if (temp_v2 == 0x60) {
            temp_v10 = param_1->field_0xc;
            temp_v11 = param_1->field_0x8;
            temp_v12 = (unsigned int)param_1->field_0x1c;
            (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
            if (param_9 == 0) {
              piVar2 = (int *)FUN_0012b64c(param_4,param_5,(unsigned int *)&temp_v9,param_6);
              goto LAB_002ab79c;
            }
            if (param_2 != (unsigned int *)0x0) {
              temp_v7 = (unsigned int)temp_v11;
              temp_v8 = (unsigned int *)temp_v12;
              nw_gfx_FragmentLight_GetMemorySizeInternal(param_2,param_5,temp_v9,temp_v10);
            }
            goto LAB_002ab22c;
          }
          if (temp_v2 == 0xd0) {
            temp_v12 = (unsigned int)0x1;
            puVar3 = param_5;
            if ((~*param_5 & 0x40000112) != 0) {
              puVar3 = (unsigned int *)0x0;
            }
            temp_v10 = param_1->field_0xc;
            temp_v13 = param_1->field_0x10;
            temp_v14 = param_1->field_0x14;
            temp_v15 = param_1->field_0x18;
            temp_v11 = puVar3[8] + puVar3[0x38] + param_1->field_0x20;
            temp_v16 = puVar3[0x38] + param_1->field_0x20;
            (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
            if (param_9 == 0) {
              temp_v7 = (unsigned int)param_7;
              FUN_0012b8a0(param_4,param_5,&temp_v9,param_6);
              piVar2 = param_4;
              goto LAB_002ab79c;
            }
            if (param_2 != (unsigned int *)0x0) {
              nw_gfx_ParticleModel_GetMemorySizeInternal(param_2,puVar3,&temp_v9);
            }
            if (param_3 != 0) {
              nw_gfx_ParticleModel_GetDeviceMemorySizeInternal(param_3,puVar3,&temp_v9);
            }
            goto LAB_002ab22c;
          }
        }
        else {
          temp_v0 = (unsigned int)temp_v13 >> 0x10;
          temp_v20 = 0;
          temp_v14 = param_1->field_0xc;
          temp_v15 = param_1->field_0x8;
          temp_v17 = param_1->field_0x10;
          temp_v18 = param_1->field_0x14;
          temp_v19 = param_1->field_0x18;
          temp_v16 = param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v13 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          temp_v2 = romwright_piece_2_2((short)temp_v0,(unsigned short)temp_v13);
          temp_v13 = temp_v2;
          if (param_9 == 0) {
            piVar2 = &temp_v13;
            FUN_002b3acc(piVar2,param_4,param_5,param_6);
            goto LAB_002ab79c;
          }
          if (param_2 != (unsigned int *)0x0) {
            if (param_5[0x38] != 0) {
              temp_v3 = (int)param_5 + param_5[0x38] + 0xe0;
            }
            else {
              temp_v3 = 0;
            }
            temp_v0 = param_2[1];
            temp_v1 = *(int *)(temp_v3 + 0x18);
            param_2[1] = 0x20;
            temp_v4 = 0x20;
            if (param_2[2] >= 0x20) {
              temp_v4 = param_2[2];
            }
            param_2[2] = temp_v4;
            param_2[1] = temp_v0;
            *param_2 = temp_v1 * 0x40 + ((*param_2 + 0x1f) & 0xffffffe0);
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            temp_v4 = param_2[1] - 1;
            *param_2 = (((*param_2 + param_2[1]) - 1) & ~temp_v4) + 0x60;
            temp_v1 = *(int *)(temp_v3 + 0x18);
            temp_v0 = param_2[1];
            param_2[1] = 0x20;
            temp_v5 = param_2[2];
            if (temp_v5 < 0x20) {
              temp_v5 = 0x20;
            }
            param_2[2] = temp_v5;
            param_2[1] = temp_v0;
            *param_2 = temp_v1 * 0x40 + ((*param_2 + 0x1f) & 0xffffffe0);
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            temp_v1 = *(int *)(temp_v3 + 0x18);
            temp_v0 = param_2[1];
            param_2[1] = 0x20;
            temp_v5 = param_2[2];
            if (temp_v5 < 0x20) {
              temp_v5 = 0x20;
            }
            param_2[2] = temp_v5;
            param_2[1] = temp_v0;
            *param_2 = temp_v1 * 0x30 + ((*param_2 + 0x1f) & 0xffffffe0);
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            temp_v3 = *(int *)(temp_v3 + 0x18);
            temp_v0 = param_2[1];
            param_2[1] = 0x20;
            temp_v5 = 0x20;
            if (param_2[2] >= 0x20) {
              temp_v5 = param_2[2];
            }
            param_2[2] = temp_v5;
            param_2[1] = temp_v0;
            *param_2 = temp_v3 * 0x30 + ((*param_2 + 0x1f) & 0xffffffe0);
            if (temp_v0 <= param_2[2]) {
              temp_v0 = param_2[2];
            }
            param_2[2] = temp_v0;
            if (temp_v14 != 0) {
              temp_v5 = param_2[1];
              temp_v0 = ((((((((*param_2 + param_2[1]) - 1) & ~temp_v4) + temp_v5 + 0x13) & ~temp_v4) +
                         temp_v14 * 4 + temp_v5) - 1) & ~temp_v4) + 0x14;
              *param_2 = temp_v0;
              temp_v0 = temp_v14 * 4 + (((temp_v0 + temp_v5) - 1) & ~temp_v4);
            }
            else {
              temp_v0 = (((*param_2 + param_2[1]) - 1) & ~temp_v4) + 0x14;
              *param_2 = temp_v0;
              temp_v0 = (((temp_v0 + param_2[1]) - 1) & ~temp_v4) + 0x14;
            }
            *param_2 = temp_v0;
            *param_2 = (((*param_2 + param_2[1]) - 1) & ~temp_v4) + 0x234;
            temp_v21 = param_5;
            temp_v7 = (unsigned int)temp_v15;
            temp_v8 = (unsigned int *)temp_v16;
            temp_v9 = temp_v17;
            temp_v10 = temp_v18;
            temp_v11 = temp_v19;
            temp_v12 = (unsigned int)param_2;
            nw_gfx_Model_GetMemorySizeForInitialize(param_2,param_5,temp_v2);
            if ((temp_v2 << 0x10) >> 0x18 != 0) {
              temp_v2 = 0;
              if (0 < (int)temp_v21[10]) {
                do {
                  if (temp_v21[0xb] != 0) {
                    temp_v3 = (int)temp_v21 + temp_v21[0xb] + 0x2c;
                  }
                  else {
                    temp_v3 = 0;
                  }
                  temp_v1 = 0;
                  if (temp_v3 != 0) {
                    piVar2 = (int *)(temp_v3 + temp_v2 * 0x10 + 0x28);
                    temp_v1 = *piVar2;
                    if (temp_v1 == 0) {
                      temp_v1 = 0;
                    }
                    else {
                      temp_v1 = (int)piVar2 + temp_v1;
                    }
                  }
                  if (((*(unsigned int *)(temp_v1 + 4) & 1) != 0) && (*(int *)(temp_v1 + 0xc) == 1)) {
                    *(unsigned int *)temp_v12 = (((*(unsigned int *)temp_v12 + ((unsigned int *)temp_v12)[1]) - 1) & ~(((unsigned int *)temp_v12)[1] - 1)) + 0x68;
                    nw_gfx_AnimGroup_GetMemorySizeForInitialize(temp_v12,temp_v1,1);
                    break;
                  }
                  temp_v2 = temp_v2 + 1;
                } while (temp_v2 < (int)temp_v21[10]);
              }
            }
          }
        }
      }
      else {
        if (temp_v2 == 0x1e0) {
          temp_v10 = param_1->field_0xc;
          temp_v11 = param_1->field_0x8;
          temp_v12 = (unsigned int)param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            piVar2 = (int *)FUN_0012adb8(param_4,param_5,(unsigned int *)&temp_v9,param_6);
            goto LAB_002ab79c;
          }
          if (param_2 != (unsigned int *)0x0) {
            temp_v7 = (unsigned int)temp_v11;
            temp_v8 = (unsigned int *)temp_v12;
            FUN_0012acc0(param_2,param_5,temp_v9,temp_v10);
          }
          goto LAB_002ab22c;
        }
        if (temp_v2 == 0x3e0) {
          temp_v10 = param_1->field_0xc;
          temp_v11 = param_1->field_0x8;
          temp_v12 = (unsigned int)param_1->field_0x1c;
          (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
          if (param_9 == 0) {
            piVar2 = (int *)FUN_0012b288(param_4,param_5,(unsigned int *)&temp_v9,param_6);
            goto LAB_002ab79c;
          }
          if (param_2 != (unsigned int *)0x0) {
            temp_v7 = (unsigned int)temp_v11;
            temp_v8 = (unsigned int *)temp_v12;
            nw_gfx_AmbientLight_GetMemorySizeInternal(param_2,param_5,temp_v9,temp_v10);
          }
          goto LAB_002ab22c;
        }
      }
    }
    piVar2 = (int *)0x0;
    if (param_9 == 0) {
LAB_002ab79c:
      if (piVar2 == (int *)0x0) {
        return (int *)0x0;
      }
      piVar4 = (int *)(**(romwright_code **)(*piVar2 + 8))(piVar2);
      while (piVar4 != (int *)0x44e858) {
        piVar4 = (int *)*piVar4;
        if (piVar4 == (int *)0x0) {
          return piVar2;
        }
      }
      temp_v2 = 0x44e858;
      if (piVar2 != (int *)0x0) {
        temp_v2 = param_8;
      }
      if (piVar2 == (int *)0x0 || temp_v2 == 0) {
        return piVar2;
      }
      temp_v8 = (unsigned int *)param_6;
      temp_v10 = 0;
      temp_v7 = (unsigned int)param_5;
      temp_v9 = param_7;
      nw_gfx_SceneBuilder_BuildChildren(param_1,0,0);
      return piVar2;
    }
  }
  else {
    temp_v12 = (unsigned int)0x1;
    temp_v10 = param_1->field_0xc;
    temp_v11 = param_1->field_0x8;
    (*(unsigned short *)((unsigned char *)&temp_v9 + 0)) = romwright_piece_1_1(param_1->field_0x24,param_1->field_0x4);
    if (param_9 == 0) {
      piVar2 = (int *)FUN_0012db88(param_4,param_5,(unsigned int *)&temp_v9,param_6);
      goto LAB_002ab79c;
    }
    if (param_2 != (unsigned int *)0x0) {
      temp_v8 = (unsigned int *)0x1;
      temp_v7 = (unsigned int)temp_v11;
      nw_gfx_Fog_GetMemorySizeInternal(param_2,param_5,temp_v9,temp_v10);
    }
  }
LAB_002ab22c:
  if (param_8 != 0) {
    temp_v8 = (unsigned int *)0x0;
    temp_v7 = (unsigned int)param_5;
    temp_v9 = 0;
    temp_v10 = 1;
    nw_gfx_SceneBuilder_BuildChildren(param_1,param_2,param_3,0);
  }
  return (int *)0x0;
}

} /* extern "C" */
