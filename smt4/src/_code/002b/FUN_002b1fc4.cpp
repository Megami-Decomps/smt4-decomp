/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b1fc4` (_code @ 0x2b1fc4, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c5d5c(unsigned int [4], unsigned char *, int, int);
int rt_memcpy_w(int [21], unsigned char *, int);

/* stack frame of param_6: 9 slot(s), 36 byte(s) */
typedef struct {
    unsigned int sp74; /* 0x74: local_74 */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp90; /* 0x90: local_90 */
    unsigned int sp94; /* 0x94: local_94 */
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
    unsigned int spB0; /* 0xb0: local_b0 */
} param_6_stack;

extern unsigned char LAB_00141adc; /* 0x141adc */
extern unsigned char DAT_004091d0; /* 0x4091d0 */
extern unsigned int DAT_004d46ac; /* 0x4d46ac */
extern unsigned int DAT_004d46b0; /* 0x4d46b0 */
extern unsigned int DAT_004d46b4; /* 0x4d46b4 */
extern unsigned int DAT_004d46b8; /* 0x4d46b8 */
extern unsigned int DAT_004d46bc; /* 0x4d46bc */
extern unsigned int DAT_004d46c0; /* 0x4d46c0 */
extern unsigned int DAT_004d46c4; /* 0x4d46c4 */
extern unsigned int DAT_004d46c8; /* 0x4d46c8 */
extern unsigned int DAT_004d46cc; /* 0x4d46cc */
extern unsigned int DAT_004d46d0; /* 0x4d46d0 */
extern unsigned int DAT_004d46d4; /* 0x4d46d4 */
extern unsigned int DAT_004d46d8; /* 0x4d46d8 */
extern unsigned int DAT_004d46dc; /* 0x4d46dc */
extern unsigned int DAT_004d46e0; /* 0x4d46e0 */
extern unsigned int DAT_004d46e4; /* 0x4d46e4 */
extern unsigned int DAT_004d46e8; /* 0x4d46e8 */
extern unsigned char DAT_004d46ec; /* 0x4d46ec */
extern unsigned char DAT_004d46fd; /* 0x4d46fd */
extern unsigned int DAT_004d4704; /* 0x4d4704 */

/* Supplied declaration required: FUN_002c5d5c. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_002b1fc4(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
                 int param_5,int param_6)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1 [4];
  unsigned int temp_v2;
  unsigned int uStack_9c;
  unsigned int uStack_98;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int temp_v5;
  unsigned int temp_v6;
  unsigned int uStack_7c;
  unsigned int uStack_78;
  unsigned int temp_v7;
  int aiStack_70 [21];
  
  FUN_002c5d5c(temp_v1,&LAB_00141adc,0x10,4);
  rt_memcpy_w(aiStack_70,&DAT_004091d0,0x50);
  if (param_6 != 0) {
    temp_v1[0] = *param_1;
    temp_v1[1] = param_1[1];
    temp_v1[2] = param_1[2];
    temp_v1[3] = param_1[3];
    temp_v2 = *param_2;
    uStack_9c = param_2[1];
    uStack_98 = param_2[2];
    temp_v3 = param_2[3];
    temp_v4 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    temp_v5 = param_3[3];
    temp_v6 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    temp_v7 = param_4[3];
  }
  else {
    temp_v1[0] = *param_1;
    temp_v1[1] = param_1[1];
    temp_v1[2] = param_1[2];
    temp_v1[3] = DAT_004d4704;
    temp_v2 = *param_2;
    uStack_9c = param_2[1];
    uStack_98 = param_2[2];
    temp_v3 = DAT_004d4704;
    temp_v4 = *param_3;
    uStack_8c = param_3[1];
    uStack_88 = param_3[2];
    temp_v5 = DAT_004d4704;
    temp_v6 = *param_4;
    uStack_7c = param_4[1];
    uStack_78 = param_4[2];
    temp_v7 = DAT_004d4704;
  }
  DAT_004d46ec = (char)param_5;
  temp_v0 = aiStack_70[param_5 * 4];
  DAT_004d46ac = temp_v1[temp_v0 * 4];
  DAT_004d46b0 = temp_v1[temp_v0 * 4 + 1];
  DAT_004d46b4 = temp_v1[temp_v0 * 4 + 2];
  DAT_004d46b8 = temp_v1[temp_v0 * 4 + 3];
  temp_v0 = aiStack_70[param_5 * 4 + 1];
  DAT_004d46c4 = temp_v1[temp_v0 * 4 + 2];
  DAT_004d46c8 = temp_v1[temp_v0 * 4 + 3];
  DAT_004d46bc = temp_v1[temp_v0 * 4];
  DAT_004d46c0 = temp_v1[temp_v0 * 4 + 1];
  temp_v0 = aiStack_70[param_5 * 4 + 2];
  DAT_004d46d4 = temp_v1[temp_v0 * 4 + 2];
  DAT_004d46d8 = temp_v1[temp_v0 * 4 + 3];
  DAT_004d46cc = temp_v1[temp_v0 * 4];
  DAT_004d46d0 = temp_v1[temp_v0 * 4 + 1];
  temp_v0 = aiStack_70[param_5 * 4 + 3];
  DAT_004d46e8 = temp_v1[temp_v0 * 4 + 3];
  DAT_004d46dc = temp_v1[temp_v0 * 4];
  DAT_004d46e0 = temp_v1[temp_v0 * 4 + 1];
  DAT_004d46e4 = temp_v1[temp_v0 * 4 + 2];
  DAT_004d46fd = 1;
  return;
}

} /* extern "C" */
