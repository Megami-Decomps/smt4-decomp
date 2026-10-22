/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004a559c` (_code @ 0x4a559c, 0x23c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int drawTextAtSnappedRectangle(...);
int FUN_0049339c(int, int, int, int, int);
int FUN_0049368c(...);
int FUN_004a6144(...);
int owner4ASetSizeAndCall(...);
int VectorSignedToFloat(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp90; /* 0x90: local_90 */
} param_1_stack;

extern unsigned char LAB_004a57f4; /* 0x4a57f4 */
#ifndef ROMWRIGHT_STORAGE_s__U_U_0057f0a4_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s__U_U_0057f0a4_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s__U_U_0057f0a4_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s__U_U_0057f0a4_9_1_size_check[(sizeof(union romwright_storage_s__U_U_0057f0a4_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s__U_U_0057f0a4_9_1_u1_width_check[(sizeof(((union romwright_storage_s__U_U_0057f0a4_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s__U_U_0057f0a4_9_1_s1_width_check[(sizeof(((union romwright_storage_s__U_U_0057f0a4_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s__U_U_0057f0a4_9_1 s__U_U_0057f0a4; /* 0x57f0a4 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: drawTextAtSnappedRectangle. */
extern int FUN_0018349c(int, unsigned int);
extern int FUN_002a482c(int);
extern int FUN_0031d174(int);
extern unsigned int FUN_004929d8(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_0049339c. */
/* Supplied declaration required: FUN_0049368c. */
/* Supplied declaration required: FUN_004a6144. */
/* Supplied declaration required: owner4ASetSizeAndCall. */
extern int curveEvaluateStandard(unsigned char *, unsigned int);


void FUN_004a559c(int param_1)

{
/* irregular: irregular input(s): in_fpscr; 8 native warning(s); review required */
  short temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int in_fpscr;
  unsigned char temp_v7 [4];
  unsigned char temp_v8 [92];
  
  temp_v4 = *(int *)(param_1 + 0x850);
  VectorSignedToFloat(0x100 - temp_v4,(unsigned char)(in_fpscr >> 0x16) & 3);
  FUN_0049339c(param_1 + 200,0xd,0,0,temp_v4);
  if (*(char *)(param_1 + 0xa97e) == '\0') {
    temp_v6 = 0x1025;
  }
  else {
    temp_v6 = 0x1023;
  }
  FUN_0049368c(param_1 + 200,temp_v6 - 4,0,0,temp_v4,1);
  FUN_0049368c(param_1 + 200,temp_v6,0,0,temp_v4,1);
  if (*(char *)(param_1 + 0xa97e) == '\x01') {
    temp_v6 = 0x1026;
  }
  else {
    temp_v6 = 0x1024;
  }
  FUN_0049368c(param_1 + 200,temp_v6 - 4,0,0,temp_v4,1);
  FUN_0049368c(param_1 + 200,temp_v6,0,0,temp_v4,1);
  temp_v1 = FUN_004929d8(temp_v7,*(unsigned int *)(param_1 + 0xa874));
  textFormatBuffer(temp_v8,&LAB_004a57f4,temp_v1,(*(unsigned int *)&s__U_U_0057f0a4.u1[0]));
  temp_v6 = FUN_0018349c(param_1 + 200,0x102b);
  temp_v2 = curveEvaluateStandard(temp_v8,2);
  VectorSignedToFloat((int)*(short *)(temp_v6 + 10),(unsigned char)(in_fpscr >> 0x16) & 3);
  VectorSignedToFloat(((int)*(short *)(temp_v6 + 8) + (int)**(short **)(temp_v6 + 0xc) / 2) - temp_v2 / 2,
                      (unsigned char)(in_fpscr >> 0x16) & 3);
  drawTextAtSnappedRectangle(param_1 + 200,2,0xffffffff,temp_v8);
  temp_v2 = FUN_002a482c(param_1 + 0x20);
  temp_v5 = 0;
  temp_v6 = *(int *)(param_1 + 0x28);
  if (*(int *)(param_1 + 0x24) < *(int *)(param_1 + 0x28)) {
    temp_v6 = *(int *)(param_1 + 0x24);
  }
  if (0 < temp_v6) {
    do {
      if ((*(int *)(param_1 + 0x14) != 2) || (temp_v3 = FUN_0031d174(param_1 + 0x20), temp_v3 != temp_v5))
      {
        FUN_004a6144(param_1,temp_v5 + 1,0,(int)*(short *)(param_1 + (temp_v2 + temp_v5) * 0x20 + 0x868));
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v6);
  }
  if ((0 < *(int *)(param_1 + 0x28)) && (*(int *)(param_1 + 0x14) == 2)) {
    temp_v6 = FUN_0031d174(param_1 + 0x20);
    temp_v0 = *(short *)(param_1 + (temp_v6 + temp_v2) * 0x20 + 0x868);
    temp_v6 = FUN_0031d174(param_1 + 0x20);
    FUN_004a6144(param_1,temp_v6 + 1,1,(int)temp_v0);
  }
  owner4ASetSizeAndCall(param_1,temp_v4 + 1);
  return;
}

} /* extern "C" */
