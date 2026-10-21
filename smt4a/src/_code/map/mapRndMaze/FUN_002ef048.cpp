/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ef048` (_code @ 0x2ef048, 0x1bc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00178b04(int, unsigned char *, int);
int FUN_001bbf0c(void);
int FUN_001bc124(void);
int calcHeadingRoundedToCardinalDirection(void);
int mathPositionHeadingDegrees(int, int);
int FUN_003857c8(int);
int controllerSetDestination(unsigned int, float *);
int controllerSetRotationEulerDegrees(unsigned int);
int FUN_0040aa6c(void);
int FUN_0040aad4(int, int);
int handleRegistryRegisterObject(unsigned int, unsigned int);
int VectorSignedToFloat(int, int);

/* stack frame of void: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
} void_stack;

extern unsigned char LAB_002ef21c; /* 0x2ef21c */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern unsigned char g_mapRndMaze; /* 0x60fc08 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int gameFlagsGetBlock(void);
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: FUN_001bbf0c. */
/* Supplied declaration required: FUN_001bc124. */
/* Supplied declaration required: calcHeadingRoundedToCardinalDirection. */
/* Supplied declaration required: mathPositionHeadingDegrees. */
/* Supplied declaration required: FUN_003857c8. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */


void FUN_002ef048(void)

{
/* irregular: irregular input(s): in_fpscr; 12 native warning(s); review required */
  char temp_v0;
  char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  float temp_v9;
  float temp_v10;
  
  temp_v2 = gameFlagsGetBlock();
  if (*(char *)(temp_v2 + 0xe09) != '\0') {
    temp_v0 = *(char *)(temp_v2 + 0xe0a);
    temp_v1 = *(char *)(temp_v2 + 0xe0b);
    FUN_003857c8((int)*(float *)(temp_v2 + 0x15c4));
    temp_v7 = 0.0f;
    temp_v5 = (float)VectorSignedToFloat((int)temp_v0,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)temp_v1,(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe00),(unsigned char)(in_fpscr >> 0x16) & 3);
    VectorSignedToFloat((int)*(char *)(temp_v2 + 0xe01),(unsigned char)(in_fpscr >> 0x16) & 3);
    mathPositionHeadingDegrees((int)*(char *)(temp_v2 + 0xe00),(int)*(char *)(temp_v2 + 0xe01));
    calcHeadingRoundedToCardinalDirection();
    temp_v0 = *(char *)(temp_v2 + 0x166c);
    temp_v6 = temp_v5;
    if (((temp_v0 != '\0') && (temp_v6 = 90.0f, temp_v0 != '@' && temp_v0 != 'B')) &&
       (temp_v6 = temp_v5, temp_v0 == 'A' || temp_v0 == 'C')) {
      temp_v6 = temp_v7;
    }
    temp_v8 = (float)VectorSignedToFloat((short)*(char *)(temp_v2 + 0xe0a) * 700 + 0x15e,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v10 = (float)VectorSignedToFloat((short)*(char *)(temp_v2 + 0xe0b) * 700 + 0x15e,
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = temp_v6 * 0.017453292f;
    temp_v9 = temp_v7;
    FUN_001bc124();
    FUN_001bbf0c();
    temp_v5 = temp_v6;
    FUN_001bc124();
    temp_v7 = 330.0f;
    temp_v8 = temp_v8 - temp_v6 * 330.0f;
    FUN_001bbf0c();
    temp_v10 = temp_v10 - temp_v5 * temp_v7;
    temp_v3 = 0x20;
    FUN_00178b04(0x20,&LAB_002ef21c,0x12e1);
    temp_v2 = 0;
    if (temp_v3 != 0) {
      temp_v2 = modelListInit();
    }
    (*(int *)((unsigned char *)&g_mapRndMaze + 0x9d4)) = temp_v2;
    FUN_0040aa6c();
    FUN_0040aad4((*(int *)((unsigned char *)&g_mapRndMaze + 0x9d4)),0);
    temp_v4 = *(unsigned int *)((*(int *)((unsigned char *)&g_mapRndMaze + 0x9d4)) + 4);
    handleRegistryRegisterObject(g_handleRegistry,temp_v4);
    controllerSetDestination(temp_v4,&temp_v8);
    controllerSetRotationEulerDegrees(temp_v4);
  }
  return;
}

} /* extern "C" */
