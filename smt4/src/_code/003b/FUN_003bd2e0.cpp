/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003bd2e0` (_code @ 0x3bd2e0, 0x6ec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(...);
int FUN_0022a918(unsigned int, unsigned int);
int FUN_0022ab08(...);
int FUN_0022abe0(void);
int FUN_00246134(unsigned int, unsigned int, int, unsigned int);
int FUN_00247478(...);
int FUN_0027da30(unsigned int *, unsigned int);
int FUN_00282924(...);
int FUN_00283e48(void);
int FUN_00283ebc(...);
int FUN_002939f4(void);
int FUN_002ae164(void);
int FUN_002b4670(void);
int FUN_002c4938(...);
int VectorSignedToFloat(...);
int VectorUnsignedToFloat(...);

/* stack frame of param_5: 32 slot(s), 118 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
    unsigned int sp8C; /* 0x8c: local_8c */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp114; /* 0x114: local_114 */
    unsigned int sp118; /* 0x118: local_118 */
    unsigned int sp11C; /* 0x11c: local_11c */
    unsigned int sp120; /* 0x120: local_120 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned char sp16A; /* 0x16a: local_16a */
    unsigned char sp16B; /* 0x16b: local_16b */
    unsigned short sp17A; /* 0x17a: local_17a */
    unsigned int sp184; /* 0x184: local_184 */
    unsigned short sp19C; /* 0x19c: local_19c */
} param_5_stack;

/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: FUN_0022a918. */
/* Supplied declaration required: FUN_0022ab08. */
/* Supplied declaration required: FUN_0022abe0. */
extern int FUN_0023ea94(void);
extern int FUN_0023eae0(unsigned int);
/* Supplied declaration required: FUN_00246134. */
extern unsigned int FUN_002463e8(unsigned int);
/* Supplied declaration required: FUN_00247478. */
extern unsigned int FUN_00255de0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0027da30. */
/* Supplied declaration required: FUN_00282924. */
/* Supplied declaration required: FUN_00283e48. */
/* Supplied declaration required: FUN_00283ebc. */
/* Supplied declaration required: FUN_002939f4. */
extern unsigned int FUN_002ae108(unsigned int);
/* Supplied declaration required: FUN_002ae164. */
/* Supplied declaration required: FUN_002b4670. */
/* Supplied declaration required: FUN_002c4938. */
extern unsigned int FUN_003bf554(unsigned int);


/* WARNING: Type propagation algorithm not settling */

unsigned int FUN_003bd2e0(unsigned int param_1,unsigned int param_2,int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: irregular input(s): in_fpscr; 18 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int *puVar6;
  unsigned int *puVar7;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned int in_fpscr;
  float temp_v11;
  float temp_v12;
  int temp_v13;
  float temp_v14;
  unsigned long long temp_v15;
  long long temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  unsigned long long temp_v19;
  unsigned char temp_v20 [4];
  short temp_v21;
  int temp_v22;
  unsigned char temp_v23 [2];
  unsigned short temp_v24;
  unsigned char temp_v25;
  unsigned char temp_v26;
  unsigned int temp_v27 [12];
  unsigned int temp_v28 [4];
  unsigned int temp_v29;
  unsigned int temp_v30;
  unsigned int temp_v31 [18];
  unsigned int *temp_v32;
  unsigned short temp_v33 [4];
  unsigned int *temp_v34;
  unsigned int temp_v35;
  unsigned int temp_v36;
  unsigned int temp_v37;
  unsigned int temp_v38 [14];
  unsigned int temp_v39;
  unsigned int uStack_30;
  int iStack_2c;
  unsigned int temp_v40;
  
  temp_v39 = param_1;
  uStack_30 = param_2;
  iStack_2c = param_3;
  temp_v40 = param_4;
  temp_v32 = (unsigned int *)FUN_002939f4();
  temp_v1 = temp_v39;
  FUN_002ae164();
  temp_v37 = temp_v1;
  FUN_002b4670();
  temp_v1 = 0;
  if (param_3 != 0) {
    temp_v1 = (unsigned int)*(unsigned short *)(param_3 + 0x62);
  }
  if (param_3 != 0 && temp_v1 != 0) {
    FUN_002ae164();
    temp_v37 = temp_v1;
  }
  puVar3 = temp_v32;
  FUN_00282924(temp_v32,temp_v40);
  puVar7 = temp_v32;
  FUN_00282924(temp_v32,param_5);
  temp_v34 = puVar7;
  FUN_00247478(temp_v23,temp_v32,puVar3);
  temp_v3 = temp_v40;
  temp_v1 = (unsigned int)temp_v25;
  if (temp_v1 == 0) {
    if (temp_v37 == 0) {
      return 0;
    }
    if (((*(unsigned char *)(temp_v37 + 0x35) & 0x20) != 0) || ((*(unsigned short *)(temp_v37 + 0x36) & 0x2000) != 0)
       ) {
      temp_v1 = FUN_003bf554(param_5);
      return temp_v1;
    }
    if (*(char *)(temp_v37 + 0x2f) == '\0') {
      return 0;
    }
  }
  temp_v14 = (float)VectorUnsignedToFloat((unsigned int)temp_v26,(unsigned char)(in_fpscr >> 0x16) & 3);
  temp_v2 = FUN_002939f4();
  FUN_00282924(temp_v2,temp_v3);
  temp_v3 = FUN_002939f4();
  FUN_00247478(temp_v20,temp_v3,temp_v2);
  FUN_002c4938(temp_v28,0x48);
  FUN_002c4938(temp_v31,0x48);
  temp_v27[0] = 0;
  temp_v27[1] = 0;
  temp_v27[2] = 0;
  temp_v27[3] = 0;
  temp_v27[4] = 0;
  temp_v27[5] = 0;
  temp_v27[6] = 0;
  temp_v27[7] = 0;
  temp_v27[8] = 0;
  temp_v27[9] = 0;
  temp_v27[10] = 0;
  if (temp_v1 != 1) {
    temp_v8 = 5;
    temp_v3 = 6;
    if (!(temp_v1 == 0x13 || temp_v1 == 0x14)) {
      if (temp_v1 != 0x16) {
        temp_v28[0] = FUN_002463e8(temp_v1);
        temp_v10 = 1;
        temp_v27[0] = temp_v1;
      }
      else {
        temp_v28[0] = FUN_002463e8(5);
        temp_v27[0] = temp_v8;
        temp_v28[1] = FUN_002463e8(6);
        temp_v27[1] = temp_v3;
        temp_v28[2] = FUN_002463e8(7);
        temp_v27[2] = 7;
        temp_v28[3] = FUN_002463e8(8);
        temp_v27[3] = 8;
        temp_v29 = FUN_002463e8(9);
        temp_v27[4] = 9;
        temp_v30 = FUN_002463e8(3);
        temp_v10 = 6;
        temp_v27[5] = 3;
      }
    }
    else {
      temp_v28[0] = FUN_002463e8(5);
      temp_v27[0] = temp_v8;
      temp_v28[1] = FUN_002463e8(6);
      temp_v27[1] = temp_v3;
      temp_v28[2] = FUN_002463e8(7);
      temp_v27[2] = 7;
      temp_v28[3] = FUN_002463e8(8);
      temp_v27[3] = 8;
      temp_v29 = FUN_002463e8(9);
      temp_v27[4] = 9;
      temp_v10 = 5;
    }
  }
  else {
    temp_v10 = 1;
    temp_v27[0] = 1;
    temp_v28[0] = (unsigned int)temp_v24;
  }
  temp_v8 = 0xffffffff;
  if ((temp_v37 != 0) && (*(char *)(temp_v37 + 0x23) == '\x01')) {
    temp_v8 = (*(unsigned int *)(temp_v37 + 0x28) & 0x1ffff) >> 0xc;
  }
  temp_v13 = (int)temp_v14;
  if ((temp_v13 != 0xff) && (temp_v9 = 0, temp_v10 != 0)) {
    do {
      temp_v6 = param_5;
      FUN_00246134(param_5,temp_v28[temp_v9],(int)temp_v21,temp_v8);
      temp_v31[temp_v9] = temp_v6;
      temp_v6 = param_5;
      FUN_0022a918(param_5,temp_v28[temp_v9]);
      temp_v5 = temp_v31[temp_v9];
      temp_v31[temp_v9] = temp_v6 | temp_v5;
      if (((temp_v6 | temp_v5) & 0x170000) != 0) {
        return 0;
      }
      temp_v9 = temp_v9 + 1;
    } while (temp_v9 < temp_v10);
  }
  if (temp_v1 == 0x13 || temp_v1 == 0x14) {
    temp_v1 = 0x3e0;
  }
  else if (temp_v1 != 0x16) {
    temp_v1 = 1 << temp_v1;
  }
  else {
    temp_v1 = 1000;
  }
  if ((*temp_v34 & 0x20) == 0) {
    if (temp_v13 == 0xff) {
      return temp_v1;
    }
    if ((temp_v32[0x112a] & 0x4000000) == 0) {
      if ((temp_v32[0x112a] & 0x80) != 0) {
        return temp_v1;
      }
      puVar3 = temp_v32 + 0x1128;
      if ((*puVar3 & 0x40000) != 0) {
        temp_v1 = temp_v1 & 0xfffffbff;
      }
      temp_v0 = '\0';
      if (temp_v37 != 0) {
        temp_v0 = *(char *)(temp_v37 + 0x48);
      }
      if (temp_v37 == 0 || temp_v0 == '\0') {
        puVar7 = temp_v32;
        FUN_0027da30(temp_v32,temp_v40);
        puVar6 = temp_v32;
        FUN_0027da30(temp_v32,param_5);
        temp_v11 = (float)VectorSignedToFloat((int)*(short *)((int)puVar7 + 0xf6) -
                                            (int)*(short *)((int)puVar6 + 0xf6),
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v13 = 0;
        temp_v12 = (float)VectorSignedToFloat((int)(short)puVar7[0x3e] - (int)(short)puVar6[0x3e],
                                            (unsigned char)(in_fpscr >> 0x16) & 3);
        if (temp_v10 != 0) {
          temp_v16 = (unsigned long long)(unsigned int)(temp_v14 * 0.5f) << 0x20;
          temp_v15 = CONCAT44(temp_v14,0x3f800000);
          temp_v18 = 0x3c23d70a;
          temp_v17 = temp_v14 * 2.0f;
          temp_v19 = CONCAT44(0xbf800000,temp_v14 + temp_v11 * 0.25f + temp_v12 * 0.5f + 0.0f);
          do {
            temp_v2 = (unsigned int)((unsigned long long)temp_v16 >> 0x20);
            temp_v38[0] = 0;
            temp_v14 = (float)VectorUnsignedToFloat
                                      (temp_v31[temp_v13] & 0xffff,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v15 = CONCAT44(temp_v14 * (float)temp_v18,(int)temp_v15);
            FUN_0022ab08(temp_v28[temp_v13],temp_v38);
            temp_v3 = temp_v40;
            temp_v8 = temp_v39;
            puVar7 = (unsigned int *)FUN_002939f4();
            FUN_00282924(puVar7,temp_v3);
            if (((*puVar7 & 2) != 0) && (temp_v6 = temp_v8, FUN_002ae164(), temp_v6 != 0)) {
              temp_v3 = FUN_002ae108(temp_v8);
              FUN_00283ebc(temp_v6,temp_v3,3);
              temp_v14 = (float)VectorSignedToFloat(temp_v6,(unsigned char)(in_fpscr >> 0x16) & 3);
            }
            else {
              temp_v14 = (float)((unsigned long long)temp_v18 >> 0x20);
            }
            temp_v14 = (float)temp_v19 + temp_v14;
            temp_v3 = FUN_00255de0(0xfffffffb,5);
            temp_v11 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            if ((*puVar3 & 0x40000) != 0) {
              temp_v11 = (float)((unsigned long long)temp_v18 >> 0x20);
            }
            temp_v8 = temp_v27[temp_v13] & 0xffff;
            temp_v16 = CONCAT44(temp_v2,temp_v14 + temp_v11 * (float)temp_v18 * temp_v14);
            temp_v9 = FUN_002939f4();
            FUN_00282924(temp_v9,param_5);
            if (temp_v9 == 0) {
              temp_v14 = (float)temp_v15;
            }
            else {
              temp_v33[0] = 0;
              temp_v33[1] = 0;
              temp_v33[2] = 0;
              temp_v33[3] = 0;
              temp_v34 = (unsigned int *)0x0;
              temp_v35 = 0;
              temp_v36 = 0;
              FUN_0022abe0();
              temp_v9 = 0;
              temp_v22 = 0;
              do {
                temp_v6 = (unsigned int)temp_v33[temp_v9];
                if (temp_v6 != 0) {
                  FUN_00283e48();
                  temp_v5 = temp_v7;
                  if (temp_v6 != 0) {
                    temp_v5 = (unsigned int)*(unsigned char *)(temp_v6 + 0x2e);
                  }
                  if (((temp_v6 != 0 && temp_v5 != 0) && (temp_v8 != 1 && temp_v8 != 2)) &&
                     (temp_v8 != 4 && temp_v8 != 10)) {
                    temp_v22 = temp_v22 + temp_v5;
                  }
                }
                temp_v9 = temp_v9 + 1;
              } while (temp_v9 < 9);
              temp_v14 = (float)VectorSignedToFloat(temp_v22,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v14 = (float)temp_v15 - temp_v14 * (float)temp_v18;
            }
            temp_v14 = (float)temp_v16 * temp_v14;
            temp_v11 = (float)((unsigned long long)temp_v16 >> 0x20);
            if (temp_v14 < temp_v11) {
              temp_v14 = temp_v11;
            }
            in_fpscr = (in_fpscr & 0xfffffff) | ((unsigned int)(temp_v14 <= temp_v17) << 0x1d);
            if (!romwright_subpiece_4_1_0(in_fpscr >> 0x1d,0)) {
              temp_v14 = temp_v17;
            }
            temp_v14 = temp_v14 * (float)((unsigned long long)temp_v15 >> 0x20);
            if ((*puVar6 & 4) == 0) {
              temp_v9 = FUN_0023ea94();
              temp_v14 = *(float *)(temp_v9 + 0xc) * temp_v14;
            }
            temp_v9 = 0;
            temp_v8 = (unsigned int)(unsigned char)temp_v32[0x3d];
            if (temp_v27[temp_v13] == temp_v8) {
              if ((temp_v8 == 1 || temp_v8 == 5) && ((*puVar6 & 4) != 0)) {
                temp_v9 = (int)(char)*(unsigned char *)((int)temp_v32 + 0xf6);
              }
              if ((temp_v8 == 3 || temp_v8 == 5) && ((*puVar6 & 4) == 0)) {
                temp_v9 = (int)(char)*(unsigned char *)((int)temp_v32 + 0xf6);
              }
            }
            if ((((temp_v27[temp_v13] == 1) && (temp_v28[temp_v13] != 6)) && (temp_v28[temp_v13] != 7))
               && (temp_v4 = FUN_0023eae0(99), (int)(unsigned int)*(unsigned char *)((int)puVar6 + 0x14a) <= temp_v4)) {
              temp_v14 = (float)((unsigned long long)temp_v19 >> 0x20);
              temp_v9 = -1;
            }
            if (((*puVar3 & 0x40000) == 0) &&
               (temp_v4 = FUN_0023eae0(99), (int)temp_v14 + temp_v9 < temp_v4)) {
              temp_v1 = temp_v1 & ~(1 << (temp_v27[temp_v13] & 0xff));
            }
            temp_v13 = temp_v13 + 1;
          } while (temp_v13 < temp_v10);
        }
        if (temp_v37 != 0) {
          if (((*(unsigned char *)(temp_v37 + 0x35) & 0x20) == 0) &&
             ((*(unsigned short *)(temp_v37 + 0x36) & 0x2000) == 0)) {
            return temp_v1;
          }
          temp_v8 = FUN_003bf554(param_5);
          return temp_v1 | temp_v8;
        }
        return temp_v1;
      }
      return temp_v1;
    }
  }
  return 0;
}

} /* extern "C" */
