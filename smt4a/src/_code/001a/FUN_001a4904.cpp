/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a4904` (_code @ 0x1a4904, 0x634 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0018a924(...);
int mtx44Copy(float [7], float *);
int nn_math_ARMv6_MTX34CopyAsm(...);
int nn_math_ARMv6_MTX34MultAsm(...);

/* stack frame of param_3: 49 slot(s), 196 byte(s) */
typedef struct {
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp64; /* 0x64: local_64 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
    unsigned int sp70; /* 0x70: local_70 */
    unsigned int sp9C; /* 0x9c: local_9c */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC4; /* 0xc4: local_c4 */
    unsigned int spC8; /* 0xc8: local_c8 */
    unsigned int spCC; /* 0xcc: local_cc */
    unsigned int spD0; /* 0xd0: local_d0 */
    unsigned int spD4; /* 0xd4: local_d4 */
    unsigned int spD8; /* 0xd8: local_d8 */
    unsigned int spDC; /* 0xdc: local_dc */
    unsigned int spE0; /* 0xe0: local_e0 */
    unsigned int spE4; /* 0xe4: local_e4 */
    unsigned int spE8; /* 0xe8: local_e8 */
    unsigned int spEC; /* 0xec: local_ec */
    unsigned int spF0; /* 0xf0: local_f0 */
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
    unsigned int sp124; /* 0x124: local_124 */
    unsigned int sp128; /* 0x128: local_128 */
    unsigned int sp12C; /* 0x12c: local_12c */
    unsigned int sp130; /* 0x130: local_130 */
    unsigned int sp134; /* 0x134: local_134 */
    unsigned int sp138; /* 0x138: local_138 */
} param_3_stack;

extern unsigned int _ZGVZN2nw4math5MTX448IdentityEvE8identity; /* 0x5c4c30 */
extern float _ZZN2nw4math5MTX448IdentityEvE8identity; /* 0x64c084 */
extern float DAT_0064c088; /* 0x64c088 */
extern float DAT_0064c08c; /* 0x64c08c */
extern float DAT_0064c090; /* 0x64c090 */
extern float DAT_0064c094; /* 0x64c094 */
extern float DAT_0064c098; /* 0x64c098 */
extern float DAT_0064c09c; /* 0x64c09c */
extern float DAT_0064c0a0; /* 0x64c0a0 */
extern float DAT_0064c0a4; /* 0x64c0a4 */
extern float DAT_0064c0a8; /* 0x64c0a8 */
extern float DAT_0064c0ac; /* 0x64c0ac */
extern float DAT_0064c0b0; /* 0x64c0b0 */
extern float DAT_0064c0b4; /* 0x64c0b4 */
extern float DAT_0064c0b8; /* 0x64c0b8 */
extern float DAT_0064c0bc; /* 0x64c0bc */
extern float DAT_0064c0c0; /* 0x64c0c0 */

/* Supplied declaration required: FUN_0018a924. */
/* Supplied declaration required: mtx44Copy. */
extern unsigned int FUN_001a1e28(void);
extern int __cxa_guard_acquire(unsigned int *);
/* Supplied declaration required: nn_math_ARMv6_MTX34CopyAsm. */
/* Supplied declaration required: nn_math_ARMv6_MTX34MultAsm. */


unsigned int FUN_001a4904(int param_1,unsigned short *param_2,int param_3)

{
/* irregular: 2 unstructured edge(s); 3 goto(s); 4 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  unsigned short temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  float *pfVar8;
  int temp_v7;
  unsigned int temp_v8;
  float temp_v9;
  float temp_v10;
  float temp_v11;
  float temp_v12;
  float temp_v13;
  unsigned long long temp_v14;
  unsigned long long temp_v15;
  unsigned long long temp_v16;
  float temp_v17;
  unsigned long long temp_v18;
  float temp_v19 [7];
  float temp_v20;
  float temp_v21;
  float temp_v22;
  float temp_v23;
  float temp_v24;
  float temp_v25;
  float temp_v26;
  float temp_v27;
  float temp_v28;
  float temp_v29 [6];
  unsigned int temp_v30;
  unsigned int temp_v31;
  unsigned int temp_v32;
  unsigned int temp_v33;
  float temp_v34;
  unsigned int temp_v35;
  float temp_v36 [6];
  unsigned int temp_v37;
  unsigned int temp_v38;
  unsigned int temp_v39;
  unsigned int temp_v40;
  float temp_v41;
  unsigned int temp_v42;
  unsigned char temp_v43 [40];
  float temp_v44;
  float temp_v45;
  float temp_v46;
  float temp_v47;
  unsigned int temp_v48;
  float temp_v49;
  float temp_v50;
  float temp_v51;
  float temp_v52 [11];
  
  temp_v8 = 0;
  temp_v16 = 0x3f00000000000000;
  temp_v12 = 0.0f;
  temp_v13 = 1.0f;
  temp_v18 = 0xbf800000bf000000;
  temp_v48 = 0;
  do {
    temp_v7 = param_1 + temp_v8 * 0x18;
    temp_v0 = *(unsigned char *)(temp_v7 + 0x94);
    if ((temp_v0 & 1) == 0) {
      if (*(char *)(temp_v7 + 0x96) != '\x03') {
        if ((*(char *)(temp_v7 + 0x96) == '\x04') && ((*(unsigned char *)(param_3 + 0x48) & 1) != 0))
        goto LAB_001a49b8;
      }
      else if ((*(unsigned char *)(*(int *)(param_3 + 0x40) + (*(char *)(temp_v7 + 0x97) + 1) * 0x6c) & 1) != 0
              ) goto LAB_001a49b8;
      if ((*param_2 & *(unsigned short *)(temp_v8 * 2 + 0x53ccc8)) != 0) goto LAB_001a49b8;
    }
    else {
LAB_001a49b8:
      *(unsigned char *)(temp_v7 + 0x94) = temp_v0 & 0xfe;
      temp_v1 = *(char *)(temp_v7 + 0x95);
      if (temp_v1 != '\0') {
        if (temp_v1 != '\x01') {
          if (temp_v1 != '\x02') {
            if ((_ZGVZN2nw4math5MTX448IdentityEvE8identity & 1) == 0) {
              temp_v3 = __cxa_guard_acquire(&_ZGVZN2nw4math5MTX448IdentityEvE8identity);
              if (temp_v3 != 0) {
                _ZZN2nw4math5MTX448IdentityEvE8identity = temp_v13;
                DAT_0064c088 = temp_v12;
                DAT_0064c08c = temp_v12;
                DAT_0064c090 = temp_v12;
                DAT_0064c094 = temp_v12;
                DAT_0064c098 = temp_v13;
                DAT_0064c09c = temp_v12;
                DAT_0064c0a0 = temp_v12;
                DAT_0064c0a4 = temp_v12;
                DAT_0064c0a8 = temp_v12;
                DAT_0064c0ac = temp_v13;
                DAT_0064c0b0 = temp_v12;
                DAT_0064c0b4 = temp_v12;
                DAT_0064c0b8 = temp_v12;
                DAT_0064c0bc = temp_v12;
                DAT_0064c0c0 = temp_v13;
              }
            }
            mtx44Copy(temp_v19,&_ZZN2nw4math5MTX448IdentityEvE8identity);
          }
          else {
            temp_v11 = *(float *)(temp_v7 + 0xa4);
            temp_v14 = *(unsigned long long *)(temp_v7 + 0x98);
            temp_v10 = *(float *)(temp_v7 + 0xa8);
            FUN_0018a924(&temp_v46,&temp_v47);
            temp_v17 = (float)((unsigned long long)temp_v16 >> 0x20);
            temp_v9 = (float)temp_v14;
            temp_v19[5] = (float)((unsigned long long)temp_v14 >> 0x20);
            temp_v19[4] = temp_v19[5] * temp_v46;
            temp_v19[5] = temp_v19[5] * temp_v47;
            temp_v19[0] = temp_v9 * temp_v47;
            temp_v19[1] = -(temp_v9 * temp_v46);
            temp_v20 = temp_v19[4] * (-temp_v11 - temp_v17) + temp_v19[5] * (temp_v10 - temp_v17) +
                        temp_v17;
            temp_v27 = temp_v12;
            temp_v26 = temp_v12;
            temp_v25 = temp_v12;
            temp_v24 = temp_v12;
            temp_v22 = temp_v12;
            temp_v21 = temp_v12;
            temp_v19[6] = temp_v12;
            temp_v19[2] = temp_v12;
            temp_v28 = temp_v13;
            temp_v23 = temp_v13;
            temp_v19[3] = (temp_v9 * temp_v47 * (-temp_v11 - temp_v17) -
                           temp_v9 * temp_v46 * (temp_v10 - temp_v17)) + temp_v17;
          }
        }
        else {
          temp_v14 = *(unsigned long long *)(temp_v7 + 0x98);
          temp_v15 = *(unsigned long long *)(temp_v7 + 0xa4);
          FUN_0018a924(&temp_v51,temp_v52);
          temp_v9 = (float)temp_v14;
          temp_v10 = (float)((unsigned long long)temp_v14 >> 0x20);
          temp_v19[0] = temp_v9 * temp_v52[0];
          temp_v11 = (float)((unsigned long long)temp_v15 >> 0x20);
          temp_v19[1] = temp_v9 * temp_v51;
          temp_v19[5] = temp_v10 * temp_v52[0];
          temp_v20 = (temp_v51 * (float)temp_v15 - temp_v52[0] * temp_v11) * temp_v10;
          temp_v27 = temp_v12;
          temp_v26 = temp_v12;
          temp_v25 = temp_v12;
          temp_v24 = temp_v12;
          temp_v22 = temp_v12;
          temp_v21 = temp_v12;
          temp_v19[6] = temp_v12;
          temp_v19[2] = temp_v12;
          temp_v28 = temp_v13;
          temp_v23 = temp_v13;
          temp_v19[3] = (-(temp_v52[0] * (float)temp_v15) - temp_v51 * temp_v11) * temp_v9;
          temp_v19[4] = -(temp_v10 * temp_v51);
        }
      }
      else {
        temp_v14 = *(unsigned long long *)(temp_v7 + 0x98);
        temp_v15 = *(unsigned long long *)(temp_v7 + 0xa4);
        FUN_0018a924(&temp_v49,&temp_v50);
        temp_v9 = (float)temp_v14;
        temp_v10 = (float)((unsigned long long)temp_v14 >> 0x20);
        temp_v19[0] = temp_v9 * temp_v50;
        temp_v11 = (float)((unsigned long long)temp_v16 >> 0x20);
        temp_v19[1] = -(temp_v9 * temp_v49);
        temp_v19[3] = (((temp_v49 * temp_v11 - temp_v50 * temp_v11) + temp_v11) - (float)temp_v15) * temp_v9
        ;
        temp_v19[4] = temp_v10 * temp_v49;
        temp_v19[5] = temp_v10 * temp_v50;
        temp_v20 = (((temp_v49 * (float)temp_v18 - temp_v50 * temp_v11) + temp_v11) -
                    (float)((unsigned long long)temp_v15 >> 0x20)) * temp_v10;
        temp_v27 = temp_v12;
        temp_v26 = temp_v12;
        temp_v25 = temp_v12;
        temp_v24 = temp_v12;
        temp_v22 = temp_v12;
        temp_v21 = temp_v12;
        temp_v19[6] = temp_v12;
        temp_v19[2] = temp_v12;
        temp_v28 = temp_v13;
        temp_v23 = temp_v13;
      }
      switch(*(unsigned char *)(temp_v7 + 0x96)) {
      case 1:
        temp_v19[0] = *(float *)(param_3 + 0x10);
        temp_v19[1] = *(float *)(param_3 + 0x14);
        temp_v19[2] = *(float *)(param_3 + 0x18);
        temp_v19[3] = *(float *)(param_3 + 0x1c);
        temp_v19[4] = *(float *)(param_3 + 0x20);
        temp_v19[5] = *(float *)(param_3 + 0x24);
        temp_v19[6] = *(float *)(param_3 + 0x28);
        temp_v20 = *(float *)(param_3 + 0x2c);
        temp_v21 = *(float *)(param_3 + 0x30);
        temp_v22 = *(float *)(param_3 + 0x34);
        temp_v23 = *(float *)(param_3 + 0x38);
        temp_v24 = *(float *)(param_3 + 0x3c);
        break;
      case 3:
        temp_v7 = *(int *)(param_3 + 0x40) + (*(char *)(temp_v7 + 0x97) + 1) * 0x6c;
        if (temp_v8 == 0) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = 2;
        }
        temp_v3 = param_1 + temp_v3 * 4;
        *(float *)(temp_v3 + 0x80) = temp_v19[3];
        *(float *)(temp_v3 + 0x84) = temp_v20;
        temp_v19[3] = temp_v12;
        temp_v20 = temp_v12;
        nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v19,temp_v7 + 4);
        nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v19,temp_v7 + 0x34);
        *(unsigned char *)(param_1 + 0x90) = 1;
        break;
      case 4:
        *(float *)(param_1 + 0x80) = temp_v19[3];
        *(float *)(param_1 + 0x84) = temp_v20;
        temp_v19[3] = temp_v12;
        temp_v20 = temp_v12;
        nn_math_ARMv6_MTX34CopyAsm(temp_v43,param_3 + 0x4c);
        temp_v1 = *(char *)(param_3 + 0x49);
        if (temp_v1 != '\0') {
          if (temp_v1 != '\x01') {
            if (temp_v1 == '\x02') {
              temp_v9 = temp_v13 / (*(float *)(param_3 + 0xb0) - *(float *)(param_3 + 0xac));
              temp_v4 = FUN_001a1e28();
              nn_math_ARMv6_MTX34CopyAsm(temp_v36,temp_v4);
              temp_v36[1] = 0.0f;
              temp_v36[2] = 0.0f;
              temp_v36[3] = 0.0f;
              temp_v36[4] = 0.0f;
              temp_v37 = 0;
              temp_v38 = 0;
              temp_v39 = 0;
              temp_v40 = 0;
              temp_v42 = 0;
              temp_v36[0] = temp_v9;
              temp_v36[5] = temp_v9;
              temp_v41 = temp_v9;
              nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v19,temp_v36);
            }
          }
          else {
            temp_v44 = (float)((unsigned long long)temp_v18 >> 0x20) /
                       (*(float *)(param_3 + 0xb0) - *(float *)(param_3 + 0xac));
            temp_v45 = *(float *)(param_3 + 0xac) * temp_v44;
          }
        }
        else {
          temp_v9 = temp_v13 / (*(float *)(param_3 + 0xb0) - *(float *)(param_3 + 0xac));
          temp_v4 = FUN_001a1e28();
          nn_math_ARMv6_MTX34CopyAsm(temp_v29,temp_v4);
          temp_v29[1] = 0.0f;
          temp_v29[2] = 0.0f;
          temp_v29[3] = 0.0f;
          temp_v29[4] = 0.0f;
          temp_v30 = 0;
          temp_v31 = 0;
          temp_v32 = 0;
          temp_v33 = 0;
          temp_v35 = 0;
          temp_v29[0] = temp_v9;
          temp_v29[5] = temp_v9;
          temp_v34 = temp_v9;
          nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v19,temp_v29);
        }
        nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v19,temp_v43);
        nn_math_ARMv6_MTX34MultAsm(temp_v19,temp_v19,param_3 + 0x7c);
        *(unsigned char *)(param_1 + 0x90) = 1;
      }
      temp_v2 = *(unsigned short *)((unsigned int)*(unsigned char *)((int)param_2 + 3) * 2 + 0x544904) >>
              ((temp_v8 & 0x3f) << 2);
      if ((temp_v2 & 7) != 0) {
        temp_v5 = 0;
        do {
          if (((temp_v2 & 7 & (1 << (temp_v5 & 0xff))) != 0) &&
             (temp_v7 = 0, *(char *)(temp_v5 + 0x544910) != '\0')) {
            do {
              temp_v3 = temp_v7 * 4;
              temp_v9 = temp_v19[temp_v7 * 4 + 1];
              temp_v10 = temp_v19[temp_v7 * 4 + 2];
              temp_v11 = temp_v19[temp_v7 * 4 + 3];
              temp_v6 = (unsigned int)*(unsigned char *)(temp_v5 + 0x544913) + temp_v7;
              temp_v7 = temp_v7 + 1;
              pfVar8 = (float *)(param_1 + temp_v6 * 0x10);
              *pfVar8 = temp_v19[temp_v3];
              pfVar8[1] = temp_v9;
              pfVar8[2] = temp_v10;
              pfVar8[3] = temp_v11;
            } while (temp_v7 < (int)(unsigned int)*(unsigned char *)(temp_v5 + 0x544910));
          }
          temp_v5 = temp_v5 + 1;
        } while ((int)temp_v5 < 3);
        temp_v48 = 1;
      }
    }
    temp_v8 = temp_v8 + 1;
    if ((int)temp_v8 >= 3) {
      return temp_v48;
    }
  } while( 1 );
}

} /* extern "C" */
