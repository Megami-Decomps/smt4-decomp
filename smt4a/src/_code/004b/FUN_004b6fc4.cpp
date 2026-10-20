/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004b6fc4` (_code @ 0x4b6fc4, 0x150 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0013f1b8(int, int);
int FUN_0016007c(void);
int FUN_0022677c(int, int);
int FUN_002804b0(...);
int FUN_002bf464(void);
int FUN_0031a400(void);
int FUN_0031e198(void);
int FUN_00342010(void);
int FUN_003b61ec(void);
int FUN_00407978(void);
int FUN_004930e4(int);
int FUN_004ba078(void);
int FUN_004ba1f4(int);
int FUN_004bad0c(int);
int FUN_004bb198(int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_0013f1b8. */
extern int FUN_0015a21c(int);
/* Supplied declaration required: FUN_0016007c. */
/* Supplied declaration required: FUN_0022677c. */
/* Supplied declaration required: FUN_002804b0. */
/* Supplied declaration required: FUN_002bf464. */
/* Supplied declaration required: FUN_0031a400. */
/* Supplied declaration required: FUN_0031e198. */
/* Supplied declaration required: FUN_00342010. */
/* Supplied declaration required: FUN_003b61ec. */
/* Supplied declaration required: FUN_00407978. */
/* Supplied declaration required: FUN_004930e4. */
/* Supplied declaration required: FUN_004ba078. */
/* Supplied declaration required: FUN_004ba1f4. */
/* Supplied declaration required: FUN_004bad0c. */
/* Supplied declaration required: FUN_004bb198. */


void FUN_004b6fc4(int param_1)

{
/* irregular: 15 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned char *)(param_1 + 0x24) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  FUN_004ba078();
  FUN_004ba1f4(param_1 + 0x9c);
  *(unsigned int *)(param_1 + 0x34) = 0xffffffff;
  FUN_0013f1b8(0x18,0);
  FUN_0031a400();
  FUN_003b61ec();
  FUN_002bf464();
  FUN_00342010();
  FUN_004930e4(0);
  FUN_004bb198(param_1 + 0x1114);
  FUN_004bad0c(param_1 + 0x9c);
  FUN_002804b0("mikado/talk.bf",param_1 + 0x1138,0);
  FUN_002804b0("mikado/talk.mbm",param_1 + 0x113c,0);
  FUN_002804b0("mikado/check.bf",param_1 + 0x1144,0);
  FUN_002804b0("mikado/check.mbm",param_1 + 0x1148,0);
  *(unsigned int *)(param_1 + 0x28) = 1;
  *(unsigned int *)(param_1 + 0x2c) = 0;
  *(unsigned int *)(param_1 + 0x1130) = 0;
  *(unsigned int *)(param_1 + 0x1128) = 0;
  *(unsigned int *)(param_1 + 0x112c) = 0;
  *(unsigned int *)(param_1 + 0x1138) = 0;
  *(unsigned int *)(param_1 + 0x113c) = 0;
  *(unsigned int *)(param_1 + 0x1140) = 0;
  *(unsigned int *)(param_1 + 0x1118) = 0;
  *(unsigned int *)(param_1 + 0x58) = 0;
  *(unsigned int *)(param_1 + 0x5c) = 0;
  *(unsigned short *)(param_1 + 0x4c) = 0xffff;
  *(unsigned short *)(param_1 + 0x4e) = 0;
  *(unsigned int *)(param_1 + 0x116c) = 0;
  *(unsigned char *)(param_1 + 0x48) = 0;
  *(unsigned char *)(param_1 + 0x49) = 0;
  *(unsigned char *)(param_1 + 0x4a) = 0;
  *(unsigned char *)(param_1 + 0x4b) = 0;
  FUN_0022677c(0,0xff);
  FUN_0022677c(1,0xff);
  temp_v0 = 0x7a0;
  FUN_0016007c();
  temp_v1 = 0;
  if (temp_v0 != 0) {
    temp_v1 = FUN_0015a21c(temp_v0 + 0x4f0);
    temp_v1 = temp_v1 - 0x4f0;
  }
  *(int *)(param_1 + 0x1218) = temp_v1;
  FUN_00407978();
  FUN_0031e198();
  return;
}

} /* extern "C" */
