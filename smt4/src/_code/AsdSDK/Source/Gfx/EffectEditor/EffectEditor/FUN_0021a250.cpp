/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0021a250` (_code @ 0x21a250, 0x118 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int effMenuListAppend(...);
int memAlloc(int, int, int, int, int, int);
int rt_memcpy_w(void);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned int DAT_004728f0; /* 0x4728f0 */
extern unsigned int DAT_004728f4; /* 0x4728f4 */
extern unsigned int DAT_004728f8; /* 0x4728f8 */
extern unsigned int DAT_004728fc; /* 0x4728fc */
extern unsigned int DAT_00472900; /* 0x472900 */
extern unsigned int DAT_00472904; /* 0x472904 */
extern unsigned int DAT_00472908; /* 0x472908 */
extern unsigned int DAT_0047290c; /* 0x47290c */
extern unsigned int DAT_00472910; /* 0x472910 */
extern unsigned int DAT_00472914; /* 0x472914 */
extern unsigned int DAT_00472918; /* 0x472918 */
extern unsigned int DAT_0047291c; /* 0x47291c */
extern unsigned int DAT_00472920; /* 0x472920 */
extern unsigned int DAT_00472924; /* 0x472924 */
extern unsigned int DAT_00472928; /* 0x472928 */
extern unsigned int DAT_0047292c; /* 0x47292c */

/* Supplied declaration required: effMenuListAppend. */
/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0021a250(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: irregular input(s): in_s0; 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int in_s0;
  unsigned int temp_v4;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  
  temp_v0 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  temp_v1 = param_1[1];
  temp_v2 = param_1[2];
  temp_v3 = param_1[3];
  *(unsigned int *)(temp_v0 + 8) = *param_1;
  *(unsigned int *)(temp_v0 + 0xc) = temp_v1;
  *(unsigned int *)(temp_v0 + 0x10) = temp_v2;
  *(unsigned int *)(temp_v0 + 0x14) = temp_v3;
  temp_v7 = DAT_0047290c;
  temp_v6 = DAT_00472908;
  temp_v5 = DAT_00472904;
  temp_v4 = DAT_00472900;
  temp_v3 = DAT_004728fc;
  temp_v2 = DAT_004728f8;
  temp_v1 = DAT_004728f4;
  if (param_3 != (unsigned int *)0x0) {
    temp_v1 = param_3[1];
    temp_v2 = param_3[2];
    temp_v3 = param_3[3];
    temp_v4 = param_3[4];
    temp_v5 = param_3[5];
    temp_v6 = param_3[6];
    temp_v7 = param_3[7];
    *(unsigned int *)(temp_v0 + 0x20) = *param_3;
    *(unsigned int *)(temp_v0 + 0x24) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x28) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x34) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x38) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x3c) = temp_v7;
    temp_v1 = param_3[9];
    temp_v2 = param_3[10];
    temp_v3 = param_3[0xb];
    temp_v4 = param_3[0xc];
    temp_v5 = param_3[0xd];
    temp_v6 = param_3[0xe];
    temp_v7 = param_3[0xf];
    *(unsigned int *)(temp_v0 + 0x40) = param_3[8];
    *(unsigned int *)(temp_v0 + 0x44) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x48) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x4c) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x50) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x54) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x58) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x5c) = temp_v7;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x20) = DAT_004728f0;
    *(unsigned int *)(temp_v0 + 0x24) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x28) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x34) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x38) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x3c) = temp_v7;
    temp_v7 = DAT_0047292c;
    temp_v6 = DAT_00472928;
    temp_v5 = DAT_00472924;
    temp_v4 = DAT_00472920;
    temp_v3 = DAT_0047291c;
    temp_v2 = DAT_00472918;
    temp_v1 = DAT_00472914;
    *(unsigned int *)(temp_v0 + 0x40) = DAT_00472910;
    *(unsigned int *)(temp_v0 + 0x44) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x48) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x4c) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x50) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x54) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x58) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x5c) = temp_v7;
  }
  *(unsigned int *)(temp_v0 + 0x18) = in_s0;
  *(unsigned int *)(temp_v0 + 4) = 7;
  *(unsigned int *)(temp_v0 + 0x1c) = param_2;
  *(unsigned int *)(temp_v0 + 0x60) = param_4;
  effMenuListAppend(temp_v0,1);
  temp_v1 = 0x10000;
  memAlloc(0x10000,0x100,0,0x68,0x10,1);
  rt_memcpy_w();
  effMenuListAppend(temp_v1,2);
  return;
}

} /* extern "C" */
