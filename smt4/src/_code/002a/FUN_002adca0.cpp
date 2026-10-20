/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002adca0` (_code @ 0x2adca0, 0x140 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a86d4(int);
int FUN_002aeb38(int, int, unsigned int);
int VectorSignedToFloat(unsigned int, int);

typedef struct fn_002adca0_arg0 fn_002adca0_arg0;
struct fn_002adca0_arg0 {
    unsigned char pad_0x0[0x4];
    undefined4 field_0x4; /* +0x4 */
    unsigned char pad_0x8[0x4];
    undefined4 field_0xc; /* +0xc */
    unsigned char pad_0x10[0x4];
    undefined4 field_0x14; /* +0x14 */
    unsigned char pad_0x18[0xc];
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    unsigned char pad_0x2c[0x4];
    char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0xf];
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
    undefined4 field_0x4c; /* +0x4c */
    undefined4 field_0x50; /* +0x50 */
    undefined4 field_0x54; /* +0x54 */
    undefined4 field_0x58; /* +0x58 */
    undefined4 field_0x5c; /* +0x5c */
    undefined4 field_0x60; /* +0x60 */
    unsigned char pad_0x64[0x4];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
    undefined4 field_0x78; /* +0x78 */
};

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_002a86d4. */
/* Supplied declaration required: FUN_002aeb38. */
extern int FUN_002aecd8(int, unsigned int);
extern int jobGetWork(void);


void FUN_002adca0(fn_002adca0_arg0 *param_1,unsigned int *param_2,unsigned int *param_3,
                 unsigned int param_4,unsigned int param_5,int param_6)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3;
  unsigned int in_fpscr;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = jobGetWork();
  temp_v4 = VectorSignedToFloat(param_5,(unsigned char)(in_fpscr >> 0x16) & 3);
  *(unsigned int *)(temp_v0 + 100) = param_4;
  temp_v5 = 0;
  *(unsigned int *)(temp_v0 + 0x68) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x78) = 3;
  *(unsigned int *)(temp_v0 + 0x6c) = 0;
  *(unsigned int *)(temp_v0 + 0x70) = 0;
  if ((*(char *)(temp_v0 + 0x30) == '\0') ||
     (*(int *)(temp_v0 + 0x24) != 3 && *(int *)(temp_v0 + 0x24) != 4)) {
    *(unsigned int *)(temp_v0 + 0x24) = 0;
  }
  temp_v4 = param_2[1];
  temp_v2 = param_2[2];
  *(unsigned int *)(temp_v0 + 0x40) = *param_2;
  *(unsigned int *)(temp_v0 + 0x44) = temp_v4;
  *(unsigned int *)(temp_v0 + 0x48) = temp_v2;
  if (*(char *)(temp_v0 + 0x30) == '\0') {
    *(unsigned char *)(temp_v0 + 0x30) = 1;
    FUN_002a86d4(temp_v0);
    temp_v4 = param_3[1];
    temp_v2 = param_3[2];
    *(unsigned int *)(temp_v0 + 0x4c) = *param_3;
    *(unsigned int *)(temp_v0 + 0x50) = temp_v4;
    *(unsigned int *)(temp_v0 + 0x54) = temp_v2;
    temp_v1 = *(int *)(temp_v0 + 0xc);
    temp_v3 = temp_v1 == 0;
    if (temp_v3) {
      temp_v1 = *(int *)(temp_v0 + 0x14);
    }
    if ((temp_v3 && temp_v1 == -1) && (*(int *)(temp_v0 + 4) != 0)) {
      temp_v1 = FUN_002aecd8(*(int *)(temp_v0 + 4),1);
      FUN_002aeb38(temp_v0,*(unsigned short *)(temp_v1 + 2),0xffffffff);
    }
    *(unsigned int *)(temp_v0 + 0x58) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x60) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x5c) = temp_v5;
  }
  if (param_6 == 1) {
    *(unsigned int *)(temp_v0 + 0x24) = 1;
    *(unsigned int *)(temp_v0 + 0x28) = 0x3f800000;
    *(unsigned char *)(temp_v0 + 0x30) = 0;
    *(unsigned int *)(temp_v0 + 0x74) = *(unsigned int *)(temp_v0 + 0x68);
    return;
  }
  if (param_6 == 7) {
    *(unsigned int *)(temp_v0 + 0x24) = 7;
    *(unsigned char *)(temp_v0 + 0x30) = 1;
    *(unsigned int *)(temp_v0 + 0x28) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x74) = *(unsigned int *)(temp_v0 + 0x68);
    FUN_002a86d4(temp_v0);
    *(unsigned int *)(temp_v0 + 0x58) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x5c) = temp_v5;
    *(unsigned int *)(temp_v0 + 0x60) = temp_v5;
  }
  return;
}

} /* extern "C" */
