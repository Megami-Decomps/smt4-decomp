/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ffe14` (_code @ 0x2ffe14, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int memAlloc(int, int, int, int, int, int);
int FUN_00300124(...);
int rt_memcpy_w(void);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} param_4_stack;

extern unsigned int DAT_005c13f0; /* 0x5c13f0 */
extern unsigned int DAT_005c13f4; /* 0x5c13f4 */
extern unsigned int DAT_005c13f8; /* 0x5c13f8 */
extern unsigned int DAT_005c13fc; /* 0x5c13fc */
extern unsigned int DAT_005c1400; /* 0x5c1400 */
extern unsigned int DAT_005c1404; /* 0x5c1404 */
extern unsigned int DAT_005c1408; /* 0x5c1408 */
extern unsigned int DAT_005c140c; /* 0x5c140c */
extern unsigned int DAT_005c1410; /* 0x5c1410 */
extern unsigned int DAT_005c1414; /* 0x5c1414 */
extern unsigned int DAT_005c1418; /* 0x5c1418 */
extern unsigned int DAT_005c141c; /* 0x5c141c */
extern unsigned int DAT_005c1420; /* 0x5c1420 */
extern unsigned int DAT_005c1424; /* 0x5c1424 */
extern unsigned int DAT_005c1428; /* 0x5c1428 */
extern unsigned int DAT_005c142c; /* 0x5c142c */

/* Supplied declaration required: memAlloc. */
/* Supplied declaration required: FUN_00300124. */
extern int displayIsStereoActive(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002ffe14(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int param_4)

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
  temp_v7 = DAT_005c140c;
  temp_v6 = DAT_005c1408;
  temp_v5 = DAT_005c1404;
  temp_v4 = DAT_005c1400;
  temp_v3 = DAT_005c13fc;
  temp_v2 = DAT_005c13f8;
  temp_v1 = DAT_005c13f4;
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
    *(unsigned int *)(temp_v0 + 0x20) = DAT_005c13f0;
    *(unsigned int *)(temp_v0 + 0x24) = temp_v1;
    *(unsigned int *)(temp_v0 + 0x28) = temp_v2;
    *(unsigned int *)(temp_v0 + 0x2c) = temp_v3;
    *(unsigned int *)(temp_v0 + 0x30) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x34) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x38) = temp_v6;
    *(unsigned int *)(temp_v0 + 0x3c) = temp_v7;
    temp_v7 = DAT_005c142c;
    temp_v6 = DAT_005c1428;
    temp_v5 = DAT_005c1424;
    temp_v4 = DAT_005c1420;
    temp_v3 = DAT_005c141c;
    temp_v2 = DAT_005c1418;
    temp_v1 = DAT_005c1414;
    *(unsigned int *)(temp_v0 + 0x40) = DAT_005c1410;
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
  FUN_00300124(temp_v0,1);
  temp_v0 = displayIsStereoActive();
  if (temp_v0 != 0) {
    temp_v1 = 0x10000;
    memAlloc(0x10000,0x100,0,0x68,0x10,1);
    rt_memcpy_w();
    FUN_00300124(temp_v1,2);
    return;
  }
  return;
}

} /* extern "C" */
