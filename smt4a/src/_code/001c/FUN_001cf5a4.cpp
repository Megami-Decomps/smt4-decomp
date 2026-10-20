/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001cf5a4` (_code @ 0x1cf5a4, 0xab8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e6dd4(...);
int nnnstdMemCpy(unsigned int *, int, int);
int nw_gfx_ParticleCollection_Clear(...);
int nw_gfx_ParticleShape_AddVertexParam(...);

typedef int romwright_code(...);
/* stack frame of param_5: 19 slot(s), 76 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
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
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_5_stack;

extern unsigned char DAT_0055b8fc; /* 0x55b8fc */

/* Supplied declaration required: FUN_002e6dd4. */
/* Supplied declaration required: nnnstdMemCpy. */
/* Supplied declaration required: nw_gfx_ParticleCollection_Clear. */
/* Supplied declaration required: nw_gfx_ParticleShape_AddVertexParam. */
extern int nw_gfx_ParticleShape_AddVertexParamSize(unsigned int, unsigned int, int);
extern int nw_gfx_ParticleShape_AddVertexStream(int, int, unsigned int, unsigned int, int, int *);
extern int nw_gfx_ParticleShape_AddVertexStreamSize(unsigned int, unsigned int, int, int);


unsigned int * FUN_001cf5a4(int param_1,int *param_2,int *param_3,int *param_4,int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  int *piVar3;
  unsigned int *puVar4;
  int *piVar5;
  int temp_v1;
  unsigned int temp_v2;
  int *unaff_r5;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int *temp_v6 [2];
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int temp_v10;
  int *temp_v11;
  char temp_v12 [16];
  int temp_v13;
  int *temp_v14;
  unsigned int *temp_v15;
  unsigned int *temp_v16;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int temp_v17;
  int *piStack_30;
  int *temp_v18;
  int *temp_v19;
  
  temp_v7 = 0;
  temp_v5 = *param_2;
  temp_v12[0] = '\0';
  temp_v12[1] = '\0';
  temp_v12[2] = '\0';
  temp_v12[3] = '\0';
  temp_v12[4] = '\0';
  temp_v12[5] = '\0';
  temp_v12[6] = '\0';
  temp_v12[7] = '\0';
  temp_v12[8] = '\0';
  temp_v12[9] = '\0';
  temp_v12[10] = '\0';
  temp_v12[0xb] = '\0';
  temp_v8 = temp_v5 * 2 + 0x18;
  temp_v9 = temp_v5 * 4 + 0x28;
  temp_v3 = ((((temp_v5 * 2 + 0x1dbU) & 0xfffffffc) + 7) & 0xfffffff8) + temp_v9;
  temp_v12[0xc] = '\0';
  temp_v12[0xd] = '\x01';
  temp_v12[0xe] = '\x01';
  temp_v12[0xf] = '\x01';
  temp_v0 = param_2[2];
  if (temp_v0 != 0) {
    unaff_r5 = (int *)((int)param_2 + temp_v0 + 8);
  }
  if (temp_v0 == 0) {
    unaff_r5 = (int *)0x0;
  }
  piVar5 = unaff_r5 + param_2[1];
  temp_v17 = param_1;
  piStack_30 = param_2;
  temp_v18 = param_3;
  temp_v19 = param_4;
  if (unaff_r5 != unaff_r5 + param_2[1]) {
    do {
      temp_v11 = piVar5;
      if (*unaff_r5 != 0) {
        temp_v0 = *unaff_r5 + (int)unaff_r5;
      }
      else {
        temp_v0 = 0;
      }
      temp_v0 = *(int *)(temp_v0 + 4);
      if (*unaff_r5 != 0) {
        piVar5 = (int *)(*unaff_r5 + (int)unaff_r5);
      }
      else {
        piVar5 = (int *)0x0;
      }
      if (*piVar5 != 0x40000000) {
        switch(temp_v0) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 8:
          temp_v7 = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406,3,temp_v5,temp_v7);
          break;
        case 4:
        case 7:
          temp_v7 = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406,1,temp_v5,temp_v7);
          break;
        case 5:
        case 6:
          temp_v7 = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406,2,temp_v5,temp_v7);
          break;
        case 10:
        case 0xb:
          temp_v3 = ((temp_v3 + 7U) & 0xfffffff8) + temp_v9;
          break;
        case 0xc:
          temp_v3 = ((temp_v3 + 7U) & 0xfffffff8) + temp_v5 * 0xc + 0x68;
        }
      }
      else {
        switch(temp_v0) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 8:
          temp_v3 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,3,temp_v3);
          break;
        case 4:
        case 7:
          temp_v3 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,1,temp_v3);
          break;
        case 5:
        case 6:
          temp_v3 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,2,temp_v3);
          break;
        case 10:
        case 0xb:
          temp_v3 = ((temp_v3 + 3U) & 0xfffffffc) + 4;
        }
      }
      temp_v12[temp_v0] = '\x01';
      unaff_r5 = unaff_r5 + 1;
      piVar5 = temp_v11;
    } while (unaff_r5 != temp_v11);
  }
  temp_v0 = 0;
  do {
    if (temp_v12[temp_v0] == '\0') {
      switch(temp_v0) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
        temp_v3 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,3,temp_v3);
        break;
      case 4:
      case 7:
        temp_v3 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,1,temp_v3);
        break;
      case 5:
      case 6:
        temp_v3 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,2,temp_v3);
      }
      temp_v12[temp_v0] = '\0';
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 0x10);
  temp_v13 = 0;
  if ((temp_v7 < 1) ||
     (temp_v13 = (**(romwright_code **)(*temp_v19 + 8))(temp_v19,temp_v7,0x20), temp_v13 != 0)) {
    puVar2 = (unsigned int *)(**(romwright_code **)(*temp_v18 + 8))(temp_v18,temp_v3,0x20);
    if (puVar2 != (unsigned int *)0x0) {
      puVar2[1] = (unsigned int)temp_v18;
      *puVar2 = (unsigned int)&DAT_0055b8fc;
      puVar2[0x32] = 0;
      puVar2[0x33] = 0;
      *(unsigned char *)(puVar2 + 0x34) = 0;
      *(unsigned short *)(puVar2 + 0x69) = 0;
      *(unsigned short *)((int)puVar2 + 0x1a6) = 0;
      puVar2[0x6a] = (unsigned int)param_2;
      puVar2[0x6b] = 0;
      puVar2[0x6c] = 0;
      puVar2[0x6f] = 0;
      puVar2[0x6d] = (unsigned int)temp_v19;
      puVar2[0x6e] = temp_v13;
      temp_v0 = 0;
      do {
        puVar2[temp_v0 * 3 + 2] = 0xffffffff;
        puVar2[temp_v0 * 3 + 4] = 0;
        puVar2[temp_v0 + 0x59] = 0;
        *(unsigned char *)((int)puVar2 + temp_v0 + 0xd1) = 0;
        temp_v3 = temp_v0 + 1;
        puVar2[temp_v0 * 2 + 0x39] = 0;
        puVar2[temp_v0 * 2 + 0x3a] = 0;
        temp_v0 = temp_v3;
      } while (temp_v3 < 0x10);
      puVar2[0x32] = temp_v5;
      puVar2[0x6b] = param_5;
      *(unsigned char *)((int)puVar2 + 0xde) = 1;
      temp_v2 = *(unsigned int *)(param_5 + (unsigned int)(*(char *)(param_5 + 0x30) != '\0') * 4 + 0x1f8);
      puVar2[0x66] = 2;
      puVar2[0x53] = temp_v2;
      puVar2[0x54] = *(unsigned int *)
                      (param_5 + (unsigned int)(*(char *)(param_5 + 0x30) == '\0') * 4 + 0x1f8);
      temp_v12[0xd] = 1;
      temp_v4 = ((((int)puVar2 + 0x1c3U) & 0xfffffffc) + 7) & 0xfffffff8;
      temp_v6[0] = (unsigned int *)(temp_v4 + temp_v8);
      FUN_002e6dd4(temp_v4);
      puVar2[0x2c] = 0xe;
      *(unsigned char *)(puVar2 + 0x2d) = 1;
      puVar2[0x2e] = temp_v4;
      *(unsigned char *)((int)puVar2 + 0xdf) = 1;
      puVar2[0x67] = 2;
      puVar2[0x55] = puVar2[0x2e];
      puVar2[0x56] = puVar2[0x2e];
      temp_v12[0xe] = 1;
      piVar5 = (int *)(((int)temp_v6[0] + 7U) & 0xfffffff8);
      temp_v6[0] = (unsigned int *)((int)piVar5 + temp_v9);
      FUN_002e6dd4(piVar5);
      puVar2[0x2f] = 0xf;
      *(unsigned char *)(puVar2 + 0x30) = 1;
      puVar2[0x31] = (unsigned int)piVar5;
      *(unsigned char *)(puVar2 + 0x38) = 1;
      puVar2[0x68] = 2;
      puVar2[0x57] = puVar2[0x31];
      puVar2[0x58] = puVar2[0x31];
      temp_v12[0xf] = 1;
      temp_v0 = param_2[2];
      if (temp_v0 != 0) {
        piVar5 = (int *)((int)param_2 + temp_v0 + 8);
      }
      if (temp_v0 == 0) {
        piVar5 = (int *)0x0;
      }
      piVar3 = piVar5 + param_2[1];
      if (piVar5 != piVar5 + param_2[1]) {
        do {
          temp_v14 = piVar3;
          if (*piVar5 != 0) {
            temp_v0 = *piVar5 + (int)piVar5;
          }
          else {
            temp_v0 = 0;
          }
          temp_v0 = *(int *)(temp_v0 + 4);
          if (*piVar5 != 0) {
            piVar3 = (int *)(*piVar5 + (int)piVar5);
          }
          else {
            piVar3 = (int *)0x0;
          }
          if (*piVar3 != 0x40000000) {
            switch(temp_v0) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 8:
              temp_v3 = nw_gfx_ParticleShape_AddVertexStream(param_5,temp_v0,0x1406,3,temp_v5,&temp_v13);
              puVar2[temp_v0 * 2 + 0x39] = *(unsigned int *)(temp_v3 + 0xc);
              puVar2[temp_v0 * 2 + 0x3a] = *(unsigned int *)(temp_v3 + 0x10);
              puVar2[temp_v0 + 0x59] = 0xc;
              break;
            case 4:
            case 7:
              temp_v3 = nw_gfx_ParticleShape_AddVertexStream(param_5,temp_v0,0x1406,1,temp_v5,&temp_v13);
              puVar2[temp_v0 * 2 + 0x39] = *(unsigned int *)(temp_v3 + 0xc);
              puVar2[temp_v0 * 2 + 0x3a] = *(unsigned int *)(temp_v3 + 0x10);
              puVar2[temp_v0 + 0x59] = 4;
              break;
            case 5:
            case 6:
              temp_v3 = nw_gfx_ParticleShape_AddVertexStream(param_5,temp_v0,0x1406,2,temp_v5,&temp_v13);
              puVar2[temp_v0 * 2 + 0x39] = *(unsigned int *)(temp_v3 + 0xc);
              puVar2[temp_v0 * 2 + 0x3a] = *(unsigned int *)(temp_v3 + 0x10);
              puVar2[temp_v0 + 0x59] = 8;
              break;
            case 10:
            case 0xb:
              puVar4 = puVar2 + temp_v0 * 3;
              temp_v4 = ((int)temp_v6[0] + 7U) & 0xfffffff8;
              temp_v6[0] = (unsigned int *)(temp_v4 + temp_v9);
              temp_v16 = puVar4;
              FUN_002e6dd4(temp_v4);
              puVar4[2] = temp_v0;
              puVar4[4] = temp_v4;
              *(unsigned char *)(puVar4 + 3) = 1;
              puVar2[temp_v0 * 2 + 0x39] = temp_v4;
              puVar2[temp_v0 * 2 + 0x3a] = temp_v16[4];
              puVar2[temp_v0 + 0x59] = 4;
              break;
            case 0xc:
              temp_v4 = ((int)temp_v6[0] + 7U) & 0xfffffff8;
              temp_v6[0] = (unsigned int *)(temp_v4 + temp_v5 * 0xc + 0x68);
              temp_v16 = puVar2 + 0x24;
              FUN_002e6dd4(temp_v4);
              puVar2[0x26] = temp_v0;
              puVar2[0x28] = temp_v4;
              *(unsigned char *)(puVar2 + 0x27) = 1;
              puVar2[0x51] = temp_v4;
              temp_v2 = temp_v16[4];
              puVar2[0x65] = 0xc;
              puVar2[0x52] = temp_v2;
            }
            *(unsigned char *)((int)puVar2 + temp_v0 + 0xd1) = 1;
            temp_v12[temp_v0] = '\x01';
          }
          else {
            if (*piVar5 != 0) {
              temp_v3 = *piVar5 + (int)piVar5;
            }
            else {
              temp_v3 = 0;
            }
            puVar4 = (unsigned int *)0x0;
            switch(temp_v0) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 8:
              temp_v1 = *(int *)(temp_v3 + 0x10);
              if (temp_v1 != 0) {
                temp_v1 = temp_v1 + temp_v3 + 0x10;
              }
              else {
                temp_v1 = 0;
              }
              temp_v3 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,3,temp_v1,temp_v6);
              puVar4 = *(unsigned int **)(temp_v3 + 0xc);
              break;
            case 4:
            case 7:
              temp_v1 = *(int *)(temp_v3 + 0x10);
              if (temp_v1 != 0) {
                temp_v1 = temp_v1 + temp_v3 + 0x10;
              }
              else {
                temp_v1 = 0;
              }
              temp_v3 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,1,temp_v1,temp_v6);
              puVar4 = *(unsigned int **)(temp_v3 + 0xc);
              break;
            case 5:
            case 6:
              temp_v1 = *(int *)(temp_v3 + 0x10);
              if (temp_v1 != 0) {
                temp_v1 = temp_v1 + temp_v3 + 0x10;
              }
              else {
                temp_v1 = 0;
              }
              temp_v3 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,2,temp_v1,temp_v6);
              puVar4 = *(unsigned int **)(temp_v3 + 0xc);
              break;
            case 10:
            case 0xb:
              temp_v15 = (unsigned int *)(((int)temp_v6[0] + 3U) & 0xfffffffc);
              temp_v6[0] = temp_v15 + 1;
              if (*(int *)(temp_v3 + 0x10) != 0) {
                temp_v1 = *(int *)(temp_v3 + 0x10) + temp_v3 + 0x10;
              }
              else {
                temp_v1 = 0;
              }
              nnnstdMemCpy(temp_v15,temp_v1,4);
              puVar2[temp_v0 * 3 + 2] = temp_v0;
              puVar2[temp_v0 * 3 + 4] = (unsigned int)temp_v15;
              *(unsigned char *)(puVar2 + temp_v0 * 3 + 3) = 0;
              temp_v1 = *(int *)(temp_v3 + 0x10);
              if (temp_v1 != 0) {
                puVar4 = (unsigned int *)(temp_v1 + temp_v3 + 0x10);
              }
              else {
                puVar4 = (unsigned int *)0x0;
              }
              *temp_v15 = *puVar4;
              puVar4 = temp_v15;
            }
            temp_v12[temp_v0] = '\x01';
            *(unsigned char *)((int)puVar2 + temp_v0 + 0xd1) = 0;
            puVar2[temp_v0 * 2 + 0x39] = (unsigned int)puVar4;
            puVar2[temp_v0 * 2 + 0x3a] = (unsigned int)puVar4;
            puVar2[temp_v0 + 0x59] = 0;
          }
          piVar5 = piVar5 + 1;
          piVar3 = temp_v14;
        } while (piVar5 != temp_v14);
      }
      temp_v0 = 0;
      do {
        if (temp_v12[temp_v0] == '\0') {
          temp_v8 = 0;
          temp_v9 = 0;
          temp_v10 = 0;
          temp_v11 = (int *)0x0;
          temp_v15 = (unsigned int *)0x3f800000;
          temp_v16 = (unsigned int *)0x3f800000;
          uStack_40 = 0x3f800000;
          uStack_3c = 0x3f800000;
          temp_v2 = 0;
          switch(temp_v0) {
          case 0:
          case 2:
            temp_v3 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,3,&temp_v8,temp_v6);
            temp_v2 = *(unsigned int *)(temp_v3 + 0xc);
            break;
          case 1:
          case 3:
          case 8:
            temp_v3 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,3,&temp_v15,temp_v6);
            temp_v2 = *(unsigned int *)(temp_v3 + 0xc);
            break;
          case 4:
            temp_v3 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,1,&temp_v15,temp_v6);
            temp_v2 = *(unsigned int *)(temp_v3 + 0xc);
            break;
          case 5:
            temp_v3 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,2,&temp_v8,temp_v6);
            temp_v2 = *(unsigned int *)(temp_v3 + 0xc);
            break;
          case 6:
            temp_v3 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,2,&temp_v15,temp_v6);
            temp_v2 = *(unsigned int *)(temp_v3 + 0xc);
            break;
          case 7:
            temp_v3 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,1,&temp_v8,temp_v6);
            temp_v2 = *(unsigned int *)(temp_v3 + 0xc);
          }
          temp_v12[temp_v0] = '\x01';
          *(unsigned char *)((int)puVar2 + temp_v0 + 0xd1) = 0;
          puVar2[temp_v0 * 2 + 0x39] = temp_v2;
          puVar2[temp_v0 * 2 + 0x3a] = temp_v2;
          puVar2[temp_v0 + 0x59] = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x10);
      nw_gfx_ParticleCollection_Clear(puVar2);
      if (temp_v17 != 0) {
        if (*(int *)(temp_v17 + 0x4c) == 0) {
          *(unsigned int **)(temp_v17 + 0x4c) = puVar2;
        }
        puVar2[0x6c] = temp_v17;
      }
      return puVar2;
    }
    if (temp_v13 != 0) {
      temp_v6[0] = puVar2;
      (**(romwright_code **)(*temp_v19 + 0xc))(temp_v19);
    }
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
