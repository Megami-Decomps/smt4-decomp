/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003f7674` (_code @ 0x3f7674, 0x268 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp78; /* 0x78: local_78 */
    unsigned int sp7C; /* 0x7c: local_7c */
    unsigned int sp80; /* 0x80: local_80 */
    unsigned int sp84; /* 0x84: local_84 */
    unsigned int sp88; /* 0x88: local_88 */
} param_3_stack;

extern unsigned char LAB_003f78ec; /* 0x3f78ec */
extern unsigned int DAT_0059dbb4; /* 0x59dbb4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: FUN_001677c0. */
extern int FUN_001834a4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_0018408c. */
/* Supplied declaration required: FUN_001879d0. */
/* Supplied declaration required: FUN_0019e52c. */
/* Supplied declaration required: FUN_003f533c. */
/* Supplied declaration required: FUN_003f6cc0. */
/* Supplied declaration required: FUN_003f707c. */
/* Supplied declaration required: FUN_003f74a8. */
/* Supplied declaration required: FUN_003f757c. */


void FUN_003f7674(int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  unsigned char temp_v6 [76];
  
  temp_v0 = *(unsigned short *)(*(int *)(param_1 + 0x5e0) + 2) >> 8;
  switch(temp_v0) {
  case 0:
    temp_v1 = 0xae;
    break;
  case 1:
    temp_v1 = 0xb2;
    break;
  case 2:
    temp_v1 = 0xb0;
    break;
  case 3:
    temp_v1 = 0xb1;
    break;
  case 4:
    temp_v1 = 0xb3;
    break;
  case 5:
    temp_v1 = 5;
    break;
  case 6:
    temp_v1 = 0xba;
    break;
  case 7:
    temp_v1 = 0xb9;
    break;
  case 8:
    temp_v1 = 0xaf;
    break;
  case 9:
    temp_v1 = 0xbb;
    break;
  default:
    temp_v1 = 0xffffffff;
  }
  if ((-1 < (int)temp_v1) && (temp_v0 != 9)) {
    FUN_0019e52c(temp_v1 & 0xffff);
  }
  FUN_003f707c(param_1,param_2,param_3,0xd3,0x3e,0x47,0x4c,0x4f);
  temp_v5 = 0.26f;
  temp_v4 = *(int *)(param_1 + 0x5e0) + 4;
  FUN_001879d0(DAT_0059dbb4);
  FUN_001677c0();
  temp_v2 = FUN_001834a4(0x31,0x46);
  FUN_0018408c(temp_v4,3);
  temp_v3 = (int)*(short *)(temp_v2 + 8) + param_2 + (int)temp_v5;
  VectorSignedToFloat(*(short *)(temp_v2 + 10) + param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(temp_v3,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_00162790(3,0xff,temp_v4,temp_v3);
  temp_v2 = param_1;
  FUN_003f74a8(param_1,*(int *)(param_1 + 0x5e0));
  FUN_00100388(temp_v6,&LAB_003f78ec,temp_v2);
  FUN_003f757c(param_1,param_2,param_3,0xd8,temp_v6,0x4b,0x4a,1,0);
  temp_v0 = *(unsigned short *)(*(int *)(param_1 + 0x5e0) + 2);
  if (temp_v0 >> 8 == 10) {
    temp_v0 = 0;
  }
  else {
    temp_v0 = temp_v0 & 0xff;
  }
  FUN_003f533c(param_1,param_2,param_3,0xd8,temp_v0,0x78,0x79,0x7a,0xa6d2e3ff,0);
  FUN_003f6cc0(param_1,param_2,param_3,0xd8,*(unsigned short *)(*(int *)(param_1 + 0x5e0) + 2) >> 8,0x4a);
  FUN_001677c0();
  return;
}
