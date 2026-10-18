/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001d98c4` (_code @ 0x1d98c4, 0x16f0 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of void: 7 slot(s), 24 byte(s) */
typedef struct {
    unsigned int sp44; /* 0x44: local_44 */
    unsigned int sp50; /* 0x50: local_50 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned short spC6; /* 0xc6: local_c6 */
    unsigned short spC8; /* 0xc8: local_c8 */
} void_stack;

extern unsigned char LAB_001d9c90; /* 0x1d9c90 */
extern unsigned char LAB_001d9ca8; /* 0x1d9ca8 */
extern unsigned char LAB_001d9cc0; /* 0x1d9cc0 */
extern unsigned char LAB_001d9cdc; /* 0x1d9cdc */
extern unsigned char LAB_001d9cf8; /* 0x1d9cf8 */
extern unsigned char LAB_001d9d10; /* 0x1d9d10 */
extern unsigned char LAB_001d9d2c; /* 0x1d9d2c */
extern unsigned char LAB_001d9d48; /* 0x1d9d48 */
extern unsigned char LAB_001d9d64; /* 0x1d9d64 */
extern unsigned char LAB_001da170; /* 0x1da170 */
extern unsigned char LAB_001da19c; /* 0x1da19c */
extern unsigned char LAB_001da1b4; /* 0x1da1b4 */
extern unsigned char LAB_001da1cc; /* 0x1da1cc */
extern unsigned char DAT_003ff040; /* 0x3ff040 */
extern unsigned char DAT_00420420; /* 0x420420 */
extern unsigned int *DAT_00432ce0; /* 0x432ce0 */
extern unsigned short DAT_00432cf8; /* 0x432cf8 */
extern char s_Mikado_00432cfe[7]; /* 0x432cfe */
extern unsigned int DAT_0049f91c; /* 0x49f91c */
extern unsigned int DAT_0049f920; /* 0x49f920 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00152af8. */
/* Supplied declaration required: FUN_0019dfbc. */
/* Supplied declaration required: FUN_001d03a4. */
/* Supplied declaration required: FUN_00208a70. */
/* Supplied declaration required: FUN_0020fe84. */
extern int FUN_0025a268(unsigned int);
/* Supplied declaration required: FUN_002637b4. */
/* Supplied declaration required: FUN_0026385c. */
/* Supplied declaration required: FUN_0026389c. */
/* Supplied declaration required: FUN_002638dc. */
/* Supplied declaration required: FUN_002638fc. */
extern int FUN_00263910(unsigned int);
extern int FUN_0026394c(unsigned int);
/* Supplied declaration required: FUN_00263978. */
/* Supplied declaration required: FUN_002639f4. */
/* Supplied declaration required: FUN_00263bb4. */
extern unsigned int FUN_00263e48(unsigned char *);
/* Supplied declaration required: FUN_0026e97c. */
/* Supplied declaration required: FUN_00276c24. */
/* Supplied declaration required: FUN_0027fbbc. */
/* Supplied declaration required: FUN_00281e20. */
extern int FUN_00282d98(void);
/* Supplied declaration required: FUN_00282e6c. */
/* Supplied declaration required: FUN_00287298. */
extern int FUN_002876d0(unsigned int);
/* Supplied declaration required: FUN_00288990. */
/* Supplied declaration required: FUN_002891c8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_0028d850. */
/* Supplied declaration required: FUN_0028d974. */
/* Supplied declaration required: FUN_00291a5c. */
/* Supplied declaration required: FUN_00291be8. */
extern int FUN_00294180(unsigned int);
/* Supplied declaration required: FUN_002946f4. */
/* Supplied declaration required: FUN_00294a64. */
extern unsigned int *FUN_00294a98(void);
/* Supplied declaration required: FUN_00295904. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_00297920. */
/* Supplied declaration required: FUN_00298fec. */
extern unsigned int FUN_0029a2d0(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0029b0fc. */
/* Supplied declaration required: FUN_0029bb8c. */
/* Supplied declaration required: FUN_0029bda8. */
/* Supplied declaration required: FUN_0029bddc. */
/* Supplied declaration required: FUN_0029c0fc. */
/* Supplied declaration required: FUN_0029c56c. */
/* Supplied declaration required: FUN_0029c650. */
/* Supplied declaration required: FUN_0029c660. */
extern int FUN_0029e3d0(void);
/* Supplied declaration required: FUN_0029e41c. */
extern int FUN_0029e468(void);
/* Supplied declaration required: FUN_0029e48c. */
/* Supplied declaration required: FUN_0029e5c8. */
/* Supplied declaration required: FUN_0029e63c. */
/* Supplied declaration required: FUN_002a0640. */
/* Supplied declaration required: FUN_002a0678. */
/* Supplied declaration required: FUN_002a06c8. */
/* Supplied declaration required: FUN_002a0790. */
/* Supplied declaration required: FUN_002a0c54. */
/* Supplied declaration required: FUN_002a3d50. */
/* Supplied declaration required: FUN_002a5058. */
/* Supplied declaration required: FUN_002a51dc. */
/* Supplied declaration required: FUN_002a5a48. */
/* Supplied declaration required: FUN_002a7540. */
/* Supplied declaration required: FUN_002a755c. */
/* Supplied declaration required: FUN_002a7604. */
/* Supplied declaration required: FUN_002a7aa0. */
/* Supplied declaration required: FUN_002a7bd4. */
extern int FUN_002ae16c(unsigned int);
/* Supplied declaration required: FUN_002ae18c. */
/* Supplied declaration required: FUN_002b2cec. */
/* Supplied declaration required: FUN_002b85bc. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b902c(unsigned int);
/* Supplied declaration required: FUN_002be7fc. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002bf9e8. */
/* Supplied declaration required: FUN_002c0128. */
extern int FUN_002c0ba8(unsigned int);
/* Supplied declaration required: FUN_002c1774. */
/* Supplied declaration required: FUN_002c1830. */
/* Supplied declaration required: FUN_002c1ffc. */
/* Supplied declaration required: FUN_002c20a8. */
/* Supplied declaration required: FUN_002c2210. */
/* Supplied declaration required: FUN_002c23f8. */
/* Supplied declaration required: FUN_002c2430. */
/* Supplied declaration required: FUN_002c2ba4. */
extern int FUN_002c2bd0(unsigned int);
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c45b8. */
/* Supplied declaration required: FUN_002c59b8. */
extern unsigned int FUN_002c5e2c(unsigned char *);
extern unsigned int FUN_002c5e3c(unsigned char *, unsigned char *, unsigned int, unsigned int);
extern int FUN_002c7938(unsigned int);
/* Supplied declaration required: FUN_002cf2d8. */
/* Supplied declaration required: FUN_002cf4c4. */
/* Supplied declaration required: FUN_002e28d4. */
/* Supplied declaration required: FUN_002fbfcc. */
extern int FUN_0033534c(unsigned int);


unsigned int FUN_001d98c4(void)

{
/* irregular: 5 goto(s); irregular input(s): in_fpscr, in_s0; 82 native warning(s); review required */
  short temp_v0;
  unsigned int *puVar2;
  char temp_v1;
  int temp_v2;
  unsigned int *puVar5;
  unsigned char *puVar6;
  unsigned int *puVar7;
  unsigned int temp_v3;
  unsigned int *puVar9;
  char *pcVar10;
  unsigned int temp_v4;
  short *psVar12;
  unsigned int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  int in_s0;
  short temp_v7 [6];
  unsigned char temp_v8 [12];
  unsigned char temp_v9 [12];
  int temp_v10;
  unsigned char temp_v11 [4];
  unsigned int temp_v12;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int uStack_74;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int temp_v13;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int temp_v14;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int temp_v15;
  
  puVar2 = DAT_00432ce0;
  psVar12 = temp_v7;
  if ((unsigned int)DAT_00432ce0[4] >= 2) {
    FUN_002ae18c(temp_v7,DAT_00432ce0[DAT_00432ce0[0x154] + 0xf]);
    FUN_002c1774(puVar2 + 0x12);
    FUN_002c20a8(puVar2 + 0x12,temp_v7,temp_v8,temp_v9);
    FUN_002c1ffc(puVar2 + 0x12,1);
    temp_v6 = 0;
    in_s0 = temp_v10;
    do {
      if (*(char *)(puVar2 + temp_v6 * 3 + 0x15b) != '\0') {
        FUN_00281e20(puVar2[temp_v6 * 3 + 0x15a]);
        temp_v2 = FUN_002c7938(puVar2[temp_v6 * 3 + 0x15a]);
        if (temp_v2 != 0) {
          *(unsigned char *)(puVar2 + temp_v6 * 3 + 0x15b) = 0;
        }
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
  }
  puVar7 = DAT_00432ce0;
  temp_v6 = puVar2[4];
  if (temp_v6 != 10) {
    if (9 >= temp_v6) {
      switch(temp_v6) {
      case 0:
        temp_v6 = 0x100;
        FUN_002c23f8();
        puVar5 = (unsigned int *)0x0;
        if (temp_v6 != 0) {
          puVar5 = (unsigned int *)FUN_00294a98();
          *puVar5 = (unsigned int)&DAT_00420420;
        }
        puVar7[0xc] = (unsigned int)puVar5;
        FUN_00294a64();
        temp_v4 = 0;
        do {
          FUN_002946f4(puVar7[0xc],temp_v4 & 0xff,0x1c0);
          temp_v4 = temp_v4 + 1;
        } while ((int)temp_v4 < 3);
        temp_v6 = (int)*(char *)((unsigned int)*(unsigned char *)((int)puVar7 + 9) * 0x24 + 0x432cfd);
        puVar7[0x158] = temp_v6;
        if (temp_v6 != 0) {
          puVar6 = &LAB_001d9c90;
          FUN_0029bddc(&LAB_001d9c90,7);
          puVar7[0xe] = (unsigned int)puVar6;
          FUN_002a06c8();
          puVar9 = (unsigned int *)puVar7[0xe];
          *puVar9 = *puVar9 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar9[2] + 0x2c) + 0x1f6) = 1;
        }
        else {
          puVar6 = &LAB_001da170;
          FUN_0029bddc(&LAB_001da170,7);
          puVar7[0xd] = (unsigned int)puVar6;
          FUN_002a06c8();
          puVar9 = (unsigned int *)puVar7[0xd];
          *puVar9 = *puVar9 & 0xfffffffd;
          *(unsigned char *)(*(int *)(puVar9[2] + 0x2c) + 0x1f6) = 1;
        }
        temp_v3 = FUN_00263e48(&LAB_001d9ca8);
        puVar7[0xf] = temp_v3;
        temp_v3 = FUN_00263e48(&LAB_001d9cc0);
        puVar7[0x10] = temp_v3;
        temp_v3 = FUN_00263e48(&LAB_001d9cdc);
        puVar7[0x154] = 0xffffffff;
        puVar7[0x11] = temp_v3;
        FUN_002a0c54(&LAB_001d9cf8,0);
        FUN_002a0790(0);
        FUN_00263bb4(puVar7,2);
        FUN_002c2210(puVar7 + 0x12,1);
        FUN_002ae18c(temp_v7,puVar7[puVar7[0x154] + 0xf]);
        FUN_002c1774(puVar7 + 0x12);
        FUN_002c20a8(puVar7 + 0x12,temp_v7,temp_v8,temp_v9);
        FUN_002c1ffc(puVar7 + 0x12,1);
        FUN_00298fec(puVar7 + 0x12);
        FUN_002639f4();
        FUN_00289b4c();
        FUN_0028d974();
        temp_v3 = FUN_002c5e3c(&LAB_001d9d10,temp_v11,1,0x80);
        puVar7[0x159] = temp_v3;
        temp_v3 = FUN_002c5e3c(&LAB_001d9d2c,temp_v11,1,0x80);
        puVar7[0x15c] = temp_v3;
        temp_v3 = FUN_002c5e3c(&LAB_001d9d48,temp_v11,1,0x80);
        puVar7[0x15f] = temp_v3;
        temp_v3 = FUN_002c5e3c(&LAB_001d9d64,temp_v11,1,0x80);
        puVar7[0x162] = temp_v3;
        temp_v12 = 0;
        uStack_7c = 0x42c80000;
        uStack_78 = 0;
        uStack_74 = 0x3f800000;
        uStack_70 = 0;
        uStack_6c = 0x42c80000;
        uStack_68 = 0;
        uStack_64 = 0x3f800000;
        temp_v15 = 0x3f800000;
        temp_v13 = 0;
        uStack_5c = 0x42c80000;
        uStack_58 = 0;
        uStack_54 = 0x3f800000;
        temp_v14 = 0;
        uStack_4c = 0x42c80000;
        uStack_48 = 0;
        temp_v6 = 0;
        do {
          temp_v3 = puVar7[temp_v6 * 3 + 0x159];
          FUN_002a51dc();
          puVar7[temp_v6 * 3 + 0x15a] = temp_v3;
          FUN_002a3d50();
          temp_v2 = temp_v6 + 1;
          *(unsigned char *)(puVar7 + temp_v6 * 3 + 0x15b) = 0;
          temp_v6 = temp_v2;
        } while (temp_v2 < 4);
        *(unsigned char *)((int)puVar7 + 6) = 0;
        temp_v6 = FUN_002c0ba8(0x668);
        if (((temp_v6 != 0) && (temp_v6 = FUN_002c0ba8(0x1d7), temp_v6 == 0)) ||
           (temp_v6 = FUN_002c0ba8(0x263), temp_v6 != 0)) {
          *(unsigned char *)((int)puVar7 + 6) = 1;
        }
        temp_v6 = FUN_002c0ba8(0x13b);
        if ((((temp_v6 != 0) || (temp_v6 = FUN_002c0ba8(0x1a0), temp_v6 != 0)) ||
            (temp_v6 = FUN_002c0ba8(0x1ba), temp_v6 != 0)) &&
           ((temp_v6 = FUN_002c0ba8(0x18c), temp_v6 == 0 &&
            (temp_v6 = FUN_002c0ba8(0x1d8), temp_v6 == 0)))) {
          *(unsigned char *)((int)puVar7 + 6) = 1;
        }
        *(unsigned char *)((int)puVar7 + 7) = 0;
        temp_v6 = FUN_002c0ba8(500);
        if ((temp_v6 != 0) || (temp_v6 = FUN_002c0ba8(0x1e1), temp_v6 != 0)) {
          *(unsigned char *)((int)puVar7 + 7) = 1;
        }
        *(unsigned char *)(puVar7 + 2) = 0;
        temp_v6 = FUN_002c0ba8(499);
        if ((temp_v6 != 0) || (temp_v6 = FUN_002c0ba8(0x1d8), temp_v6 != 0)) {
          *(unsigned char *)(puVar7 + 2) = 1;
        }
        temp_v3 = FUN_002891c8();
        FUN_00295904(0x33,temp_v3);
        temp_v6 = FUN_002876d0(0x1000058);
        if (temp_v6 != 1) {
          FUN_002a0640(0x1000058,0,0x3c);
        }
        puVar2[4] = 2;
        puVar2[5] = 0;
        FUN_002e28d4(1);
        break;
      case 1:
        temp_v6 = FUN_002b902c(4);
        if (temp_v6 != 0) {
          temp_v4 = *(unsigned char *)((int)puVar2 + 9) - 1;
          if (temp_v4 >= 0x14) {
            temp_v1 = '\0';
          }
          else if ((int)temp_v4 < 0) {
            temp_v1 = '\x13';
          }
          else {
            temp_v1 = *(unsigned char *)((int)puVar2 + 9) - 1;
          }
          *(char *)((int)puVar2 + 9) = temp_v1;
        }
        temp_v6 = FUN_002b902c(3);
        if (temp_v6 != 0) {
          if (*(unsigned char *)((int)puVar2 + 9) + 1 >= 0x14) {
            temp_v1 = '\0';
          }
          else {
            temp_v1 = *(unsigned char *)((int)puVar2 + 9) + 1;
          }
          *(char *)((int)puVar2 + 9) = temp_v1;
        }
        temp_v6 = FUN_002c1830(0,1);
        if (temp_v6 != 0) {
          puVar2[4] = 0;
          puVar2[5] = 0;
          FUN_00282e6c(0,0xff);
          FUN_00282e6c(1,0xff);
        }
        break;
      case 2:
        temp_v6 = FUN_00294180(puVar2[0xc]);
        if (temp_v6 != 0) {
          FUN_002a5a48(puVar2[0xc],0);
          FUN_0029bda8(puVar2[0xc]);
          puVar2[6] = DAT_0049f91c;
          puVar2[7] = DAT_0049f920;
          temp_v3 = FUN_002c5e2c(&LAB_001da19c);
          puVar2[8] = temp_v3;
          temp_v3 = FUN_002c5e2c(&LAB_001da1b4);
          puVar2[9] = temp_v3;
          temp_v6 = puVar2[8];
          FUN_002972f8(temp_v6,temp_v3);
          puVar2[10] = temp_v6;
          *(unsigned int *)(temp_v6 + 0x108) = 2;
          if (*(unsigned char *)((int)puVar2 + 9) != 0) {
            pcVar10 = s_Mikado_00432cfe + (unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24;
          }
          else {
            pcVar10 = (char *)FUN_002891c8();
          }
          FUN_00295904(0x28,pcVar10);
          temp_v3 = FUN_002c5e2c(&LAB_001da1cc);
          puVar2[0xb] = temp_v3;
          temp_v6 = FUN_002c2bd0(0);
          if (temp_v6 == 3) {
            FUN_002c2ba4(0,10,0xff);
          }
          temp_v6 = FUN_002c2bd0(1);
          if (temp_v6 == 3) {
            FUN_002c2ba4(1,10,0xff);
          }
          FUN_002fbfcc(puVar2);
          if (*(unsigned char *)((int)DAT_00432ce0 + 9) != 0) {
            pcVar10 = s_Mikado_00432cfe + (unsigned int)*(unsigned char *)((int)DAT_00432ce0 + 9) * 0x24;
          }
          else {
            pcVar10 = (char *)FUN_002891c8();
          }
          FUN_002be7fc(temp_v7,&DAT_003ff040,pcVar10);
          FUN_00263978(temp_v7);
          puVar2[5] = 0;
          FUN_002971e4(puVar2[10],
                       *(unsigned int *)((unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24 + 0x432d18));
          puVar2[4] = 5;
          FUN_002b8b78(0xbd);
        }
        break;
      case 3:
        temp_v6 = FUN_0019dfbc(puVar2[10]);
        if (temp_v6 != 2) break;
        FUN_002971e4(puVar2[10],*(unsigned int *)((unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24 + 0x432d18))
        ;
        temp_v3 = 5;
        puVar2[4] = temp_v3;
        break;
      case 5:
        temp_v6 = FUN_0019dfbc(puVar2[10]);
        if (temp_v6 != 2) break;
        puVar2[5] = 0;
        if (puVar2[0x179] != 0) {
          FUN_002b8b78(0xa6);
          FUN_0029e63c(0xffffffff,2);
          FUN_002cf4c4(puVar2[6],puVar2[7]);
          temp_v6 = 0;
          if (temp_v6 < (int)puVar2[0x179]) {
            do {
              if (*(short *)puVar2[temp_v6 + 0x165] >= 201) {
                temp_v3 = 0x3d;
              }
              else {
                switch(*(short *)puVar2[temp_v6 + 0x165]) {
                default:
                  goto LAB_001da360;
                case 1:
                  temp_v3 = 0x34;
                  break;
                case 2:
                  temp_v3 = 0x35;
                  break;
                case 3:
                  temp_v3 = 0x36;
                  break;
                case 4:
                  temp_v3 = 0x37;
                  break;
                case 5:
                  temp_v3 = 0x38;
                  break;
                case 6:
                  temp_v3 = 0x39;
                  break;
                case 7:
                  temp_v3 = 0x3a;
                  break;
                case 8:
                  temp_v3 = 0x3b;
                  break;
                case 10:
                  temp_v3 = 0x40;
                  break;
                case 0x16:
                  temp_v3 = 0x41;
                  break;
                case 0x17:
                  temp_v3 = 0x42;
                  break;
                case 0x19:
                  temp_v3 = 0x45;
                  break;
                case 0x1a:
                  temp_v3 = 0x43;
                  break;
                case 0x1b:
                  temp_v3 = 0x44;
                  break;
                case 0x1c:
                  temp_v3 = 0x46;
                  break;
                case 0x1f:
                  temp_v3 = 0x47;
                  break;
                case 0x20:
                  temp_v3 = 0x48;
                  break;
                case 0x21:
                  temp_v3 = 0x49;
                  break;
                case 0x22:
                  temp_v3 = 0x4a;
                }
              }
              FUN_0029e5c8(temp_v3);
LAB_001da360:
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < (int)puVar2[0x179]);
          }
          FUN_0029e48c();
          puVar2[4] = 6;
          break;
        }
        FUN_002b8b78(0xa5);
        FUN_002971e4(puVar2[10],0x1a);
        temp_v3 = 0x16;
        puVar2[4] = temp_v3;
        break;
      case 6:
        if (puVar2[5] != 0) {
          if (puVar2[5] == 1) {
            temp_v0 = *(short *)puVar2[puVar2[3] + 0x165];
            if ((temp_v0 < 200) || (*(char *)((int)puVar2 + 6) == '\0')) {
              if (temp_v0 != 0x17) {
                if (temp_v0 == 0x16) {
                  temp_v1 = *(char *)(puVar2 + 2);
                  goto joined_r0x001da528;
                }
              }
              else {
                temp_v1 = *(char *)((int)puVar2 + 7);
joined_r0x001da528:
                if (temp_v1 != '\0') goto LAB_001da53c;
              }
              FUN_002b8b78(0xbd);
              FUN_002971e4(puVar2[10],0x17);
              puVar2[4] = 0x62;
              puVar2[5] = 0;
            }
            else {
LAB_001da53c:
              FUN_002971e4(puVar2[10],0x19);
              puVar2[4] = 0x15;
              puVar2[5] = 0;
            }
          }
        }
        else {
          FUN_0019dfbc(puVar2[10]);
          temp_v6 = FUN_0029e468();
          if (temp_v6 != 0) {
            FUN_0029e41c();
            puVar2[4] = 99;
            puVar2[5] = 0;
            FUN_0029c660(0,10,0xff);
            FUN_0029c660(1,10,0xff);
          }
          else {
            temp_v6 = FUN_0029e3d0();
            if (temp_v6 != 0x4b) {
              puVar7 = puVar2;
              FUN_001d03a4(puVar2,temp_v6);
              puVar2[3] = (unsigned int)puVar7;
              if (*(short *)puVar2[(int)puVar7 + 0x165] >= 0xc9) {
                temp_v3 = FUN_002891c8();
                FUN_00295904(0x28,temp_v3);
              }
              else {
                FUN_00295904(0x28,(short *)puVar2[(int)puVar7 + 0x165] + 3);
              }
              puVar2[5] = 1;
            }
          }
        }
        temp_v6 = FUN_0033534c(puVar2[0xc]);
        if ((temp_v6 != 0x13) || (FUN_0027fbbc(puVar2[0xc]), in_s0 < 0x41a00000)) break;
        FUN_00287298(puVar2[0xc]);
        temp_v3 = puVar2[0xc];
        FUN_0029bda8(temp_v3);
        break;
      case 8:
        temp_v6 = FUN_0025a268(puVar2[0xc]);
        if (temp_v6 != 0) {
          FUN_0020fe84(puVar2[0xc],0);
        }
        temp_v6 = FUN_002c1830(6,2);
        if (((temp_v6 != 0) || (temp_v6 = FUN_002c1830(9,2), temp_v6 != 0)) ||
           (temp_v6 = FUN_002c1830(1), temp_v6 != 0)) {
          if (*(int *)(*(int *)(puVar2[puVar2[0x154] + 0xf] + 4) + 0x38) >= 0x40c00001) {
            puVar2[4] = 9;
            puVar2[5] = 0;
            *(unsigned char *)(puVar2 + 0x157) = 1;
          }
          break;
        }
        temp_v6 = FUN_0026394c(puVar2[puVar2[0x154] + 0xf]);
        if ((temp_v6 == 0) || (temp_v6 = FUN_00263910(puVar2[puVar2[0x158] + 0xd]), temp_v6 == 0)) {
          temp_v6 = (int)*(float *)(*(int *)(puVar2[puVar2[0x154] + 0xf] + 4) + 0x38);
          if ((temp_v6 >= 6) && (temp_v2 = FUN_002c2bd0(0), temp_v2 == 3)) {
            FUN_002a0678(0,8);
          }
          if (temp_v6 == 0xb4) {
            *(unsigned char *)(puVar2 + 0x15b) = 1;
            temp_v3 = puVar2[0x15a];
          }
          else {
            if (temp_v6 != 0x13f) {
              if (temp_v6 == 0x144) {
                FUN_0029bb8c(puVar2[0xc]);
                break;
              }
              if (temp_v6 != 0x17f) break;
              puVar2[4] = puVar2[4] + 1;
              puVar2[5] = 0;
              break;
            }
            *(unsigned char *)(puVar2 + 0x15e) = 1;
            temp_v3 = puVar2[0x15d];
          }
          FUN_002b2cec(temp_v3);
          break;
        }
        puVar2[4] = puVar2[4] + 1;
        puVar2[5] = 0;
        break;
      case 9:
        if (*(char *)(puVar2 + 0x157) != '\0') {
          FUN_0029c660(0,10,0xff);
          FUN_0029c660(1,10,0xff);
        }
        else {
          FUN_0029c660(0,0x14,0xff);
          FUN_0029c660(1,0x14,0xff);
        }
        puVar2[4] = puVar2[4] + 1;
        puVar2[5] = 0;
      }
    }
    else if (temp_v6 != 0x15) {
      if (temp_v6 < 0x15) {
        if (temp_v6 != 0xb) {
          if (temp_v6 != 0xc) {
            if (temp_v6 != 0xd) {
              if (temp_v6 == 0x14) {
                if (*(unsigned char *)((int)DAT_00432ce0 + 9) != 0) {
                  pcVar10 = s_Mikado_00432cfe + (unsigned int)*(unsigned char *)((int)DAT_00432ce0 + 9) * 0x24;
                }
                else {
                  pcVar10 = (char *)FUN_002891c8();
                }
                FUN_002be7fc(temp_v7,&DAT_003ff040,pcVar10);
                FUN_00263978(temp_v7);
                FUN_002971e4(puVar2[10],0x18);
                puVar2[4] = 5;
                FUN_002b8b78(0xbd);
                FUN_002638fc(0);
                puVar2[5] = 0;
              }
            }
            else {
              temp_v6 = FUN_00282d98();
              if ((temp_v6 == 0) &&
                 ((*(char *)(puVar2 + 0x157) != '\0' || ((int)puVar2[0x156] >= 0x87)))) {
                puVar2[4] = 0x14;
                puVar2[5] = 0;
              }
            }
            goto LAB_001dabcc;
          }
        }
        else {
          if (puVar2[0x158] != 0) {
            temp_v3 = FUN_0029a2d0(&LAB_001d9c90,7);
            puVar2[0xe] = temp_v3;
          }
          else {
            temp_v3 = FUN_0029a2d0(&LAB_001da170,7);
            puVar2[0xd] = temp_v3;
          }
          puVar2[4] = puVar2[4] + 1;
        }
        temp_v6 = FUN_002ae16c(puVar2[puVar2[0x158] + 0xd]);
        if (temp_v6 == 0) goto LAB_001dabcc;
        FUN_002a06c8(puVar2[puVar2[0x158] + 0xd],1);
        puVar9 = (unsigned int *)puVar2[puVar2[0x158] + 0xd];
        *puVar9 = *puVar9 & 0xfffffffd;
        *(unsigned char *)(*(int *)(puVar9[2] + 0x2c) + 0x1f6) = 1;
        if (*(char *)(puVar2 + 0x157) != '\0') {
          FUN_00263bb4(puVar2,2);
          *(unsigned char *)(puVar2 + 0x155) = 1;
          puVar2[0x156] = 0x78;
          FUN_002a5a48(puVar2[0xc],0x1a);
          FUN_002a0678(0,10);
          FUN_002a0678(1,10);
        }
        else {
          FUN_00263bb4(puVar2,1);
          *(unsigned char *)(puVar2 + 0x155) = 1;
          puVar2[0x156] = 0;
          FUN_002a5a48(puVar2[0xc],0x1a);
          FUN_002a0678(0,0x14);
          FUN_002a0678(1,0x14);
        }
        puVar2[4] = puVar2[4] + 1;
        puVar2[5] = 0;
      }
      else if (temp_v6 != 0x16) {
        if (temp_v6 != 0x62) {
          if ((temp_v6 == 99) && (temp_v6 = FUN_00282d98(), temp_v6 == 0)) {
            if (puVar2[10] != 0) {
              FUN_002a755c();
              puVar2[10] = 0;
            }
            if (puVar2[8] != 0) {
              FUN_002c4360();
              puVar2[8] = 0;
            }
            if (puVar2[9] != 0) {
              FUN_002c4360();
              puVar2[9] = 0;
            }
            if (puVar2[0xb] != 0) {
              FUN_002c4360();
              puVar2[0xb] = 0;
            }
            FUN_002c0128();
            FUN_002a7604(0);
            puVar7 = DAT_00432ce0;
            FUN_002a5058();
            if (puVar7[0xc] != 0) {
              FUN_00288990();
              if ((int *)puVar7[0xc] != (int *)0x0) {
                (**(romwright_code **)(*(int *)puVar7[0xc] + 4))();
              }
              puVar7[0xc] = 0;
            }
            temp_v6 = 0;
            do {
              if (puVar7[temp_v6 + 0xd] != 0) {
                if (0 < *(int *)(*(int *)(puVar7[temp_v6 + 0xd] + 8) + 0xc)) {
                  FUN_00152af8();
                }
                FUN_002a7aa0(puVar7[temp_v6 + 0xd]);
                puVar7[temp_v6 + 0xd] = 0;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 2);
            temp_v6 = 0;
            do {
              if (puVar7[temp_v6 + 0xf] != 0) {
                if (puVar7[0x154] == temp_v6) {
                  FUN_0029c56c(puVar7[temp_v6 + 0xf],0);
                }
                FUN_002637b4(puVar7[temp_v6 + 0xf]);
                puVar7[temp_v6 + 0xf] = 0;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 3);
            FUN_002a7bd4();
            FUN_00291be8();
            FUN_00291a5c();
            temp_v6 = 0;
            do {
              if (puVar7[temp_v6 * 3 + 0x15a] != 0) {
                FUN_002c2430();
                puVar7[temp_v6 * 3 + 0x15a] = 0;
              }
              if (puVar7[temp_v6 * 3 + 0x159] != 0) {
                FUN_002c4360();
                puVar7[temp_v6 * 3 + 0x159] = 0;
              }
              temp_v6 = temp_v6 + 1;
            } while (temp_v6 < 4);
            FUN_002a7540(1);
            if (*(char *)((int)puVar2 + 5) != '\0') {
              FUN_002a0678(0,1);
              FUN_002a0678(1);
              FUN_0029c650(0xf);
              puVar2 = DAT_00432ce0;
              temp_v6 = FUN_002bf41c(*DAT_00432ce0);
              if (temp_v6 != 0) {
                FUN_002c45b8(*puVar2,0);
              }
            }
            else {
              FUN_00208a70();
              temp_v6 = (unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24;
              temp_v0 = (&DAT_00432cf8)[(unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x12];
              if (temp_v0 >= 200) {
                temp_v7[0] = temp_v0 - 200;
                temp_v7[1] = 5;
                temp_v5 = 4;
                temp_v3 = 0xe;
              }
              else {
                FUN_00276c24((int)temp_v0,(int)*(char *)(temp_v6 + 0x432cfa),
                             (int)*(char *)(temp_v6 + 0x432cfb));
                temp_v5 = 0;
                psVar12 = (short *)0x0;
                temp_v3 = 6;
              }
              FUN_002c59b8(temp_v3,psVar12,temp_v5);
            }
            FUN_002e28d4(0);
            return 0xffffffff;
          }
        }
        else {
          temp_v6 = FUN_0019dfbc(puVar2[10]);
          if (temp_v6 == 2) {
            FUN_0029c0fc(0x21,1);
            *(unsigned char *)(puVar2 + 0x157) = 0;
            FUN_002bf9e8(0x10000a8);
            FUN_002638dc();
            FUN_002b8b78(0x57);
            puVar2[4] = 8;
            puVar2[5] = 0;
            if (*(char *)(puVar2 + 0x155) != '\0') {
              FUN_0029b0fc(puVar2[0xc]);
              FUN_0020fe84(puVar2[0xc],0x13);
              *(unsigned char *)(puVar2 + 0x155) = 0;
            }
            FUN_00282e6c(0,0xff);
            *(unsigned char *)(puVar2 + 0x15b) = 0;
            *(unsigned char *)(puVar2 + 0x15e) = 0;
            *(unsigned char *)(puVar2 + 0x161) = 0;
            *(unsigned char *)(puVar2 + 0x164) = 0;
            FUN_00263bb4(puVar2,0);
            FUN_002a5a48(puVar2[0xc],0x13);
            temp_v3 = puVar2[0xc];
            FUN_0029bda8(temp_v3);
          }
        }
      }
      else {
        temp_v6 = FUN_0019dfbc(puVar2[10]);
        if (temp_v6 == 2) {
          puVar2[4] = 99;
          puVar2[5] = 0;
          FUN_0029c660(0,10,0xff);
          FUN_0029c660(1,10,0xff);
        }
      }
    }
    else {
      temp_v6 = FUN_0019dfbc(puVar2[10]);
      if (temp_v6 == 2) {
        puVar2[4] = 6;
        puVar2[5] = 0;
        FUN_002cf2d8();
      }
    }
  }
  else {
    temp_v6 = FUN_00282d98();
    if (temp_v6 == 0) {
      FUN_0028d850();
      FUN_0029e41c();
      FUN_002638fc(0);
      FUN_0029bb8c(puVar2[0xc]);
      *(unsigned char *)(puVar2 + 0x15b) = 0;
      *(unsigned char *)(puVar2 + 0x15e) = 0;
      temp_v6 = puVar2[3];
      puVar2[6] = (int)*(short *)puVar2[temp_v6 + 0x165];
      puVar2[7] = (int)*(char *)(puVar2[temp_v6 + 0x165] + 2);
      temp_v2 = 0;
      do {
        if (&DAT_00432cf8 + temp_v2 * 0x12 == (unsigned short *)puVar2[temp_v6 + 0x165]) {
          *(char *)((int)puVar2 + 9) = (char)temp_v2;
          break;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 0x14);
      FUN_002fbfcc(puVar2);
      FUN_002a7aa0(puVar2[puVar2[0x158] + 0xd]);
      puVar2[puVar2[0x158] + 0xd] = 0;
      puVar2[0x158] = (int)*(char *)((unsigned int)*(unsigned char *)((int)puVar2 + 9) * 0x24 + 0x432cfd);
      puVar2[4] = puVar2[4] + 1;
      puVar2[5] = 0;
      FUN_002b85bc(3);
    }
  }
LAB_001dabcc:
  if (puVar2[0xc] != 0) {
    FUN_00297920();
  }
  if (*(char *)(puVar2 + 0x155) != '\0') {
    temp_v2 = puVar2[0x156];
    temp_v6 = temp_v2 + 1;
    puVar2[0x156] = temp_v6;
    if (temp_v6 < 0x65) {
      temp_v2 = temp_v2 - 0x3b;
      VectorSignedToFloat(temp_v2,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0026e97c(temp_v2);
      FUN_0026389c(0);
      VectorSignedToFloat(puVar2[0x156] - 0x3c,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0026e97c(puVar2[0x156] - 0x3c);
      FUN_0026385c(0);
    }
    if (puVar2[0x156] == 0x5a) {
      FUN_002bf9e8(0x10001fc);
      *(unsigned char *)(puVar2 + 0x161) = 1;
      FUN_002b2cec(puVar2[0x160]);
    }
    if (puVar2[0x156] == 0x7b) {
      FUN_002bf9e8(0x10000a9);
      *(unsigned char *)(puVar2 + 0x164) = 1;
      FUN_002b2cec(puVar2[0x163]);
    }
    if (puVar2[0x156] == 0x87) {
      FUN_0029b0fc(puVar2[0xc]);
      FUN_002a5a48(puVar2[0xc],0x1a);
      FUN_0029bda8(puVar2[0xc]);
    }
    if (((int)puVar2[0x156] >= 0x88) && (temp_v6 = FUN_0025a268(puVar2[0xc]), temp_v6 != 0)) {
      FUN_0020fe84(puVar2[0xc],0);
      FUN_00263bb4(puVar2,2);
      *(unsigned char *)(puVar2 + 0x155) = 0;
    }
  }
  return 0;
}
