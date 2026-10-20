/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004760bc` (_code @ 0x4760bc, 0x6ec bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001029f4(...);
int FUN_00102bbc(...);
int jyoucyuGetTableEntry(...);
int libc_strcpy(...);
int asdOperatorDeleteB(...);
int FUN_002e56e4(int, unsigned char *);
int sysMemClear(...);
int wstrlenU16(...);
int FUN_002f5020(unsigned int *, unsigned char *, int, int);
int asdOperatorNewE(...);
int FUN_0037a728(...);
int FUN_00426eb8(...);
int FUN_0042718c(...);
int FUN_00473c5c(...);
int FUN_004749a0(...);
int table30GetEntry(unsigned char [56], unsigned int, unsigned int);
int FUN_00500520(...);
int FUN_005006a8(...);
int archiveFindEntryValue(...);
int FUN_00500788(...);

/* stack frame of param_1: 28 slot(s), 112 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp1A68; /* 0x1a68: local_1a68 */
    unsigned int sp1A6C; /* 0x1a6c: local_1a6c */
    unsigned int sp1A70; /* 0x1a70: local_1a70 */
    unsigned int sp1A74; /* 0x1a74: local_1a74 */
    unsigned int sp1A78; /* 0x1a78: local_1a78 */
    unsigned int sp1A98; /* 0x1a98: local_1a98 */
    unsigned int sp1AB8; /* 0x1ab8: local_1ab8 */
    unsigned int sp1AD8; /* 0x1ad8: local_1ad8 */
    unsigned int sp1AF8; /* 0x1af8: local_1af8 */
    unsigned int sp1B18; /* 0x1b18: local_1b18 */
    unsigned int sp1B38; /* 0x1b38: local_1b38 */
    unsigned int sp1B58; /* 0x1b58: local_1b58 */
    unsigned int sp1B78; /* 0x1b78: local_1b78 */
    unsigned int sp1B98; /* 0x1b98: local_1b98 */
    unsigned int sp1BB8; /* 0x1bb8: local_1bb8 */
    unsigned int sp1BD8; /* 0x1bd8: local_1bd8 */
    unsigned int sp1BF8; /* 0x1bf8: local_1bf8 */
    unsigned int sp1BFC; /* 0x1bfc: local_1bfc */
    unsigned int sp1C00; /* 0x1c00: local_1c00 */
    unsigned int sp1C04; /* 0x1c04: local_1c04 */
    unsigned int sp1C08; /* 0x1c08: local_1c08 */
    unsigned int sp1C0C; /* 0x1c0c: local_1c0c */
    unsigned int sp1C10; /* 0x1c10: local_1c10 */
    unsigned int sp1C14; /* 0x1c14: local_1c14 */
    unsigned int sp1C18; /* 0x1c18: local_1c18 */
    unsigned int sp1C24; /* 0x1c24: local_1c24 */
    unsigned int sp1C28; /* 0x1c28: local_1c28 */
} param_1_stack;

extern unsigned char LAB_0047d834; /* 0x47d834 */
extern unsigned char LAB_0047d8e8; /* 0x47d8e8 */
extern int g_aocMain; /* 0x570260 */

/* Supplied declaration required: FUN_001029f4. */
/* Supplied declaration required: FUN_00102bbc. */
/* Supplied declaration required: jyoucyuGetTableEntry. */
extern unsigned char objGetFlagBit0(int);
extern unsigned char objGetFlagBit1(int);
extern int FUN_001d25ec(int);
/* Supplied declaration required: libc_strcpy. */
/* Supplied declaration required: asdOperatorDeleteB. */
/* Supplied declaration required: FUN_002e56e4. */
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: wstrlenU16. */
/* Supplied declaration required: FUN_002f5020. */
/* Supplied declaration required: asdOperatorNewE. */
/* Supplied declaration required: FUN_0037a728. */
/* Supplied declaration required: FUN_00426eb8. */
/* Supplied declaration required: FUN_0042718c. */
extern unsigned int halfPair48LowByteA(int);
extern unsigned int halfPair48LowByteB(int);
/* Supplied declaration required: FUN_00473c5c. */
/* Supplied declaration required: FUN_004749a0. */
/* Supplied declaration required: table30GetEntry. */
extern int FUN_00500514(unsigned char *);
/* Supplied declaration required: FUN_00500520. */
/* Supplied declaration required: FUN_005006a8. */
/* Supplied declaration required: archiveFindEntryValue. */
/* Supplied declaration required: FUN_00500788. */


int FUN_004760bc(int param_1)

{
/* irregular: 20 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned short *puVar12;
  unsigned char temp_v9;
  unsigned int temp_v10;
  int temp_v11;
  int temp_v12;
  int temp_v13;
  unsigned int temp_v14;
  unsigned int temp_v15;
  int temp_v16;
  unsigned int temp_v17;
  unsigned int temp_v18;
  unsigned int temp_v19;
  unsigned int temp_v20;
  unsigned char *temp_v21;
  int temp_v22;
  int temp_v23;
  unsigned int uStack_1bf4;
  unsigned int uStack_1bf0;
  unsigned int uStack_1bec;
  unsigned int uStack_1be8;
  unsigned int uStack_1be4;
  unsigned int uStack_1be0;
  unsigned int uStack_1bdc;
  unsigned int temp_v24;
  unsigned int uStack_1bd4;
  unsigned int uStack_1bd0;
  unsigned int uStack_1bcc;
  unsigned int uStack_1bc8;
  unsigned int uStack_1bc4;
  unsigned int uStack_1bc0;
  unsigned int uStack_1bbc;
  int temp_v25;
  unsigned int uStack_1bb4;
  unsigned int uStack_1bb0;
  unsigned int uStack_1bac;
  unsigned int uStack_1ba8;
  unsigned int uStack_1ba4;
  unsigned int uStack_1ba0;
  unsigned int uStack_1b9c;
  unsigned int temp_v26;
  unsigned int uStack_1b94;
  unsigned int uStack_1b90;
  unsigned int uStack_1b8c;
  unsigned int uStack_1b88;
  unsigned int uStack_1b84;
  unsigned int uStack_1b80;
  unsigned int uStack_1b7c;
  int temp_v27;
  unsigned int uStack_1b74;
  unsigned int uStack_1b70;
  unsigned int uStack_1b6c;
  unsigned int uStack_1b68;
  unsigned int uStack_1b64;
  unsigned int uStack_1b60;
  unsigned int uStack_1b5c;
  unsigned int temp_v28;
  unsigned int uStack_1b54;
  unsigned int uStack_1b50;
  unsigned int uStack_1b4c;
  unsigned int uStack_1b48;
  unsigned int uStack_1b44;
  unsigned int uStack_1b40;
  unsigned int uStack_1b3c;
  int temp_v29;
  unsigned int uStack_1b34;
  unsigned int uStack_1b30;
  unsigned int uStack_1b2c;
  unsigned int uStack_1b28;
  unsigned int uStack_1b24;
  unsigned int uStack_1b20;
  unsigned int uStack_1b1c;
  unsigned int temp_v30;
  unsigned int uStack_1b14;
  unsigned int uStack_1b10;
  unsigned int uStack_1b0c;
  unsigned int uStack_1b08;
  unsigned int uStack_1b04;
  unsigned int uStack_1b00;
  unsigned int uStack_1afc;
  int temp_v31;
  unsigned int uStack_1af4;
  unsigned int uStack_1af0;
  unsigned int uStack_1aec;
  unsigned int uStack_1ae8;
  unsigned int uStack_1ae4;
  unsigned int uStack_1ae0;
  unsigned int uStack_1adc;
  unsigned int temp_v32;
  unsigned int uStack_1ad4;
  unsigned int uStack_1ad0;
  unsigned int uStack_1acc;
  unsigned int uStack_1ac8;
  unsigned int uStack_1ac4;
  unsigned int uStack_1ac0;
  unsigned int uStack_1abc;
  int temp_v33;
  unsigned int uStack_1ab4;
  unsigned int uStack_1ab0;
  unsigned int uStack_1aac;
  unsigned int uStack_1aa8;
  unsigned int uStack_1aa4;
  unsigned int uStack_1aa0;
  unsigned int uStack_1a9c;
  unsigned int temp_v34;
  unsigned int uStack_1a94;
  unsigned int uStack_1a90;
  unsigned int uStack_1a8c;
  unsigned int uStack_1a88;
  unsigned int uStack_1a84;
  unsigned int uStack_1a80;
  unsigned int uStack_1a7c;
  unsigned int temp_v35;
  int temp_v36;
  int temp_v37;
  int temp_v38;
  int temp_v39;
  unsigned char temp_v40 [4608];
  unsigned short temp_v41 [1024];
  unsigned char temp_v42 [56];
  int temp_v43;
  
  temp_v5 = g_aocMain;
  if (*(int *)(g_aocMain + 0x68c) == 0) {
    return 0;
  }
  temp_v43 = param_1;
  if (*(int *)(g_aocMain + 0x688) != 0) {
    FUN_002e56e4(*(int *)(g_aocMain + 0x688),&LAB_0047d8e8);
  }
  temp_v6 = *(int *)(temp_v5 + 0x68c);
  puVar4 = (unsigned int *)(temp_v6 * 0x9c8 + 8);
  asdOperatorNewE();
  puVar5 = (unsigned int *)0x0;
  if (puVar4 != (unsigned int *)0x0) {
    puVar5 = puVar4 + 2;
    *puVar4 = 0x9c8;
    puVar4[1] = temp_v6;
    FUN_002f5020(puVar5,&LAB_0047d834,0x9c8,temp_v6);
  }
  *(unsigned int **)(temp_v5 + 0x688) = puVar5;
  temp_v22 = 0;
  temp_v35 = 0;
  if (*(int *)(temp_v5 + 0x68c) != 0) {
    temp_v38 = temp_v5 + 0x4a8;
    do {
      table30GetEntry(temp_v42,*(unsigned int *)(temp_v5 + 0x5b0),temp_v35);
      temp_v12 = *(int *)(temp_v5 + 0x688) + temp_v22 * 0x9c8;
      temp_v39 = temp_v12 + 0x900;
      *(short *)(temp_v12 + 0x9aa) = (short)temp_v35;
      temp_v21 = temp_v42;
      temp_v22 = temp_v22 + 1;
      temp_v6 = archiveFindEntryValue(temp_v42,temp_v38);
      if ((temp_v6 != 0) && (FUN_001029f4(temp_v6,0,10), temp_v6 == 1)) {
        *(unsigned char *)(temp_v12 + 0x9b0) = 1;
      }
      temp_v3 = halfPair48LowByteB(temp_v5 + 0x28);
      temp_v4 = halfPair48LowByteA(temp_v5 + 0x28);
      FUN_00426eb8(&temp_v33,0,temp_v4,temp_v3);
      temp_v23 = temp_v33;
      uStack_1bf4 = uStack_1ab4;
      uStack_1bf0 = uStack_1ab0;
      uStack_1bec = uStack_1aac;
      uStack_1be8 = uStack_1aa8;
      uStack_1be4 = uStack_1aa4;
      uStack_1be0 = uStack_1aa0;
      uStack_1bdc = uStack_1a9c;
      temp_v24 = temp_v34;
      uStack_1bd4 = uStack_1a94;
      uStack_1bd0 = uStack_1a90;
      uStack_1bcc = uStack_1a8c;
      uStack_1bc8 = uStack_1a88;
      uStack_1bc4 = uStack_1a84;
      uStack_1bc0 = uStack_1a80;
      uStack_1bbc = uStack_1a7c;
      temp_v6 = archiveFindEntryValue(temp_v21,&temp_v23);
      if (temp_v6 == 0) {
        temp_v6 = 0x4765bc;
      }
      temp_v11 = temp_v5;
      FUN_00473c5c(temp_v5,temp_v12,0x40,temp_v6);
      if (temp_v11 < 0) {
        return temp_v11;
      }
      temp_v3 = halfPair48LowByteB(temp_v5 + 0x28);
      temp_v4 = halfPair48LowByteA(temp_v5 + 0x28);
      FUN_00426eb8(&temp_v31,2,temp_v4,temp_v3);
      temp_v25 = temp_v31;
      uStack_1bb4 = uStack_1af4;
      uStack_1bb0 = uStack_1af0;
      uStack_1bac = uStack_1aec;
      uStack_1ba8 = uStack_1ae8;
      uStack_1ba4 = uStack_1ae4;
      uStack_1ba0 = uStack_1ae0;
      uStack_1b9c = uStack_1adc;
      temp_v26 = temp_v32;
      uStack_1b94 = uStack_1ad4;
      uStack_1b90 = uStack_1ad0;
      uStack_1b8c = uStack_1acc;
      uStack_1b88 = uStack_1ac8;
      uStack_1b84 = uStack_1ac4;
      uStack_1b80 = uStack_1ac0;
      uStack_1b7c = uStack_1abc;
      temp_v6 = archiveFindEntryValue(temp_v21,&temp_v25);
      if (temp_v6 == 0) {
        temp_v6 = 0x4765bc;
      }
      temp_v11 = temp_v5;
      FUN_00473c5c(temp_v5,temp_v12 + 0x80,0x80,temp_v6);
      if (temp_v11 < 0) {
        return temp_v11;
      }
      sysMemClear(temp_v41,0x800);
      temp_v3 = halfPair48LowByteB(temp_v5 + 0x28);
      temp_v4 = halfPair48LowByteA(temp_v5 + 0x28);
      FUN_00426eb8(&temp_v27,3,temp_v4,temp_v3);
      temp_v23 = temp_v27;
      uStack_1bf4 = uStack_1b74;
      uStack_1bf0 = uStack_1b70;
      uStack_1bec = uStack_1b6c;
      uStack_1be8 = uStack_1b68;
      uStack_1be4 = uStack_1b64;
      uStack_1be0 = uStack_1b60;
      uStack_1bdc = uStack_1b5c;
      temp_v24 = temp_v28;
      uStack_1bd4 = uStack_1b54;
      uStack_1bd0 = uStack_1b50;
      uStack_1bcc = uStack_1b4c;
      uStack_1bc8 = uStack_1b48;
      uStack_1bc4 = uStack_1b44;
      uStack_1bc0 = uStack_1b40;
      uStack_1bbc = uStack_1b3c;
      temp_v6 = archiveFindEntryValue(temp_v21,&temp_v23);
      if (temp_v6 == 0) {
        temp_v6 = 0x4765bc;
      }
      temp_v11 = temp_v5;
      FUN_00473c5c(temp_v5,temp_v41,0x400,temp_v6);
      if (temp_v11 < 0) {
        return temp_v11;
      }
      temp_v15 = 0x2501000a;
      temp_v16 = 0xf80184aa;
      temp_v17 = 0x251b003c;
      temp_v19 = 0x2542ff0d;
      temp_v18 = 0xf80484ae;
      temp_v20 = 0x817c84be;
      temp_v6 = wstrlenU16(temp_v41);
      if (0 < temp_v6) {
        puVar12 = temp_v41;
        do {
          temp_v10 = (unsigned int)*puVar12;
          if (temp_v10 == (temp_v15 & 0xffff)) {
            *puVar12 = (*(unsigned short *)((unsigned char *)&temp_v15 + 2));
          }
          else if (temp_v10 == (temp_v17 & 0xffff)) {
            *puVar12 = (*(unsigned short *)((unsigned char *)&temp_v17 + 2));
          }
          else if (temp_v10 == (temp_v19 & 0xffff)) {
            *puVar12 = (*(unsigned short *)((unsigned char *)&temp_v19 + 2));
          }
          temp_v6 = temp_v6 - 1;
          puVar12 = puVar12 + 1;
        } while (temp_v6 != 0);
      }
      FUN_00102bbc(temp_v12 + 0x180,temp_v41,0x800);
      FUN_0037a728(temp_v12 + 0x180,temp_v41,0x7fe);
      libc_strcpy(temp_v12 + 0x180,temp_v41);
      temp_v6 = wstrlenU16(temp_v12 + 0x180);
      temp_v11 = 0;
      if (temp_v11 < temp_v6) {
        do {
          temp_v7 = 0;
          puVar12 = (unsigned short *)(temp_v12 + 0x180 + temp_v11 * 2);
          do {
            if ((unsigned short)((*(unsigned short *)(&temp_v16 + temp_v7 * 2) << 8) |
                        (*(unsigned short *)(&temp_v16 + temp_v7 * 2) >> 8)) == *puVar12) {
              temp_v0 = *(unsigned short *)((int)&temp_v16 + temp_v7 * 8 + 2);
              *puVar12 = (temp_v0 << 8) | (temp_v0 >> 8);
              if (temp_v7 == 4) {
                puVar12[1] = ((puVar12[1] >> 8) - 0x30) & 0xff;
              }
              break;
            }
            temp_v7 = temp_v7 + 1;
          } while (temp_v7 < 3);
          temp_v11 = temp_v11 + 1;
        } while (temp_v11 < temp_v6);
      }
      temp_v6 = temp_v12 + temp_v6 * 2;
      *(unsigned char *)(temp_v6 + 0x181) = 0xff;
      *(unsigned char *)(temp_v6 + 0x182) = 0xff;
      *(unsigned char *)(temp_v6 + 0x183) = 0;
      *(unsigned char *)(temp_v6 + 0x180) = 0xff;
      temp_v3 = halfPair48LowByteB(temp_v5 + 0x28);
      temp_v4 = halfPair48LowByteA(temp_v5 + 0x28);
      FUN_00426eb8(&temp_v23,5,temp_v4,temp_v3);
      temp_v29 = temp_v23;
      uStack_1b34 = uStack_1bf4;
      uStack_1b30 = uStack_1bf0;
      uStack_1b2c = uStack_1bec;
      uStack_1b28 = uStack_1be8;
      uStack_1b24 = uStack_1be4;
      uStack_1b20 = uStack_1be0;
      uStack_1b1c = uStack_1bdc;
      temp_v30 = temp_v24;
      uStack_1b14 = uStack_1bd4;
      uStack_1b10 = uStack_1bd0;
      uStack_1b0c = uStack_1bcc;
      uStack_1b08 = uStack_1bc8;
      uStack_1b04 = uStack_1bc4;
      uStack_1b00 = uStack_1bc0;
      uStack_1afc = uStack_1bbc;
      temp_v10 = archiveFindEntryValue(temp_v21,&temp_v29);
      if (temp_v10 == 0) {
        *(unsigned short *)(temp_v39 + 0xa8) = 0;
        sysMemClear(temp_v40,0x1200);
      }
      else {
        FUN_001029f4(temp_v10,0,10);
        *(short *)(temp_v39 + 0xa8) = (short)temp_v10;
        if ((temp_v10 & 0xffff) != 0xffff) {
          FUN_0042718c(&temp_v13,temp_v5 + 0x28,temp_v40);
          *(int *)(temp_v43 + 0xc) = temp_v13;
          *(unsigned int *)(temp_v43 + 0x10) = temp_v14;
          temp_v6 = FUN_001d25ec(temp_v43 + 0xc);
          if (temp_v6 < 0) {
            return temp_v6;
          }
        }
        else {
          sysMemClear(temp_v40,0x1200);
        }
      }
      FUN_004749a0(temp_v12 + 0x9bc,temp_v40);
      FUN_00500788(&temp_v15,temp_v21,&temp_v37);
      *(unsigned int *)(temp_v43 + 0xc) = temp_v15;
      *(unsigned int *)(temp_v43 + 0x10) = temp_v16;
      temp_v6 = FUN_001d25ec(temp_v43 + 0xc);
      if (temp_v6 < 0) {
        return temp_v6;
      }
      *(unsigned int *)(temp_v12 + 0x9b8) = temp_v37;
      FUN_00500520(&temp_v13,temp_v21);
      *(int *)(temp_v12 + 0x9a0) = temp_v13;
      *(unsigned int *)(temp_v12 + 0x9a4) = temp_v14;
      temp_v11 = FUN_00500514(temp_v21);
      temp_v6 = temp_v11 * 0x18;
      asdOperatorNewE(temp_v6,temp_v5);
      temp_v1 = 1;
      temp_v2 = 1;
      temp_v14 = 0;
      temp_v13 = temp_v11;
      FUN_005006a8(&temp_v17,temp_v21,&temp_v36,temp_v6);
      *(unsigned int *)(temp_v43 + 0xc) = temp_v17;
      *(unsigned int *)(temp_v43 + 0x10) = temp_v18;
      temp_v11 = FUN_001d25ec(temp_v43 + 0xc);
      if (temp_v11 < 0) {
        asdOperatorDeleteB(temp_v6);
        temp_v5 = FUN_001d25ec(temp_v43 + 0xc);
        return temp_v5;
      }
      temp_v11 = 0;
      temp_v8 = 1;
      temp_v9 = 1;
      if (temp_v11 < temp_v36) {
        do {
          temp_v7 = temp_v6 + temp_v11 * 0x18;
          temp_v1 = objGetFlagBit1(temp_v7);
          temp_v1 = temp_v8 & temp_v1;
          temp_v2 = objGetFlagBit0(temp_v7);
          temp_v2 = temp_v9 & temp_v2;
          temp_v11 = temp_v11 + 1;
          temp_v8 = temp_v1;
          temp_v9 = temp_v2;
        } while (temp_v11 < temp_v36);
      }
      *(unsigned char *)(temp_v12 + 0x9ac) = temp_v1;
      *(unsigned char *)(temp_v12 + 0x9ad) = temp_v2;
      asdOperatorDeleteB(temp_v6);
      temp_v35 = temp_v35 + 1;
    } while (temp_v35 < *(unsigned int *)(temp_v5 + 0x68c));
  }
  if (*(int *)(temp_v5 + 0x68c) != temp_v22) {
    jyoucyuGetTableEntry(0);
    *(int *)(temp_v5 + 0x68c) = temp_v22;
  }
  return 0;
}

} /* extern "C" */
