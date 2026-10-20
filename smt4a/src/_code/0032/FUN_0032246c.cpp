/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032246c` (_code @ 0x32246c, 0x514 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0019c0e0(...);
int FUN_0019c8c0(...);
int FUN_001ac8ec(...);
int FUN_001b4eb8(...);
int FUN_001bc460(...);
int FUN_00222160(...);
int FUN_0023235c(...);
int FUN_002914bc(...);
int FUN_003008c4(...);
int FUN_0039ede0(...);
int FUN_003b24f0(...);

typedef struct fn_0032246c_arg0 fn_0032246c_arg0;
typedef struct fn_0032246c_arg0_p4c fn_0032246c_arg0_p4c;
struct fn_0032246c_arg0 {
    unsigned char pad_0x0[0x8];
    unsigned char field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x3];
    ushort field_0xc; /* +0xc */
    unsigned char pad_0xe[0xa];
    unsigned char field_0x18; /* +0x18 */
    unsigned char pad_0x19[0x1b];
    unsigned char field_0x34; /* +0x34 */
    unsigned char pad_0x35[0x7];
    void *field_0x3c; /* +0x3c */
    unsigned char pad_0x40[0xc];
    fn_0032246c_arg0_p4c *field_0x4c; /* +0x4c */
};
struct fn_0032246c_arg0_p4c {
    unsigned char pad_0x0[0x8];
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x8];
    undefined4 field_0x18; /* +0x18 */
};

/* stack frame of param_1: 8 slot(s), 32 byte(s) */
typedef struct {
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
} param_1_stack;

extern float DAT_006472dc; /* 0x6472dc */
extern float DAT_006472e0; /* 0x6472e0 */
extern float DAT_006472e4; /* 0x6472e4 */
extern float DAT_006472e8; /* 0x6472e8 */
extern float DAT_0064731c; /* 0x64731c */
extern float DAT_00647320; /* 0x647320 */
extern float DAT_00647324; /* 0x647324 */
extern float DAT_00647328; /* 0x647328 */
extern float DAT_0064732c; /* 0x64732c */
extern float DAT_00647330; /* 0x647330 */
extern float DAT_00647334; /* 0x647334 */
extern float DAT_00647338; /* 0x647338 */
extern float DAT_0064733c; /* 0x64733c */
extern float DAT_00647340; /* 0x647340 */
extern float DAT_00647344; /* 0x647344 */
extern float DAT_00647348; /* 0x647348 */
extern float DAT_0064734c; /* 0x64734c */
extern float DAT_00647350; /* 0x647350 */
extern float DAT_00647354; /* 0x647354 */
extern float DAT_00647358; /* 0x647358 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Supplied declaration required: FUN_0019c0e0. */
/* Supplied declaration required: FUN_0019c8c0. */
/* Supplied declaration required: FUN_001ac8ec. */
/* Supplied declaration required: FUN_001b4eb8. */
/* Supplied declaration required: FUN_001bc460. */
/* Supplied declaration required: FUN_00222160. */
/* Supplied declaration required: FUN_0023235c. */
/* Supplied declaration required: FUN_002914bc. */
/* Supplied declaration required: FUN_003008c4. */
/* Supplied declaration required: FUN_0039ede0. */
/* Supplied declaration required: FUN_003b24f0. */


void FUN_0032246c(fn_0032246c_arg0 *param_1)

{
/* irregular: 12 native warning(s); review required */
  float temp_v0;
  float *pfVar2;
  unsigned int *puVar3;
  fn_0032246c_arg0_p4c *pfVar4;
  int temp_v1;
  int temp_v2;
  float temp_v3;
  float temp_v4;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  long long temp_v9;
  unsigned long long temp_v10;
  unsigned long long temp_v11;
  float temp_v12;
  unsigned long long temp_v13;
  float temp_v14;
  float temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  float temp_v18;
  unsigned long long temp_v19;
  unsigned long long temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float temp_v27;
  float fStack_74;
  float fStack_70;
  float temp_v28;
  float temp_v29;
  
  pfVar4 = param_1->field_0x4c;
  if (param_1->field_0xc != 5) {
    if (param_1->field_0xc == 6) {
      puVar3 = (unsigned int *)param_1->field_0x3c;
      pfVar2 = (float *)pfVar4->field_0x18;
      temp_v2 = pfVar4->field_0x8;
      if ((pfVar4->field_0xc & 1) != 0) {
        FUN_0039ede0(pfVar4,&temp_v26);
        FUN_003b24f0(pfVar4,&temp_v22);
        DAT_006472dc = temp_v26;
        DAT_006472e0 = fStack_84;
        DAT_006472e4 = fStack_80;
        DAT_006472e8 = fStack_7c;
        FUN_001bc460();
        temp_v0 = DAT_00647348;
        DAT_0064734c = temp_v22;
        temp_v1 = 0;
        DAT_00647350 = temp_v23;
        DAT_00647354 = temp_v24;
        DAT_00647358 = temp_v25;
        temp_v11 = (unsigned long long)(unsigned int)DAT_0064732c;
        temp_v13 = CONCAT44(DAT_00647330,DAT_00647334);
        temp_v16 = CONCAT44(DAT_0064733c,DAT_00647328);
        temp_v9 = (unsigned long long)(unsigned int)DAT_0064731c << 0x20;
        temp_v10 = CONCAT44(DAT_00647324,DAT_00647320);
        temp_v20 = CONCAT44(DAT_00647344,DAT_00647340);
        temp_v29 = temp_v24;
        temp_v19 = CONCAT44(DAT_00647338,temp_v25);
        if (0 < temp_v2) {
          do {
            if (pfVar2[4] == 0.0f) {
              FUN_0019c8c0(*puVar3);
            }
            if (-1 < (int)pfVar2[4]) {
              DAT_00647328 = (float)temp_v16;
              DAT_0064732c = (float)temp_v11;
              DAT_00647330 = (float)((unsigned long long)temp_v13 >> 0x20);
              DAT_00647334 = (float)temp_v13;
              DAT_00647338 = (float)((unsigned long long)temp_v19 >> 0x20);
              DAT_0064733c = (float)((unsigned long long)temp_v16 >> 0x20);
              DAT_0064731c = (float)((unsigned long long)temp_v9 >> 0x20);
              DAT_00647320 = (float)temp_v10;
              DAT_00647324 = (float)((unsigned long long)temp_v10 >> 0x20);
              DAT_00647340 = (float)temp_v20;
              DAT_00647344 = (float)((unsigned long long)temp_v20 >> 0x20);
              DAT_0064734c = temp_v22;
              DAT_00647350 = temp_v23;
              DAT_00647354 = temp_v29;
              DAT_00647358 = (float)temp_v19;
              temp_v3 = *pfVar2;
              temp_v5 = pfVar2[1];
              temp_v7 = pfVar2[2];
              temp_v11 = CONCAT44(DAT_00647338,DAT_0064732c);
              temp_v28 = temp_v5 * DAT_00647338 + temp_v7 * temp_v0 + DAT_00647358 + temp_v3 * DAT_00647328
              ;
              temp_v27 = temp_v5 * DAT_0064732c + temp_v7 * DAT_0064733c +
                         temp_v22 + temp_v3 * DAT_0064731c;
              fStack_70 = temp_v5 * DAT_00647334 + temp_v7 * DAT_00647344 +
                          temp_v29 + temp_v3 * DAT_00647324;
              fStack_74 = temp_v5 * DAT_00647330 + temp_v7 * DAT_00647340 +
                          temp_v23 + temp_v3 * DAT_00647320;
              DAT_006472dc = temp_v27;
              DAT_006472e0 = fStack_74;
              DAT_006472e4 = fStack_70;
              DAT_006472e8 = temp_v28;
              DAT_00647348 = temp_v0;
              FUN_001ac8ec(*puVar3);
              FUN_001b4eb8(*puVar3,&temp_v27);
              FUN_0019c0e0(*puVar3);
            }
            temp_v1 = temp_v1 + 1;
            pfVar2 = pfVar2 + 10;
            puVar3 = puVar3 + 1;
          } while (temp_v1 < temp_v2);
        }
      }
      else {
        temp_v1 = 0;
        if (0 < temp_v2) {
          do {
            if (pfVar2[4] == 0.0f) {
              FUN_0019c8c0(*puVar3);
            }
            if (-1 < (int)pfVar2[4]) {
              FUN_001ac8ec(*puVar3);
              FUN_001b4eb8(*puVar3,pfVar2);
              FUN_0019c0e0(*puVar3);
            }
            temp_v1 = temp_v1 + 1;
            pfVar2 = pfVar2 + 10;
            puVar3 = puVar3 + 1;
          } while (temp_v1 < temp_v2);
          return;
        }
      }
    }
  }
  else {
    puVar3 = *(unsigned int **)&param_1->field_0x34;
    pfVar2 = (float *)pfVar4->field_0x18;
    temp_v2 = pfVar4->field_0x8;
    if ((pfVar4->field_0xc & 1) != 0) {
      FUN_0039ede0(pfVar4,&temp_v26);
      FUN_003b24f0(pfVar4,&temp_v22);
      DAT_006472dc = temp_v26;
      DAT_006472e0 = fStack_84;
      DAT_006472e4 = fStack_80;
      DAT_006472e8 = fStack_7c;
      FUN_001bc460();
      temp_v0 = DAT_0064733c;
      DAT_0064734c = temp_v22;
      temp_v1 = 0;
      DAT_00647350 = temp_v23;
      DAT_00647354 = temp_v24;
      DAT_00647358 = temp_v25;
      temp_v11 = (unsigned long long)(unsigned int)DAT_00647348;
      temp_v9 = (unsigned long long)(unsigned int)DAT_0064731c << 0x20;
      temp_v29 = temp_v24;
      temp_v3 = DAT_00647320;
      temp_v5 = DAT_00647328;
      temp_v7 = DAT_00647324;
      temp_v21 = DAT_0064732c;
      temp_v15 = DAT_00647338;
      temp_v17 = DAT_00647340;
      temp_v18 = DAT_00647344;
      temp_v12 = DAT_00647330;
      temp_v14 = DAT_00647334;
      if (0 < temp_v2) {
        do {
          if (-1 < (int)pfVar2[4]) {
            DAT_0064731c = (float)((unsigned long long)temp_v9 >> 0x20);
            DAT_00647348 = (float)temp_v11;
            DAT_0064734c = temp_v22;
            DAT_00647350 = temp_v23;
            DAT_00647354 = temp_v29;
            temp_v4 = *pfVar2;
            temp_v6 = pfVar2[1];
            temp_v8 = pfVar2[2];
            temp_v11 = CONCAT44(temp_v15,DAT_00647348);
            temp_v28 = temp_v6 * temp_v15 + temp_v8 * DAT_00647348 + temp_v25 + temp_v4 * temp_v5;
            temp_v27 = temp_v6 * temp_v21 + temp_v8 * temp_v0 + temp_v22 + temp_v4 * DAT_0064731c;
            fStack_70 = temp_v6 * temp_v14 + temp_v8 * temp_v18 + temp_v29 + temp_v4 * temp_v7;
            fStack_74 = temp_v6 * temp_v12 + temp_v8 * temp_v17 + temp_v23 + temp_v4 * temp_v3;
            DAT_006472dc = temp_v27;
            DAT_006472e0 = fStack_74;
            DAT_006472e4 = fStack_70;
            DAT_006472e8 = temp_v28;
            DAT_00647320 = temp_v3;
            DAT_00647324 = temp_v7;
            DAT_00647328 = temp_v5;
            DAT_0064732c = temp_v21;
            DAT_00647330 = temp_v12;
            DAT_00647334 = temp_v14;
            DAT_00647338 = temp_v15;
            DAT_0064733c = temp_v0;
            DAT_00647340 = temp_v17;
            DAT_00647344 = temp_v18;
            DAT_00647358 = temp_v25;
            FUN_002914bc(*puVar3);
            FUN_003008c4(*puVar3,&temp_v27);
            FUN_00222160(*puVar3);
          }
          temp_v1 = temp_v1 + 1;
          pfVar2 = pfVar2 + 10;
          puVar3 = puVar3 + 1;
        } while (temp_v1 < temp_v2);
        return;
      }
    }
    else {
      temp_v1 = 0;
      if (0 < temp_v2) {
        do {
          if (pfVar2[4] == 0.0f) {
            FUN_0023235c(*puVar3);
          }
          if (-1 < (int)pfVar2[4]) {
            FUN_002914bc(*puVar3);
            FUN_003008c4(*puVar3,pfVar2);
            FUN_00222160(*puVar3);
          }
          temp_v1 = temp_v1 + 1;
          pfVar2 = pfVar2 + 10;
          puVar3 = puVar3 + 1;
        } while (temp_v1 < temp_v2);
        return;
      }
    }
  }
  return;
}

} /* extern "C" */
