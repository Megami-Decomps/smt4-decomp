/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00149fd4` (_code @ 0x149fd4, 0xaa0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c3944(...);
int nnnstdMemCpy(unsigned int *, int, int);
int nw_gfx_ParticleCollection_Clear(...);
int nw_gfx_ParticleShape_AddVertexParam(...);

typedef int romwright_code(...);
/* stack frame of param_5: 18 slot(s), 72 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp34; /* 0x34: local_34 */
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
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
} param_5_stack;

extern unsigned char DAT_004214e0; /* 0x4214e0 */

/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: nnnstdMemCpy. */
/* Supplied declaration required: nw_gfx_ParticleCollection_Clear. */
/* Supplied declaration required: nw_gfx_ParticleShape_AddVertexParam. */
extern int nw_gfx_ParticleShape_AddVertexParamSize(unsigned int, unsigned int, int);
extern int nw_gfx_ParticleShape_AddVertexStream(int, int, unsigned int, unsigned int, int, int *);
extern int nw_gfx_ParticleShape_AddVertexStreamSize(unsigned int, unsigned int, int, int);


unsigned int * FUN_00149fd4(int param_1,int *param_2,int *param_3,int *param_4,int param_5)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  int *piVar4;
  unsigned int *puVar5;
  int *piVar6;
  int *unaff_r5;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int *puVar10;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int *temp_v7;
  int temp_v8;
  char temp_v9 [16];
  int temp_v10;
  int *temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  int temp_v17;
  int *piStack_30;
  int *temp_v18;
  int *temp_v19;
  
  temp_v6 = 0;
  temp_v4 = *param_2;
  temp_v9[0] = '\0';
  temp_v9[1] = '\0';
  temp_v9[2] = '\0';
  temp_v9[3] = '\0';
  temp_v9[4] = '\0';
  temp_v9[5] = '\0';
  temp_v9[6] = '\0';
  temp_v9[7] = '\0';
  temp_v9[8] = '\0';
  temp_v9[9] = '\0';
  temp_v9[10] = '\0';
  temp_v9[0xb] = '\0';
  temp_v0 = temp_v4 * 2 + 0x18;
  temp_v8 = temp_v4 * 4 + 0x28;
  temp_v2 = ((((temp_v4 * 2 + 0x1dbU) & 0xfffffffc) + 7) & 0xfffffff8) + temp_v8;
  temp_v9[0xc] = '\0';
  temp_v9[0xd] = '\x01';
  temp_v9[0xe] = '\x01';
  temp_v9[0xf] = '\x01';
  temp_v1 = param_2[2];
  if (temp_v1 != 0) {
    unaff_r5 = (int *)((int)param_2 + temp_v1 + 8);
  }
  if (temp_v1 == 0) {
    unaff_r5 = (int *)0x0;
  }
  piVar6 = unaff_r5 + param_2[1];
  temp_v17 = param_1;
  piStack_30 = param_2;
  temp_v18 = param_3;
  temp_v19 = param_4;
  if (unaff_r5 != unaff_r5 + param_2[1]) {
    do {
      temp_v11 = piVar6;
      if (*unaff_r5 != 0) {
        temp_v1 = *unaff_r5 + (int)unaff_r5;
      }
      else {
        temp_v1 = 0;
      }
      temp_v1 = *(int *)(temp_v1 + 4);
      if (*unaff_r5 != 0) {
        piVar6 = (int *)(*unaff_r5 + (int)unaff_r5);
      }
      else {
        piVar6 = (int *)0x0;
      }
      if (*piVar6 != 0x40000000) {
        switch(temp_v1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 8:
          temp_v6 = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406,3,temp_v4,temp_v6);
          break;
        case 4:
        case 7:
          temp_v6 = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406,1,temp_v4,temp_v6);
          break;
        case 5:
        case 6:
          temp_v6 = nw_gfx_ParticleShape_AddVertexStreamSize(0x1406,2,temp_v4,temp_v6);
          break;
        case 10:
        case 0xb:
          temp_v2 = ((temp_v2 + 7U) & 0xfffffff8) + temp_v8;
          break;
        case 0xc:
          temp_v2 = ((temp_v2 + 7U) & 0xfffffff8) + temp_v4 * 0xc + 0x68;
        }
      }
      else {
        switch(temp_v1) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 8:
          temp_v2 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,3,temp_v2);
          break;
        case 4:
        case 7:
          temp_v2 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,1,temp_v2);
          break;
        case 5:
        case 6:
          temp_v2 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,2,temp_v2);
          break;
        case 10:
        case 0xb:
          temp_v2 = ((temp_v2 + 3U) & 0xfffffffc) + 4;
        }
      }
      temp_v9[temp_v1] = '\x01';
      unaff_r5 = unaff_r5 + 1;
      piVar6 = temp_v11;
    } while (unaff_r5 != temp_v11);
  }
  temp_v1 = 0;
  do {
    if (temp_v9[temp_v1] == '\0') {
      switch(temp_v1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
        temp_v2 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,3,temp_v2);
        break;
      case 4:
      case 7:
        temp_v2 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,1,temp_v2);
        break;
      case 5:
      case 6:
        temp_v2 = nw_gfx_ParticleShape_AddVertexParamSize(0x1406,2,temp_v2);
      }
      temp_v9[temp_v1] = '\0';
    }
    temp_v1 = temp_v1 + 1;
  } while (temp_v1 < 0x10);
  temp_v10 = 0;
  if ((temp_v6 < 1) || (temp_v10 = (**(romwright_code **)(*temp_v19 + 8))(temp_v19,temp_v6,0x20), temp_v10 != 0)
     ) {
    puVar3 = (unsigned int *)(**(romwright_code **)(*temp_v18 + 8))(temp_v18,temp_v2,0x20);
    if (puVar3 != (unsigned int *)0x0) {
      puVar3[1] = (unsigned int)temp_v18;
      *puVar3 = (unsigned int)&DAT_004214e0;
      puVar3[0x32] = 0;
      puVar3[0x33] = 0;
      *(unsigned char *)(puVar3 + 0x34) = 0;
      *(unsigned short *)(puVar3 + 0x69) = 0;
      *(unsigned short *)((int)puVar3 + 0x1a6) = 0;
      puVar3[0x6a] = (unsigned int)param_2;
      puVar3[0x6b] = 0;
      puVar3[0x6c] = 0;
      puVar3[0x6f] = 0;
      puVar3[0x6d] = (unsigned int)temp_v19;
      puVar3[0x6e] = temp_v10;
      temp_v1 = 0;
      do {
        puVar3[temp_v1 * 3 + 2] = 0xffffffff;
        puVar3[temp_v1 * 3 + 4] = 0;
        puVar3[temp_v1 + 0x59] = 0;
        *(unsigned char *)((int)puVar3 + temp_v1 + 0xd1) = 0;
        temp_v6 = temp_v1 + 1;
        puVar3[temp_v1 * 2 + 0x39] = 0;
        puVar3[temp_v1 * 2 + 0x3a] = 0;
        temp_v1 = temp_v6;
      } while (temp_v6 < 0x10);
      puVar3[0x32] = temp_v4;
      puVar3[0x6b] = param_5;
      *(unsigned char *)((int)puVar3 + 0xde) = 1;
      temp_v5 = *(unsigned int *)(param_5 + (unsigned int)(*(char *)(param_5 + 0x30) != '\0') * 4 + 0x1f8);
      puVar3[0x66] = 2;
      puVar3[0x53] = temp_v5;
      puVar3[0x54] = *(unsigned int *)
                      (param_5 + (unsigned int)(*(char *)(param_5 + 0x30) == '\0') * 4 + 0x1f8);
      temp_v9[0xd] = 1;
      temp_v3 = ((((int)puVar3 + 0x1c3U) & 0xfffffffc) + 7) & 0xfffffff8;
      temp_v7 = (unsigned int *)(temp_v3 + temp_v0);
      FUN_002c3944(temp_v3);
      puVar3[0x2c] = 0xe;
      *(unsigned char *)(puVar3 + 0x2d) = 1;
      puVar3[0x2e] = temp_v3;
      *(unsigned char *)((int)puVar3 + 0xdf) = 1;
      puVar3[0x67] = 2;
      puVar3[0x55] = puVar3[0x2e];
      puVar3[0x56] = puVar3[0x2e];
      temp_v9[0xe] = 1;
      piVar6 = (int *)(((int)temp_v7 + 7U) & 0xfffffff8);
      temp_v7 = (unsigned int *)((int)piVar6 + temp_v8);
      FUN_002c3944(piVar6);
      puVar3[0x2f] = 0xf;
      *(unsigned char *)(puVar3 + 0x30) = 1;
      puVar3[0x31] = (unsigned int)piVar6;
      *(unsigned char *)(puVar3 + 0x38) = 1;
      puVar3[0x68] = 2;
      puVar3[0x57] = puVar3[0x31];
      puVar3[0x58] = puVar3[0x31];
      temp_v9[0xf] = 1;
      temp_v0 = param_2[2];
      if (temp_v0 != 0) {
        piVar6 = (int *)((int)param_2 + temp_v0 + 8);
      }
      if (temp_v0 == 0) {
        piVar6 = (int *)0x0;
      }
      piVar4 = piVar6 + param_2[1];
      if (piVar6 != piVar6 + param_2[1]) {
        do {
          temp_v11 = piVar4;
          if (*piVar6 != 0) {
            temp_v0 = *piVar6 + (int)piVar6;
          }
          else {
            temp_v0 = 0;
          }
          temp_v0 = *(int *)(temp_v0 + 4);
          if (*piVar6 != 0) {
            piVar4 = (int *)(*piVar6 + (int)piVar6);
          }
          else {
            piVar4 = (int *)0x0;
          }
          if (*piVar4 != 0x40000000) {
            switch(temp_v0) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 8:
              temp_v1 = nw_gfx_ParticleShape_AddVertexStream(param_5,temp_v0,0x1406,3,temp_v4,&temp_v10);
              puVar3[temp_v0 * 2 + 0x39] = *(unsigned int *)(temp_v1 + 0xc);
              puVar3[temp_v0 * 2 + 0x3a] = *(unsigned int *)(temp_v1 + 0x10);
              puVar3[temp_v0 + 0x59] = 0xc;
              break;
            case 4:
            case 7:
              temp_v1 = nw_gfx_ParticleShape_AddVertexStream(param_5,temp_v0,0x1406,1,temp_v4,&temp_v10);
              puVar3[temp_v0 * 2 + 0x39] = *(unsigned int *)(temp_v1 + 0xc);
              puVar3[temp_v0 * 2 + 0x3a] = *(unsigned int *)(temp_v1 + 0x10);
              puVar3[temp_v0 + 0x59] = 4;
              break;
            case 5:
            case 6:
              temp_v1 = nw_gfx_ParticleShape_AddVertexStream(param_5,temp_v0,0x1406,2,temp_v4,&temp_v10);
              puVar3[temp_v0 * 2 + 0x39] = *(unsigned int *)(temp_v1 + 0xc);
              puVar3[temp_v0 * 2 + 0x3a] = *(unsigned int *)(temp_v1 + 0x10);
              puVar3[temp_v0 + 0x59] = 8;
              break;
            case 10:
            case 0xb:
              puVar5 = puVar3 + temp_v0 * 3;
              temp_v3 = ((int)temp_v7 + 7U) & 0xfffffff8;
              temp_v7 = (unsigned int *)(temp_v3 + temp_v8);
              puVar10 = puVar5;
              FUN_002c3944(temp_v3);
              puVar5[2] = temp_v0;
              puVar5[4] = temp_v3;
              *(unsigned char *)(puVar5 + 3) = 1;
              puVar3[temp_v0 * 2 + 0x39] = temp_v3;
              puVar3[temp_v0 * 2 + 0x3a] = puVar10[4];
              puVar3[temp_v0 + 0x59] = 4;
              break;
            case 0xc:
              temp_v3 = ((int)temp_v7 + 7U) & 0xfffffff8;
              temp_v7 = (unsigned int *)(temp_v3 + temp_v4 * 0xc + 0x68);
              puVar10 = puVar3 + 0x24;
              FUN_002c3944(temp_v3);
              puVar3[0x26] = temp_v0;
              puVar3[0x28] = temp_v3;
              *(unsigned char *)(puVar3 + 0x27) = 1;
              puVar3[0x51] = temp_v3;
              temp_v5 = puVar10[4];
              puVar3[0x65] = 0xc;
              puVar3[0x52] = temp_v5;
            }
            *(unsigned char *)((int)puVar3 + temp_v0 + 0xd1) = 1;
            temp_v9[temp_v0] = '\x01';
          }
          else {
            puVar10 = (unsigned int *)0x0;
            if (*piVar6 != 0) {
              temp_v1 = *piVar6 + (int)piVar6;
            }
            else {
              temp_v1 = 0;
            }
            switch(temp_v0) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 8:
              temp_v6 = *(int *)(temp_v1 + 0x10);
              if (temp_v6 != 0) {
                temp_v6 = temp_v6 + temp_v1 + 0x10;
              }
              else {
                temp_v6 = 0;
              }
              temp_v1 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,3,temp_v6,&temp_v7);
              puVar10 = *(unsigned int **)(temp_v1 + 0xc);
              break;
            case 4:
            case 7:
              temp_v6 = *(int *)(temp_v1 + 0x10);
              if (temp_v6 != 0) {
                temp_v6 = temp_v6 + temp_v1 + 0x10;
              }
              else {
                temp_v6 = 0;
              }
              temp_v1 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,1,temp_v6,&temp_v7);
              puVar10 = *(unsigned int **)(temp_v1 + 0xc);
              break;
            case 5:
            case 6:
              temp_v6 = *(int *)(temp_v1 + 0x10);
              if (temp_v6 != 0) {
                temp_v6 = temp_v6 + temp_v1 + 0x10;
              }
              else {
                temp_v6 = 0;
              }
              temp_v1 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,2,temp_v6,&temp_v7);
              puVar10 = *(unsigned int **)(temp_v1 + 0xc);
              break;
            case 10:
            case 0xb:
              puVar10 = (unsigned int *)(((int)temp_v7 + 3U) & 0xfffffffc);
              temp_v7 = puVar10 + 1;
              if (*(int *)(temp_v1 + 0x10) != 0) {
                temp_v6 = *(int *)(temp_v1 + 0x10) + temp_v1 + 0x10;
              }
              else {
                temp_v6 = 0;
              }
              nnnstdMemCpy(puVar10,temp_v6,4);
              puVar3[temp_v0 * 3 + 2] = temp_v0;
              puVar3[temp_v0 * 3 + 4] = (unsigned int)puVar10;
              *(unsigned char *)(puVar3 + temp_v0 * 3 + 3) = 0;
              temp_v6 = *(int *)(temp_v1 + 0x10);
              if (temp_v6 != 0) {
                puVar5 = (unsigned int *)(temp_v6 + temp_v1 + 0x10);
              }
              else {
                puVar5 = (unsigned int *)0x0;
              }
              *puVar10 = *puVar5;
            }
            temp_v9[temp_v0] = '\x01';
            *(unsigned char *)((int)puVar3 + temp_v0 + 0xd1) = 0;
            puVar3[temp_v0 * 2 + 0x39] = (unsigned int)puVar10;
            puVar3[temp_v0 * 2 + 0x3a] = (unsigned int)puVar10;
            puVar3[temp_v0 + 0x59] = 0;
          }
          piVar6 = piVar6 + 1;
          piVar4 = temp_v11;
        } while (piVar6 != temp_v11);
      }
      temp_v0 = 0;
      do {
        if (temp_v9[temp_v0] == '\0') {
          temp_v12 = 0;
          temp_v13 = 0;
          temp_v14 = 0;
          temp_v15 = 0;
          temp_v16 = 0x3f800000;
          uStack_44 = 0x3f800000;
          uStack_40 = 0x3f800000;
          uStack_3c = 0x3f800000;
          temp_v5 = 0;
          switch(temp_v0) {
          case 0:
          case 2:
            temp_v1 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,3,&temp_v12,&temp_v7);
            temp_v5 = *(unsigned int *)(temp_v1 + 0xc);
            break;
          case 1:
          case 3:
          case 8:
            temp_v1 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,3,&temp_v16,&temp_v7);
            temp_v5 = *(unsigned int *)(temp_v1 + 0xc);
            break;
          case 4:
            temp_v1 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,1,&temp_v16,&temp_v7);
            temp_v5 = *(unsigned int *)(temp_v1 + 0xc);
            break;
          case 5:
            temp_v1 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,2,&temp_v12,&temp_v7);
            temp_v5 = *(unsigned int *)(temp_v1 + 0xc);
            break;
          case 6:
            temp_v1 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,2,&temp_v16,&temp_v7);
            temp_v5 = *(unsigned int *)(temp_v1 + 0xc);
            break;
          case 7:
            temp_v1 = nw_gfx_ParticleShape_AddVertexParam(param_5,temp_v0,0x1406,1,&temp_v12,&temp_v7);
            temp_v5 = *(unsigned int *)(temp_v1 + 0xc);
          }
          temp_v9[temp_v0] = '\x01';
          *(unsigned char *)((int)puVar3 + temp_v0 + 0xd1) = 0;
          puVar3[temp_v0 * 2 + 0x39] = temp_v5;
          puVar3[temp_v0 * 2 + 0x3a] = temp_v5;
          puVar3[temp_v0 + 0x59] = 0;
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x10);
      nw_gfx_ParticleCollection_Clear(puVar3);
      if (temp_v17 != 0) {
        if (*(int *)(temp_v17 + 0x4c) == 0) {
          *(unsigned int **)(temp_v17 + 0x4c) = puVar3;
        }
        puVar3[0x6c] = temp_v17;
      }
      return puVar3;
    }
    if (temp_v10 != 0) {
      temp_v7 = puVar3;
      (**(romwright_code **)(*temp_v19 + 0xc))(temp_v19);
    }
  }
  return (unsigned int *)0x0;
}

} /* extern "C" */
