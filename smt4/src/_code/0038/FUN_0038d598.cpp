/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038d598` (_code @ 0x38d598, 0x6b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00234170(...);
int FUN_00234330(...);
int FUN_002344d8(...);
int FUN_0026281c(...);
int FUN_00262888(...);
int FUN_002b4b80(int, int);
int FUN_002b5a48(...);
int FUN_002c4938(...);
int FUN_002c564c(...);
int FUN_002c5d5c(unsigned int *, unsigned char *, int, int);
int FUN_002c5e80(...);
int FUN_002c6a10(...);
int FUN_00352764(...);
int FUN_0038bee4(...);
int FUN_003df318(unsigned char [4], unsigned int, unsigned int);
int FUN_003df648(...);
int FUN_003df7d4(...);
int FUN_003df850(...);

/* stack frame of param_1: 28 slot(s), 112 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp1A40; /* 0x1a40: local_1a40 */
    unsigned int sp1A44; /* 0x1a44: local_1a44 */
    unsigned int sp1A48; /* 0x1a48: local_1a48 */
    unsigned int sp1A68; /* 0x1a68: local_1a68 */
    unsigned int sp1A88; /* 0x1a88: local_1a88 */
    unsigned int sp1AA8; /* 0x1aa8: local_1aa8 */
    unsigned int sp1AC8; /* 0x1ac8: local_1ac8 */
    unsigned int sp1ACC; /* 0x1acc: local_1acc */
    unsigned int sp1AD0; /* 0x1ad0: local_1ad0 */
    unsigned int sp1AF0; /* 0x1af0: local_1af0 */
    unsigned int sp1B10; /* 0x1b10: local_1b10 */
    unsigned int sp1B30; /* 0x1b30: local_1b30 */
    unsigned int sp1B50; /* 0x1b50: local_1b50 */
    unsigned int sp1B70; /* 0x1b70: local_1b70 */
    unsigned int sp1B90; /* 0x1b90: local_1b90 */
    unsigned int sp1BB0; /* 0x1bb0: local_1bb0 */
    unsigned int sp1BD0; /* 0x1bd0: local_1bd0 */
    unsigned int sp1BDC; /* 0x1bdc: local_1bdc */
    unsigned int sp1BE8; /* 0x1be8: local_1be8 */
    unsigned int sp1BF0; /* 0x1bf0: local_1bf0 */
    unsigned int sp1C00; /* 0x1c00: local_1c00 */
    unsigned int sp1C08; /* 0x1c08: local_1c08 */
    unsigned int sp1C10; /* 0x1c10: local_1c10 */
    unsigned int sp1C14; /* 0x1c14: local_1c14 */
    unsigned int sp1C18; /* 0x1c18: local_1c18 */
    unsigned int sp1C24; /* 0x1c24: local_1c24 */
    unsigned int sp1C28; /* 0x1c28: local_1c28 */
} param_1_stack;

extern unsigned char LAB_00394160; /* 0x394160 */
extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_00234170. */
/* Supplied declaration required: FUN_00234330. */
extern unsigned int FUN_0023445c(int);
extern unsigned int FUN_00234468(int);
/* Supplied declaration required: FUN_002344d8. */
/* Supplied declaration required: FUN_0026281c. */
/* Supplied declaration required: FUN_00262888. */
extern int FUN_002a12d8(int);
extern unsigned char FUN_002a2dec(int);
extern unsigned char FUN_002a2df8(int);
/* Supplied declaration required: FUN_002b4b80. */
/* Supplied declaration required: FUN_002b5a48. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_002c5d5c. */
/* Supplied declaration required: FUN_002c5e80. */
/* Supplied declaration required: FUN_002c6a10. */
/* Supplied declaration required: FUN_00352764. */
/* Supplied declaration required: FUN_0038bee4. */
/* Supplied declaration required: FUN_003df318. */
extern int FUN_003df63c(unsigned char *);
/* Supplied declaration required: FUN_003df648. */
/* Supplied declaration required: FUN_003df7d4. */
/* Supplied declaration required: FUN_003df850. */


int FUN_0038d598(int param_1)

{
/* irregular: 18 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  short *psVar12;
  int temp_v9;
  unsigned char temp_v10;
  unsigned short *puVar15;
  unsigned char temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  int temp_v15;
  unsigned char *temp_v16;
  int temp_v17;
  unsigned int uStack_1c0c;
  int temp_v18;
  int uStack_1c04;
  int temp_v19;
  unsigned int uStack_1bfc;
  unsigned int uStack_1bf8;
  unsigned int uStack_1bf4;
  unsigned int temp_v20;
  unsigned int uStack_1bec;
  unsigned int temp_v21;
  unsigned int uStack_1be4;
  unsigned int uStack_1be0;
  unsigned int temp_v22;
  unsigned int uStack_1bd8;
  unsigned int uStack_1bd4;
  int temp_v23;
  unsigned int uStack_1bcc;
  unsigned int uStack_1bc8;
  unsigned int uStack_1bc4;
  unsigned int uStack_1bc0;
  unsigned int uStack_1bbc;
  unsigned int uStack_1bb8;
  unsigned int uStack_1bb4;
  unsigned int temp_v24;
  unsigned int uStack_1bac;
  unsigned int uStack_1ba8;
  unsigned int uStack_1ba4;
  unsigned int uStack_1ba0;
  unsigned int uStack_1b9c;
  unsigned int uStack_1b98;
  unsigned int uStack_1b94;
  int temp_v25;
  unsigned int uStack_1b8c;
  unsigned int uStack_1b88;
  unsigned int uStack_1b84;
  unsigned int uStack_1b80;
  unsigned int uStack_1b7c;
  unsigned int uStack_1b78;
  unsigned int uStack_1b74;
  unsigned int temp_v26;
  unsigned int uStack_1b6c;
  unsigned int uStack_1b68;
  unsigned int uStack_1b64;
  unsigned int uStack_1b60;
  unsigned int uStack_1b5c;
  unsigned int uStack_1b58;
  unsigned int uStack_1b54;
  int temp_v27;
  unsigned int uStack_1b4c;
  unsigned int uStack_1b48;
  unsigned int uStack_1b44;
  unsigned int uStack_1b40;
  unsigned int uStack_1b3c;
  unsigned int uStack_1b38;
  unsigned int uStack_1b34;
  unsigned int temp_v28;
  unsigned int uStack_1b2c;
  unsigned int uStack_1b28;
  unsigned int uStack_1b24;
  unsigned int uStack_1b20;
  unsigned int uStack_1b1c;
  unsigned int uStack_1b18;
  unsigned int uStack_1b14;
  int temp_v29;
  unsigned int uStack_1b0c;
  unsigned int uStack_1b08;
  unsigned int uStack_1b04;
  unsigned int uStack_1b00;
  unsigned int uStack_1afc;
  unsigned int uStack_1af8;
  unsigned int uStack_1af4;
  unsigned int temp_v30;
  unsigned int uStack_1aec;
  unsigned int uStack_1ae8;
  unsigned int uStack_1ae4;
  unsigned int uStack_1ae0;
  unsigned int uStack_1adc;
  unsigned int uStack_1ad8;
  unsigned int uStack_1ad4;
  unsigned int temp_v31;
  int temp_v32;
  int temp_v33;
  unsigned int uStack_1ac4;
  unsigned int uStack_1ac0;
  unsigned int uStack_1abc;
  unsigned int uStack_1ab8;
  unsigned int uStack_1ab4;
  unsigned int uStack_1ab0;
  unsigned int uStack_1aac;
  unsigned int temp_v34;
  unsigned int uStack_1aa4;
  unsigned int uStack_1aa0;
  unsigned int uStack_1a9c;
  unsigned int uStack_1a98;
  unsigned int uStack_1a94;
  unsigned int uStack_1a90;
  unsigned int uStack_1a8c;
  int temp_v35;
  unsigned int uStack_1a84;
  unsigned int uStack_1a80;
  unsigned int uStack_1a7c;
  unsigned int uStack_1a78;
  unsigned int uStack_1a74;
  unsigned int uStack_1a70;
  unsigned int uStack_1a6c;
  unsigned int temp_v36;
  unsigned int uStack_1a64;
  unsigned int uStack_1a60;
  unsigned int uStack_1a5c;
  unsigned int uStack_1a58;
  unsigned int uStack_1a54;
  unsigned int uStack_1a50;
  unsigned int uStack_1a4c;
  int temp_v37;
  int temp_v38;
  int temp_v39;
  unsigned int uStack_1a3c;
  unsigned char temp_v40 [4];
  unsigned char temp_v41 [4608];
  short asStack_830 [1028];
  int temp_v42;
  
  temp_v7 = DAT_00432fc8;
  if (*(int *)(DAT_00432fc8 + 0x68c) == 0) {
    return 0;
  }
  temp_v42 = param_1;
  if (*(int *)(DAT_00432fc8 + 0x688) != 0) {
    FUN_002b4b80(*(int *)(DAT_00432fc8 + 0x688),0x394214);
  }
  temp_v9 = *(int *)(temp_v7 + 0x68c);
  puVar4 = (unsigned int *)(temp_v9 * 0x9c8 + 8);
  FUN_00262888();
  puVar5 = (unsigned int *)0x0;
  if (puVar4 != (unsigned int *)0x0) {
    puVar5 = puVar4 + 2;
    *puVar4 = 0x9c8;
    puVar4[1] = temp_v9;
    FUN_002c5d5c(puVar5,&LAB_00394160,0x9c8,temp_v9);
  }
  *(unsigned int **)(temp_v7 + 0x688) = puVar5;
  temp_v32 = 0;
  temp_v31 = 0;
  if (*(int *)(temp_v7 + 0x68c) != 0) {
    temp_v38 = temp_v7 + 0x4a8;
    do {
      FUN_003df318(temp_v40,*(unsigned int *)(temp_v7 + 0x5b0),temp_v31);
      temp_v12 = *(int *)(temp_v7 + 0x688) + temp_v32 * 0x9c8;
      temp_v39 = temp_v12 + 0x900;
      *(short *)(temp_v12 + 0x9aa) = (short)temp_v31;
      temp_v16 = temp_v40;
      temp_v32 = temp_v32 + 1;
      temp_v9 = FUN_00234170(temp_v40,temp_v38);
      if ((temp_v9 != 0) && (FUN_002c5e80(temp_v9,0,10), temp_v9 == 1)) {
        *(unsigned char *)(temp_v12 + 0x9b0) = 1;
      }
      temp_v3 = FUN_00234468(temp_v7 + 0x28);
      temp_v4 = FUN_0023445c(temp_v7 + 0x28);
      FUN_00234330(&temp_v25,0,temp_v4,temp_v3);
      temp_v17 = temp_v25;
      uStack_1c0c = uStack_1b8c;
      temp_v18 = uStack_1b88;
      uStack_1c04 = uStack_1b84;
      temp_v19 = uStack_1b80;
      uStack_1bfc = uStack_1b7c;
      uStack_1bf8 = uStack_1b78;
      uStack_1bf4 = uStack_1b74;
      temp_v20 = temp_v26;
      uStack_1bec = uStack_1b6c;
      temp_v21 = uStack_1b68;
      uStack_1be4 = uStack_1b64;
      uStack_1be0 = uStack_1b60;
      temp_v22 = uStack_1b5c;
      uStack_1bd8 = uStack_1b58;
      uStack_1bd4 = uStack_1b54;
      temp_v9 = FUN_00234170(temp_v16,&temp_v17);
      if (temp_v9 == 0) {
        temp_v9 = 0x38da64;
      }
      temp_v5 = temp_v7;
      FUN_002344d8(temp_v7,temp_v12,0x40,temp_v9);
      if (temp_v5 < 0) {
        return temp_v5;
      }
      temp_v3 = FUN_00234468(temp_v7 + 0x28);
      temp_v4 = FUN_0023445c(temp_v7 + 0x28);
      FUN_00234330(&temp_v33,2,temp_v4,temp_v3);
      temp_v27 = temp_v33;
      uStack_1b4c = uStack_1ac4;
      uStack_1b48 = uStack_1ac0;
      uStack_1b44 = uStack_1abc;
      uStack_1b40 = uStack_1ab8;
      uStack_1b3c = uStack_1ab4;
      uStack_1b38 = uStack_1ab0;
      uStack_1b34 = uStack_1aac;
      temp_v28 = temp_v34;
      uStack_1b2c = uStack_1aa4;
      uStack_1b28 = uStack_1aa0;
      uStack_1b24 = uStack_1a9c;
      uStack_1b20 = uStack_1a98;
      uStack_1b1c = uStack_1a94;
      uStack_1b18 = uStack_1a90;
      uStack_1b14 = uStack_1a8c;
      temp_v9 = FUN_00234170(temp_v16,&temp_v27);
      if (temp_v9 == 0) {
        temp_v9 = 0x38da64;
      }
      temp_v5 = temp_v7;
      FUN_002344d8(temp_v7,temp_v12 + 0x80,0x80,temp_v9);
      if (temp_v5 < 0) {
        return temp_v5;
      }
      FUN_002c4938(asStack_830,0x800);
      temp_v3 = FUN_00234468(temp_v7 + 0x28);
      temp_v4 = FUN_0023445c(temp_v7 + 0x28);
      FUN_00234330(&temp_v35,3,temp_v4,temp_v3);
      temp_v29 = temp_v35;
      uStack_1b0c = uStack_1a84;
      uStack_1b08 = uStack_1a80;
      uStack_1b04 = uStack_1a7c;
      uStack_1b00 = uStack_1a78;
      uStack_1afc = uStack_1a74;
      uStack_1af8 = uStack_1a70;
      uStack_1af4 = uStack_1a6c;
      temp_v30 = temp_v36;
      uStack_1aec = uStack_1a64;
      uStack_1ae8 = uStack_1a60;
      uStack_1ae4 = uStack_1a5c;
      uStack_1ae0 = uStack_1a58;
      uStack_1adc = uStack_1a54;
      uStack_1ad8 = uStack_1a50;
      uStack_1ad4 = uStack_1a4c;
      temp_v9 = FUN_00234170(temp_v16,&temp_v29);
      if (temp_v9 == 0) {
        temp_v9 = 0x38da64;
      }
      temp_v5 = temp_v7;
      FUN_002344d8(temp_v7,asStack_830,0x400,temp_v9);
      if (temp_v5 < 0) {
        return temp_v5;
      }
      temp_v18 = 0x2501000a;
      uStack_1c04 = 0xf80184aa;
      temp_v19 = 0x2503005b;
      uStack_1bfc = 0xf81684ab;
      uStack_1bf8 = 0x250f002f;
      uStack_1bf4 = 0xf81784ac;
      temp_v20 = 0x2513005d;
      uStack_1bec = 0xf81884ad;
      temp_v21 = 0x251b003c;
      uStack_1be4 = 0xf80484ae;
      uStack_1be0 = 0x2542ff0d;
      temp_v22 = 0x817c84be;
      temp_v9 = FUN_002b5a48(asStack_830);
      temp_v5 = 0;
      if (temp_v5 < temp_v9) {
        do {
          psVar12 = asStack_830 + temp_v5;
          temp_v8 = 0;
          do {
            if (*psVar12 == *(short *)(&temp_v18 + temp_v8 * 2)) {
              *psVar12 = *(short *)((int)&temp_v18 + temp_v8 * 8 + 2);
              break;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 6);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < temp_v9);
      }
      FUN_0026281c(temp_v12 + 0x180,asStack_830,0x800);
      temp_v9 = FUN_002b5a48(temp_v12 + 0x180);
      temp_v5 = 0;
      if (temp_v5 < temp_v9) {
        do {
          temp_v8 = 0;
          puVar15 = (unsigned short *)(temp_v12 + 0x180 + temp_v5 * 2);
          do {
            if ((unsigned short)((*(unsigned short *)(&uStack_1c04 + temp_v8 * 2) << 8) |
                        (*(unsigned short *)(&uStack_1c04 + temp_v8 * 2) >> 8)) == *puVar15) {
              temp_v0 = *(unsigned short *)((int)&uStack_1c04 + temp_v8 * 8 + 2);
              *puVar15 = (temp_v0 << 8) | (temp_v0 >> 8);
              if (temp_v8 == 4) {
                puVar15[1] = ((puVar15[1] >> 8) - 0x30) & 0xff;
              }
              break;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < 6);
          temp_v5 = temp_v5 + 1;
        } while (temp_v5 < temp_v9);
      }
      temp_v9 = temp_v12 + temp_v9 * 2;
      *(unsigned char *)(temp_v9 + 0x181) = 0xff;
      *(unsigned char *)(temp_v9 + 0x182) = 0xff;
      *(unsigned char *)(temp_v9 + 0x183) = 0;
      *(unsigned char *)(temp_v9 + 0x180) = 0xff;
      temp_v3 = FUN_00234468(temp_v7 + 0x28);
      temp_v4 = FUN_0023445c(temp_v7 + 0x28);
      FUN_00234330(&temp_v23,5,temp_v4,temp_v3);
      temp_v17 = temp_v23;
      uStack_1c0c = uStack_1bcc;
      temp_v18 = uStack_1bc8;
      uStack_1c04 = uStack_1bc4;
      temp_v19 = uStack_1bc0;
      uStack_1bfc = uStack_1bbc;
      uStack_1bf8 = uStack_1bb8;
      uStack_1bf4 = uStack_1bb4;
      temp_v20 = temp_v24;
      uStack_1bec = uStack_1bac;
      temp_v21 = uStack_1ba8;
      uStack_1be4 = uStack_1ba4;
      uStack_1be0 = uStack_1ba0;
      temp_v22 = uStack_1b9c;
      uStack_1bd8 = uStack_1b98;
      uStack_1bd4 = uStack_1b94;
      temp_v6 = FUN_00234170(temp_v16,&temp_v17);
      if (temp_v6 == 0) {
        *(unsigned short *)(temp_v39 + 0xa8) = 0;
        FUN_002c4938(temp_v41,0x1200);
      }
      else {
        FUN_002c5e80(temp_v6,0,10);
        *(short *)(temp_v39 + 0xa8) = (short)temp_v6;
        if ((temp_v6 & 0xffff) != 0xffff) {
          FUN_00352764(&temp_v13,temp_v7 + 0x28,temp_v41);
          *(int *)(temp_v42 + 0xc) = temp_v13;
          *(unsigned int *)(temp_v42 + 0x10) = temp_v14;
          temp_v9 = FUN_002a12d8(temp_v42 + 0xc);
          if (temp_v9 < 0) {
            return temp_v9;
          }
        }
        else {
          FUN_002c4938(temp_v41,0x1200);
        }
      }
      FUN_0038bee4(temp_v12 + 0x9bc,temp_v41);
      FUN_003df850(&temp_v39,temp_v16,&temp_v37);
      *(int *)(temp_v42 + 0xc) = temp_v39;
      *(unsigned int *)(temp_v42 + 0x10) = uStack_1a3c;
      temp_v9 = FUN_002a12d8(temp_v42 + 0xc);
      if (temp_v9 < 0) {
        return temp_v9;
      }
      *(unsigned int *)(temp_v12 + 0x9b8) = temp_v37;
      FUN_003df648(&temp_v13,temp_v16);
      *(int *)(temp_v12 + 0x9a0) = temp_v13;
      *(unsigned int *)(temp_v12 + 0x9a4) = temp_v14;
      temp_v5 = FUN_003df63c(temp_v16);
      temp_v9 = temp_v5 * 0x18;
      FUN_00262888(temp_v9,temp_v7);
      temp_v1 = 1;
      temp_v2 = 1;
      temp_v14 = 0;
      temp_v13 = temp_v5;
      FUN_003df7d4(&temp_v19,temp_v16,&temp_v15,temp_v9);
      *(unsigned int *)(temp_v42 + 0xc) = temp_v19;
      *(unsigned int *)(temp_v42 + 0x10) = uStack_1bfc;
      temp_v5 = FUN_002a12d8(temp_v42 + 0xc);
      if (temp_v5 < 0) {
        FUN_002c6a10(temp_v9);
        temp_v7 = FUN_002a12d8(temp_v42 + 0xc);
        return temp_v7;
      }
      temp_v5 = 0;
      temp_v10 = 1;
      temp_v11 = 1;
      if (temp_v5 < temp_v15) {
        do {
          temp_v8 = temp_v9 + temp_v5 * 0x18;
          temp_v1 = FUN_002a2df8(temp_v8);
          temp_v1 = temp_v10 & temp_v1;
          temp_v2 = FUN_002a2dec(temp_v8);
          temp_v2 = temp_v11 & temp_v2;
          temp_v5 = temp_v5 + 1;
          temp_v10 = temp_v1;
          temp_v11 = temp_v2;
        } while (temp_v5 < temp_v15);
      }
      *(unsigned char *)(temp_v12 + 0x9ac) = temp_v1;
      *(unsigned char *)(temp_v12 + 0x9ad) = temp_v2;
      FUN_002c6a10(temp_v9);
      temp_v31 = temp_v31 + 1;
    } while (temp_v31 < *(unsigned int *)(temp_v7 + 0x68c));
  }
  if (*(int *)(temp_v7 + 0x68c) != temp_v32) {
    FUN_002c564c(0);
    *(int *)(temp_v7 + 0x68c) = temp_v32;
  }
  return 0;
}

} /* extern "C" */
