/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00487470` (_code @ 0x487470, 0x8e0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, double);
int FUN_00162e8c(void);
int FUN_001835b4(...);
int FUN_001849bc(...);
int FUN_002bf1a4(...);
int FUN_00487d6c(...);
int FUN_0048a5e4(...);
int FUN_0048b420(...);
int FUN_00490a10(...);
int FUN_0049177c(...);
int FUN_00492adc(...);
int FUN_00492b98(...);
int FUN_00492bc0(...);
int FUN_00492c34(int);
int FUN_00492c70(int);
int FUN_0049359c(int, float *);
int FUN_0049368c(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 16 slot(s), 64 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int sp98; /* 0x98: local_98 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spF8; /* 0xf8: local_f8 */
    unsigned int sp100; /* 0x100: local_100 */
    unsigned int sp104; /* 0x104: local_104 */
    unsigned int sp108; /* 0x108: local_108 */
} param_1_stack;

extern unsigned int DAT_00587f20; /* 0x587f20 */
extern signed char DAT_005f1622; /* 0x5f1622 */
extern unsigned int DAT_005f19fc; /* 0x5f19fc */
extern signed char DAT_005f1a5e; /* 0x5f1a5e */
extern int DAT_005f1c5c; /* 0x5f1c5c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: NAN (FLOAT_NAN). */
extern unsigned long long FUN_00162858(void);
/* Supplied declaration required: FUN_00162e8c. */
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_001849bc. */
extern unsigned long long FUN_0018719c(unsigned int);
/* Supplied declaration required: FUN_002bf1a4. */
extern int FUN_003847e8(int);
extern int FUN_00384cf4(void);
/* Supplied declaration required: FUN_00487d6c. */
/* Supplied declaration required: FUN_0048a5e4. */
extern int FUN_0048b1bc(int);
/* Supplied declaration required: FUN_0048b420. */
/* Supplied declaration required: FUN_00490a10. */
/* Supplied declaration required: FUN_0049177c. */
/* Supplied declaration required: FUN_00492adc. */
extern unsigned long long *FUN_00492b84(int);
/* Supplied declaration required: FUN_00492b98. */
/* Supplied declaration required: FUN_00492bc0. */
extern float *lmapSceneGetObj(int);
/* Supplied declaration required: FUN_00492c34. */
extern int FUN_00492c5c(int);
/* Supplied declaration required: FUN_00492c70. */
/* Supplied declaration required: FUN_0049359c. */
/* Supplied declaration required: FUN_0049368c. */
extern int NaviMain_GetCurrentMap(int);


void FUN_00487470(int param_1)

{
/* irregular: 6 goto(s); irregular input(s): in_d11, in_d13, in_fpscr; 25 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1;
  float *pfVar3;
  unsigned long long *puVar4;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  int unaff_r6;
  int temp_v15;
  int unaff_r8;
  int temp_v16;
  int temp_v17;
  unsigned int in_fpscr;
  float temp_v18;
  float temp_v19;
  float temp_v20;
  float temp_v21;
  unsigned long long temp_v22;
  float temp_v23;
  float temp_v24;
  unsigned long long in_d11;
  unsigned long long temp_v25;
  float temp_v26;
  unsigned long long in_d13;
  unsigned long long temp_v27;
  float temp_v28;
  float temp_v29;
  unsigned long long temp_v30;
  int temp_v31;
  int temp_v32;
  int iStack_b4;
  int temp_v33;
  int temp_v34;
  float temp_v35;
  float temp_v36;
  int temp_v37;
  unsigned int temp_v38;
  int temp_v39;
  unsigned int *temp_v40;
  int temp_v41;
  int temp_v42;
  
  temp_v42 = param_1;
  FUN_00162e8c();
  temp_v37 = temp_v42 + 0x4cc;
  temp_v31 = FUN_00492bc0();
  FUN_00492c34(temp_v37);
  pfVar3 = (float *)lmapSceneGetObj(temp_v37);
  temp_v18 = *pfVar3;
  temp_v20 = pfVar3[2];
  puVar4 = (unsigned long long *)FUN_00492b84(temp_v37);
  temp_v25 = *puVar4;
  FUN_0049359c(temp_v42 + 0x4d0,&temp_v35);
  temp_v40 = &DAT_005f19fc;
  DAT_00587f20 = 0xb;
  temp_v38 = 0;
  temp_v23 = temp_v18;
  temp_v24 = temp_v20;
  if (DAT_005f1a5e != '\0') {
    temp_v2 = FUN_00384cf4();
    if (temp_v2 == 0) {
      FUN_0048a5e4(temp_v42);
      FUN_00487d6c(temp_v42);
      return;
    }
    temp_v31 = FUN_00492c5c(temp_v37);
    temp_v23 = temp_v18;
    temp_v24 = temp_v20;
    FUN_00492c70(temp_v37);
    temp_v18 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v42 + 0x20638),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v20 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v42 + 0x2063c),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v39 = temp_v42 + 0x20600;
  if (*(char *)(temp_v42 + 0x20634) != '\0') {
    temp_v18 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v42 + 0x20648),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v20 = (float)VectorSignedToFloat(*(unsigned int *)(temp_v42 + 0x2064c),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
  }
  if ((*(unsigned int *)(temp_v42 + 0x10) & 2) != 0) {
    return;
  }
  temp_v2 = FUN_003847e8(temp_v31);
  if ((temp_v2 == 2) || (temp_v2 == 3)) {
    temp_v38 = 1;
  }
  FUN_0048b420(temp_v42,1);
  temp_v28 = 160.0f;
  temp_v29 = 120.0f;
  temp_v2 = temp_v6;
  if (DAT_005f1622 == '\0') {
    temp_v30 = FUN_00162858();
    temp_v2 = (int)((unsigned long long)temp_v30 >> 0x20);
    temp_v14 = (int)temp_v30;
    temp_v5 = temp_v14;
    if (temp_v14 == 0) {
      temp_v5 = temp_v31;
    }
    if (temp_v14 == 0 && temp_v5 == 0x65) {
      in_d11 = 0xc6802000c6c67000;
      in_d13 = 0x47140c0046ebb400;
      temp_v19 = (float)temp_v25 + temp_v28;
      temp_v26 = (float)((unsigned long long)temp_v25 >> 0x20);
      temp_v21 = temp_v26 + temp_v29;
      temp_v30 = CONCAT44(temp_v21,temp_v19);
      temp_v2 = 0;
      unaff_r8 = (int)(temp_v26 - ((temp_v20 - -16400.0f) * 0.016886543f - temp_v29));
      unaff_r6 = (int)((float)temp_v25 - ((temp_v18 - -25400.0f) * 0.0169705f - temp_v28));
      temp_v22 = CONCAT44(temp_v19 + 8.0f,temp_v19 - 8.0f);
      temp_v27 = CONCAT44(temp_v21 + 8.0f,temp_v21 - 8.0f);
      do {
        temp_v15 = temp_v2 + 0x40;
        temp_v14 = 0;
        temp_v5 = (int)(temp_v2 + ((unsigned int)(temp_v2 >> 0x1f) >> 0x1a)) >> 6;
        temp_v16 = temp_v15 + unaff_r8;
        temp_v41 = unaff_r8 + temp_v2;
        temp_v17 = temp_v2 + unaff_r8;
        do {
          temp_v34 = temp_v14 + 0x40;
          temp_v3 = temp_v34 + unaff_r6;
          temp_v32 = temp_v2;
          iStack_b4 = temp_v15;
          temp_v33 = temp_v14;
          if ((((-1 < temp_v3) && (temp_v7 = temp_v14 + unaff_r6, temp_v7 < 0x141)) && (temp_v16 >= 8)) &&
             (temp_v17 < 0xe9)) {
            temp_v18 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v20 = (float)temp_v30;
            temp_v13 = in_fpscr & 0xfffffff;
            temp_v0 = temp_v13 | ((unsigned int)(temp_v18 < temp_v20) << 0x1f);
            in_fpscr = temp_v0 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v20 != temp_v20)) << 0x1c);
            temp_v18 = (float)((unsigned long long)temp_v30 >> 0x20);
            if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
              temp_v19 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
              in_fpscr = temp_v13 | ((unsigned int)(temp_v19 == temp_v20) << 0x1e) |
                         ((unsigned int)(temp_v20 <= temp_v19) << 0x1d);
              temp_v1 = (unsigned char)(in_fpscr >> 0x18);
              if ((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) goto LAB_00487744;
              temp_v19 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v0 = temp_v13 | ((unsigned int)(temp_v19 < temp_v18) << 0x1f);
              in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v18 != temp_v18)) << 0x1c);
              if ((unsigned char)(temp_v0 >> 0x1f) != ((unsigned char)(in_fpscr >> 0x1c) & 1)) goto LAB_00487744;
              temp_v19 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
              in_fpscr = temp_v13 | ((unsigned int)(temp_v19 == temp_v18) << 0x1e) |
                         ((unsigned int)(temp_v18 <= temp_v19) << 0x1d);
              temp_v1 = (unsigned char)(in_fpscr >> 0x18);
              if ((unsigned char)((temp_v1 >> 5) & 1) && !(unsigned char)(temp_v1 >> 6)) goto LAB_00487744;
LAB_00487894:
              FUN_002bf1a4(temp_v31,(int)(temp_v14 + ((unsigned int)(temp_v14 >> 0x1f) >> 0x1a)) >> 6,temp_v5);
            }
            else {
LAB_00487744:
              temp_v19 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v21 = (float)temp_v22;
              temp_v13 = in_fpscr & 0xfffffff;
              temp_v0 = temp_v13 | ((unsigned int)(temp_v19 < temp_v21) << 0x1f);
              in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v21 != temp_v21)) << 0x1c);
              if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v19 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                in_fpscr = temp_v13 | ((unsigned int)(temp_v19 == temp_v21) << 0x1e) |
                           ((unsigned int)(temp_v21 <= temp_v19) << 0x1d);
                temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v0 = temp_v13 | ((unsigned int)(temp_v19 < temp_v18) << 0x1f);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v18 != temp_v18)) << 0x1c);
                  if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v13 | ((unsigned int)(temp_v19 == temp_v18) << 0x1e) |
                               ((unsigned int)(temp_v18 <= temp_v19) << 0x1d);
                    temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) goto LAB_00487894;
                  }
                }
              }
              temp_v19 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v21 = (float)((unsigned long long)temp_v22 >> 0x20);
              temp_v13 = in_fpscr & 0xfffffff;
              temp_v0 = temp_v13 | ((unsigned int)(temp_v19 < temp_v21) << 0x1f);
              in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v21 != temp_v21)) << 0x1c);
              if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v19 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                in_fpscr = temp_v13 | ((unsigned int)(temp_v19 == temp_v21) << 0x1e) |
                           ((unsigned int)(temp_v21 <= temp_v19) << 0x1d);
                temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
                  temp_v19 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v0 = temp_v13 | ((unsigned int)(temp_v19 < temp_v18) << 0x1f);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v19 != temp_v19) || (temp_v18 != temp_v18)) << 0x1c);
                  if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v19 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v13 | ((unsigned int)(temp_v19 == temp_v18) << 0x1e) |
                               ((unsigned int)(temp_v18 <= temp_v19) << 0x1d);
                    temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) goto LAB_00487894;
                  }
                }
              }
              temp_v18 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = in_fpscr & 0xfffffff;
              temp_v0 = temp_v13 | ((unsigned int)(temp_v18 < temp_v20) << 0x1f);
              in_fpscr = temp_v0 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v20 != temp_v20)) << 0x1c);
              if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v18 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                in_fpscr = temp_v13 | ((unsigned int)(temp_v18 == temp_v20) << 0x1e) |
                           ((unsigned int)(temp_v20 <= temp_v18) << 0x1d);
                temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
                  temp_v18 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v19 = (float)temp_v27;
                  temp_v0 = temp_v13 | ((unsigned int)(temp_v18 < temp_v19) << 0x1f);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v19 != temp_v19)) << 0x1c);
                  if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v18 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v13 | ((unsigned int)(temp_v18 == temp_v19) << 0x1e) |
                               ((unsigned int)(temp_v19 <= temp_v18) << 0x1d);
                    temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) goto LAB_00487894;
                  }
                }
              }
              temp_v18 = (float)VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v13 = in_fpscr & 0xfffffff;
              temp_v0 = temp_v13 | ((unsigned int)(temp_v18 < temp_v20) << 0x1f);
              in_fpscr = temp_v0 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v20 != temp_v20)) << 0x1c);
              if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                temp_v18 = (float)VectorSignedToFloat(temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
                in_fpscr = temp_v13 | ((unsigned int)(temp_v18 == temp_v20) << 0x1e) |
                           ((unsigned int)(temp_v20 <= temp_v18) << 0x1d);
                temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
                  temp_v18 = (float)VectorSignedToFloat(temp_v16,(unsigned char)(in_fpscr >> 0x16) & 3);
                  temp_v20 = (float)((unsigned long long)temp_v27 >> 0x20);
                  temp_v0 = temp_v13 | ((unsigned int)(temp_v18 < temp_v20) << 0x1f);
                  in_fpscr = temp_v0 | ((unsigned int)((temp_v18 != temp_v18) || (temp_v20 != temp_v20)) << 0x1c);
                  if ((unsigned char)(temp_v0 >> 0x1f) == ((unsigned char)(in_fpscr >> 0x1c) & 1)) {
                    temp_v18 = (float)VectorSignedToFloat(temp_v17,(unsigned char)(in_fpscr >> 0x16) & 3);
                    in_fpscr = temp_v13 | ((unsigned int)(temp_v18 == temp_v20) << 0x1e) |
                               ((unsigned int)(temp_v20 <= temp_v18) << 0x1d);
                    temp_v1 = (unsigned char)(in_fpscr >> 0x18);
                    if (!(unsigned char)((temp_v1 >> 5) & 1) || (unsigned char)(temp_v1 >> 6)) {
                      FUN_002bf1a4(temp_v31,(int)(temp_v14 + ((unsigned int)(temp_v14 >> 0x1f) >> 0x1a)) >> 6,
                                   temp_v5);
                    }
                  }
                }
              }
            }
            temp_v3 = (int)(temp_v14 + ((unsigned int)(temp_v14 >> 0x1f) >> 0x1a)) >> 6;
            temp_v7 = temp_v5;
            temp_v4 = FUN_00162e8c();
            if (((temp_v3 >= 0) && (9 >= temp_v3)) && ((temp_v7 >= 0 && (0xd >= temp_v7)))) {
              temp_v3 = temp_v3 + temp_v5 * 10;
              temp_v13 = 1;
              if (((unsigned int)*(unsigned char *)(temp_v4 + ((int)(temp_v3 + ((unsigned int)(temp_v3 >> 0x1f) >> 0x1d)) >> 3) +
                                  0xdb0) & (1 << ((temp_v3 % 8) & 0xffU))) == 0) {
                temp_v13 = 0;
              }
            }
            else {
              temp_v13 = 0;
            }
            if (((temp_v13 & ~temp_v38) != 0) || (DAT_005f1c5c != 0)) {
              temp_v18 = (float)VectorSignedToFloat(temp_v41,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v20 = (float)VectorSignedToFloat(unaff_r6 + temp_v14,(unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_001849bc(2,0x13,6000,(int)(temp_v20 + temp_v35),(int)(temp_v18 + temp_v36),
                           DAT_00587f20,&temp_v32);
            }
          }
          temp_v14 = temp_v14 + 0x40;
        } while (temp_v14 < 0x200);
        temp_v2 = temp_v2 + 0x40;
      } while (temp_v2 < 0x280);
      temp_v30 = FUN_0018719c(0x171);
      temp_v2 = (int)((unsigned long long)temp_v30 >> 0x20);
      if ((int)temp_v30 != 0) {
        temp_v30 = FUN_0018719c(0x187);
        temp_v2 = (int)((unsigned long long)temp_v30 >> 0x20);
        if ((int)temp_v30 != 0) {
          temp_v18 = (float)VectorSignedToFloat(unaff_r8,(unsigned char)(in_fpscr >> 0x16) & 3);
          temp_v20 = (float)VectorSignedToFloat(unaff_r6,(unsigned char)(in_fpscr >> 0x16) & 3);
          FUN_001835b4(2,0x13,0x1774,(int)(temp_v35 + temp_v20),(int)(temp_v36 + temp_v18),DAT_00587f20)
          ;
          temp_v2 = temp_v8;
        }
        else {
          temp_v5 = *(int *)(temp_v42 + 0x4c8);
          if (temp_v5 != 0) {
            if (temp_v5 != 1) {
              if (temp_v5 == 2) {
                temp_v18 = (float)VectorSignedToFloat(unaff_r8,(unsigned char)(in_fpscr >> 0x16) & 3);
                temp_v20 = (float)VectorSignedToFloat(unaff_r6,(unsigned char)(in_fpscr >> 0x16) & 3);
                FUN_001835b4(2,0x13,0x1773,(int)(temp_v35 + temp_v20),(int)(temp_v36 + temp_v18),
                             DAT_00587f20);
                temp_v2 = temp_v11;
              }
            }
            else {
              temp_v18 = (float)VectorSignedToFloat(unaff_r8,(unsigned char)(in_fpscr >> 0x16) & 3);
              temp_v20 = (float)VectorSignedToFloat(unaff_r6,(unsigned char)(in_fpscr >> 0x16) & 3);
              FUN_001835b4(2,0x13,0x1772,(int)(temp_v35 + temp_v20),(int)(temp_v36 + temp_v18),
                           DAT_00587f20);
              temp_v2 = temp_v10;
            }
          }
          else {
            temp_v18 = (float)VectorSignedToFloat(unaff_r8,(unsigned char)(in_fpscr >> 0x16) & 3);
            temp_v20 = (float)VectorSignedToFloat(unaff_r6,(unsigned char)(in_fpscr >> 0x16) & 3);
            FUN_001835b4(2,0x13,0x1771,(int)(temp_v35 + temp_v20),(int)(temp_v36 + temp_v18),
                         DAT_00587f20);
            temp_v2 = temp_v9;
          }
        }
      }
      if (temp_v38 == 0) {
        FUN_0049177c(temp_v42);
        FUN_00490a10(temp_v42);
        temp_v2 = temp_v12;
      }
    }
  }
  temp_v20 = (float)((unsigned long long)in_d13 >> 0x20);
  temp_v18 = (float)((unsigned long long)in_d11 >> 0x20);
  if (*(char *)((int)temp_v40 + 0x62) != '\0') {
    temp_v28 = (float)VectorSignedToFloat((int)((512.0f / (float)in_d13) * (temp_v23 - (float)in_d11)) +
                                        unaff_r6,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v2 = (int)((640.0f / temp_v20) * (temp_v24 - temp_v18)) + unaff_r8;
    temp_v29 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
  }
  else {
    temp_v28 = (float)temp_v25 + temp_v28;
    temp_v29 = (float)((unsigned long long)temp_v25 >> 0x20) + temp_v29;
  }
  if (*(char *)(temp_v39 + 0x34) != '\0') {
    temp_v2 = (int)((512.0f / (float)in_d13) * (temp_v23 - (float)in_d11)) + unaff_r6;
    temp_v28 = (float)VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v29 = (float)VectorSignedToFloat((int)((640.0f / temp_v20) * (temp_v24 - temp_v18)) + unaff_r8,
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
  }
  temp_v2 = FUN_00492bc0(temp_v37,temp_v2);
  temp_v5 = NaviMain_GetCurrentMap(temp_v37);
  if (temp_v2 == temp_v5) {
    if (temp_v38 == 0) {
      FUN_00492adc(temp_v37);
      temp_v2 = FUN_0048b1bc(temp_v42);
      temp_v14 = (int)temp_v29;
      temp_v5 = (int)temp_v28;
      FUN_0049368c(temp_v42 + 0x4d0,temp_v2 + 0xbc1,temp_v5,temp_v14,0xb,1);
      FUN_00492b98(temp_v37);
      temp_v2 = FUN_0048b1bc(temp_v42);
      FUN_0049368c(temp_v42 + 0x4d0,temp_v2 + 0xbb9,temp_v5,temp_v14,0xb,1);
    }
    FUN_00492adc(temp_v37);
  }
  FUN_0048b420(temp_v42,0);
  DAT_00587f20 = 0xf1;
  FUN_0048a5e4(temp_v42);
  FUN_00487d6c(temp_v42);
  return;
}

} /* extern "C" */
