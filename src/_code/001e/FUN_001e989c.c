/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001e989c` (_code @ 0x1e989c, 0xf4c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
    unsigned int sp3C; /* 0x3c: local_3c */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern unsigned char LAB_001e9ec8; /* 0x1e9ec8 */
extern unsigned char LAB_001e9ee0; /* 0x1e9ee0 */
extern unsigned char LAB_001e9ef8; /* 0x1e9ef8 */
extern unsigned char LAB_001e9f10; /* 0x1e9f10 */
extern unsigned char LAB_0031305f; /* 0x31305f */
extern unsigned int DAT_00433158; /* 0x433158 */
extern unsigned int *DAT_0044e300; /* 0x44e300 */
extern unsigned char DAT_0049f950; /* 0x49f950 */
extern unsigned int DAT_0049fc74; /* 0x49fc74 */
extern unsigned int DAT_0049fc88; /* 0x49fc88 */
extern int DAT_0049fd14; /* 0x49fd14 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_0019203c. */
/* Supplied declaration required: FUN_0020ffa0. */
/* Supplied declaration required: FUN_00210030. */
/* Supplied declaration required: FUN_00211ad4. */
extern int FUN_00215918(void);
extern int FUN_0025a274(unsigned int);
extern int FUN_0025a2bc(void);
/* Supplied declaration required: FUN_0025a318. */
extern unsigned int FUN_00263e48(unsigned char *);
/* Supplied declaration required: FUN_0026e594. */
extern int FUN_0026f0d8(unsigned int);
/* Supplied declaration required: FUN_0026fa94. */
/* Supplied declaration required: FUN_0026fd14. */
/* Supplied declaration required: FUN_0027007c. */
/* Supplied declaration required: FUN_002701c4. */
/* Supplied declaration required: FUN_00275e58. */
/* Supplied declaration required: FUN_00276034. */
extern int FUN_00282df8(void);
/* Supplied declaration required: FUN_002872a4. */
/* Supplied declaration required: FUN_00287e9c. */
extern int FUN_00289924(void);
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_00291be8. */
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_00298fec. */
/* Supplied declaration required: FUN_0029bdb4. */
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_0029c56c. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_0029c660. */
extern int FUN_0029d8fc(int);
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002a0640. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a06dc. */
/* Supplied declaration required: FUN_002a0c54. */
/* Supplied declaration required: FUN_002a61f8. */
/* Supplied declaration required: FUN_002a7604. */
/* Supplied declaration required: FUN_002a88dc. */
extern int FUN_002ae16c(unsigned int);
/* Supplied declaration required: FUN_002b2d40. */
/* Supplied declaration required: FUN_002b85bc. */
extern unsigned short FUN_002b88c4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002b9008. */
extern int FUN_002b902c(unsigned int);
/* Supplied declaration required: FUN_002b91c4. */
/* Supplied declaration required: FUN_002bc2c4. */
extern int FUN_002bf6d0(unsigned int, unsigned int);
extern int FUN_002bffbc(unsigned int);
extern int FUN_002c0b94(void);
extern int FUN_002c0e9c(void);
/* Supplied declaration required: FUN_002c0ec4. */
/* Supplied declaration required: FUN_002c1774. */
/* Supplied declaration required: FUN_002c1ffc. */
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c45b8. */
extern unsigned int FUN_002c5218(void);
/* Supplied declaration required: FUN_002c59b8. */
extern int FUN_002d569c(unsigned int);
/* Supplied declaration required: FUN_002f4ca0. */
extern int FUN_002fc0ec(void);
/* Supplied declaration required: FUN_0030a9a4. */
/* Supplied declaration required: FUN_003bcbf8. */


unsigned int FUN_001e989c(void)

{
/* irregular: 13 goto(s); irregular input(s): in_fpscr, in_s0; 48 native warning(s); review required */
  char temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned short temp_v1;
  unsigned char *puVar5;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int *puVar10;
  unsigned int **ppuVar11;
  unsigned int temp_v6;
  unsigned int *puVar13;
  unsigned char temp_v7;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v8;
  long long temp_v9;
  unsigned int *temp_v10;
  int temp_v11;
  int temp_v12;
  unsigned char *temp_v13;
  unsigned char temp_v14 [24];
  
  puVar13 = DAT_0044e300;
  ppuVar11 = &temp_v10;
  switch(DAT_0044e300[0x27]) {
  case 0:
    FUN_002976ac(0x3a);
    FUN_002a61f8();
    temp_v4 = FUN_002bf6d0(0x11,0x12);
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar13[0x10] = temp_v6;
    puVar13[0x11] = temp_v5;
    temp_v4 = FUN_002bf6d0(0x11,0x13);
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v5 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar13[0x12] = temp_v6;
    puVar13[0x13] = temp_v5;
    temp_v4 = FUN_002bf6d0(0x11,0x16);
    temp_v5 = VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    puVar13[0x14] = temp_v5;
    puVar13[0x15] = temp_v6;
    temp_v4 = FUN_002bf6d0(0x11,0x17);
    in_s0 = (float)VectorSignedToFloat((int)*(short *)(temp_v4 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = VectorSignedToFloat((int)*(short *)(temp_v4 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)&puVar13[0x16] = in_s0;
    puVar13[0x17] = temp_v6;
    FUN_002bc2c4();
    if (*(char *)((int)puVar13 + 0x95) == '\0') {
      temp_v4 = FUN_002c2bd0(0);
      if (temp_v4 != 0) {
        FUN_002a0678(0,4);
        FUN_002a0678(1,4);
      }
      temp_v4 = puVar13[0x27] + 1;
      break;
    }
    temp_v4 = 2;
    break;
  case 1:
    FUN_003bcbf8(DAT_0044e300 + 5);
    if (*(char *)((int)puVar13 + 0x17) == '\0') goto LAB_001ea62c;
    temp_v4 = puVar13[0x27] + 1;
    break;
  case 2:
    *(unsigned char *)(DAT_0044e300 + 4) = 0;
    FUN_002a0640(0x1000001,0,0x3c);
    FUN_00289b4c();
    if (*(char *)(puVar13 + 0x18) != '\0') {
      puVar13[2] = 1;
      puVar13[3] = 1;
    }
    if (*(char *)((int)puVar13 + 0x95) != '\0') {
      puVar13[2] = 3;
      puVar13[3] = 3;
    }
    FUN_0028d974();
    FUN_002b8b78(0x9f);
    temp_v2 = puVar13[2];
    FUN_002c0ec4(0x3a,0);
    temp_v4 = FUN_002c0e9c();
    FUN_0029f10c(temp_v4 + temp_v2 * 0x56 + 0x16,0x323232ff);
    if (*(char *)(puVar13 + 0x18) != '\0') {
      FUN_0025a318();
    }
    else {
      FUN_00211ad4();
    }
    temp_v1 = FUN_002b88c4(0x11,0x14);
    *(unsigned short *)(puVar13 + 0x1d) = temp_v1;
    temp_v1 = FUN_002b88c4(0x11,0x15);
    *(unsigned short *)((int)puVar13 + 0x76) = temp_v1;
    temp_v1 = FUN_002b88c4(0x11,0x18);
    *(unsigned short *)(puVar13 + 0x1e) = temp_v1;
    temp_v1 = FUN_002b88c4(0x11,0x19);
    *(unsigned short *)((int)puVar13 + 0x7a) = temp_v1;
    temp_v6 = FUN_00263e48(&LAB_001e9ec8);
    puVar13[0x22] = temp_v6;
    puVar5 = &LAB_001e9ee0;
    FUN_0029bddc(&LAB_001e9ee0,7);
    puVar13[0x23] = (unsigned int)puVar5;
    puVar5 = &LAB_001e9ef8;
    FUN_0029bddc(&LAB_001e9ef8,7);
    puVar13[0x24] = (unsigned int)puVar5;
    *(unsigned char *)((int)puVar13 + 0x85) = 1;
    FUN_002a0c54(&LAB_001e9f10,0);
    *(unsigned char *)((int)puVar13 + 0x86) = 1;
    temp_v4 = puVar13[0x27] + 1;
    break;
  case 3:
    temp_v4 = FUN_002ae16c(DAT_0044e300[0x23]);
    if (temp_v4 == 0) {
      temp_v4 = FUN_002ae16c(puVar13[0x24]);
      temp_v7 = temp_v4 == 0;
      if (temp_v7) {
        temp_v4 = puVar13[0x22];
      }
      if (temp_v7 && temp_v4 == 0) goto LAB_001ea62c;
    }
    temp_v4 = puVar13[0x27] + 1;
    break;
  case 4:
    *(unsigned char *)((int)DAT_0044e300 + 0x86) = 0;
    FUN_002a06dc(puVar13[0x22],0);
    temp_v6 = FUN_002c5218();
    temp_v10 = (unsigned int *)&temp_v12;
    FUN_002a88dc(*(unsigned int *)(puVar13[0x22] + 8),&temp_v13,temp_v14,&temp_v11);
    temp_v13 = (unsigned char *)((float)temp_v13 * 180.0f * 0.31830987f);
    FUN_002c1ffc(temp_v6,1);
    temp_v5 = 0x3f800000;
    in_s0 = 5.0f;
    FUN_002c1774(temp_v6);
    FUN_00298fec(temp_v6);
    FUN_002a06c8(puVar13[0x23],1);
    FUN_002a06c8(puVar13[0x24],1);
    puVar10 = (unsigned int *)puVar13[0x23];
    if ((*puVar10 & 4) != 0) {
      *puVar10 = *puVar10 & 0xfffffffb;
      *(unsigned int *)(puVar10[2] + 0x74) = temp_v5;
      in_s0 = *(float *)(puVar10[2] + 0x78);
      FUN_0029bdb4();
    }
    puVar10 = (unsigned int *)puVar13[0x24];
    if ((*puVar10 & 4) == 0) {
      *puVar10 = *puVar10 | 4;
      *(unsigned int *)(puVar10[2] + 0x74) = 0;
      in_s0 = *(float *)(puVar10[2] + 0x78);
      FUN_0029bdb4();
    }
    puVar10 = (unsigned int *)puVar13[0x24];
    *puVar10 = *puVar10 | 2;
    *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
    FUN_002a0678(0,10);
    FUN_002a0678(1,10);
    temp_v4 = puVar13[0x27] + 1;
    break;
  case 5:
    temp_v4 = FUN_00289924();
    if ((temp_v4 == 0) || (temp_v4 = FUN_0025a2bc(), puVar2 = DAT_0044e300, temp_v4 == 0))
    goto LAB_001ea62c;
    temp_v8 = 1.0f;
    DAT_0044e300[0x19] = (float)DAT_0044e300[0x19] + 1.0f;
    temp_v4 = FUN_002b902c(5);
    if ((temp_v4 != 0) || (temp_v4 = FUN_002b902c(0xe), temp_v4 != 0)) {
      puVar2[2] = puVar2[2] - 1;
    }
    temp_v4 = FUN_002b902c(6);
    if ((temp_v4 == 0) && (temp_v4 = FUN_002b902c(0xf), temp_v4 == 0)) {
      temp_v4 = puVar2[2];
    }
    else {
      temp_v4 = puVar2[2] + 1;
      puVar2[2] = temp_v4;
    }
    temp_v4 = (temp_v4 + 4) % 4;
    puVar2[2] = temp_v4;
    if (temp_v4 != puVar2[3]) {
      FUN_002b91c4(0x100016c);
      puVar2[3] = puVar2[2];
    }
    if ((int)puVar2[0x19] >= 0x41f00001) {
      puVar2[0x19] = 0;
    }
    in_s0 = 0.06666667f;
    if ((int)puVar2[0x19] < 0x41700001) {
      in_s0 = (float)puVar2[0x1a] + 0.06666667f;
      *(float *)&puVar2[0x1a] = in_s0;
    }
    else if ((int)puVar2[0x19] < 0x41f00001) {
      in_s0 = (float)puVar2[0x1a] - 0.06666667f;
      *(float *)&puVar2[0x1a] = in_s0;
    }
    temp_v9 = (unsigned long long)(unsigned int)temp_v8 << 0x20;
    if ((int)puVar2[0x1a] < 0x3f800001) {
      temp_v8 = (float)puVar2[0x1a];
    }
    *(float *)&puVar2[0x1a] = temp_v8;
    if (temp_v8 <= 0.0f) {
      temp_v8 = 0.0f;
    }
    *(float *)&puVar2[0x1a] = temp_v8;
    puVar2 = DAT_0044e300;
    temp_v4 = 0;
    do {
      temp_v2 = FUN_0029d8fc((int)*(short *)((int)puVar2 + temp_v4 * 2 + 0x74));
      if ((temp_v2 == 1) ||
         (temp_v2 = FUN_0029d8fc((int)*(short *)((int)puVar2 + temp_v4 * 2 + 0x74)), temp_v2 == 2)) {
        puVar2[2] = temp_v4;
        break;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    temp_v4 = 0;
    do {
      temp_v2 = FUN_0029d8fc((int)*(short *)((int)puVar2 + temp_v4 * 2 + 0x74));
      if (temp_v2 == 6) {
        puVar2[2] = temp_v4;
        *(unsigned char *)((int)puVar2 + 99) = 1;
      }
      puVar3 = DAT_0044e300;
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 4);
    if ((*(char *)((int)DAT_0044e300 + 0x96) != '\0') && (temp_v4 = FUN_0025a2bc(), temp_v4 != 0)) {
      *(unsigned char *)((int)puVar3 + 0x96) = 0;
      temp_v6 = (unsigned int)((unsigned long long)temp_v9 >> 0x20);
      if (*(char *)(puVar3 + 0x25) != '\0') {
        puVar10 = (unsigned int *)puVar3[0x24];
        *puVar10 = *puVar10 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 1;
        puVar10 = (unsigned int *)puVar3[0x24];
        if ((*puVar10 & 4) != 0) {
          *puVar10 = *puVar10 & 0xfffffffb;
          *(unsigned int *)(puVar10[2] + 0x74) = temp_v6;
          FUN_0029bdb4();
        }
        temp_v6 = puVar3[0x24];
        in_s0 = (float)puVar3[0x26];
      }
      else {
        puVar10 = (unsigned int *)puVar3[0x23];
        *puVar10 = *puVar10 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 1;
        puVar10 = (unsigned int *)puVar3[0x23];
        if ((*puVar10 & 4) != 0) {
          *puVar10 = *puVar10 & 0xfffffffb;
          *(unsigned int *)(puVar10[2] + 0x74) = temp_v6;
          FUN_0029bdb4();
        }
        temp_v6 = puVar3[0x23];
        in_s0 = (float)puVar3[0x26];
      }
      FUN_00210030(temp_v6);
    }
    temp_v4 = FUN_0025a274(*(unsigned int *)(puVar3[0x23] + 8));
    if (((temp_v4 != 0) && (temp_v4 = FUN_002d569c(*(unsigned int *)(puVar3[0x23] + 8)), temp_v4 != 0)) &&
       (*(char *)(puVar3 + 0x25) == '\0')) {
      puVar10 = (unsigned int *)puVar3[0x23];
      if ((*puVar10 & 4) == 0) {
        *puVar10 = *puVar10 | 4;
        *(int *)(puVar10[2] + 0x74) = (int)temp_v9;
        FUN_0029bdb4();
      }
      puVar10 = (unsigned int *)puVar3[0x23];
      *puVar10 = *puVar10 | 2;
      *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
      puVar3[0x26] = (int)temp_v9;
      FUN_002872a4(*(unsigned int *)(puVar3[0x24] + 8));
      in_s0 = (float)temp_v9;
      FUN_0020ffa0(*(unsigned int *)(puVar3[0x24] + 8));
      puVar10 = (unsigned int *)puVar3[0x24];
      *puVar10 = *puVar10 & 0xfffffffd;
      *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 1;
      puVar10 = (unsigned int *)puVar3[0x24];
      if ((*puVar10 & 4) != 0) {
        *puVar10 = *puVar10 & 0xfffffffb;
        *(int *)(puVar10[2] + 0x74) = (int)((unsigned long long)temp_v9 >> 0x20);
        in_s0 = *(float *)(puVar10[2] + 0x78);
        FUN_0029bdb4();
      }
      *(unsigned char *)(puVar3 + 0x25) = 1;
    }
    temp_v2 = puVar13[2];
    FUN_002c0ec4(0x3a,0);
    temp_v4 = FUN_002c0e9c();
    FUN_0029f10c(temp_v4 + temp_v2 * 0x56 + 0x16,0x323232ff);
    if (((*(char *)((int)puVar13 + 99) == '\0') && (temp_v4 = FUN_0026f0d8(1), temp_v4 == 0)) &&
       (temp_v4 = FUN_002bffbc(0), temp_v4 == 0)) goto LAB_001ea62c;
    puVar13 = DAT_0044e300;
    temp_v3 = DAT_0044e300[2];
    temp_v7 = temp_v3 == 1;
    if (temp_v7) {
      temp_v3 = (unsigned int)*(unsigned char *)(DAT_0044e300 + 0x18);
    }
    if (temp_v7 && temp_v3 == 0) {
      *(unsigned char *)((int)DAT_0044e300 + 99) = 0;
      goto LAB_001ea62c;
    }
    FUN_002b91c4(0x100016d);
    temp_v4 = puVar13[2];
    if (temp_v4 == 1) {
      temp_v4 = 0;
      *(unsigned char *)((int)puVar13 + 0x61) = 1;
      do {
        FUN_002b9008();
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      *(unsigned char *)((int)puVar13 + 99) = 0;
      *(unsigned char *)(puVar13 + 0x1f) = 1;
      puVar13[0x20] = 2;
      FUN_00276034();
      FUN_00275e58(1);
      temp_v4 = 7;
    }
    else if (temp_v4 != 0) {
      if (temp_v4 != 2) {
        if (temp_v4 == 3) {
          temp_v4 = 0;
          *(unsigned char *)((int)puVar13 + 99) = 0;
          do {
            FUN_002b9008();
            temp_v4 = temp_v4 + 1;
          } while (temp_v4 < 4);
          puVar13[0x27] = 0xb;
          FUN_0029c660(0,10,0xff);
          FUN_0029c660(1,10,0xff);
        }
        goto LAB_001ea62c;
      }
      temp_v4 = 0;
      *(unsigned char *)((int)puVar13 + 0x61) = 1;
      do {
        FUN_002b9008();
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      *(unsigned char *)((int)puVar13 + 99) = 0;
      *(unsigned char *)(puVar13 + 0x1f) = 1;
      puVar13[0x20] = 2;
      FUN_00276034();
      FUN_00275e58(1);
      temp_v4 = 9;
    }
    else {
      *(unsigned char *)((int)puVar13 + 0x62) = 1;
      temp_v4 = 0;
      *(unsigned char *)((int)puVar13 + 99) = 0;
      do {
        FUN_002b9008();
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < 4);
      FUN_0029c660(0,0xc,0xffffffff);
      FUN_0029c660(1,0xc,0xffffffff);
      FUN_0029c650(0xf);
      temp_v4 = 6;
    }
    break;
  case 6:
    temp_v4 = 0xc;
    break;
  case 7:
    if (*(char *)(DAT_0044e300 + 0x1f) != '\0') goto LAB_001ea62c;
    FUN_002a7604(0);
    FUN_0030a9a4();
    temp_v4 = 8;
    break;
  case 8:
    temp_v4 = FUN_00282df8();
    if (temp_v4 != 0) goto LAB_001ea62c;
    temp_v4 = FUN_00215918();
    if (temp_v4 == 0) goto LAB_001ea3d8;
    *(unsigned char *)((int)puVar13 + 0x62) = 1;
    FUN_0029c650(0xf);
    temp_v4 = 0xc;
    break;
  case 9:
    if (*(char *)(DAT_0044e300 + 0x1f) != '\0') goto LAB_001ea62c;
    FUN_002a7604(0);
    FUN_002f4ca0();
    temp_v4 = 10;
    break;
  case 10:
    temp_v4 = FUN_002fc0ec();
    if (temp_v4 != 0) {
LAB_001ea3d8:
      puVar13 = DAT_0044e300;
      in_s0 = 0.0f;
      DAT_0044e300[0x19] = 0;
      puVar13[0x1a] = 0;
      FUN_002b8b78(0x9f);
      temp_v1 = FUN_002b88c4(0x11,0x14);
      *(unsigned short *)(puVar13 + 0x1d) = temp_v1;
      temp_v1 = FUN_002b88c4(0x11,0x15);
      *(unsigned short *)((int)puVar13 + 0x76) = temp_v1;
      temp_v1 = FUN_002b88c4(0x11,0x18);
      *(unsigned short *)(puVar13 + 0x1e) = temp_v1;
      temp_v1 = FUN_002b88c4(0x11,0x19);
      *(unsigned short *)((int)puVar13 + 0x7a) = temp_v1;
      *(unsigned char *)((int)puVar13 + 0x61) = 0;
      FUN_00275e58(2);
      *(unsigned char *)(puVar13 + 0x21) = 1;
      FUN_002a0c54("title/title_top.bcenv",0);
      *(unsigned char *)((int)puVar13 + 0x85) = 1;
      FUN_002a06dc(puVar13[0x22],0);
      *(unsigned char *)((int)puVar13 + 0x96) = 1;
      puVar13[0x27] = 5;
    }
    goto LAB_001ea62c;
  case 0xb:
    temp_v4 = FUN_00289924();
    if (temp_v4 == 0) goto LAB_001ea62c;
    temp_v4 = 0xc;
    break;
  case 0xc:
    temp_v4 = FUN_00289924();
    if (temp_v4 != 0) {
      FUN_00291be8();
      FUN_002c45b8(*DAT_0044e300,0);
      FUN_002b85bc(3);
      temp_v4 = puVar13[2];
      if (temp_v4 != 1) {
        if (temp_v4 != 0) {
          if (temp_v4 == 3) {
            FUN_0019203c();
          }
        }
        else {
          FUN_0026fa94(0);
          FUN_0026e594(DAT_00433158);
          FUN_00287e9c(0);
          DAT_0049fc74 = 0;
          DAT_0049fc88 = 1;
          temp_v10 = (unsigned int *)0x1;
          temp_v11 = 0xffffffff;
          temp_v12 = 0x31303065;
          temp_v13 = &LAB_0031305f;
          FUN_002c59b8(4,&temp_v10,0x20);
        }
      }
      else {
        FUN_002701c4();
        FUN_00287e9c(1);
        temp_v4 = FUN_002c0b94();
        if (*(unsigned char *)(temp_v4 + 2) >= 2) {
          if (*(unsigned char *)(temp_v4 + 2) == 2) {
            temp_v6 = 0x20;
            temp_v10 = (unsigned int *)0x1;
            temp_v11 = 0xffffffff;
            temp_v12 = 0x31303065;
            temp_v13 = &LAB_0031305f;
            temp_v5 = 4;
            ppuVar11 = &temp_v10;
            DAT_0049fc88 = 1;
            DAT_0049fc74 = 0;
            FUN_002c59b8(temp_v5,ppuVar11,temp_v6);
          }
        }
        else {
          FUN_0027007c();
          FUN_0026fd14();
          if (DAT_0049fd14 >= 200) {
            temp_v10 = (unsigned int *)(DAT_0049fd14 - 200);
            temp_v6 = 4;
            temp_v5 = 0xe;
          }
          else {
            if (DAT_0049fd14 < 100) {
              DAT_0049f950 = 1;
            }
            temp_v6 = 0;
            ppuVar11 = (unsigned int **)0x0;
            if (DAT_0049fd14 < 100) {
              temp_v5 = 6;
            }
            else {
              temp_v5 = 8;
            }
          }
          DAT_0049fc88 = 1;
          DAT_0049fc74 = 0;
          FUN_002c59b8(temp_v5,ppuVar11,temp_v6);
        }
      }
    }
  default:
    goto LAB_001ea62c;
  }
  puVar13[0x27] = temp_v4;
LAB_001ea62c:
  puVar13 = DAT_0044e300;
  if (*(char *)(DAT_0044e300 + 0x1f) != '\0') {
    if (DAT_0044e300[0x20] == 1) {
      *(unsigned char *)(DAT_0044e300 + 0x21) = 0;
    }
    else if ((int)DAT_0044e300[0x20] < 0) {
      temp_v0 = *(char *)(DAT_0044e300 + 0x25);
      DAT_0044e300[0x20] = 2;
      *(unsigned char *)(puVar13 + 0x1f) = 0;
      if (temp_v0 != '\0') {
        puVar10 = (unsigned int *)puVar13[0x24];
        if ((*puVar10 & 4) == 0) {
          *puVar10 = *puVar10 | 4;
          *(unsigned int *)(puVar10[2] + 0x74) = 0;
          in_s0 = *(float *)(puVar10[2] + 0x78);
          FUN_0029bdb4();
        }
        puVar10 = (unsigned int *)puVar13[0x24];
        *puVar10 = *puVar10 | 2;
        *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
        FUN_002b2d40(puVar13[0x24]);
        *(float *)&puVar13[0x26] = in_s0;
      }
      else {
        puVar10 = (unsigned int *)puVar13[0x23];
        if ((*puVar10 & 4) == 0) {
          *puVar10 = *puVar10 | 4;
          *(unsigned int *)(puVar10[2] + 0x74) = 0;
          in_s0 = *(float *)(puVar10[2] + 0x78);
          FUN_0029bdb4();
        }
        puVar10 = (unsigned int *)puVar13[0x23];
        *puVar10 = *puVar10 | 2;
        *(unsigned char *)(*(int *)(puVar10[2] + 0x2c) + 0x1f6) = 0;
        FUN_002b2d40(puVar13[0x23]);
        *(float *)&puVar13[0x26] = in_s0;
      }
      FUN_0029c56c(puVar13[0x22],0);
      *(unsigned char *)((int)puVar13 + 0x85) = 0;
    }
    puVar13[0x20] = puVar13[0x20] - 1;
  }
  puVar13 = DAT_0044e300;
  temp_v8 = (float)DAT_0044e300[0x1b];
  if (*(char *)((int)DAT_0044e300 + 0x61) != '\0') {
    if (temp_v8 < 0.0f) {
      return 0;
    }
    temp_v8 = temp_v8 - 0.1f;
    *(float *)&DAT_0044e300[0x1b] = temp_v8;
    if (temp_v8 <= 0.0f) {
      temp_v8 = 0.0f;
    }
  }
  else {
    if ((int)temp_v8 >= 0x3f800001) {
      return 0;
    }
    temp_v8 = temp_v8 + 0.1f;
    *(float *)&DAT_0044e300[0x1b] = temp_v8;
    if ((int)temp_v8 >= 0x3f800001) {
      temp_v8 = 1.0f;
    }
  }
  *(float *)&puVar13[0x1b] = temp_v8;
  return 0;
}
