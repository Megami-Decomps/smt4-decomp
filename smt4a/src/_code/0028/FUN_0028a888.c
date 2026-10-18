/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028a888` (_code @ 0x28a888, 0x7a0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spAC; /* 0xac: local_ac */
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int sp144; /* 0x144: local_144 */
    unsigned int sp148; /* 0x148: local_148 */
} param_1_stack;

extern unsigned char LAB_0028ac98; /* 0x28ac98 */
extern unsigned char LAB_0028aca8; /* 0x28aca8 */
extern unsigned char LAB_0028acc0; /* 0x28acc0 */
extern unsigned char LAB_0028acd0; /* 0x28acd0 */
extern unsigned char LAB_0028acd4; /* 0x28acd4 */
extern unsigned char LAB_0028acd8; /* 0x28acd8 */
extern unsigned char LAB_0028ace4; /* 0x28ace4 */
extern unsigned char LAB_0028ad00; /* 0x28ad00 */
extern unsigned char LAB_0028ad10; /* 0x28ad10 */
extern unsigned char LAB_0028ad1c; /* 0x28ad1c */
extern unsigned char LAB_0028ad28; /* 0x28ad28 */
extern unsigned char LAB_0028ad34; /* 0x28ad34 */
extern unsigned char LAB_0028ad40; /* 0x28ad40 */
extern unsigned char LAB_0028ad4c; /* 0x28ad4c */
extern unsigned char LAB_0028ad58; /* 0x28ad58 */
extern unsigned char LAB_0028ad64; /* 0x28ad64 */
extern unsigned char LAB_0028b028; /* 0x28b028 */
extern unsigned char LAB_0028b030; /* 0x28b030 */
extern unsigned char LAB_0028b038; /* 0x28b038 */
extern unsigned char LAB_0028b03c; /* 0x28b03c */
extern unsigned char LAB_0028b04c; /* 0x28b04c */
extern unsigned char LAB_0028b05c; /* 0x28b05c */
extern unsigned char LAB_0028b068; /* 0x28b068 */
extern unsigned char LAB_0028b078; /* 0x28b078 */
extern unsigned char LAB_0028b084; /* 0x28b084 */

/* Supplied declaration required: FUN_00100388. */
extern unsigned int FUN_0014bd84(void);
extern unsigned int FUN_001774d8(int);
/* Supplied declaration required: FUN_00192550. */
/* Supplied declaration required: FUN_00192608. */
extern unsigned int FUN_0019271c(int);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_0020d164. */
/* Supplied declaration required: FUN_00230c1c. */
/* Supplied declaration required: FUN_002c0940. */
extern int FUN_002e5c2c(void);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: FUN_003180c4. */
/* Supplied declaration required: FUN_00359974. */
/* Supplied declaration required: FUN_0048026c. */


/* WARNING: Type propagation algorithm not settling */

void FUN_0028a888(int param_1)

{
/* irregular: 12 native warning(s); review required */
  unsigned char temp_v0;
  char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  unsigned int temp_v5;
  int temp_v6;
  unsigned char *puVar8;
  int temp_v7;
  int temp_v8;
  unsigned char *puVar11;
  int temp_v9;
  char temp_v10 [4];
  unsigned int temp_v11;
  unsigned char temp_v12 [128];
  short temp_v13 [6];
  int temp_v14;
  unsigned int temp_v15;
  unsigned int temp_v16;
  unsigned int temp_v17;
  char acStack_a4 [21];
  char acStack_8f [21];
  char acStack_7a [21];
  char acStack_65 [21];
  char acStack_50 [24];
  unsigned char temp_v18 [20];
  
  FUN_002e6354(temp_v12,0x80);
  temp_v3 = FUN_0019271c(param_1);
  switch(temp_v3) {
  default:
    return;
  case 1:
  case 0xc:
    temp_v6 = param_1;
    FUN_00192550();
    if (*(short *)(temp_v6 + 0x4a) != 0) {
      temp_v4 = FUN_002e5c2c();
      FUN_00359974(0x24,temp_v4,0xffffffff,0);
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v6 + 0x4a) + temp_v4;
      if (temp_v4 >= 10000) {
        temp_v4 = 9999;
      }
      FUN_00359974(0x25,temp_v4,0xffffffff,0);
      return;
    }
    temp_v5 = (unsigned int)*(unsigned short *)(temp_v6 + 0x32);
    if (temp_v5 != 0) {
      FUN_001aba54();
      FUN_00230c1c(temp_v12,(*(unsigned int *)(temp_v5 + 0x28) & 0x1ff) >> 5);
    }
    else if ((*(unsigned int *)(temp_v6 + 0x68) & 0x20) != 0) {
      FUN_00100388(temp_v12,&LAB_0028ac98);
    }
    else if ((*(unsigned char *)(temp_v6 + 0x3a) & 0x80) != 0) {
      FUN_00100388(temp_v12,&LAB_0028aca8);
    }
    else {
      FUN_00100388(temp_v12,&LAB_0028acc0);
    }
    FUN_003180c4(0x24,temp_v12);
    temp_v3 = FUN_001774d8(param_1);
    FUN_00359974(0x25,temp_v3,0xffffffff,0);
    return;
  case 2:
  case 3:
  case 8:
    FUN_00192608();
    FUN_00359974(0x24,*(unsigned int *)(param_1 + 0x24) & 0x3ff,0xffffffff,0);
    temp_v0 = *(unsigned char *)(param_1 + 0x28);
    if ((temp_v0 & 0xf) == temp_v0 >> 4) {
      FUN_00359974(0x25,temp_v0 & 0xf,0xffffffff,0);
    }
    else {
      FUN_002c0940(temp_v10,temp_v0 & 0xf);
      FUN_002c0940(temp_v13,*(unsigned char *)(param_1 + 0x28) >> 4);
      FUN_00100388(temp_v12,&LAB_0028acd0,temp_v10,temp_v13);
      FUN_003180c4(0x25,temp_v12);
    }
    FUN_0020d164(temp_v12,*(unsigned int *)(param_1 + 0x24) >> 0x14);
    FUN_003180c4(0x26,temp_v12);
    FUN_00230c1c(temp_v12,*(unsigned char *)(param_1 + 0x29));
    FUN_003180c4(0x27,temp_v12);
    if (*(char *)(param_1 + 0x2b) == '\0') {
      FUN_00100388(temp_v12,&LAB_0028acd8);
    }
    if (*(char *)(param_1 + 0x2b) == '\x01') {
      FUN_00100388(temp_v12,&LAB_0028ace4);
    }
    if (*(char *)(param_1 + 0x2b) == '\x05') {
      FUN_00100388(temp_v12,&LAB_0028ad00);
    }
    if (*(char *)(param_1 + 0x2b) == '\x06') {
      FUN_00100388(temp_v12,&LAB_0028ad10);
    }
    if (*(char *)(param_1 + 0x2b) == '\a') {
      FUN_00100388(temp_v12,&LAB_0028ad1c);
    }
    if (*(char *)(param_1 + 0x2b) == '\b') {
      FUN_00100388(temp_v12,&LAB_0028ad28);
    }
    if (*(char *)(param_1 + 0x2b) == '\t') {
      FUN_00100388(temp_v12,&LAB_0028ad34);
    }
    if (*(char *)(param_1 + 0x2b) == '\v') {
      FUN_00100388(temp_v12,&LAB_0028ad40);
    }
    if (*(char *)(param_1 + 0x2b) == '\f') {
      FUN_00100388(temp_v12,&LAB_0028ad4c);
    }
    if (*(char *)(param_1 + 0x2b) == '\r') {
      FUN_00100388(temp_v12,&LAB_0028ad58);
    }
    temp_v3 = 0x28;
    break;
  case 4:
  case 5:
  case 6:
  case 7:
    temp_v6 = param_1;
    FUN_00192608();
    temp_v16 = 0;
    temp_v17 = 0;
    temp_v14 = 0;
    temp_v15 = 0;
    temp_v13[0] = 0;
    temp_v13[1] = 0;
    temp_v13[2] = 0;
    temp_v13[3] = 0;
    temp_v13[4] = 0;
    temp_v13[5] = 0;
    FUN_0048026c(param_1,&temp_v14);
    temp_v4 = 0;
    temp_v13[1] = (*(unsigned short *)((unsigned char *)&temp_v15 + 2)) + *(char *)(temp_v6 + 0x32);
    temp_v13[0] = (short)temp_v15 + *(char *)(temp_v6 + 0x31);
    temp_v13[3] = (*(unsigned short *)((unsigned char *)&temp_v16 + 2)) + *(char *)(temp_v6 + 0x34);
    temp_v13[2] = (short)temp_v16 + *(char *)(temp_v6 + 0x33);
    temp_v13[4] = (short)temp_v17 + *(char *)(temp_v6 + 0x35);
    do {
      temp_v8 = (int)temp_v13[temp_v4];
      temp_v9 = temp_v8;
      if (temp_v8 < 0) {
        temp_v9 = -temp_v8;
      }
      FUN_002c0940(temp_v18,temp_v9);
      if (temp_v8 != 0) {
        if (temp_v8 >= 1) {
          FUN_00100388(temp_v12,&LAB_0028ad64);
        }
        else {
          FUN_00100388(temp_v12,&LAB_0028b030);
        }
      }
      else {
        FUN_00100388(temp_v12,&LAB_0028b028);
      }
      FUN_003180c4(temp_v4 + 0x24,temp_v12);
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 5);
    FUN_002e6354(acStack_a4,0x6c);
    temp_v4 = 0;
    temp_v10[0] = '\0';
    temp_v10[1] = '\0';
    temp_v10[2] = '\0';
    temp_v10[3] = '\0';
    temp_v11 = 0;
    do {
      temp_v9 = temp_v6 + temp_v4 * 2;
      temp_v1 = (char)temp_v4;
      if (*(short *)(temp_v9 + 0x44) >> 10 == 4) {
        acStack_a4[temp_v10[0]] = temp_v1;
        temp_v10[0] = temp_v10[0] + '\x01';
      }
      if (*(short *)(temp_v9 + 0x44) >> 10 == 3) {
        acStack_8f[temp_v10[1]] = temp_v1;
        temp_v10[1] = temp_v10[1] + '\x01';
      }
      if (*(short *)(temp_v9 + 0x44) >> 10 == 1) {
        acStack_7a[temp_v10[2]] = temp_v1;
        temp_v10[2] = temp_v10[2] + '\x01';
      }
      if (*(short *)(temp_v9 + 0x44) >> 10 == 5) {
        acStack_65[temp_v10[3]] = temp_v1;
        temp_v10[3] = temp_v10[3] + '\x01';
      }
      if (*(short *)(temp_v9 + 0x44) >> 10 == 2) {
        acStack_50[(char)temp_v11] = temp_v1;
        temp_v11 = (unsigned int)(unsigned char)((char)temp_v11 + 1);
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 0x15);
    temp_v9 = 0;
    puVar11 = (unsigned char *)0x0;
    temp_v4 = 0;
    do {
      if ('\0' < temp_v10[temp_v4]) {
        if (0 < temp_v9) {
          puVar8 = temp_v12 + (int)puVar11;
          FUN_00100388(puVar8,&LAB_0028b038);
          puVar11 = puVar11 + (int)puVar8;
        }
        if (temp_v4 != 0) {
          if (temp_v4 != 1) {
            if (temp_v4 != 2) {
              if (temp_v4 != 3) {
                if (temp_v4 == 4) {
                  puVar8 = temp_v12 + (int)puVar11;
                  FUN_00100388(puVar8,&LAB_0028b078);
                  puVar11 = puVar11 + (int)puVar8;
                }
              }
              else {
                puVar8 = temp_v12 + (int)puVar11;
                FUN_00100388(puVar8,&LAB_0028b068);
                puVar11 = puVar11 + (int)puVar8;
              }
            }
            else {
              puVar8 = temp_v12 + (int)puVar11;
              FUN_00100388(puVar8,&LAB_0028b05c);
              puVar11 = puVar11 + (int)puVar8;
            }
          }
          else {
            puVar8 = temp_v12 + (int)puVar11;
            FUN_00100388(puVar8,&LAB_0028b04c);
            puVar11 = puVar11 + (int)puVar8;
          }
        }
        else {
          puVar8 = temp_v12 + (int)puVar11;
          FUN_00100388(puVar8,&LAB_0028b03c);
          puVar11 = puVar11 + (int)puVar8;
        }
        temp_v8 = 0;
        if ('\0' < temp_v10[temp_v4]) {
          temp_v2 = temp_v4 * 0x15 - 0xa4;
          do {
            temp_v7 = FUN_0020d164(temp_v12 + (int)puVar11,(int)acStack_a4[temp_v8 + temp_v2 + 0xa4]);
            puVar11 = puVar11 + temp_v7;
            if ((temp_v8 < 0x14) && ('\0' < acStack_a4[temp_v8 + temp_v2 + 0xa5])) {
              puVar8 = temp_v12 + (int)puVar11;
              FUN_00100388(puVar8,&LAB_0028b084);
              puVar11 = puVar11 + (int)puVar8;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < temp_v10[temp_v4]);
        }
        temp_v9 = temp_v9 + 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < 5);
    FUN_003180c4(0x29,temp_v12);
    if (*(short *)(temp_v6 + 0x3a) != 0) {
      temp_v3 = FUN_0014bd84();
      FUN_00100388(temp_v12,&LAB_0028acd4,temp_v3);
    }
    else {
      FUN_00100388(temp_v12,&LAB_0028acd8);
    }
    temp_v3 = 0x2a;
  }
  FUN_003180c4(temp_v3,temp_v12);
  return;
}
