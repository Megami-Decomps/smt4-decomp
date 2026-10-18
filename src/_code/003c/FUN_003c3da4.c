/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003c3da4` (_code @ 0x3c3da4, 0x2cc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char LAB_003c4074; /* 0x3c4074 */
extern short DAT_00439a50; /* 0x439a50 */
extern short DAT_00439a52; /* 0x439a52 */
extern short DAT_00439a54; /* 0x439a54 */
extern short DAT_00439a56; /* 0x439a56 */
extern short DAT_00439a58; /* 0x439a58 */
extern short DAT_00439a5a; /* 0x439a5a */
extern short DAT_00439a5c; /* 0x439a5c */
extern short DAT_00439a5e; /* 0x439a5e */
extern short DAT_00439a60; /* 0x439a60 */
extern short DAT_00439a62; /* 0x439a62 */
extern short DAT_00439a64; /* 0x439a64 */
extern short DAT_00439a66; /* 0x439a66 */
extern unsigned char DAT_00439ce0; /* 0x439ce0 */
extern unsigned char DAT_00439ce1; /* 0x439ce1 */
extern unsigned char DAT_00439ce2; /* 0x439ce2 */
extern unsigned char DAT_00439ce3; /* 0x439ce3 */
extern unsigned int DAT_00439ce8; /* 0x439ce8 */
extern unsigned int DAT_00439cf0; /* 0x439cf0 */
extern unsigned int DAT_00439cf8; /* 0x439cf8 */

/* Supplied declaration required: FUN_0022a358. */
/* Supplied declaration required: FUN_0022a3a8. */
/* Supplied declaration required: FUN_0025c2ec. */
/* Supplied declaration required: FUN_0025c318. */
/* Supplied declaration required: FUN_0025c58c. */
/* Supplied declaration required: FUN_00262914. */


void FUN_003c3da4(int param_1,int param_2)

{
/* irregular: 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v0 = *(unsigned int *)(param_2 + 0x5c);
  FUN_0025c58c(temp_v0,0x73,0);
  *(unsigned int *)(param_1 + 0x10) = temp_v0;
  FUN_0025c318();
  FUN_0025c2ec(*(unsigned int *)(param_1 + 0x10),1);
  FUN_00262914(*(unsigned int *)(param_1 + 0x10),&LAB_003c4074);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0,DAT_00439ce8,0xffffffff,2,0);
  temp_v2 = DAT_00439cf8 & 0xff0000;
  temp_v1 = DAT_00439cf8 & 0xff00;
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),1,DAT_00439cf8 >> 0x18,0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),2,temp_v2 >> 0x10,0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),3,temp_v1 >> 8,0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),4,DAT_00439ce0,0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),5,DAT_00439ce1,0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),6,DAT_00439ce2,0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),7,DAT_00439ce3,0,0xff,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),8,DAT_00439cf0,0,0x78,0);
  FUN_0022a358(*(unsigned int *)(param_1 + 0x10),9,0,1);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),10,(int)DAT_00439a50,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xb,(int)DAT_00439a54,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xc,(int)DAT_00439a52,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xd,(int)DAT_00439a56,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xe,(int)DAT_00439a58,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0xf,(int)DAT_00439a5c,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x10,(int)DAT_00439a5a,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x11,(int)DAT_00439a5e,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x12,(int)DAT_00439a60,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x13,(int)DAT_00439a64,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x14,(int)DAT_00439a62,0xfffffa24,0x5dc,0);
  FUN_0022a3a8(*(unsigned int *)(param_1 + 0x10),0x15,(int)DAT_00439a66,0xfffffa24,0x5dc,0);
  return;
}
