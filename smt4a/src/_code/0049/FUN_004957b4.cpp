/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004957b4` (_code @ 0x4957b4, 0x1c0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_0018349c(...);
int FUN_0049339c(int, int, int, int, int);
int FUN_00493408(...);
int FUN_0049368c(...);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp48; /* 0x48: local_48 */
    unsigned int sp4C; /* 0x4c: local_4c */
    unsigned int sp54; /* 0x54: local_54 */
    unsigned int sp58; /* 0x58: local_58 */
} param_1_stack;

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_0018349c. */
extern int FUN_0031d174(int);
/* Supplied declaration required: FUN_0049339c. */
/* Supplied declaration required: FUN_00493408. */
/* Supplied declaration required: FUN_0049368c. */


void FUN_004957b4(int param_1)

{
/* irregular: 5 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  unsigned int temp_v7;
  unsigned char temp_v8 [32];
  
  temp_v3 = *(int *)(param_1 + 0x3a0);
  temp_v2 = *(int *)(param_1 + 0xb40);
  temp_v4 = temp_v3 + 6;
  temp_v5 = 2;
  if (temp_v2 == 7 || temp_v2 == 8) {
    temp_v5 = 1;
  }
  temp_v2 = FUN_0031d174(param_1 + temp_v2 * 0x74 + 0xb60);
  temp_v2 = FUN_0018349c(param_1 + 0x3b8,temp_v2 + temp_v5 + 0x4f);
  temp_v0 = *(short *)(temp_v2 + 8);
  temp_v1 = *(short *)(temp_v2 + 10);
  temp_v2 = FUN_0018349c(param_1 + 0x3b8,200);
  temp_v5 = (int)*(short *)(temp_v2 + 8) + (int)temp_v0;
  temp_v2 = (int)temp_v1 + (int)*(short *)(temp_v2 + 10);
  if (*(int *)(param_1 + 0xb40) != 8) {
    FUN_0049339c(param_1 + 0x3b8,8,temp_v5,temp_v2,temp_v4);
  }
  else {
    FUN_0049339c(param_1 + 0x3b8,9,temp_v5,temp_v2,temp_v4);
  }
  FUN_0049368c(param_1 + 0x3b8,0xc2,temp_v5,temp_v2,temp_v4,1);
  FUN_0049368c(param_1 + 0x3b8,0xc3,temp_v5,temp_v2,temp_v4,1);
  if (*(char *)(param_1 + 0xb58) != '\0') {
    FUN_0049368c(param_1 + 0x3b8,0xc4,temp_v5,temp_v2,temp_v3 + 7,1);
  }
  if (*(char *)(param_1 + 0xb59) != '\0') {
    FUN_0049368c(param_1 + 0x3b8,0xc5,temp_v5,temp_v2,temp_v3 + 7,1);
  }
  temp_v7 = *(unsigned int *)(param_1 + 0xb48);
  temp_v3 = FUN_0018349c(param_1 + 0x3b8,199);
  temp_v6 = 0xffffffff;
  temp_v0 = *(short *)(temp_v3 + 8);
  temp_v1 = *(short *)(temp_v3 + 10);
  if (*(int *)(param_1 + 0xb48) == *(int *)(param_1 + 0xb4c)) {
    temp_v6 = 0x57d8ffff;
  }
  textFormatBuffer(temp_v8,
               "㈥d㩣卜呍䘴卜呍䘴獜摤㑳灜潲牧浡獜潨屰桳灯慍湩挮灰",temp_v7);
  FUN_00493408(param_1 + 0x3b8,0,temp_v0 + temp_v5,temp_v1 + temp_v2,0,7,temp_v6,temp_v4,temp_v8);
  return;
}

} /* extern "C" */
