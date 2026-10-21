/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016b078` (_code @ 0x16b078, 0x7a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"
#include "shard/W6_W6Match6_MaterialPipeline.h"

extern "C" {

int FUN_001942a8(...);

int flagBitsMergeRange(...);
int FUN_00192840(...);
int FUN_001933b4(...);
int FUN_00193840(...);
int FUN_00193b40(...);
int FUN_0019430c(...);
int FUN_0019a270(...);
int FUN_001a063c(...);
int FUN_001a4794(...);
int FUN_001a47d8(...);

typedef struct fn_0016b078_arg0 fn_0016b078_arg0;
struct fn_0016b078_arg0 {
    unsigned char pad_0x0[0xc];
    void *field_0xc; /* +0xc */
    int field_0x10; /* +0x10 */
    unsigned char field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x8b];
    int field_0xa0; /* +0xa0 */
    short field_0xa4; /* +0xa4 */
    short field_0xa6; /* +0xa6 */
    ushort field_0xa8; /* +0xa8 */
    unsigned char pad_0xaa[0x2];
    void *field_0xac; /* +0xac */
    void *field_0xb0; /* +0xb0 */
};

/* stack frame of param_2: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
    unsigned int sp48; /* 0x48: local_48 */
} param_2_stack;

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

/* Supplied declaration required: flagBitsMergeRange. */
/* Supplied declaration required: FUN_00192840. */
extern unsigned short FUN_001932e0(int *, int *, unsigned short *, int);
/* Supplied declaration required: FUN_001933b4. */
/* Supplied declaration required: FUN_00193840. */
/* Supplied declaration required: modelEmitMaterialPipelineCommands. */
/* Supplied declaration required: FUN_00193b40. */
/* Supplied declaration required: FUN_001942a8. */
/* Supplied declaration required: FUN_0019430c. */
/* Supplied declaration required: FUN_0019a270. */
/* Supplied declaration required: FUN_001a063c. */
/* Supplied declaration required: FUN_001a4794. */
/* Supplied declaration required: FUN_001a47d8. */
extern int __cxa_guard_acquire(unsigned int *);


void FUN_0016b078(fn_0016b078_arg0 *param_1,unsigned int *param_2)

{
/* irregular: 12 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  int temp_v2;
  void *pvVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int *puVar7;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int *piVar11;
  unsigned short *puVar12;
  int *piVar13;
  int temp_v6;
  int *piVar15;
  unsigned int *puVar16;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int temp_v10;
  unsigned int temp_v11;
  int *temp_v12;
  int iStack_44;
  int *temp_v13;
  int temp_v14;
  int temp_v15;
  unsigned int temp_v16;
  
  temp_v12 = &param_1->field_0xa0;
  piVar13 = (int *)param_2[1];
  temp_v4 = *(int *)param_2[1];
  temp_v15 = param_1->field_0x10;
  temp_v16 = *param_2;
  temp_v7 = param_1->field_0xa0;
  piVar6 = *(int **)(temp_v4 + 8);
  temp_v14 = (int)*(char *)((int)param_2 + 0x29);
  temp_v5 = param_2[4];
  puVar12 = (unsigned short *)param_2[3];
  piVar15 = *(int **)(*piVar13 + 8);
  temp_v3 = (int)(short)piVar6[8];
  piVar11 = (int *)param_1->field_0xc;
  temp_v13 = *(int **)(temp_v15 + 0xd8);
  temp_v6 = *(int *)(temp_v15 + 0xd0);
  temp_v2 = *piVar6;
  temp_v0 = *(short *)((int)piVar6 + 0x22);
  if (*(char *)(param_2 + 10) != '\0') {
    temp_v8 = temp_v7 == temp_v2;
    if (temp_v8) {
      temp_v4 = (int)param_1->field_0xa4;
    }
    temp_v9 = temp_v8 && temp_v4 == temp_v3;
    if (temp_v8 && temp_v4 == temp_v3) {
      temp_v9 = param_1->field_0xa6 == temp_v0;
    }
    if (!temp_v9) {
      if (temp_v7 != temp_v2) {
        piVar6 = piVar15 + 2;
      }
      else if ((temp_v0 == -1) != (param_1->field_0xa6 == -1)) {
        piVar6 = piVar15 + 6;
      }
      else {
        piVar6 = piVar15 + 4;
      }
      FUN_001a063c(piVar11,*piVar6,piVar6[1] << 2);
      temp_v4 = piVar15[8];
      temp_v0 = *(short *)((int)piVar15 + 0x22);
      *temp_v12 = *piVar15;
      temp_v10 = 0;
      temp_v11 = 0x3f800000;
      *(short *)(temp_v12 + 1) = (short)temp_v4;
      *(short *)((int)temp_v12 + 6) = temp_v0;
      puVar7 = (unsigned int *)*piVar11;
      *puVar7 = *(unsigned char *)(temp_v5 + 0x32) | 0x80000000;
      puVar7[1] = 0x804f02c0;
      puVar7[2] = 0x3f800000;
      puVar7[3] = 0;
      puVar7[4] = 0;
      puVar7[5] = 0;
      *piVar11 = (int)(puVar7 + 6);
      puVar7[6] = *(unsigned char *)(temp_v5 + 0x3a) | 0x80000000;
      puVar7[7] = 0x804f02c0;
      puVar7[8] = 0x3f800000;
      puVar7[9] = 0;
      puVar7[10] = 0;
      puVar7[0xb] = 0;
      *piVar11 = (int)(puVar7 + 0xc);
      puVar7[0xc] = *(unsigned char *)(temp_v5 + 0x42) | 0x80000000;
      puVar7[0xd] = 0x804f02c0;
      puVar7[0xe] = 0;
      puVar7[0xf] = 0;
      puVar7[0x10] = 0x3f800000;
      puVar16 = puVar7 + 0x12;
      puVar7[0x11] = 0;
      *piVar11 = (int)puVar16;
      if (temp_v14 != 0) {
        temp_v10 = param_2[8];
        *puVar16 = *(unsigned char *)(temp_v5 + 2) | 0x80000000;
        puVar7[0x13] = 0xf02c0;
        FUN_0019a270(puVar7 + 0x14,temp_v10,0xbf02c1);
        *piVar11 = (int)(puVar7 + 0x22);
      }
      else {
        if (((DAT_005c4c2c & 1) == 0) && (temp_v4 = __cxa_guard_acquire(&DAT_005c4c2c), temp_v4 != 0)) {
          DAT_0064c054 = temp_v11;
          DAT_0064c058 = temp_v10;
          DAT_0064c05c = temp_v10;
          DAT_0064c060 = temp_v10;
          DAT_0064c064 = temp_v10;
          DAT_0064c068 = temp_v11;
          DAT_0064c06c = temp_v10;
          DAT_0064c070 = temp_v10;
          DAT_0064c074 = temp_v10;
          DAT_0064c078 = temp_v10;
          DAT_0064c07c = temp_v11;
          DAT_0064c080 = temp_v10;
        }
        *puVar16 = *(unsigned char *)(temp_v5 + 2) | 0x80000000;
        puVar7[0x13] = 0xf02c0;
        FUN_0019a270(puVar7 + 0x14,&DAT_0064c054,0xbf02c1);
        *piVar11 = (int)(puVar7 + 0x22);
      }
      FUN_001a4794(temp_v6);
      puVar7 = *(unsigned int **)(temp_v6 + 0x5c);
      temp_v10 = *(unsigned int *)&param_1->field_0x14;
      *puVar7 = *(unsigned char *)(temp_v5 + 10) | 0x80000000;
      puVar7[1] = 0xf02c0;
      FUN_0019a270(puVar7 + 2,temp_v10,0xbf02c1);
      *(unsigned int **)(temp_v6 + 0x5c) = puVar7 + 0x10;
      puVar7 = *(unsigned int **)(temp_v6 + 0x60);
      temp_v10 = *(unsigned int *)&param_1->field_0x14;
      *puVar7 = *(unsigned char *)(temp_v5 + 10) | 0x80000000;
      puVar7[1] = 0xf02c0;
      FUN_0019a270(puVar7 + 2,temp_v10,0xbf02c1);
      *(unsigned int **)(temp_v6 + 0x60) = puVar7 + 0x10;
      FUN_001a47d8(&temp_v12,temp_v6);
      FUN_001a063c(piVar11,temp_v12,iStack_44);
    }
    if (temp_v13 != (int *)0x0) {
      temp_v4 = *temp_v13;
      temp_v14 = temp_v5 + 0x40;
      temp_v13 = (int *)(temp_v5 + 0x38);
      iStack_44 = temp_v5 + 0x30;
      temp_v12 = (int *)(temp_v5 + 0x20);
      FUN_00192840(temp_v4 + (unsigned int)*(unsigned short *)(*piVar13 + 0x54) * 0x704,piVar11,temp_v6,temp_v5 + 0x28);
    }
    if ((param_1->field_0xb0 != (unsigned int *)0x0) &&
       (*(int *)*piVar13 == **(int **)param_1->field_0xb0)) {
      pvVar4 = param_1->field_0xac;
      flagBitsMergeRange(pvVar4,puVar12);
      FUN_001a063c(piVar11,piVar13[4],piVar13[5] << 2);
      FUN_001a063c(piVar11,*(unsigned int *)(puVar12 + 0xa0),*(int *)(puVar12 + 0xa2) << 2);
      FUN_001a063c(piVar11,*(unsigned int *)(puVar12 + 0xa4),*(int *)(puVar12 + 0xa6) << 2);
      FUN_001a063c(piVar11,*(unsigned int *)(puVar12 + 0xa8),*(int *)(puVar12 + 0xaa) << 2);
      FUN_00193b40(piVar13,piVar11,puVar12);
      FUN_001933b4(piVar13,piVar11,puVar12,temp_v15);
      *puVar12 = *puVar12 & ~(unsigned short)(int)pvVar4;
    }
    else {
      modelEmitMaterialPipelineCommands((MaterialPipelineInstance *)piVar13, (MaterialPipelineWriter *)piVar11,
                   (MaterialPipelinePiece *)puVar12, (MaterialPipelineContext *)temp_v15);
      FUN_00193b40(piVar13,piVar11,puVar12);
      if ((*puVar12 & 1) != 0) {
        FUN_00193840(piVar13,piVar11,puVar12,temp_v15);
      }
      if ((*puVar12 & 0x10) != 0) {
        temp_v12 = (int *)(unsigned int)param_1->field_0xa8;
        temp_v1 = FUN_001932e0(piVar13,piVar11,puVar12,temp_v15);
        param_1->field_0xa8 = temp_v1;
      }
      else {
        puVar5 = (unsigned int *)*piVar11;
        *puVar5 = 0;
        puVar5[1] = 0x100e0;
        *piVar11 = (int)(puVar5 + 2);
      }
      FUN_001933b4(piVar13,piVar11,puVar12,temp_v15);
    }
    FUN_0019430c(temp_v16,piVar11,param_2[2],temp_v5 + 0x20);
  }
  else {
    temp_v8 = temp_v7 == temp_v2;
    if (temp_v8) {
      temp_v4 = (int)param_1->field_0xa4;
    }
    temp_v9 = temp_v8 && temp_v4 == temp_v3;
    if (temp_v8 && temp_v4 == temp_v3) {
      temp_v9 = param_1->field_0xa6 == temp_v0;
    }
    if (!temp_v9) {
      if (temp_v7 != temp_v2) {
        piVar6 = piVar15 + 2;
      }
      else if ((temp_v0 == -1) != (param_1->field_0xa6 == -1)) {
        piVar6 = piVar15 + 6;
      }
      else {
        piVar6 = piVar15 + 4;
      }
      FUN_001a063c(piVar11,*piVar6,piVar6[1] << 2);
      temp_v4 = piVar15[8];
      temp_v0 = *(short *)((int)piVar15 + 0x22);
      *temp_v12 = *piVar15;
      *(short *)(temp_v12 + 1) = (short)temp_v4;
      *(short *)((int)temp_v12 + 6) = temp_v0;
      puVar7 = (unsigned int *)*piVar11;
      temp_v10 = param_2[8];
      *puVar7 = *(unsigned char *)(temp_v5 + 0x22) | 0x80000000;
      puVar7[1] = 0xf02c0;
      FUN_0019a270(puVar7 + 2,temp_v10,0xbf02c1);
      *piVar11 = (int)(puVar7 + 0x10);
      FUN_001a4794(temp_v6);
      puVar7 = *(unsigned int **)(temp_v6 + 0x5c);
      temp_v10 = *(unsigned int *)&param_1->field_0x14;
      *puVar7 = *(unsigned char *)(temp_v5 + 10) | 0x80000000;
      puVar7[1] = 0xf02c0;
      FUN_0019a270(puVar7 + 2,temp_v10,0xbf02c1);
      *(unsigned int **)(temp_v6 + 0x5c) = puVar7 + 0x10;
      puVar7 = *(unsigned int **)(temp_v6 + 0x60);
      temp_v10 = *(unsigned int *)&param_1->field_0x14;
      *puVar7 = *(unsigned char *)(temp_v5 + 10) | 0x80000000;
      puVar7[1] = 0xf02c0;
      FUN_0019a270(puVar7 + 2,temp_v10,0xbf02c1);
      *(unsigned int **)(temp_v6 + 0x60) = puVar7 + 0x10;
      FUN_001a47d8(&temp_v12,temp_v6);
      FUN_001a063c(piVar11,temp_v12,iStack_44);
    }
    if (temp_v13 != (int *)0x0) {
      temp_v4 = *temp_v13;
      temp_v14 = temp_v5 + 0x40;
      temp_v13 = (int *)(temp_v5 + 0x38);
      iStack_44 = temp_v5 + 0x30;
      temp_v12 = (int *)(temp_v5 + 0x20);
      FUN_00192840(temp_v4 + (unsigned int)*(unsigned short *)(*piVar13 + 0x54) * 0x704,piVar11,temp_v6,temp_v5 + 0x28);
    }
    if ((param_1->field_0xb0 != (unsigned int *)0x0) &&
       (*(int *)*piVar13 == **(int **)param_1->field_0xb0)) {
      pvVar4 = param_1->field_0xac;
      flagBitsMergeRange(pvVar4,puVar12);
      FUN_001a063c(piVar11,piVar13[4],piVar13[5] << 2);
      FUN_001a063c(piVar11,*(unsigned int *)(puVar12 + 0xa0),*(int *)(puVar12 + 0xa2) << 2);
      FUN_001a063c(piVar11,*(unsigned int *)(puVar12 + 0xa4),*(int *)(puVar12 + 0xa6) << 2);
      FUN_001a063c(piVar11,*(unsigned int *)(puVar12 + 0xa8),*(int *)(puVar12 + 0xaa) << 2);
      FUN_00193b40(piVar13,piVar11,puVar12);
      FUN_001933b4(piVar13,piVar11,puVar12,temp_v15);
      *puVar12 = *puVar12 & ~(unsigned short)(int)pvVar4;
    }
    else {
      modelEmitMaterialPipelineCommands((MaterialPipelineInstance *)piVar13, (MaterialPipelineWriter *)piVar11,
                   (MaterialPipelinePiece *)puVar12, (MaterialPipelineContext *)temp_v15);
      FUN_00193b40(piVar13,piVar11,puVar12);
      if ((*puVar12 & 1) != 0) {
        FUN_00193840(piVar13,piVar11,puVar12,temp_v15);
      }
      if ((*puVar12 & 0x10) != 0) {
        temp_v12 = (int *)(unsigned int)param_1->field_0xa8;
        temp_v1 = FUN_001932e0(piVar13,piVar11,puVar12,temp_v15);
        param_1->field_0xa8 = temp_v1;
      }
      else {
        puVar5 = (unsigned int *)*piVar11;
        *puVar5 = 0;
        puVar5[1] = 0x100e0;
        *piVar11 = (int)(puVar5 + 2);
      }
      FUN_001933b4(piVar13,piVar11,puVar12,temp_v15);
    }
    FUN_001942a8(temp_v16,piVar11);
  }
  param_1->field_0xb0 = (void *)param_2[1];
  param_1->field_0xac = (void *)param_2[3];
  return;
}

} /* extern "C" */
