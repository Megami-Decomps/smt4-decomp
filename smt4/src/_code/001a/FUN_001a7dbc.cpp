/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a7dbc` (_code @ 0x1a7dbc, 0x280 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001ddafc(int, int);
int FUN_0020341c(int, int);
int FUN_00288154(int, unsigned char [2]);
int FUN_0029bde4(unsigned short *);
int FUN_0029c6b0(unsigned short *);
int FUN_002b9024(void);
int FUN_002c4938(unsigned short *, int);

/* stack frame of param_4: 24 slot(s), 51 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned short sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned short sp36; /* 0x36: local_36 */
    unsigned short sp38; /* 0x38: local_38 */
    unsigned char sp3A; /* 0x3a: local_3a */
    unsigned short sp3C; /* 0x3c: local_3c */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned short sp42; /* 0x42: local_42 */
    unsigned short sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
    unsigned short sp4A; /* 0x4a: local_4a */
    unsigned short sp4C; /* 0x4c: local_4c */
    unsigned short sp4E; /* 0x4e: local_4e */
    unsigned short sp50; /* 0x50: local_50 */
} param_4_stack;

/* Supplied declaration required: FUN_001ddafc. */
/* Supplied declaration required: FUN_0020341c. */
/* Supplied declaration required: FUN_00288154. */
/* Supplied declaration required: FUN_0029bde4. */
/* Supplied declaration required: FUN_0029c6b0. */
extern int FUN_002a8764(void);
/* Supplied declaration required: FUN_002b9024. */
/* Supplied declaration required: FUN_002c4938. */


void FUN_001a7dbc(unsigned short *param_1,unsigned char param_2,unsigned short param_3,int param_4)

{
/* irregular: 1 goto(s); 7 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4 [2];
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned short temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned char temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned short temp_v19;
  unsigned short temp_v20;
  unsigned short temp_v21;
  unsigned short temp_v22;
  unsigned short temp_v23;
  unsigned short temp_v24;
  unsigned short temp_v25;
  unsigned int temp_v26;
  
  FUN_002c4938(param_1,0x604);
  param_1[0x23] = param_3;
  *(unsigned char *)(param_1 + 0x25) = param_2;
  if (param_4 != 3) {
    temp_v1 = FUN_002a8764();
    temp_v2 = 0;
    do {
      if (*(char *)(temp_v1 + 0x90f0 + temp_v2) < '\0') {
        *(unsigned char *)(temp_v1 + 0x90f0 + temp_v2) = param_2;
        break;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 0x18);
    FUN_0020341c(param_3,1);
    FUN_001ddafc(param_3,1);
  }
  temp_v3 = (unsigned int)param_3;
  FUN_002b9024();
  if (param_4 != 0) {
    if (param_4 != 1) {
      if (param_4 != 3) {
        FUN_0029c6b0(param_1);
        param_1[0x15] = param_1[7];
        param_1[0x16] = param_1[8];
        FUN_0029bde4(param_1);
        return;
      }
      goto LAB_001a7e60;
    }
    FUN_00288154(param_3,temp_v4);
    *(unsigned char *)(param_1 + 0x24) = temp_v4[0];
    *param_1 = temp_v16;
    param_1[1] = temp_v17;
    param_1[2] = temp_v5;
    param_1[4] = temp_v7;
    param_1[5] = temp_v8;
    param_1[6] = temp_v9;
    param_1[3] = temp_v6;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = temp_v10;
    param_1[0x12] = temp_v12;
    param_1[0x13] = temp_v13;
    param_1[0x14] = temp_v14;
    param_1[0x11] = temp_v11;
    param_1[0x1a] = temp_v18;
    param_1[0x1b] = temp_v19;
    param_1[0x1c] = temp_v20;
    param_1[0x1d] = temp_v21;
    param_1[0x1e] = temp_v22;
    param_1[0x1f] = temp_v23;
    param_1[0x20] = temp_v24;
    param_1[0x21] = temp_v25;
    *(unsigned int *)(param_1 + 0x18) = temp_v26;
    *(unsigned char *)((int)param_1 + 0x601) = (unsigned char)(((unsigned int)temp_v15 << 0x1a) >> 0x1c);
    temp_v1 = (int)param_1 + (unsigned int)(*(unsigned short *)(temp_v3 + 0x38) >> 3);
    temp_v0 = *(unsigned char *)(temp_v1 + 0x4c) | (unsigned char)(1 << (*(unsigned short *)(temp_v3 + 0x38) & 7));
  }
  else {
LAB_001a7e60:
    *(unsigned char *)(param_1 + 0x24) = *(unsigned char *)(temp_v3 + 3);
    *param_1 = *(unsigned short *)(temp_v3 + 0x14);
    param_1[1] = *(unsigned short *)(temp_v3 + 0x16);
    param_1[2] = *(unsigned short *)(temp_v3 + 0x1a);
    param_1[4] = *(unsigned short *)(temp_v3 + 0x1e);
    param_1[5] = *(unsigned short *)(temp_v3 + 0x20);
    param_1[6] = *(unsigned short *)(temp_v3 + 0x22);
    param_1[3] = *(unsigned short *)(temp_v3 + 0x1c);
    param_1[0xe] = 0;
    param_1[0xf] = 0;
    param_1[0x10] = *(unsigned short *)(temp_v3 + 0x1a);
    param_1[0x12] = *(unsigned short *)(temp_v3 + 0x1e);
    param_1[0x13] = *(unsigned short *)(temp_v3 + 0x20);
    param_1[0x14] = *(unsigned short *)(temp_v3 + 0x22);
    param_1[0x11] = *(unsigned short *)(temp_v3 + 0x1c);
    param_1[0x1a] = *(unsigned short *)(temp_v3 + 0x3c);
    param_1[0x1b] = *(unsigned short *)(temp_v3 + 0x3e);
    param_1[0x1c] = *(unsigned short *)(temp_v3 + 0x40);
    param_1[0x1d] = *(unsigned short *)(temp_v3 + 0x42);
    param_1[0x1e] = *(unsigned short *)(temp_v3 + 0x44);
    param_1[0x1f] = *(unsigned short *)(temp_v3 + 0x46);
    param_1[0x20] = *(unsigned short *)(temp_v3 + 0x48);
    param_1[0x21] = *(unsigned short *)(temp_v3 + 0x4a);
    temp_v1 = (int)param_1 + (unsigned int)(*(unsigned short *)(temp_v3 + 0x38) >> 3);
    temp_v0 = *(unsigned char *)(temp_v1 + 0x4c) | (unsigned char)(1 << (*(unsigned short *)(temp_v3 + 0x38) & 7));
  }
  *(unsigned char *)(temp_v1 + 0x4c) = temp_v0;
  FUN_0029c6b0(param_1);
  param_1[0x15] = param_1[7];
  param_1[0x16] = param_1[8];
  FUN_0029bde4(param_1);
  return;
}

} /* extern "C" */
