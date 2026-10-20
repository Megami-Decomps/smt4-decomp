/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002a880c` (_code @ 0x2a880c, 0x230 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4e18(int, unsigned int);
int FUN_002a86d4(int);
int FUN_002aeb38(int, int, unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a4e18. */
/* Supplied declaration required: FUN_002a86d4. */
/* Supplied declaration required: FUN_002aeb38. */
extern int FUN_002aecd8(int, unsigned int);


void FUN_002a880c(int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr, in_s0, in_s1; 6 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned int in_fpscr;
  int in_s0;
  unsigned int temp_v2;
  unsigned int in_s1;
  
  *(unsigned int *)(param_1 + 0x24) = param_2;
  switch(param_2) {
  case 1:
    if (param_3 == 0) {
      temp_v2 = 0x40800000;
    }
    else {
      temp_v2 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    *(unsigned int *)(param_1 + 0x74) = temp_v2;
    *(unsigned int *)(param_1 + 0x28) = 0x3f800000;
    *(unsigned char *)(param_1 + 0x30) = 0;
    break;
  case 2:
    if (param_3 == 0) {
      temp_v2 = 0x41400000;
    }
    else {
LAB_002a8970:
      temp_v2 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    *(unsigned int *)(param_1 + 0x74) = temp_v2;
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned char *)(param_1 + 0x30) = 1;
    FUN_002a86d4(param_1);
    break;
  case 3:
    temp_v1 = param_3 != 0;
    if (!temp_v1) {
      in_s1 = 0x40c00000;
      param_3 = in_s0;
    }
    *(unsigned char *)(param_1 + 0x8d) = 1;
    if (temp_v1) {
      in_s1 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    *(unsigned int *)(param_1 + 0x74) = in_s1;
    *(unsigned int *)(param_1 + 0x28) = 0x3f800000;
    *(unsigned int *)(param_1 + 0x88) = 0x3f800000;
    break;
  case 4:
    if (param_3 == 0) {
      temp_v2 = 0x41400000;
    }
    else {
      temp_v2 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    *(unsigned int *)(param_1 + 0x74) = temp_v2;
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned int *)(param_1 + 0x88) = 0x3f800000;
    break;
  case 5:
    if (param_3 == 0) {
      temp_v2 = 0x41200000;
    }
    else {
      temp_v2 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    *(unsigned int *)(param_1 + 0x74) = temp_v2;
    break;
  case 6:
    if (param_3 == 0) {
      temp_v2 = 0x41200000;
    }
    else {
      temp_v2 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    *(unsigned int *)(param_1 + 0x74) = temp_v2;
    FUN_002a4e18(param_1 + 0x34,*(unsigned int *)(param_1 + 8));
    *(unsigned char *)(param_1 + 0x30) = 1;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned int *)(param_1 + 0x58) = 0;
    *(unsigned int *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 0x28) = 0;
    FUN_002a86d4(param_1);
    break;
  case 7:
    if (param_3 != 0) goto LAB_002a8970;
    temp_v2 = 0x40800000;
    *(unsigned int *)(param_1 + 0x74) = temp_v2;
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned char *)(param_1 + 0x30) = 1;
    FUN_002a86d4(param_1);
    break;
  case 8:
    if (param_3 == 0) {
      temp_v2 = 0x42f00000;
    }
    else {
      temp_v2 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    *(unsigned int *)(param_1 + 0x74) = temp_v2;
    *(unsigned char *)(param_1 + 0x30) = 1;
    *(unsigned int *)(param_1 + 0x28) = 0;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    FUN_002a86d4(param_1);
    break;
  case 9:
    if (param_3 == 0) {
      temp_v2 = 0x42f00000;
    }
    else {
      temp_v2 = VectorSignedToFloat(param_3,(unsigned char)(in_fpscr >> 0x16) & 3);
    }
    *(unsigned int *)(param_1 + 0x74) = temp_v2;
    *(unsigned int *)(param_1 + 0x28) = 0x3f800000;
    *(unsigned char *)(param_1 + 0x30) = 1;
    *(unsigned int *)(param_1 + 0x2c) = 0;
    FUN_002a86d4(param_1);
  }
  if ((((*(char *)(param_1 + 0x30) != '\0') && (*(int *)(param_1 + 0xc) == 0)) &&
      (*(int *)(param_1 + 0x14) == -1)) && (*(int *)(param_1 + 4) != 0)) {
    temp_v0 = FUN_002aecd8(*(int *)(param_1 + 4),1);
    FUN_002aeb38(param_1,*(unsigned short *)(temp_v0 + 2),0xffffffff);
    return;
  }
  return;
}

} /* extern "C" */
