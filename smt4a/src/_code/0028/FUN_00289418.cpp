/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00289418` (_code @ 0x289418, 0x30c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00100388(...);
int FUN_00162790(...);
int vec2GetYInt(...);
int efctSetSpeed(...);
int FUN_001834a4(...);
int FUN_0018408c(...);
int FUN_002f67c4(...);
int FUN_00334ad0(...);
int FUN_00334c6c(...);
int FUN_0037e5c0(...);
int VectorSignedToFloat(...);

/* stack frame of param_2: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp60; /* 0x60: local_60 */
    unsigned int sp68; /* 0x68: local_68 */
    unsigned int sp6C; /* 0x6c: local_6c */
} param_2_stack;

extern int g_statusDown; /* 0x588fe8 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00100388. */
/* Supplied declaration required: FUN_00162790. */
/* Supplied declaration required: vec2GetYInt. */
/* Supplied declaration required: efctSetSpeed. */
/* Supplied declaration required: FUN_001834a4. */
/* Supplied declaration required: FUN_0018408c. */
extern int FUN_00284140(int);
extern int FUN_002a4894(int);
/* Supplied declaration required: FUN_002f67c4. */
/* Supplied declaration required: FUN_00334ad0. */
/* Supplied declaration required: FUN_00334c6c. */
/* Supplied declaration required: FUN_0037e5c0. */


void FUN_00289418(int param_1,int param_2)

{
/* irregular: 1 goto(s); irregular input(s): in_fpscr; 11 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  short temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned char *puVar7;
  int temp_v6;
  int temp_v7;
  unsigned char temp_v8;
  unsigned char temp_v9;
  unsigned int in_fpscr;
  unsigned int temp_v10;
  unsigned char temp_v11 [44];
  
  temp_v6 = g_statusDown;
  temp_v8 = 0;
  temp_v3 = FUN_002a4894(g_statusDown + 0x2500);
  temp_v5 = g_statusDown;
  if ((temp_v3 >= *(int *)(temp_v6 + 0x24ec)) && (temp_v8 = *(char *)(temp_v6 + 0x2578) != '\0', temp_v8)) {
    temp_v10 = 0x9fe7ffff;
    temp_v4 = FUN_001834a4(0x12,0x58d);
    temp_v5 = FUN_00284140((int)*(short *)(temp_v5 + *(int *)(temp_v5 + 0x257c) * 2 + 0x544));
    temp_v9 = (temp_v5 == 1 || temp_v5 == 2) || temp_v5 == 6;
    if (temp_v9) {
      temp_v10 = 0xf5ff9fff;
    }
    FUN_00334c6c(*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,temp_v9);
    efctSetSpeed();
    FUN_00100388(temp_v11,"撂躂蒂＀");
    puVar7 = temp_v11;
    FUN_0018408c(puVar7,3);
    temp_v0 = *(short *)(temp_v4 + 8);
    temp_v1 = **(short **)(temp_v4 + 0xc);
    temp_v2 = *(short *)(temp_v4 + 10);
    temp_v5 = FUN_001834a4(0x12,0x579,(int)temp_v2);
    VectorSignedToFloat((int)*(short *)(temp_v5 + 10) + temp_v2 + param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat(param_1 + (int)temp_v0 + ((int)temp_v1 - (int)puVar7) / 2,
                        (unsigned char)(in_fpscr >> 0x16) & 3);
    FUN_00162790(3,temp_v10,temp_v11);
    efctSetSpeed();
  }
  else {
    FUN_00334ad0(param_1,param_2);
  }
  if (*(char *)(temp_v6 + 0x2578) == '\0') {
    temp_v5 = vec2GetYInt(temp_v6 + 0x3fc);
    temp_v7 = *(int *)(temp_v6 + 0x24f4);
    temp_v4 = FUN_001834a4(0x12,temp_v7 + 0x566);
    FUN_002f67c4(temp_v7,*(short *)(temp_v4 + 8) + param_1,param_2 + temp_v5 + (int)*(short *)(temp_v4 + 10)
                 ,0x65);
    temp_v5 = vec2GetYInt();
    temp_v7 = *(int *)(temp_v6 + 0x24f8);
    temp_v4 = FUN_001834a4(0x12,temp_v7 + 0x566);
    FUN_002f67c4(temp_v7,*(short *)(temp_v4 + 8) + param_1,(int)*(short *)(temp_v4 + 10) + param_2 + temp_v5
                 ,0x65);
  }
  temp_v5 = 0;
  do {
    if (!(temp_v5 == temp_v3 && !temp_v8)) {
      if (*(char *)(temp_v6 + 0x2578) != '\0') {
        temp_v4 = FUN_001834a4(0x12,temp_v5 + 0x566);
        FUN_002f67c4(temp_v5,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0x97);
      }
      else {
LAB_00289700:
        temp_v4 = *(int *)(temp_v6 + 0x24f4);
        temp_v9 = temp_v4 == temp_v5;
        if (!temp_v9) {
          temp_v4 = *(int *)(temp_v6 + 0x24f8);
        }
        if (!(temp_v9 || temp_v4 == temp_v5)) {
          temp_v4 = FUN_001834a4(0x12,temp_v5 + 0x566);
          FUN_002f67c4(temp_v5,*(short *)(temp_v4 + 8) + param_1,*(short *)(temp_v4 + 10) + param_2,0x97);
        }
      }
    }
    else if (*(char *)(temp_v6 + 0x2578) == '\0') goto LAB_00289700;
    temp_v5 = temp_v5 + 1;
    if (temp_v5 >= 8) {
      if ((!temp_v8) && (*(char *)(temp_v6 + 0x2578) != '\0')) {
        temp_v6 = FUN_001834a4(0x12,temp_v3 + 0x585);
        FUN_0037e5c0(temp_v3,*(short *)(temp_v6 + 8) + param_1,*(short *)(temp_v6 + 10) + param_2);
        return;
      }
      return;
    }
  } while( 1 );
}

} /* extern "C" */
