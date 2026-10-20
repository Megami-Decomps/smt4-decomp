/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0033adf8` (_code @ 0x33adf8, 0x2ac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001dd930(void);
int FUN_0028ca0c(void);
int FUN_00295a18(int);
int FUN_00299370(int);
int FUN_0029c1c8(int, int, int);
int FUN_002bf694(unsigned char [20], unsigned int);
int FUN_002c3944(unsigned int, int);
int FUN_002c424c(unsigned int *, int, unsigned int);
int FUN_00333ef8(int, unsigned char [20], unsigned short *);
int FUN_00334058(void);

typedef struct fn_0033adf8_arg0 fn_0033adf8_arg0;
struct fn_0033adf8_arg0 {
    unsigned char pad_0x0[0xb8];
    uint field_0xb8; /* +0xb8 */
    uint field_0xbc; /* +0xbc */
    unsigned char pad_0xc0[0x217c];
    unsigned char field_0x223c; /* +0x223c */
    unsigned char pad_0x223d[0x2263];
    uint field_0x44a0; /* +0x44a0 */
};

/* stack frame of param_2: 7 slot(s), 14 byte(s) */
typedef struct {
    unsigned short sp3C; /* 0x3c: local_3c */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned short sp42; /* 0x42: local_42 */
    unsigned short sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: FUN_001dd930. */
extern unsigned char FUN_0023eb7c(void);
extern unsigned int FUN_00282be4(void);
/* Supplied declaration required: FUN_0028ca0c. */
/* Supplied declaration required: FUN_00295a18. */
/* Supplied declaration required: FUN_00299370. */
/* Supplied declaration required: FUN_0029c1c8. */
extern int FUN_002a8740(int);
extern unsigned int *FUN_002a8764(void);
extern unsigned int FUN_002ac068(int, unsigned int);
extern int FUN_002b63ac(void);
extern unsigned int FUN_002bd1fc(void);
/* Supplied declaration required: FUN_002bf694. */
extern int dataTableGetCount(unsigned int);
extern int dataTableGetEntries(unsigned int);
/* Supplied declaration required: FUN_002c3944. */
/* Supplied declaration required: FUN_002c424c. */
/* Supplied declaration required: FUN_00333ef8. */
/* Supplied declaration required: FUN_00334058. */


void FUN_0033adf8(fn_0033adf8_arg0 *param_1,unsigned int param_2)

{
/* irregular: 12 native warning(s); review required */
  unsigned short temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  int temp_v8;
  unsigned int temp_v9;
  unsigned short *puVar10;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned char temp_v17 [20];
  
  if ((param_1->field_0x44a0 & 0x40000) != 0 && param_2 != 0) {
    if (*(int *)&param_1->field_0x223c == 0) {
      temp_v9 = 0;
    }
    else {
      temp_v9 = FUN_002ac068(*(int *)&param_1->field_0x223c,0);
    }
    temp_v2 = dataTableGetEntries(temp_v9);
    temp_v3 = dataTableGetCount(temp_v9);
    if (param_2 <= temp_v3 - 1U) {
      puVar10 = (unsigned short *)(temp_v2 + param_2 * 0x74);
      puVar5 = (unsigned int *)FUN_002a8764();
      temp_v3 = 0;
      temp_v9 = FUN_002bd1fc();
      FUN_002bf694(temp_v17,temp_v9);
      temp_v10 = puVar10[4];
      temp_v11 = puVar10[5];
      temp_v12 = puVar10[6];
      temp_v13 = puVar10[7];
      temp_v14 = puVar10[8];
      temp_v15 = puVar10[9];
      temp_v16 = puVar10[10];
      FUN_00333ef8((char)puVar10[0x1a],temp_v17,&temp_v10);
      temp_v2 = FUN_002b63ac();
      *(unsigned short *)(temp_v2 + 0x12) = puVar10[0xd];
      *(unsigned short *)(temp_v2 + 0x14) = puVar10[0xe];
      *(unsigned short *)(temp_v2 + 0x16) = puVar10[0xf];
      *(unsigned short *)(temp_v2 + 0x18) = puVar10[0x10];
      *(unsigned short *)(temp_v2 + 0x1a) = puVar10[0x11];
      FUN_00299370(0);
      temp_v0 = puVar10[0xb];
      if (0 < (short)temp_v0) {
        *(unsigned short *)(temp_v2 + 0x1c) = temp_v0;
        *(unsigned short *)(temp_v2 + 0x2a) = temp_v0;
      }
      temp_v0 = puVar10[0xc];
      if (0 < (short)temp_v0) {
        *(unsigned short *)(temp_v2 + 0x1e) = temp_v0;
        *(unsigned short *)(temp_v2 + 0x2c) = temp_v0;
      }
      do {
        if (puVar10[temp_v3 + 0x12] != 0) {
          FUN_00334058();
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 8);
      FUN_002c424c(puVar5 + 0x243c,0x18,0xffffffff);
      *(unsigned short *)(puVar5 + 0x2442) = 0xffff;
      *(unsigned char *)((int)puVar5 + 0x910a) = 0xff;
      temp_v2 = 0;
      temp_v3 = 0;
      *(unsigned char *)((int)puVar5 + 0x910b) = 8;
      do {
        if (puVar10[temp_v3 + 0x27] != 0) {
          FUN_0029c1c8(temp_v3,puVar10[temp_v3 + 0x27],0);
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < (int)(unsigned int)*(unsigned char *)((int)puVar5 + 0x910b));
      temp_v3 = 0;
      do {
        if ((puVar10[temp_v3 + 0x24] != 0) && (temp_v8 = 0, *(char *)((int)puVar5 + 0x910b) != '\0')) {
          do {
            temp_v4 = FUN_002a8740(temp_v8);
            if (*(unsigned short *)(temp_v4 + 0x46) == puVar10[temp_v3 + 0x24]) {
              temp_v1 = FUN_0023eb7c();
              *(unsigned char *)((int)puVar5 + temp_v2 + 0x9108) = temp_v1;
              temp_v2 = temp_v2 + 1;
              break;
            }
            temp_v8 = temp_v8 + 1;
          } while (temp_v8 < (int)(unsigned int)*(unsigned char *)((int)puVar5 + 0x910b));
        }
        temp_v3 = temp_v3 + 1;
      } while (temp_v3 < 3);
      temp_v9 = FUN_00282be4();
      FUN_002c3944(temp_v9,0x104a);
      temp_v2 = 0;
      temp_v6 = temp_v5;
      do {
        temp_v0 = puVar10[temp_v2 * 2 + 0x30];
        if (temp_v0 != 0) {
          temp_v6 = (unsigned int)puVar10[temp_v2 * 2 + 0x31];
        }
        if (temp_v0 != 0 && temp_v6 != 0) {
          FUN_00295a18(temp_v0);
          temp_v6 = temp_v7;
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 5);
      temp_v2 = 0;
      do {
        if (puVar10[temp_v2 + 0x1c] != 0) {
          FUN_0028ca0c();
        }
        temp_v2 = temp_v2 + 1;
      } while (temp_v2 < 8);
      FUN_001dd930();
      *puVar5 = *(unsigned int *)(puVar10 + 2);
      param_1->field_0xb8 = (unsigned int)*puVar10;
      param_1->field_0xbc = (unsigned int)puVar10[1];
    }
  }
  return;
}

} /* extern "C" */
