/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010a5b0` (_code @ 0x10a5b0, 0x2ee bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00124074(unsigned int, int, unsigned char **);
int FUN_0012409c(unsigned int, int, unsigned char [32]);
int FUN_0012fe3c(...);
int FUN_002e6e34(...);
int FUN_002e6e5c(...);
int FUN_002e7232(...);
int strAssign(int *, int, int, unsigned int);
int FUN_002e75c2(unsigned char [6], unsigned char ***);
int strInit(int [4]);
int FUN_002e7658(unsigned char [6]);
int FUN_002e9538(...);
int FUN_002e995c(...);
int FUN_002eb17c(...);
int FUN_002eb588(...);
int FUN_002eb87c(...);
int FUN_002eb914(...);
int strDestroy(...);
int FUN_002ed258(unsigned char [6], int);
int FUN_002ede60(...);
int FUN_002eea8a(unsigned char [6], unsigned short [2]);
int FUN_002f3524(...);
int FUN_002f3532(...);
int FUN_002f35a4(...);
int FUN_002f3624(...);

typedef int romwright_code(...);
/* stack frame of param_4: 27 slot(s), 102 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp13C; /* 0x13c: local_13c */
    unsigned int sp140; /* 0x140: local_140 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
    unsigned int sp14C; /* 0x14c: local_14c */
    unsigned int sp150; /* 0x150: local_150 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp158; /* 0x158: local_158 */
    unsigned int sp15C; /* 0x15c: local_15c */
    unsigned int sp174; /* 0x174: local_174 */
    unsigned short sp176; /* 0x176: local_176 */
    unsigned int sp188; /* 0x188: local_188 */
    unsigned short sp18C; /* 0x18c: local_18c */
    unsigned int sp190; /* 0x190: local_190 */
    unsigned int sp194; /* 0x194: local_194 */
    unsigned short sp196; /* 0x196: local_196 */
    unsigned int sp1A4; /* 0x1a4: local_1a4 */
    unsigned int sp1AC; /* 0x1ac: local_1ac */
    unsigned int sp1C0; /* 0x1c0: local_1c0 */
    unsigned int sp1C4; /* 0x1c4: local_1c4 */
    unsigned int sp1C8; /* 0x1c8: local_1c8 */
} param_4_stack;

extern int DAT_00594a68; /* 0x594a68 */
extern unsigned int DAT_00594a70; /* 0x594a70 */

extern unsigned int FUN_0010a53c(int, unsigned int);
/* Supplied declaration required: FUN_00124074. */
/* Supplied declaration required: FUN_0012409c. */
/* Supplied declaration required: FUN_0012fe3c. */
/* Supplied declaration required: FUN_002e6e34. */
/* Supplied declaration required: FUN_002e6e5c. */
/* Supplied declaration required: FUN_002e7232. */
/* Supplied declaration required: strAssign. */
/* Supplied declaration required: FUN_002e75c2. */
/* Supplied declaration required: strInit. */
/* Supplied declaration required: FUN_002e7658. */
extern int FUN_002e76b6(unsigned int);
/* Supplied declaration required: FUN_002e9538. */
/* Supplied declaration required: FUN_002e995c. */
/* Supplied declaration required: FUN_002eb17c. */
/* Supplied declaration required: FUN_002eb588. */
extern int FUN_002eb83c(void);
/* Supplied declaration required: FUN_002eb87c. */
/* Supplied declaration required: FUN_002eb914. */
/* Supplied declaration required: strDestroy. */
/* Supplied declaration required: FUN_002ed258. */
/* Supplied declaration required: FUN_002ede60. */
/* Supplied declaration required: FUN_002eea8a. */
extern unsigned int FUN_002f34c8(int);
/* Supplied declaration required: FUN_002f3524. */
/* Supplied declaration required: FUN_002f3532. */
extern int FUN_002f3594(unsigned char *, unsigned int *);
/* Supplied declaration required: FUN_002f35a4. */
extern int FUN_002f35b6(int, unsigned char *, unsigned char *);
extern int FUN_002f35ec(unsigned char **, unsigned int *);
extern int FUN_002f35fc(unsigned char **, unsigned int *);
extern int FUN_002f360c(unsigned char *, unsigned char *);
/* Supplied declaration required: FUN_002f3624. */


unsigned int FUN_0010a5b0(int param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 25 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned char *puVar8;
  int *piVar9;
  unsigned short temp_v7;
  unsigned int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char *puVar13;
  unsigned int temp_v11;
  int aiStack_1bc [4];
  unsigned int temp_v12;
  unsigned int temp_v13;
  unsigned char temp_v14 [6];
  unsigned short temp_v15;
  unsigned int temp_v16;
  int temp_v17;
  unsigned short temp_v18 [2];
  int *temp_v19;
  unsigned char temp_v20 [6];
  unsigned short temp_v21;
  unsigned int temp_v22;
  unsigned char **temp_v23;
  int temp_v24;
  unsigned int temp_v25;
  unsigned char *temp_v26;
  int temp_v27;
  unsigned char *temp_v28;
  unsigned char *temp_v29;
  int temp_v30;
  unsigned char *temp_v31;
  int temp_v32;
  int temp_v33;
  int temp_v34;
  int temp_v35;
  unsigned char temp_v36 [64];
  unsigned char temp_v37 [64];
  unsigned char temp_v38 [32];
  unsigned char temp_v39 [12];
  unsigned char temp_v40 [4];
  unsigned char temp_v41 [72];
  unsigned char temp_v42 [4];
  int iStack_24;
  unsigned int temp_v43;
  unsigned int uStack_1c;
  int temp_v44;
  
  temp_v3 = param_1 + 0x80;
  iStack_24 = param_1;
  temp_v43 = param_2;
  uStack_1c = param_3;
  temp_v44 = param_4;
  temp_v4 = (**(romwright_code **)(**(int **)(param_1 + 0xb0) + 0x28))();
  temp_v11 = 0;
  temp_v9 = *(int *)(temp_v44 + 0xd8);
  if (temp_v9 == 0) {
    return 0;
  }
  if (*(unsigned int *)(temp_v9 + 0x10) < 0xd) {
    return 0;
  }
  FUN_002e995c(temp_v20);
  strInit(aiStack_1bc);
  temp_v19 = aiStack_1bc;
  FUN_002ed258(temp_v14,temp_v9);
  FUN_002e75c2(temp_v14,&temp_v23);
  FUN_002eea8a(temp_v14,temp_v18);
  temp_v22 = ((int)temp_v23 << 0x18) | ((((unsigned int)temp_v23 >> 8) & 0xff) << 0x10) |
              ((((unsigned int)temp_v23 >> 0x10) & 0xff) << 8) | ((unsigned int)temp_v23 >> 0x18);
  temp_v21 = (temp_v18[0] << 8) | (temp_v18[0] >> 8);
  temp_v12 = 0;
  temp_v13 = 0;
  temp_v10 = *(int *)(temp_v16 + 0x10) - temp_v17;
  temp_v9 = FUN_002e76b6(temp_v16);
  strAssign(temp_v19,temp_v9 + temp_v17,temp_v10,0xffffffff);
  FUN_002e7658(temp_v14);
  temp_v7 = *(unsigned short *)(temp_v44 + 0x3c) & 0xf;
  temp_v24 = temp_v44 + 0xdc;
  if (temp_v7 != 2) {
    if (temp_v7 == 6) {
      FUN_002e995c(temp_v38);
      FUN_002e995c(temp_v14);
      temp_v6 = temp_v22 >> 8;
      temp_v0 = temp_v22 >> 0x10;
      temp_v1 = temp_v22 >> 0x18;
      temp_v2 = temp_v22 << 0x18;
      temp_v5 = FUN_002f34c8(temp_v4);
      if ((temp_v2 | ((temp_v6 & 0xff) << 0x10) | ((temp_v0 & 0xff) << 8) | temp_v1) == temp_v5) {
        FUN_0012409c(*(unsigned int *)(temp_v4 + 8),(temp_v21 << 8) | (temp_v21 >> 8),temp_v38);
        FUN_00124074(*(unsigned int *)(temp_v4 + 8),temp_v24,&temp_v26);
        temp_v6 = FUN_002f34c8(temp_v4);
        temp_v16 = (temp_v6 << 0x18) | (((temp_v6 >> 8) & 0xff) << 0x10) |
                    (((temp_v6 >> 0x10) & 0xff) << 8) | (temp_v6 >> 0x18);
        temp_v6 = (((unsigned int)temp_v26 & 0xff) << 8) | (((unsigned int)temp_v26 >> 8) & 0xff);
        temp_v15 = (unsigned short)temp_v6;
        FUN_002f3524(temp_v38,temp_v6,0,0x2000);
        FUN_002f3524(temp_v14,temp_v8,0,0x2000);
      }
      else {
        FUN_002e9538(temp_v38,temp_v20);
        FUN_002e9538(temp_v14,temp_v24);
      }
      temp_v27 = 1;
      if (DAT_00594a68 != 0) {
        temp_v34 = *(unsigned int *)(param_1 + 0x34);
        FUN_002f3532(temp_v40,param_1 + 0x24,temp_v20);
        temp_v4 = FUN_002f3594(temp_v40,(unsigned int *)&temp_v34);
        if (temp_v4 == 0) {
          temp_v35 = *(unsigned int *)(param_1 + 0x34);
          FUN_002f3532(temp_v42,param_1 + 0x24,temp_v14);
          temp_v4 = FUN_002f3594(temp_v42,(unsigned int *)&temp_v35);
          if (temp_v4 == 0) {
            FUN_002e6e34(temp_v39,param_1 + 0x4c);
            FUN_002eb588(&temp_v24);
            FUN_002f35a4(temp_v36,temp_v20,temp_v14);
            temp_v29 = temp_v36;
            temp_v30 = param_1 + 0x21;
            puVar8 = *(unsigned char **)(*(unsigned char **)(param_1 + 0x18) + 4);
            temp_v31 = *(unsigned char **)(param_1 + 0x18);
            while (puVar13 = puVar8, puVar13 != (unsigned char *)0x0) {
              temp_v4 = FUN_002f35b6(temp_v30,puVar13 + 0x10,temp_v29);
              if (temp_v4 != 0) {
                puVar8 = *(unsigned char **)(puVar13 + 0xc);
              }
              else {
                puVar8 = *(unsigned char **)(puVar13 + 8);
                temp_v31 = puVar13;
              }
            }
            temp_v26 = temp_v31;
            temp_v32 = *(unsigned int *)(param_1 + 0x18);
            temp_v4 = FUN_002f35ec(&temp_v26,(unsigned int *)&temp_v32);
            if ((temp_v4 != 0) ||
               (temp_v4 = FUN_002f35b6(temp_v30,temp_v29,temp_v26 + 0x10), temp_v28 = temp_v26,
               temp_v4 != 0)) {
              temp_v28 = *(unsigned char **)(param_1 + 0x18);
            }
            temp_v33 = *(unsigned int *)(param_1 + 0x18);
            temp_v4 = FUN_002f35fc(&temp_v28,(unsigned int *)&temp_v33);
            puVar8 = temp_v28;
            if (temp_v4 == 0) {
              if ((DAT_00594a70 != 0) && (temp_v6 = FUN_0010a53c(param_1,0), temp_v6 >= DAT_00594a70)) {
                temp_v27 = 0;
              }
              else {
                FUN_002f35a4(temp_v37,temp_v20,temp_v14);
                temp_v23 = &temp_v29;
                temp_v26 = (unsigned char *)(param_1 + 8);
                temp_v4 = FUN_002f360c(temp_v41,temp_v37);
                *(unsigned int *)(temp_v4 + 0x44) = 0;
                *(unsigned int *)(temp_v4 + 0x40) = 0;
                FUN_0012fe3c(temp_v23,temp_v26,temp_v4);
                puVar8 = temp_v29;
                *(unsigned int *)(puVar8 + 0x54) = temp_v25;
                *(int *)(puVar8 + 0x50) = temp_v24;
              }
            }
            else {
              *(unsigned int *)(puVar8 + 0x54) = temp_v25;
              *(int *)(puVar8 + 0x50) = temp_v24;
            }
            FUN_002e6e5c(temp_v39);
          }
        }
      }
      if (*(romwright_code **)(temp_v3 + 0x34) != (romwright_code *)0x0) {
        temp_v27 = (**(romwright_code **)(temp_v3 + 0x34))(temp_v14,temp_v38,temp_v44);
      }
      if (temp_v27 != 0) {
        piVar9 = aiStack_1bc;
        FUN_002f3624(piVar9,2,temp_v14);
        if (piVar9 != (int *)0x0) {
          temp_v4 = FUN_002eb83c();
          if (temp_v4 != 0) {
            FUN_002eb17c(piVar9,temp_v38);
            (**(romwright_code **)(**(int **)(temp_v3 + 0x30) + 0x20))
                      (*(int **)(temp_v3 + 0x30),temp_v43,*(unsigned char *)(param_1 + 4),1,1,piVar9,0);
            FUN_002e7232(piVar9);
          }
          else {
            (**(romwright_code **)(*piVar9 + 4))(piVar9);
          }
        }
        temp_v11 = 1;
        strDestroy(aiStack_1bc);
        FUN_002e7232(temp_v44);
        return temp_v11;
      }
    }
    strDestroy(aiStack_1bc);
  }
  else {
    FUN_002ede60(temp_v14,temp_v20);
    FUN_002eb87c(temp_v3,temp_v14,temp_v24,1);
    temp_v4 = (**(romwright_code **)(**(int **)(temp_v3 + 0x30) + 0x24))
                      (*(int **)(temp_v3 + 0x30),temp_v43,aiStack_1bc,temp_v14);
    if (temp_v4 == 0) {
      FUN_002eb914(temp_v3,temp_v14);
      strDestroy(aiStack_1bc);
      return temp_v11;
    }
    temp_v11 = 1;
    strDestroy(aiStack_1bc);
    FUN_002e7232(temp_v44);
  }
  return temp_v11;
}

} /* extern "C" */
