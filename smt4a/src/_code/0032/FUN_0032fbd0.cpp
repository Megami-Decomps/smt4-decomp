/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0032fbd0` (_code @ 0x32fbd0, 0x2d0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184310(int);
int FUN_00239234(...);
int FUN_002e6354(short *, int);
int FUN_004bcd90(short *);
int rt_memcpy_w(char [22], unsigned char [20], int);

/* stack frame of param_1: 40 slot(s), 90 byte(s) */
typedef struct {
    unsigned char sp6D; /* 0x6d: local_6d */
    unsigned short sp134; /* 0x134: local_134 */
    unsigned short sp136; /* 0x136: local_136 */
    unsigned int sp154; /* 0x154: local_154 */
    unsigned int sp164; /* 0x164: local_164 */
    unsigned int sp168; /* 0x168: local_168 */
    unsigned short sp16C; /* 0x16c: local_16c */
    unsigned short sp16E; /* 0x16e: local_16e */
    unsigned short sp170; /* 0x170: local_170 */
    unsigned short sp172; /* 0x172: local_172 */
    unsigned short sp174; /* 0x174: local_174 */
    unsigned short sp176; /* 0x176: local_176 */
    unsigned short sp178; /* 0x178: local_178 */
    unsigned short sp17A; /* 0x17a: local_17a */
    unsigned short sp17C; /* 0x17c: local_17c */
    unsigned short sp188; /* 0x188: local_188 */
    unsigned short sp18C; /* 0x18c: local_18c */
    unsigned short sp18E; /* 0x18e: local_18e */
    unsigned short sp190; /* 0x190: local_190 */
    unsigned short sp192; /* 0x192: local_192 */
    unsigned short sp194; /* 0x194: local_194 */
    unsigned short sp196; /* 0x196: local_196 */
    unsigned short sp198; /* 0x198: local_198 */
    unsigned int sp1B0; /* 0x1b0: local_1b0 */
    unsigned int sp1BC; /* 0x1bc: local_1bc */
    unsigned int sp1CC; /* 0x1cc: local_1cc */
    unsigned short sp1CE; /* 0x1ce: local_1ce */
    unsigned short sp1D0; /* 0x1d0: local_1d0 */
    unsigned char sp1D2; /* 0x1d2: local_1d2 */
    unsigned short sp1D4; /* 0x1d4: local_1d4 */
    unsigned short sp1D6; /* 0x1d6: local_1d6 */
    unsigned short sp1D8; /* 0x1d8: local_1d8 */
    unsigned short sp1DA; /* 0x1da: local_1da */
    unsigned short sp1DC; /* 0x1dc: local_1dc */
    unsigned short sp1DE; /* 0x1de: local_1de */
    unsigned short sp1E0; /* 0x1e0: local_1e0 */
    unsigned short sp1E2; /* 0x1e2: local_1e2 */
    unsigned short sp1E4; /* 0x1e4: local_1e4 */
    unsigned short sp1E6; /* 0x1e6: local_1e6 */
    unsigned short sp1E8; /* 0x1e8: local_1e8 */
} param_1_stack;

extern unsigned short FUN_0017760c(short *);
/* Supplied declaration required: FUN_00184310. */
/* Supplied declaration required: FUN_00239234. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_004bcd90. */
extern unsigned int FUN_004bd21c(short *);
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_0032fbd0(short *param_1)

{
/* irregular: 3 unstructured edge(s); 1 goto(s); 5 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  short temp_v7;
  short temp_v8;
  short temp_v9;
  short temp_v10;
  short temp_v11;
  short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned char temp_v18;
  short temp_v19;
  short temp_v20;
  unsigned int temp_v21;
  unsigned int uStack_1c8;
  unsigned int uStack_1c4;
  unsigned int uStack_1c0;
  unsigned int temp_v22;
  unsigned int uStack_1b8;
  int temp_v23;
  unsigned char temp_v24 [20];
  short temp_v25;
  short temp_v26;
  short temp_v27;
  short temp_v28;
  short temp_v29;
  short temp_v30;
  short temp_v31;
  unsigned short temp_v32;
  unsigned short temp_v33;
  unsigned short temp_v34;
  unsigned short temp_v35;
  unsigned short temp_v36;
  unsigned short temp_v37;
  unsigned short temp_v38;
  unsigned short temp_v39;
  unsigned short temp_v40;
  unsigned short temp_v41;
  int temp_v42;
  int temp_v43;
  unsigned int uStack_160;
  unsigned int uStack_15c;
  unsigned int uStack_158;
  unsigned int temp_v44;
  unsigned int uStack_150;
  char acStack_14c [22];
  short temp_v45;
  short temp_v46;
  unsigned char temp_v47;
  unsigned char temp_v48 [80];
  
  temp_v0 = param_1[0x31];
  temp_v3 = FUN_00239234(temp_v0,temp_v48);
  temp_v6 = 0;
  if (temp_v3 != 0) {
    FUN_00184310(temp_v0);
    FUN_00239234(temp_v0,&temp_v7);
    FUN_002e6354(&temp_v25,300);
    temp_v46 = temp_v7;
    temp_v25 = temp_v19;
    temp_v26 = temp_v20;
    temp_v27 = temp_v8;
    temp_v29 = temp_v10;
    temp_v28 = temp_v9;
    temp_v30 = temp_v11;
    temp_v31 = temp_v12;
    temp_v33 = 0;
    temp_v34 = 0;
    temp_v35 = temp_v13;
    temp_v37 = temp_v15;
    temp_v38 = temp_v16;
    temp_v39 = temp_v17;
    temp_v36 = temp_v14;
    temp_v45 = temp_v0;
    rt_memcpy_w(acStack_14c,temp_v24,0x12);
    temp_v43 = temp_v21;
    uStack_160 = uStack_1c8;
    uStack_15c = uStack_1c4;
    uStack_158 = uStack_1c0;
    temp_v44 = temp_v22;
    uStack_150 = uStack_1b8;
    temp_v42 = temp_v23;
    temp_v47 = (unsigned char)(((unsigned int)temp_v18 << 0x1a) >> 0x1c);
    FUN_004bcd90(&temp_v25);
    temp_v40 = FUN_0017760c(&temp_v25);
    temp_v41 = temp_v32;
    if ((temp_v46 != param_1[0x32]) || (temp_v6 = 1, temp_v42 != *(int *)(param_1 + 0x18))) {
      temp_v6 = 0;
    }
    if (temp_v25 != *param_1) {
      temp_v6 = 0;
    }
    if (temp_v26 != param_1[1]) {
      temp_v6 = 0;
    }
    if ((int)param_1[2] + (unsigned int)(unsigned short)param_1[0x56] != (int)temp_v27) {
      temp_v6 = 0;
    }
    if ((int)param_1[3] + (unsigned int)(unsigned short)param_1[0x57] != (int)temp_v28) {
      temp_v6 = 0;
    }
    if ((int)param_1[4] + (unsigned int)(unsigned short)param_1[0x58] != (int)temp_v29) {
      temp_v6 = 0;
    }
    if ((int)param_1[5] + (unsigned int)(unsigned short)param_1[0x59] != (int)temp_v30) {
      temp_v6 = 0;
    }
    if ((int)param_1[6] + (unsigned int)(unsigned short)param_1[0x5a] != (int)temp_v31) {
      temp_v6 = 0;
    }
    temp_v4 = FUN_004bd21c(param_1);
    temp_v3 = 0;
    if (temp_v3 < (int)temp_v4) {
      do {
        temp_v0 = param_1[temp_v3 + 0x1a];
        if (temp_v0 != 0) {
          temp_v1 = temp_v4 & 1;
          temp_v2 = temp_v4 & 1;
          if ((int)temp_v4 < 1) {
            temp_v1 = temp_v4;
            temp_v2 = 0;
          }
          temp_v5 = 0;
          if (0 < (int)temp_v1) {
            do {
              if (temp_v0 == *(short *)((int)&temp_v43 + temp_v5 * 2)) goto LAB_0032fe48;
              temp_v5 = temp_v5 + 1;
            } while ((int)temp_v5 < (int)temp_v2);
          }
          while ((temp_v5 = temp_v2, (int)temp_v4 > (int)temp_v5 &&
                 (temp_v0 != *(short *)((int)&temp_v43 + temp_v5 * 2)))) {
            if (temp_v0 == *(short *)((int)&temp_v43 + temp_v5 * 2 + 2)) {
              temp_v5 = temp_v5 + 1;
              break;
            }
            temp_v2 = temp_v5 + 2;
          }
LAB_0032fe48:
          if (temp_v5 == temp_v4) {
            temp_v6 = 0;
            break;
          }
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (int)temp_v4);
    }
    temp_v3 = 0;
    do {
      if (*(char *)((int)param_1 + temp_v3 + 0x4c) != acStack_14c[temp_v3]) {
        return 0;
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 0x12);
  }
  return temp_v6;
}

} /* extern "C" */
