/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00474d0c` (_code @ 0x474d0c, 0x9f0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001029f4(...);
int FUN_00102bbc(...);
int FUN_00180008(...);
int FUN_0019a46c(...);
int FUN_001a1564(int, int, int);
int FUN_002e342c(...);
int FUN_002e3494(...);
int FUN_002e56ec(int, unsigned char *);
int FUN_002e6354(...);
int FUN_002e783c(...);
int FUN_002f5020(unsigned int *, unsigned char *, int, int);
int FUN_0030cb44(...);
int FUN_0037a728(...);
int FUN_00426eb8(...);
int FUN_0042718c(...);
int FUN_00428060(...);
int FUN_00473c5c(...);
int FUN_004749a0(...);
int FUN_00474aec(...);
int FUN_004ffd58(...);
int FUN_004ffee0(...);
int FUN_004fff5c(...);
int FUN_004fffc0(...);
int FUN_00500054(...);
int FUN_005001f8(unsigned char [64], unsigned int, unsigned int);
int nn_fnd_DateTime_DateTime_sub_object(...);

/* stack frame of param_1: 35 slot(s), 140 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp1A90; /* 0x1a90: local_1a90 */
    unsigned int sp1A94; /* 0x1a94: local_1a94 */
    unsigned int sp1A98; /* 0x1a98: local_1a98 */
    unsigned int sp1A9C; /* 0x1a9c: local_1a9c */
    unsigned int sp1AA0; /* 0x1aa0: local_1aa0 */
    unsigned int sp1AA4; /* 0x1aa4: local_1aa4 */
    unsigned int sp1AA8; /* 0x1aa8: local_1aa8 */
    unsigned int sp1AAC; /* 0x1aac: local_1aac */
    unsigned int sp1AB0; /* 0x1ab0: local_1ab0 */
    unsigned int sp1AB4; /* 0x1ab4: local_1ab4 */
    unsigned int sp1AB8; /* 0x1ab8: local_1ab8 */
    unsigned int sp1AD8; /* 0x1ad8: local_1ad8 */
    unsigned int sp1AF8; /* 0x1af8: local_1af8 */
    unsigned int sp1B18; /* 0x1b18: local_1b18 */
    unsigned int sp1B38; /* 0x1b38: local_1b38 */
    unsigned int sp1B58; /* 0x1b58: local_1b58 */
    unsigned int sp1B78; /* 0x1b78: local_1b78 */
    unsigned int sp1B98; /* 0x1b98: local_1b98 */
    unsigned int sp1BB0; /* 0x1bb0: local_1bb0 */
    unsigned int sp1BB8; /* 0x1bb8: local_1bb8 */
    unsigned int sp1BD0; /* 0x1bd0: local_1bd0 */
    unsigned int sp1BD8; /* 0x1bd8: local_1bd8 */
    unsigned int sp1BF0; /* 0x1bf0: local_1bf0 */
    unsigned int sp1BF8; /* 0x1bf8: local_1bf8 */
    unsigned int sp1BFC; /* 0x1bfc: local_1bfc */
    unsigned int sp1C00; /* 0x1c00: local_1c00 */
    unsigned int sp1C04; /* 0x1c04: local_1c04 */
    unsigned int sp1C08; /* 0x1c08: local_1c08 */
    unsigned int sp1C10; /* 0x1c10: local_1c10 */
    unsigned int sp1C14; /* 0x1c14: local_1c14 */
    unsigned int sp1C1C; /* 0x1c1c: local_1c1c */
    unsigned int sp1C20; /* 0x1c20: local_1c20 */
    unsigned int sp1C24; /* 0x1c24: local_1c24 */
    unsigned int sp1C28; /* 0x1c28: local_1c28 */
} param_1_stack;

extern unsigned char LAB_0047d834; /* 0x47d834 */
extern unsigned char LAB_0047d8e8; /* 0x47d8e8 */
extern int DAT_00570260; /* 0x570260 */

/* Supplied declaration required: FUN_001029f4. */
/* Supplied declaration required: FUN_00102bbc. */
/* Supplied declaration required: FUN_00180008. */
/* Supplied declaration required: FUN_0019a46c. */
/* Supplied declaration required: FUN_001a1564. */
extern unsigned char FUN_001a7470(int);
extern unsigned char FUN_001a747c(int);
extern int FUN_001d25ec(int);
/* Supplied declaration required: FUN_002e342c. */
/* Supplied declaration required: FUN_002e3494. */
/* Supplied declaration required: FUN_002e56ec. */
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_002e783c. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: FUN_0030cb44. */
/* Supplied declaration required: FUN_0037a728. */
/* Supplied declaration required: FUN_00426eb8. */
/* Supplied declaration required: FUN_0042718c. */
extern unsigned int FUN_00427348(int);
extern unsigned int FUN_00427354(int);
/* Supplied declaration required: FUN_00428060. */
/* Supplied declaration required: FUN_00473c5c. */
/* Supplied declaration required: FUN_004749a0. */
/* Supplied declaration required: FUN_00474aec. */
extern int FUN_004ffd38(unsigned char *);
extern int FUN_004ffd4c(unsigned char *);
/* Supplied declaration required: FUN_004ffd58. */
/* Supplied declaration required: FUN_004ffee0. */
/* Supplied declaration required: FUN_004fff5c. */
/* Supplied declaration required: FUN_004fffc0. */
/* Supplied declaration required: FUN_00500054. */
/* Supplied declaration required: FUN_005001f8. */
/* Supplied declaration required: nn_fnd_DateTime_DateTime_sub_object. */
extern int nn_fnd_DateTime_GetDay(unsigned int);
extern int nn_fnd_DateTime_GetMonth(unsigned int);
extern int nn_fnd_DateTime_GetYear(unsigned int);


int FUN_00474d0c(int param_1)

{
/* irregular: 26 native warning(s); review required */
  unsigned short temp_v0;
  char temp_v1;
  unsigned char temp_v2;
  unsigned char temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  char *pcVar10;
  char *pcVar11;
  int temp_v8;
  unsigned int *puVar13;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned short *puVar17;
  unsigned char temp_v12;
  unsigned int temp_v13;
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned char *temp_v17;
  int temp_v18;
  unsigned int temp_v19;
  int uStack_1c0c;
  unsigned int temp_v20;
  unsigned int temp_v21;
  unsigned int temp_v22;
  unsigned int temp_v23;
  int temp_v24;
  unsigned int uStack_1bf4;
  int temp_v25;
  unsigned int uStack_1bec;
  unsigned int uStack_1be8;
  unsigned int uStack_1be4;
  unsigned int uStack_1be0;
  unsigned int uStack_1bdc;
  unsigned int temp_v26;
  unsigned int uStack_1bd4;
  int temp_v27;
  unsigned int uStack_1bcc;
  int uStack_1bc8;
  unsigned int uStack_1bc4;
  unsigned int uStack_1bc0;
  unsigned int uStack_1bbc;
  int temp_v28;
  unsigned int uStack_1bb4;
  int temp_v29;
  unsigned int uStack_1bac;
  int uStack_1ba8;
  unsigned int uStack_1ba4;
  unsigned int uStack_1ba0;
  unsigned int uStack_1b9c;
  unsigned int temp_v30;
  unsigned int uStack_1b94;
  int iStack_1b90;
  unsigned int uStack_1b8c;
  unsigned int uStack_1b88;
  unsigned int uStack_1b84;
  unsigned int uStack_1b80;
  unsigned int uStack_1b7c;
  int temp_v31;
  unsigned int uStack_1b74;
  unsigned int uStack_1b70;
  unsigned int uStack_1b6c;
  unsigned int uStack_1b68;
  unsigned int uStack_1b64;
  unsigned int uStack_1b60;
  unsigned int uStack_1b5c;
  unsigned int temp_v32;
  unsigned int uStack_1b54;
  unsigned int uStack_1b50;
  unsigned int uStack_1b4c;
  unsigned int uStack_1b48;
  unsigned int uStack_1b44;
  unsigned int uStack_1b40;
  unsigned int uStack_1b3c;
  int temp_v33;
  unsigned int uStack_1b34;
  unsigned int uStack_1b30;
  unsigned int uStack_1b2c;
  unsigned int uStack_1b28;
  unsigned int uStack_1b24;
  unsigned int uStack_1b20;
  unsigned int uStack_1b1c;
  unsigned int temp_v34;
  unsigned int uStack_1b14;
  unsigned int uStack_1b10;
  unsigned int uStack_1b0c;
  unsigned int uStack_1b08;
  unsigned int uStack_1b04;
  unsigned int uStack_1b00;
  unsigned int uStack_1afc;
  int temp_v35;
  unsigned int uStack_1af4;
  unsigned int uStack_1af0;
  unsigned int uStack_1aec;
  unsigned int uStack_1ae8;
  unsigned int uStack_1ae4;
  unsigned int uStack_1ae0;
  unsigned int uStack_1adc;
  int temp_v36;
  unsigned int uStack_1ad4;
  unsigned int uStack_1ad0;
  unsigned int uStack_1acc;
  unsigned int uStack_1ac8;
  unsigned int uStack_1ac4;
  unsigned int uStack_1ac0;
  unsigned int uStack_1abc;
  int temp_v37;
  int temp_v38;
  int temp_v39;
  int temp_v40;
  unsigned int temp_v41;
  int temp_v42;
  int temp_v43;
  int *temp_v44;
  int temp_v45;
  unsigned int temp_v46;
  int temp_v47;
  unsigned int uStack_1a8c;
  unsigned char temp_v48 [4608];
  unsigned short temp_v49 [1024];
  char acStack_88 [32];
  unsigned char temp_v50 [64];
  int temp_v51;
  
  temp_v8 = DAT_00570260;
  temp_v44 = (int *)(DAT_00570260 + 0x67c);
  if (*(int *)(DAT_00570260 + 0x67c) == 0) {
    return 0;
  }
  puVar13 = (unsigned int *)(DAT_00570260 + 0x678);
  temp_v51 = param_1;
  if (*(int *)(DAT_00570260 + 0x678) != 0) {
    FUN_002e56ec(*(int *)(DAT_00570260 + 0x678),&LAB_0047d8e8);
    *puVar13 = 0;
  }
  temp_v9 = *(int *)(temp_v8 + 0x67c) + 1;
  puVar5 = (unsigned int *)(temp_v9 * 0x9c8 + 8);
  FUN_0030cb44();
  puVar13 = (unsigned int *)0x0;
  if (puVar5 != (unsigned int *)0x0) {
    puVar13 = puVar5 + 2;
    *puVar5 = 0x9c8;
    puVar5[1] = temp_v9;
    FUN_002f5020(puVar13,&LAB_0047d834,0x9c8,temp_v9);
  }
  *(unsigned int **)(temp_v8 + 0x678) = puVar13;
  temp_v18 = 0;
  temp_v41 = 0;
  if (*(int *)(temp_v8 + 0x67c) != 0) {
    temp_v39 = temp_v8 + 0x568;
    temp_v43 = temp_v8 + 0x4a8;
    temp_v38 = temp_v8 + 0x528;
    temp_v42 = temp_v8 + 0x4e8;
    do {
      FUN_005001f8(temp_v50,*(unsigned int *)(temp_v8 + 0x5a8),temp_v41);
      temp_v17 = temp_v50;
      FUN_004ffd58(&temp_v14,temp_v50);
      temp_v47 = temp_v14;
      uStack_1a8c = temp_v15;
      temp_v9 = nn_fnd_DateTime_GetDay((unsigned int)&temp_v47);
      temp_v4 = nn_fnd_DateTime_GetMonth((unsigned int)&temp_v47);
      temp_v5 = nn_fnd_DateTime_GetYear((unsigned int)&temp_v47);
      FUN_001a1564(temp_v5,temp_v4,temp_v9);
      if (temp_v5 <= *(int *)(temp_v51 + 0x18)) {
        temp_v4 = *(int *)(temp_v8 + 0x678) + temp_v18 * 0x9c8;
        temp_v45 = temp_v4 + 0x900;
        *(short *)(temp_v4 + 0x9aa) = (short)temp_v41;
        temp_v18 = temp_v18 + 1;
        temp_v9 = FUN_004fff5c(temp_v17,temp_v43);
        if ((temp_v9 != 0) && (FUN_001029f4(temp_v9,0,10), temp_v9 == 1)) {
          *(unsigned char *)(temp_v4 + 0x9b0) = 1;
        }
        temp_v6 = FUN_00427354(temp_v8 + 0x28);
        temp_v7 = FUN_00427348(temp_v8 + 0x28);
        FUN_00426eb8(&temp_v35,0,temp_v7,temp_v6);
        temp_v19 = temp_v35;
        uStack_1c0c = uStack_1af4;
        temp_v20 = uStack_1af0;
        temp_v21 = uStack_1aec;
        temp_v22 = uStack_1ae8;
        temp_v23 = uStack_1ae4;
        temp_v24 = uStack_1ae0;
        uStack_1bf4 = uStack_1adc;
        temp_v25 = temp_v36;
        uStack_1bec = uStack_1ad4;
        uStack_1be8 = uStack_1ad0;
        uStack_1be4 = uStack_1acc;
        uStack_1be0 = uStack_1ac8;
        uStack_1bdc = uStack_1ac4;
        temp_v26 = uStack_1ac0;
        uStack_1bd4 = uStack_1abc;
        temp_v9 = FUN_004fff5c(temp_v17,&temp_v19);
        if (temp_v9 == 0) {
          temp_v9 = 0x4752a0;
        }
        temp_v5 = temp_v8;
        FUN_00473c5c(temp_v8,temp_v4,0x40,temp_v9);
        if (temp_v5 < 0) {
          return temp_v5;
        }
        temp_v6 = FUN_00427354(temp_v8 + 0x28);
        temp_v7 = FUN_00427348(temp_v8 + 0x28);
        FUN_00426eb8(&temp_v33,2,temp_v7,temp_v6);
        temp_v31 = temp_v33;
        uStack_1b74 = uStack_1b34;
        uStack_1b70 = uStack_1b30;
        uStack_1b6c = uStack_1b2c;
        uStack_1b68 = uStack_1b28;
        uStack_1b64 = uStack_1b24;
        uStack_1b60 = uStack_1b20;
        uStack_1b5c = uStack_1b1c;
        temp_v32 = temp_v34;
        uStack_1b54 = uStack_1b14;
        uStack_1b50 = uStack_1b10;
        uStack_1b4c = uStack_1b0c;
        uStack_1b48 = uStack_1b08;
        uStack_1b44 = uStack_1b04;
        uStack_1b40 = uStack_1b00;
        uStack_1b3c = uStack_1afc;
        temp_v9 = FUN_004fff5c(temp_v17,&temp_v31);
        if (temp_v9 == 0) {
          temp_v9 = 0x4752a0;
        }
        temp_v5 = temp_v8;
        FUN_00473c5c(temp_v8,temp_v4 + 0x80,0x80,temp_v9);
        if (temp_v5 < 0) {
          return temp_v5;
        }
        FUN_002e6354(temp_v49,0x800);
        temp_v6 = FUN_00427354(temp_v8 + 0x28);
        temp_v7 = FUN_00427348(temp_v8 + 0x28);
        FUN_00426eb8(&temp_v28,3,temp_v7,temp_v6);
        temp_v24 = temp_v28;
        uStack_1bf4 = uStack_1bb4;
        temp_v25 = temp_v29;
        uStack_1bec = uStack_1bac;
        uStack_1be8 = uStack_1ba8;
        uStack_1be4 = uStack_1ba4;
        uStack_1be0 = uStack_1ba0;
        uStack_1bdc = uStack_1b9c;
        temp_v26 = temp_v30;
        uStack_1bd4 = uStack_1b94;
        temp_v27 = iStack_1b90;
        uStack_1bcc = uStack_1b8c;
        uStack_1bc8 = uStack_1b88;
        uStack_1bc4 = uStack_1b84;
        uStack_1bc0 = uStack_1b80;
        uStack_1bbc = uStack_1b7c;
        temp_v9 = FUN_004fff5c(temp_v17,&temp_v24);
        if (temp_v9 == 0) {
          temp_v9 = 0x4752a0;
        }
        temp_v5 = temp_v8;
        FUN_00473c5c(temp_v8,temp_v49,0x400,temp_v9);
        if (temp_v5 < 0) {
          return temp_v5;
        }
        temp_v19 = 0x2501000a;
        uStack_1c0c = 0xf80184aa;
        temp_v22 = 0x2542ff0d;
        temp_v21 = 0xf80484ae;
        temp_v20 = 0x251b003c;
        temp_v23 = 0x817c84be;
        temp_v9 = FUN_002e783c(temp_v49);
        if (0 < temp_v9) {
          puVar17 = temp_v49;
          do {
            temp_v13 = (unsigned int)*puVar17;
            if (temp_v13 == (temp_v19 & 0xffff)) {
              *puVar17 = (*(unsigned short *)((unsigned char *)&temp_v19 + 2));
            }
            else if (temp_v13 == (temp_v20 & 0xffff)) {
              *puVar17 = (*(unsigned short *)((unsigned char *)&temp_v20 + 2));
            }
            else if (temp_v13 == (temp_v22 & 0xffff)) {
              *puVar17 = (*(unsigned short *)((unsigned char *)&temp_v22 + 2));
            }
            temp_v9 = temp_v9 - 1;
            puVar17 = puVar17 + 1;
          } while (temp_v9 != 0);
        }
        FUN_00102bbc(temp_v4 + 0x180,temp_v49,0x800);
        FUN_0037a728(temp_v4 + 0x180,temp_v49,0x7fe);
        FUN_002e342c(temp_v4 + 0x180,temp_v49);
        temp_v9 = FUN_002e783c(temp_v4 + 0x180);
        temp_v5 = 0;
        if (temp_v5 < temp_v9) {
          do {
            temp_v10 = 0;
            puVar17 = (unsigned short *)(temp_v4 + 0x180 + temp_v5 * 2);
            do {
              if ((unsigned short)((*(unsigned short *)(&uStack_1c0c + temp_v10 * 2) << 8) |
                          (*(unsigned short *)(&uStack_1c0c + temp_v10 * 2) >> 8)) == *puVar17) {
                temp_v0 = *(unsigned short *)((int)&uStack_1c0c + temp_v10 * 8 + 2);
                *puVar17 = (temp_v0 << 8) | (temp_v0 >> 8);
                if (temp_v10 == 4) {
                  puVar17[1] = ((puVar17[1] >> 8) - 0x30) & 0xff;
                }
                break;
              }
              temp_v10 = temp_v10 + 1;
            } while (temp_v10 < 3);
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v9);
        }
        temp_v9 = temp_v4 + temp_v9 * 2;
        *(unsigned char *)(temp_v9 + 0x181) = 0xff;
        *(unsigned char *)(temp_v9 + 0x182) = 0xff;
        *(unsigned char *)(temp_v9 + 0x183) = 0;
        *(unsigned char *)(temp_v9 + 0x180) = 0xff;
        temp_v6 = FUN_00427354(temp_v8 + 0x28);
        temp_v7 = FUN_00427348(temp_v8 + 0x28);
        FUN_00426eb8(&temp_v27,5,temp_v7,temp_v6);
        temp_v19 = temp_v27;
        uStack_1c0c = uStack_1bcc;
        temp_v20 = uStack_1bc8;
        temp_v21 = uStack_1bc4;
        temp_v22 = uStack_1bc0;
        temp_v23 = uStack_1bbc;
        temp_v24 = temp_v28;
        uStack_1bf4 = uStack_1bb4;
        temp_v25 = temp_v29;
        uStack_1bec = uStack_1bac;
        uStack_1be8 = uStack_1ba8;
        uStack_1be4 = uStack_1ba4;
        uStack_1be0 = uStack_1ba0;
        uStack_1bdc = uStack_1b9c;
        temp_v26 = temp_v30;
        uStack_1bd4 = uStack_1b94;
        temp_v13 = FUN_004fff5c(temp_v17,&temp_v19);
        if (temp_v13 == 0) {
          *(unsigned short *)(temp_v45 + 0xa8) = 0;
          FUN_002e6354(temp_v48,0x1200);
        }
        else {
          FUN_001029f4(temp_v13,0,10);
          *(short *)(temp_v45 + 0xa8) = (short)temp_v13;
          if ((temp_v13 & 0xffff) != 0xffff) {
            FUN_0042718c(&temp_v14,temp_v8 + 0x28,temp_v48);
            *(int *)(temp_v51 + 0xc) = temp_v14;
            *(unsigned int *)(temp_v51 + 0x10) = temp_v15;
            temp_v9 = FUN_001d25ec(temp_v51 + 0xc);
            if (temp_v9 < 0) {
              return temp_v9;
            }
          }
          else {
            FUN_002e6354(temp_v48,0x1200);
          }
        }
        temp_v27 = temp_v4 + 0x9bc;
        FUN_004749a0(temp_v27,temp_v48);
        FUN_004fffc0(&temp_v19,temp_v17,&temp_v40);
        *(unsigned int *)(temp_v51 + 0xc) = temp_v19;
        *(unsigned int *)(temp_v51 + 0x10) = uStack_1c0c;
        temp_v9 = FUN_001d25ec(temp_v51 + 0xc);
        if (temp_v9 < 0) {
          return temp_v9;
        }
        *(unsigned int *)(temp_v4 + 0x9b8) = temp_v40;
        FUN_004ffd58(&temp_v14,temp_v17);
        *(int *)(temp_v4 + 0x9a0) = temp_v14;
        *(unsigned int *)(temp_v4 + 0x9a4) = temp_v15;
        temp_v9 = FUN_004ffd38(temp_v17);
        if (temp_v9 != 0) {
          *(unsigned char *)(temp_v4 + 0x9af) = 1;
          FUN_00500054(&temp_v19,temp_v17);
          temp_v25 = temp_v19;
          uStack_1bec = uStack_1c0c;
          uStack_1be8 = temp_v20;
          uStack_1be4 = temp_v21;
          uStack_1be0 = temp_v22;
          uStack_1bdc = temp_v23;
          temp_v26 = temp_v24;
          uStack_1bd4 = uStack_1bf4;
          FUN_00428060(&temp_v14,temp_v8 + 0x84,&uStack_1bc8,&temp_v25);
          *(int *)(temp_v51 + 0xc) = temp_v14;
          *(unsigned int *)(temp_v51 + 0x10) = temp_v15;
          temp_v9 = FUN_001d25ec(temp_v51 + 0xc);
          if (temp_v9 < 0) {
            return temp_v9;
          }
          FUN_0019a46c(temp_v4 + 0x980,&uStack_1ba8,0x20);
        }
        else {
          *(unsigned char *)(temp_v4 + 0x9b0) = 0;
          temp_v9 = FUN_004fff5c(temp_v17,temp_v42);
          if (temp_v9 != 0) {
            FUN_002e342c(temp_v4 + 0x980);
          }
        }
        temp_v9 = 0;
        temp_v5 = 0;
        pcVar11 = acStack_88;
        do {
          temp_v1 = *(char *)(temp_v4 + temp_v5 + 0x980);
          if (temp_v1 == 0) break;
          if ((int)temp_v1 - 0x30U < 10) {
            pcVar11[temp_v9] = temp_v1;
            temp_v9 = temp_v9 + 1;
          }
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < 0x1f);
        pcVar11[temp_v9] = '\0';
        pcVar10 = pcVar11;
        FUN_001029f4(pcVar11,0);
        if (pcVar10 == (char *)0x0) {
          *(unsigned char *)(temp_v4 + 0x9b1) = 1;
        }
        temp_v9 = FUN_004fff5c(temp_v17,temp_v39);
        if (temp_v9 != 0) {
          temp_v10 = 0;
          temp_v5 = temp_v10;
          do {
            temp_v1 = *(char *)(temp_v9 + temp_v5);
            if (temp_v1 == 0) break;
            if ((int)temp_v1 - 0x30U < 10) {
              pcVar11[temp_v10] = temp_v1;
              temp_v10 = temp_v10 + 1;
            }
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < 0x1f);
          pcVar11[temp_v10] = '\0';
          FUN_001029f4(pcVar11,0,10);
          if (pcVar11 != pcVar10) {
            *(unsigned char *)(temp_v4 + 0x9b2) = 1;
          }
        }
        temp_v5 = FUN_004ffd4c(temp_v17);
        temp_v9 = temp_v5 * 0x18;
        FUN_0030cb44(temp_v9,temp_v46);
        temp_v2 = 1;
        temp_v15 = 0;
        temp_v3 = 1;
        temp_v14 = temp_v5;
        FUN_004ffee0(&temp_v20,temp_v17,&temp_v37,temp_v9);
        *(unsigned int *)(temp_v51 + 0xc) = temp_v20;
        *(unsigned int *)(temp_v51 + 0x10) = temp_v21;
        temp_v5 = FUN_001d25ec(temp_v51 + 0xc);
        if (temp_v5 < 0) {
          FUN_002e3494(temp_v9);
          temp_v8 = FUN_001d25ec(temp_v51 + 0xc);
          return temp_v8;
        }
        temp_v5 = 0;
        temp_v11 = 1;
        temp_v12 = 1;
        if (temp_v5 < temp_v37) {
          do {
            temp_v10 = temp_v9 + temp_v5 * 0x18;
            temp_v2 = FUN_001a747c(temp_v10);
            temp_v2 = temp_v11 & temp_v2;
            temp_v3 = FUN_001a7470(temp_v10);
            temp_v3 = temp_v12 & temp_v3;
            temp_v5 = temp_v5 + 1;
            temp_v11 = temp_v2;
            temp_v12 = temp_v3;
          } while (temp_v5 < temp_v37);
        }
        *(unsigned char *)(temp_v4 + 0x9ac) = temp_v2;
        *(unsigned char *)(temp_v4 + 0x9ad) = temp_v3;
        FUN_002e3494(temp_v9);
        if (((*(char *)(temp_v45 + 0xac) == '\0') &&
            (temp_v9 = FUN_004fff5c(temp_v17,temp_v38), temp_v9 != 0)) &&
           (FUN_001029f4(temp_v9,0,10), temp_v9 == 1)) {
          temp_v18 = temp_v18 - 1;
          FUN_00474aec(temp_v27);
          FUN_002e6354(temp_v4,0x80);
          FUN_002e6354(temp_v4 + 0x80,0x100);
          FUN_002e6354(temp_v4 + 0x180,0x800);
          puVar13 = &temp_v20;
          temp_v14 = 0;
          temp_v15 = 0;
          temp_v16 = 0;
          temp_v17 = (unsigned char *)0x0;
          nn_fnd_DateTime_DateTime_sub_object(puVar13,0x7b2,1);
          temp_v6 = puVar13[1];
          *(unsigned int *)(temp_v4 + 0x9a0) = *puVar13;
          *(unsigned int *)(temp_v4 + 0x9a4) = temp_v6;
          *(unsigned char *)(temp_v4 + 0x9ac) = 0;
          *(unsigned char *)(temp_v4 + 0x9ad) = 0;
          *(unsigned char *)(temp_v4 + 0x9ae) = 0;
          *(unsigned char *)(temp_v4 + 0x9af) = 0;
          *(unsigned char *)(temp_v4 + 0x9b0) = 0;
          *(unsigned char *)(temp_v4 + 0x9b1) = 0;
          *(unsigned char *)(temp_v4 + 0x9b2) = 0;
          *(unsigned char *)(temp_v4 + 0x9b3) = 0;
        }
      }
      temp_v41 = temp_v41 + 1;
    } while (temp_v41 < *(unsigned int *)(temp_v8 + 0x67c));
  }
  temp_v4 = temp_v18 + 1;
  *(unsigned char *)(*(int *)(temp_v8 + 0x678) + temp_v18 * 0x9c8 + 0x9b3) = 1;
  temp_v9 = *(int *)(temp_v8 + 0x67c) + 1;
  *temp_v44 = temp_v9;
  *(int *)(temp_v8 + 0x680) = *(int *)(temp_v8 + 0x680) + 1;
  if (temp_v9 != temp_v4) {
    FUN_00180008(0);
    *(int *)(temp_v8 + 0x67c) = temp_v4;
  }
  return 0;
}

} /* extern "C" */
