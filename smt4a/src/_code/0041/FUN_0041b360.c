/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041b360` (_code @ 0x41b360, 0x580 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_6: 6 slot(s), 24 byte(s) */
typedef struct {
    unsigned int spB0; /* 0xb0: local_b0 */
    unsigned int spB4; /* 0xb4: local_b4 */
    unsigned int spB8; /* 0xb8: local_b8 */
    unsigned int spBC; /* 0xbc: local_bc */
    unsigned int spC0; /* 0xc0: local_c0 */
    unsigned int spC8; /* 0xc8: local_c8 */
} param_6_stack;

extern unsigned char DAT_00533f48; /* 0x533f48 */
extern unsigned char DAT_00533f4c; /* 0x533f4c */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_00164b5c. */
/* Supplied declaration required: FUN_001677c0. */
/* Supplied declaration required: FUN_00180310. */
/* Supplied declaration required: FUN_0018152c. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_001835b4. */
/* Supplied declaration required: FUN_00183bb0. */
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_00184e64. */
extern int FUN_0018719c(unsigned int);
extern short FUN_0019e52c(short);
extern unsigned int FUN_0031a914(unsigned char);
/* Supplied declaration required: FUN_003849cc. */
/* Supplied declaration required: FUN_0041af74. */
/* Supplied declaration required: FUN_0041b060. */
/* Supplied declaration required: FUN_0041b204. */
/* Supplied declaration required: FUN_0041b8e0. */
/* Supplied declaration required: rt_memcpy. */


void FUN_0041b360(int *param_1,int param_2,int param_3,unsigned int param_4,int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 17 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  unsigned char *puVar3;
  int *piVar4;
  unsigned int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  int temp_v6;
  int temp_v7;
  float temp_v8;
  unsigned char temp_v9 [136];
  
  temp_v6 = *param_1 + (int)*(short *)(param_3 + 8);
  temp_v8 = 0.5f;
  if (param_5 != 0) {
    temp_v8 = 1.0f;
  }
  temp_v7 = (int)*(short *)(param_3 + 10) + param_1[1];
  temp_v2 = 2;
  if (param_5 != 0) {
    temp_v2 = 3;
  }
  temp_v8 = (float)param_1[2] * temp_v8;
  if (param_2 == 0) {
    if (param_6 != 0) {
      piVar4 = param_1 + 3;
    }
    else {
      piVar4 = param_1 + 9;
    }
    FUN_0041b060(param_1,&temp_v6,piVar4,param_4,param_5);
    return;
  }
  FUN_001677c0();
  FUN_00164b5c(2,0x2b,temp_v2,temp_v6,temp_v7,2);
  FUN_001835b4(2,0x2b,0x3b,temp_v6,temp_v7,2);
  FUN_001835b4(2,0x2b,0x3c,temp_v6,temp_v7,2);
  FUN_001835b4(2,0x2b,0x1e,temp_v6,temp_v7,2);
  temp_v3 = 0;
  do {
    FUN_001835b4(2,0x2b,temp_v3 + 0x2b,temp_v6,temp_v7,2);
    temp_v3 = temp_v3 + 1;
  } while (temp_v3 < 3);
  FUN_001835b4(2,0x2b,0x4b,temp_v6,temp_v7,2);
  temp_v3 = FUN_001834a4(0x2b,0x2f);
  temp_v5 = temp_v6 + *(short *)(temp_v3 + 8);
  temp_v4 = temp_v7 + *(short *)(temp_v3 + 10);
  FUN_00100388(temp_v9,&DAT_00533f4c,param_2,(int)*(short *)(temp_v3 + 10));
  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v5,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(4,0xffffffff,temp_v9);
  temp_v3 = FUN_0018719c(0x534);
  if ((temp_v3 != 0) || (*(unsigned short *)(param_2 + 100) >= 100)) {
    temp_v3 = FUN_001834a4(0x2b,0x89);
    temp_v2 = 3;
  }
  else {
    temp_v3 = FUN_001834a4(0x2b,0x3a);
    temp_v2 = 2;
  }
  FUN_00180310(6,temp_v6 + *(short *)(temp_v3 + 8),temp_v7 + *(short *)(temp_v3 + 10),1,temp_v2,2,
               &DAT_00533f48,*(unsigned short *)(param_2 + 100));
  temp_v3 = FUN_001834a4(0x2b,0x2a);
  temp_v1 = (unsigned int)*(unsigned short *)(param_2 + 0x58);
  if (temp_v1 != 0) {
    if (temp_v1 - 200 < 100) {
      temp_v1 = 0xcb;
    }
    FUN_003849cc(temp_v1,*(unsigned short *)(param_2 + 0x5a),2,temp_v9,*(unsigned int *)(param_2 + 0x6c))
    ;
    FUN_0018408c(temp_v9,2);
    VectorSignedToFloat(temp_v7 + *(short *)(temp_v3 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(temp_v6 + *(short *)(temp_v3 + 8),(unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(2,0xb9d7d7ff,temp_v9,(int)*(short *)(temp_v3 + 8));
  }
  FUN_0041b8e0(param_1,param_2,&temp_v6);
  FUN_0041b204(param_1,param_2,&temp_v6);
  if (*(short *)(param_2 + 0x66) != 0) {
    FUN_001835b4(2,0x2b,0x6e,temp_v6,temp_v7,2);
    FUN_00184e64(0x57d8ffff);
    temp_v3 = FUN_001834a4(0x2b,0x72);
    FUN_00180310(6,temp_v6 + *(short *)(temp_v3 + 8),*(short *)(temp_v3 + 10) + temp_v7,1,4,2,
                 &DAT_00533f48,*(unsigned short *)(param_2 + 0x66) + 1);
    FUN_00183bb0();
  }
  else if (*(char *)(param_2 + 0x4d) != '\0') {
    FUN_001835b4(2,0x2b,0x17,temp_v6,temp_v7,2);
  }
  FUN_001835b4(2,0x2b,0x84,temp_v6,temp_v7,2);
  FUN_001835b4(2,0x2b,param_1[0xf],temp_v6,temp_v7,2);
  FUN_0041af74(param_1,param_4,&temp_v6,0xffffffff);
  FUN_001835b4(2,0x2b,0x1c,temp_v6,temp_v7,0xb);
  temp_v0 = *(short *)(param_2 + 0x68);
  if (temp_v0 != 0) {
    temp_v3 = FUN_001834a4(0x2b,0x1d);
    FUN_001835b4(2,0x2b,0x16,temp_v6 + *(short *)(temp_v3 + 8),temp_v7 + *(short *)(temp_v3 + 10),0xb)
    ;
    temp_v0 = FUN_0019e52c(temp_v0);
    FUN_0018152c((int)temp_v0,temp_v6 + *(short *)(temp_v3 + 8),temp_v7 + *(short *)(temp_v3 + 10),0x15,
                 0);
  }
  temp_v2 = FUN_0031a914(*(unsigned char *)(param_2 + 99));
  rt_memcpy(temp_v9,temp_v2,0x40);
  puVar3 = temp_v9;
  FUN_0018408c(puVar3,2);
  temp_v3 = FUN_001834a4(0x2b,0x25);
  temp_v4 = *(short *)(temp_v3 + 10) + temp_v7;
  VectorSignedToFloat(temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(*(short *)(temp_v3 + 8) + temp_v6 +
                      ((int)**(short **)(temp_v3 + 0xc) - (int)puVar3) / 2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(2,0xb9d7d7ff,temp_v9,temp_v4);
  FUN_001677c0();
  FUN_00183bb0();
  return;
}
