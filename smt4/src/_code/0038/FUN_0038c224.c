/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038c224` (_code @ 0x38c224, 0x9b0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 31 slot(s), 124 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp1A60; /* 0x1a60: local_1a60 */
    unsigned int sp1A68; /* 0x1a68: local_1a68 */
    unsigned int sp1A6C; /* 0x1a6c: local_1a6c */
    unsigned int sp1A70; /* 0x1a70: local_1a70 */
    unsigned int sp1A74; /* 0x1a74: local_1a74 */
    unsigned int sp1A78; /* 0x1a78: local_1a78 */
    unsigned int sp1A7C; /* 0x1a7c: local_1a7c */
    unsigned int sp1A80; /* 0x1a80: local_1a80 */
    unsigned int sp1A84; /* 0x1a84: local_1a84 */
    unsigned int sp1A8C; /* 0x1a8c: local_1a8c */
    unsigned int sp1A90; /* 0x1a90: local_1a90 */
    unsigned int sp1AB0; /* 0x1ab0: local_1ab0 */
    unsigned int sp1AD0; /* 0x1ad0: local_1ad0 */
    unsigned int sp1AF0; /* 0x1af0: local_1af0 */
    unsigned int sp1B10; /* 0x1b10: local_1b10 */
    unsigned int sp1B30; /* 0x1b30: local_1b30 */
    unsigned int sp1B50; /* 0x1b50: local_1b50 */
    unsigned int sp1B70; /* 0x1b70: local_1b70 */
    unsigned int sp1B90; /* 0x1b90: local_1b90 */
    unsigned int sp1BB0; /* 0x1bb0: local_1bb0 */
    unsigned int sp1BD0; /* 0x1bd0: local_1bd0 */
    unsigned int sp1BE4; /* 0x1be4: local_1be4 */
    unsigned int sp1BF0; /* 0x1bf0: local_1bf0 */
    unsigned int sp1C08; /* 0x1c08: local_1c08 */
    unsigned int sp1C10; /* 0x1c10: local_1c10 */
    unsigned int sp1C14; /* 0x1c14: local_1c14 */
    unsigned int sp1C1C; /* 0x1c1c: local_1c1c */
    unsigned int sp1C20; /* 0x1c20: local_1c20 */
    unsigned int sp1C24; /* 0x1c24: local_1c24 */
    unsigned int sp1C28; /* 0x1c28: local_1c28 */
} param_1_stack;

extern unsigned char LAB_0038cbd4; /* 0x38cbd4 */
extern unsigned char LAB_00394160; /* 0x394160 */
extern int DAT_00432fc8; /* 0x432fc8 */

/* Supplied declaration required: FUN_00234330. */
extern unsigned int FUN_0023445c(int);
extern unsigned int FUN_00234468(int);
/* Supplied declaration required: FUN_00234474. */
/* Supplied declaration required: FUN_002344d8. */
/* Supplied declaration required: FUN_002345a4. */
extern int FUN_00234618(unsigned char *);
/* Supplied declaration required: FUN_00234624. */
/* Supplied declaration required: FUN_0026281c. */
/* Supplied declaration required: FUN_00262888. */
extern int FUN_002a12d8(int);
extern unsigned char FUN_002a2dec(int);
extern unsigned char FUN_002a2df8(int);
/* Supplied declaration required: FUN_002b4b80. */
/* Supplied declaration required: FUN_002b5a48. */
/* Supplied declaration required: FUN_002ba81c. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: FUN_002c4938. */
/* Supplied declaration required: FUN_002c564c. */
/* Supplied declaration required: FUN_002c5d5c. */
/* Supplied declaration required: FUN_002c5e80. */
/* Supplied declaration required: FUN_002c6a10. */
/* Supplied declaration required: FUN_00352764. */
/* Supplied declaration required: FUN_0038bee4. */
extern int FUN_003def24(unsigned char *);
/* Supplied declaration required: FUN_003def38. */
/* Supplied declaration required: FUN_003df0c4. */
/* Supplied declaration required: FUN_003df140. */
/* Supplied declaration required: FUN_003df1d4. */
/* Supplied declaration required: nn_fnd_DateTime_DateTime_sub_object. */
/* Supplied declaration required: nn_fnd_DateTime_DateToDays. */
/* Supplied declaration required: nn_fnd_DateTime_GetDay. */
/* Supplied declaration required: nn_fnd_DateTime_GetMonth. */
/* Supplied declaration required: nn_fnd_DateTime_GetYear. */


int FUN_0038c224(int param_1)

{
/* irregular: 27 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  int *piVar6;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  int temp_v10;
  unsigned char temp_v11;
  unsigned short *puVar16;
  unsigned char temp_v12;
  unsigned int temp_v13;
  short *psVar19;
  int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  unsigned char *temp_v17;
  int temp_v18;
  int temp_v19;
  int uStack_1c0c;
  int temp_v20;
  unsigned int uStack_1c04;
  unsigned int uStack_1c00;
  unsigned int uStack_1bfc;
  unsigned int uStack_1bf8;
  unsigned int uStack_1bf4;
  int temp_v21;
  unsigned int uStack_1bec;
  unsigned int uStack_1be8;
  unsigned int temp_v22;
  unsigned int uStack_1be0;
  unsigned int uStack_1bdc;
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
  int temp_v26;
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
  int temp_v31;
  unsigned int uStack_1acc;
  unsigned int uStack_1ac8;
  unsigned int uStack_1ac4;
  unsigned int uStack_1ac0;
  unsigned int uStack_1abc;
  unsigned int uStack_1ab8;
  unsigned int uStack_1ab4;
  unsigned int temp_v32;
  unsigned int uStack_1aac;
  unsigned int uStack_1aa8;
  unsigned int uStack_1aa4;
  unsigned int uStack_1aa0;
  unsigned int uStack_1a9c;
  unsigned int uStack_1a98;
  unsigned int uStack_1a94;
  int temp_v33;
  unsigned int temp_v34 [2];
  int temp_v35;
  int temp_v36;
  int temp_v37;
  int temp_v38;
  int *temp_v39;
  int temp_v40;
  unsigned int temp_v41;
  int temp_v42;
  unsigned int uStack_1a64;
  int temp_v43;
  unsigned int uStack_1a5c;
  unsigned char temp_v44 [4608];
  short asStack_858 [1024];
  unsigned char temp_v45 [48];
  int temp_v46;
  
  temp_v7 = DAT_00432fc8;
  temp_v39 = (int *)(DAT_00432fc8 + 0x67c);
  if (*(int *)(DAT_00432fc8 + 0x67c) == 0) {
    return 0;
  }
  temp_v46 = param_1;
  if (*(int *)(DAT_00432fc8 + 0x678) != 0) {
    FUN_002b4b80(*(int *)(DAT_00432fc8 + 0x678),0x394214);
  }
  temp_v9 = *(int *)(temp_v7 + 0x67c) + 1;
  puVar4 = (unsigned int *)(temp_v9 * 0x9c8 + 8);
  FUN_00262888();
  puVar5 = (unsigned int *)0x0;
  if (puVar4 != (unsigned int *)0x0) {
    puVar5 = puVar4 + 2;
    *puVar4 = 0x9c8;
    puVar4[1] = temp_v9;
    FUN_002c5d5c(puVar5,&LAB_00394160,0x9c8,temp_v9);
  }
  *(unsigned int **)(temp_v7 + 0x678) = puVar5;
  temp_v18 = 0;
  temp_v13 = 0;
  if (*(int *)(temp_v7 + 0x67c) != 0) {
    temp_v37 = temp_v7 + 0x4e8;
    temp_v38 = temp_v7 + 0x4a8;
    temp_v36 = temp_v7 + 0x568;
    temp_v35 = temp_v7 + 0x528;
    do {
      FUN_00234624(temp_v45,*(unsigned int *)(temp_v7 + 0x5a8),temp_v13);
      temp_v17 = temp_v45;
      FUN_003def38(&temp_v14,temp_v45);
      piVar6 = &temp_v42;
      temp_v42 = temp_v14;
      uStack_1a64 = temp_v15;
      nn_fnd_DateTime_GetDay(piVar6);
      nn_fnd_DateTime_GetMonth(piVar6);
      nn_fnd_DateTime_GetYear();
      nn_fnd_DateTime_DateToDays();
      if ((int)piVar6 <= *(int *)(temp_v46 + 0x18)) {
        temp_v16 = *(int *)(temp_v7 + 0x678) + temp_v18 * 0x9c8;
        temp_v40 = temp_v16 + 0x900;
        temp_v18 = temp_v18 + 1;
        *(short *)(temp_v16 + 0x9aa) = (short)temp_v13;
        temp_v9 = FUN_00234474(temp_v17,temp_v38);
        if ((temp_v9 != 0) && (FUN_002c5e80(temp_v9,0,10), temp_v9 == 1)) {
          *(unsigned char *)(temp_v16 + 0x9b0) = 1;
        }
        temp_v3 = FUN_00234468(temp_v7 + 0x28);
        temp_v4 = FUN_0023445c(temp_v7 + 0x28);
        FUN_00234330(&temp_v31,0,temp_v4,temp_v3);
        temp_v19 = temp_v31;
        uStack_1c0c = uStack_1acc;
        temp_v20 = uStack_1ac8;
        uStack_1c04 = uStack_1ac4;
        uStack_1c00 = uStack_1ac0;
        uStack_1bfc = uStack_1abc;
        uStack_1bf8 = uStack_1ab8;
        uStack_1bf4 = uStack_1ab4;
        temp_v21 = temp_v32;
        uStack_1bec = uStack_1aac;
        uStack_1be8 = uStack_1aa8;
        temp_v22 = uStack_1aa4;
        uStack_1be0 = uStack_1aa0;
        uStack_1bdc = uStack_1a9c;
        uStack_1bd8 = uStack_1a98;
        uStack_1bd4 = uStack_1a94;
        temp_v9 = FUN_00234474(temp_v17,&temp_v19);
        if (temp_v9 == 0) {
          temp_v9 = 0x38c7a4;
        }
        temp_v5 = temp_v7;
        FUN_002344d8(temp_v7,temp_v16,0x40,temp_v9);
        if (temp_v5 < 0) {
          return temp_v5;
        }
        temp_v3 = FUN_00234468(temp_v7 + 0x28);
        temp_v4 = FUN_0023445c(temp_v7 + 0x28);
        FUN_00234330(&temp_v27,2,temp_v4,temp_v3);
        temp_v19 = temp_v27;
        uStack_1c0c = uStack_1b4c;
        temp_v20 = uStack_1b48;
        uStack_1c04 = uStack_1b44;
        uStack_1c00 = uStack_1b40;
        uStack_1bfc = uStack_1b3c;
        uStack_1bf8 = uStack_1b38;
        uStack_1bf4 = uStack_1b34;
        temp_v21 = temp_v28;
        uStack_1bec = uStack_1b2c;
        uStack_1be8 = uStack_1b28;
        temp_v22 = uStack_1b24;
        uStack_1be0 = uStack_1b20;
        uStack_1bdc = uStack_1b1c;
        uStack_1bd8 = uStack_1b18;
        uStack_1bd4 = uStack_1b14;
        temp_v9 = FUN_00234474(temp_v17,&temp_v19);
        if (temp_v9 == 0) {
          temp_v9 = 0x38c7a4;
        }
        temp_v5 = temp_v7;
        FUN_002344d8(temp_v7,temp_v16 + 0x80,0x80,temp_v9);
        if (temp_v5 < 0) {
          return temp_v5;
        }
        FUN_002c4938(asStack_858,0x800);
        temp_v3 = FUN_00234468(temp_v7 + 0x28);
        temp_v4 = FUN_0023445c(temp_v7 + 0x28);
        FUN_00234330(&temp_v29,3,temp_v4,temp_v3);
        temp_v23 = temp_v29;
        uStack_1bcc = uStack_1b0c;
        uStack_1bc8 = uStack_1b08;
        uStack_1bc4 = uStack_1b04;
        uStack_1bc0 = uStack_1b00;
        uStack_1bbc = uStack_1afc;
        uStack_1bb8 = uStack_1af8;
        uStack_1bb4 = uStack_1af4;
        temp_v24 = temp_v30;
        uStack_1bac = uStack_1aec;
        uStack_1ba8 = uStack_1ae8;
        uStack_1ba4 = uStack_1ae4;
        uStack_1ba0 = uStack_1ae0;
        uStack_1b9c = uStack_1adc;
        uStack_1b98 = uStack_1ad8;
        uStack_1b94 = uStack_1ad4;
        temp_v9 = FUN_00234474(temp_v17,&temp_v23);
        if (temp_v9 == 0) {
          temp_v9 = 0x38c7a4;
        }
        temp_v5 = temp_v7;
        FUN_002344d8(temp_v7,asStack_858,0x400,temp_v9);
        if (temp_v5 < 0) {
          return temp_v5;
        }
        temp_v19 = 0x2501000a;
        uStack_1c0c = 0xf80184aa;
        temp_v20 = 0x2503005b;
        uStack_1c04 = 0xf81684ab;
        uStack_1c00 = 0x250f002f;
        uStack_1bfc = 0xf81784ac;
        uStack_1bf8 = 0x2513005d;
        uStack_1bf4 = 0xf81884ad;
        temp_v21 = 0x251b003c;
        uStack_1bec = 0xf80484ae;
        uStack_1be8 = 0x2542ff0d;
        temp_v22 = 0x817c84be;
        temp_v9 = FUN_002b5a48(asStack_858);
        temp_v5 = 0;
        if (temp_v5 < temp_v9) {
          do {
            psVar19 = asStack_858 + temp_v5;
            temp_v8 = 0;
            do {
              if (*psVar19 == *(short *)(&temp_v19 + temp_v8 * 2)) {
                *psVar19 = *(short *)((int)&temp_v19 + temp_v8 * 8 + 2);
                break;
              }
              temp_v8 = temp_v8 + 1;
            } while (temp_v8 < 6);
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v9);
        }
        FUN_0026281c(temp_v16 + 0x180,asStack_858,0x800);
        temp_v8 = temp_v16 + 0x180;
        temp_v9 = FUN_002b5a48(temp_v8);
        temp_v5 = 0;
        if (temp_v5 < temp_v9) {
          do {
            temp_v10 = 0;
            puVar16 = (unsigned short *)(temp_v8 + temp_v5 * 2);
            do {
              if ((unsigned short)((*(unsigned short *)(&uStack_1c0c + temp_v10 * 2) << 8) |
                          (*(unsigned short *)(&uStack_1c0c + temp_v10 * 2) >> 8)) == *puVar16) {
                temp_v0 = *(unsigned short *)((int)&uStack_1c0c + temp_v10 * 8 + 2);
                *puVar16 = (temp_v0 << 8) | (temp_v0 >> 8);
                if (temp_v10 == 4) {
                  puVar16[1] = ((puVar16[1] >> 8) - 0x30) & 0xff;
                }
                break;
              }
              temp_v10 = temp_v10 + 1;
            } while (temp_v10 < 6);
            temp_v5 = temp_v5 + 1;
          } while (temp_v5 < temp_v9);
        }
        temp_v9 = temp_v16 + temp_v9 * 2;
        *(unsigned char *)(temp_v9 + 0x181) = 0xff;
        *(unsigned char *)(temp_v9 + 0x182) = 0xff;
        *(unsigned char *)(temp_v9 + 0x183) = 0;
        *(unsigned char *)(temp_v9 + 0x180) = 0xff;
        temp_v3 = FUN_00234468(temp_v7 + 0x28);
        temp_v4 = FUN_0023445c(temp_v7 + 0x28);
        FUN_00234330(&temp_v19,5,temp_v4,temp_v3);
        temp_v25 = temp_v19;
        uStack_1b8c = uStack_1c0c;
        uStack_1b88 = temp_v20;
        uStack_1b84 = uStack_1c04;
        uStack_1b80 = uStack_1c00;
        uStack_1b7c = uStack_1bfc;
        uStack_1b78 = uStack_1bf8;
        uStack_1b74 = uStack_1bf4;
        temp_v26 = temp_v21;
        uStack_1b6c = uStack_1bec;
        uStack_1b68 = uStack_1be8;
        uStack_1b64 = temp_v22;
        uStack_1b60 = uStack_1be0;
        uStack_1b5c = uStack_1bdc;
        uStack_1b58 = uStack_1bd8;
        uStack_1b54 = uStack_1bd4;
        temp_v6 = FUN_00234474(temp_v17,&temp_v25);
        if (temp_v6 == 0) {
          *(unsigned short *)(temp_v40 + 0xa8) = 0;
          FUN_002c4938(temp_v44,0x1200);
        }
        else {
          FUN_002c5e80(temp_v6,0,10);
          *(short *)(temp_v40 + 0xa8) = (short)temp_v6;
          if ((temp_v6 & 0xffff) != 0xffff) {
            FUN_00352764(&temp_v14,temp_v7 + 0x28,temp_v44);
            *(int *)(temp_v46 + 0xc) = temp_v14;
            *(unsigned int *)(temp_v46 + 0x10) = temp_v15;
            temp_v9 = FUN_002a12d8(temp_v46 + 0xc);
            if (temp_v9 < 0) {
              return temp_v9;
            }
          }
          else {
            FUN_002c4938(temp_v44,0x1200);
          }
        }
        FUN_0038bee4(temp_v16 + 0x9bc,temp_v44);
        FUN_003df140(&temp_v43,temp_v17,temp_v34);
        *(unsigned int *)(temp_v46 + 0xc) = temp_v43;
        *(unsigned int *)(temp_v46 + 0x10) = uStack_1a5c;
        temp_v9 = FUN_002a12d8(temp_v46 + 0xc);
        if (temp_v9 < 0) {
          return temp_v9;
        }
        *(unsigned int *)(temp_v16 + 0x9b8) = temp_v34[0];
        FUN_003def38(&temp_v14,temp_v17);
        *(int *)(temp_v16 + 0x9a0) = temp_v14;
        *(unsigned int *)(temp_v16 + 0x9a4) = temp_v15;
        temp_v9 = FUN_003def24(temp_v17);
        if (temp_v9 != 0) {
          *(unsigned char *)(temp_v16 + 0x9af) = 1;
          FUN_003df1d4(&temp_v26,temp_v17);
          temp_v25 = temp_v26;
          uStack_1b8c = uStack_1b6c;
          uStack_1b88 = uStack_1b68;
          uStack_1b84 = uStack_1b64;
          uStack_1b80 = uStack_1b60;
          uStack_1b7c = uStack_1b5c;
          uStack_1b78 = uStack_1b58;
          uStack_1b74 = uStack_1b54;
          FUN_002345a4(&temp_v14,temp_v7 + 0x84,&temp_v19,&temp_v25);
          *(int *)(temp_v46 + 0xc) = temp_v14;
          *(unsigned int *)(temp_v46 + 0x10) = temp_v15;
          temp_v9 = FUN_002a12d8(temp_v46 + 0xc);
          if (temp_v9 < 0) {
            return temp_v9;
          }
          FUN_002ba81c(temp_v16 + 0x980,&temp_v21,0x20);
        }
        else {
          *(unsigned char *)(temp_v16 + 0x9b0) = 0;
          temp_v9 = FUN_00234474(temp_v17,temp_v37);
          if (temp_v9 != 0) {
            FUN_002c5e80(temp_v9,0,10);
            FUN_002be624(temp_v16 + 0x980,&LAB_0038cbd4,temp_v9);
          }
        }
        temp_v9 = temp_v16 + 0x980;
        FUN_002c5e80(temp_v9,0,10);
        if (temp_v9 == 0) {
          *(unsigned char *)(temp_v16 + 0x9b1) = 1;
        }
        temp_v5 = FUN_00234474(temp_v17,temp_v36);
        if ((temp_v5 != 0) && (FUN_002c5e80(temp_v5,0,10), temp_v5 != temp_v9)) {
          *(unsigned char *)(temp_v16 + 0x9b2) = 1;
        }
        temp_v5 = FUN_00234618(temp_v17);
        temp_v9 = temp_v5 * 0x18;
        FUN_00262888(temp_v9,temp_v41);
        temp_v1 = 1;
        temp_v15 = 0;
        temp_v2 = 1;
        temp_v14 = temp_v5;
        FUN_003df0c4(&temp_v20,temp_v17,&temp_v33,temp_v9);
        *(unsigned int *)(temp_v46 + 0xc) = temp_v20;
        *(unsigned int *)(temp_v46 + 0x10) = uStack_1c04;
        temp_v5 = FUN_002a12d8(temp_v46 + 0xc);
        if (temp_v5 < 0) {
          FUN_002c6a10(temp_v9);
          temp_v7 = FUN_002a12d8(temp_v46 + 0xc);
          return temp_v7;
        }
        temp_v5 = 0;
        temp_v11 = 1;
        temp_v12 = 1;
        if (temp_v5 < temp_v33) {
          do {
            temp_v8 = temp_v9 + temp_v5 * 0x18;
            temp_v1 = FUN_002a2df8(temp_v8);
            temp_v1 = temp_v11 & temp_v1;
            temp_v2 = FUN_002a2dec(temp_v8);
            temp_v2 = temp_v12 & temp_v2;
            temp_v5 = temp_v5 + 1;
            temp_v11 = temp_v1;
            temp_v12 = temp_v2;
          } while (temp_v5 < temp_v33);
        }
        *(unsigned char *)(temp_v16 + 0x9ac) = temp_v1;
        *(unsigned char *)(temp_v16 + 0x9ad) = temp_v2;
        FUN_002c6a10(temp_v9);
        if (((*(char *)(temp_v40 + 0xac) == '\0') &&
            (temp_v9 = FUN_00234474(temp_v17,temp_v35), temp_v9 != 0)) &&
           (FUN_002c5e80(temp_v9,0,10), temp_v5 = temp_v16, temp_v9 == 1)) {
          temp_v18 = temp_v18 - 1;
          FUN_002c4938(temp_v16,0x80);
          FUN_002c4938(temp_v5 + 0x80,0x100);
          FUN_002c4938(temp_v5 + 0x180,0x800);
          puVar5 = (unsigned int *)&temp_v20;
          temp_v14 = 0;
          temp_v15 = 0;
          temp_v16 = 0;
          temp_v17 = (unsigned char *)0x0;
          nn_fnd_DateTime_DateTime_sub_object(puVar5,0x7b2,1);
          temp_v3 = puVar5[1];
          *(unsigned int *)(temp_v5 + 0x9a0) = *puVar5;
          *(unsigned int *)(temp_v5 + 0x9a4) = temp_v3;
          *(unsigned char *)(temp_v5 + 0x9ac) = 0;
          *(unsigned char *)(temp_v5 + 0x9ad) = 0;
          *(unsigned char *)(temp_v5 + 0x9ae) = 0;
          *(unsigned char *)(temp_v5 + 0x9af) = 0;
          *(unsigned char *)(temp_v5 + 0x9b0) = 0;
          *(unsigned char *)(temp_v5 + 0x9b1) = 0;
          *(unsigned char *)(temp_v5 + 0x9b2) = 0;
          *(unsigned char *)(temp_v5 + 0x9b3) = 0;
        }
      }
      temp_v13 = temp_v13 + 1;
    } while (temp_v13 < *(unsigned int *)(temp_v7 + 0x67c));
  }
  temp_v5 = temp_v18 + 1;
  *(unsigned char *)(*(int *)(temp_v7 + 0x678) + temp_v18 * 0x9c8 + 0x9b3) = 1;
  temp_v9 = *(int *)(temp_v7 + 0x67c) + 1;
  *temp_v39 = temp_v9;
  *(int *)(temp_v7 + 0x680) = *(int *)(temp_v7 + 0x680) + 1;
  if (temp_v9 != temp_v5) {
    FUN_002c564c(0);
    *(int *)(temp_v7 + 0x67c) = temp_v5;
  }
  return 0;
}
