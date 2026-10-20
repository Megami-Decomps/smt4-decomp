/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0029d770` (_code @ 0x29d770, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int bitsetSetBit(unsigned short *, int);
int FUN_00288154(int, unsigned char [2]);
int FUN_0029c6b0(unsigned short *);
int devilGetRecord(void);
int memClear(unsigned short *, int);

/* stack frame of param_2: 23 slot(s), 47 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned short sp1E; /* 0x1e: local_1e */
    unsigned short sp20; /* 0x20: local_20 */
    unsigned short sp22; /* 0x22: local_22 */
    unsigned short sp24; /* 0x24: local_24 */
    unsigned short sp26; /* 0x26: local_26 */
    unsigned short sp28; /* 0x28: local_28 */
    unsigned short sp2A; /* 0x2a: local_2a */
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned short sp2E; /* 0x2e: local_2e */
    unsigned short sp30; /* 0x30: local_30 */
    unsigned char sp32; /* 0x32: local_32 */
    unsigned short sp34; /* 0x34: local_34 */
    unsigned short sp36; /* 0x36: local_36 */
    unsigned short sp38; /* 0x38: local_38 */
    unsigned short sp3A; /* 0x3a: local_3a */
    unsigned short sp3C; /* 0x3c: local_3c */
    unsigned short sp3E; /* 0x3e: local_3e */
    unsigned short sp40; /* 0x40: local_40 */
    unsigned short sp42; /* 0x42: local_42 */
    unsigned short sp44; /* 0x44: local_44 */
    unsigned short sp46; /* 0x46: local_46 */
    unsigned short sp48; /* 0x48: local_48 */
} param_2_stack;

/* Supplied declaration required: bitsetSetBit. */
/* Supplied declaration required: FUN_00288154. */
/* Supplied declaration required: FUN_0029c6b0. */
/* Supplied declaration required: devilGetRecord. */
/* Supplied declaration required: memClear. */


void FUN_0029d770(int param_1,unsigned short *param_2)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [2];
  unsigned short temp_v2;
  unsigned short temp_v3;
  unsigned short temp_v4;
  unsigned short temp_v5;
  unsigned short temp_v6;
  unsigned short temp_v7;
  unsigned short temp_v8;
  unsigned short temp_v9;
  unsigned short temp_v10;
  unsigned short temp_v11;
  unsigned char temp_v12;
  unsigned short temp_v13;
  unsigned short temp_v14;
  unsigned short temp_v15;
  unsigned short temp_v16;
  unsigned short temp_v17;
  unsigned short temp_v18;
  unsigned short temp_v19;
  unsigned short temp_v20;
  unsigned short temp_v21;
  unsigned short temp_v22;
  unsigned int temp_v23;
  
  temp_v0 = param_1;
  devilGetRecord();
  FUN_00288154(param_1,temp_v1);
  memClear(param_2,0x604);
  param_2[0x23] = (short)param_1;
  *(unsigned char *)(param_2 + 0x24) = temp_v1[0];
  *param_2 = temp_v13;
  param_2[1] = temp_v14;
  param_2[2] = temp_v2;
  param_2[4] = temp_v4;
  param_2[5] = temp_v5;
  param_2[6] = temp_v6;
  param_2[3] = temp_v3;
  param_2[0xe] = 0;
  param_2[0xf] = 0;
  param_2[0x10] = temp_v7;
  param_2[0x12] = temp_v9;
  param_2[0x13] = temp_v10;
  param_2[0x14] = temp_v11;
  param_2[0x11] = temp_v8;
  param_2[0x1a] = temp_v15;
  param_2[0x1b] = temp_v16;
  param_2[0x1c] = temp_v17;
  param_2[0x1d] = temp_v18;
  param_2[0x1e] = temp_v19;
  param_2[0x1f] = temp_v20;
  param_2[0x20] = temp_v21;
  param_2[0x21] = temp_v22;
  *(unsigned int *)(param_2 + 0x18) = temp_v23;
  *(unsigned char *)((int)param_2 + 0x601) = (unsigned char)(((unsigned int)temp_v12 << 0x1a) >> 0x1c);
  bitsetSetBit(param_2,*(unsigned short *)(temp_v0 + 0x38));
  FUN_0029c6b0(param_2);
  param_2[0x15] = param_2[7];
  param_2[0x16] = param_2[8];
  return;
}

} /* extern "C" */
