/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00234118` (_code @ 0x234118, 0x130 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textFormatBuffer(...);
int FUN_00178b04(int, unsigned char *, int);
int controllerSetDestination(unsigned int, int);
int controllerSetRotationEulerDegrees(unsigned int);
int FUN_003fe86c(unsigned int, int, int);
int FUN_0040aa6c(void);
int FUN_0040aad4(unsigned int, int);
int handleRegistryRegisterObject(unsigned int, unsigned int);

extern unsigned char LAB_00234250; /* 0x234250 */
extern unsigned char LAB_00234268; /* 0x234268 */
extern unsigned char LAB_00234284; /* 0x234284 */
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern int g_mapIf; /* 0x58103c */
extern int g_gameState; /* 0x5f15fc */

/* Supplied declaration required: textFormatBuffer. */
/* Supplied declaration required: FUN_00178b04. */
/* Supplied declaration required: controllerSetDestination. */
/* Supplied declaration required: controllerSetRotationEulerDegrees. */
/* Supplied declaration required: FUN_003fe86c. */
/* Supplied declaration required: FUN_0040aa6c. */
/* Supplied declaration required: FUN_0040aad4. */
extern unsigned int modelListInit(void);
/* Supplied declaration required: handleRegistryRegisterObject. */


void FUN_00234118(void)

{
/* irregular: irregular input(s): in_s0, in_s1, in_s2, in_s3; 12 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int in_s0;
  unsigned int in_s1;
  unsigned int in_s2;
  unsigned int in_s3;
  unsigned char temp_v3 [140];
  
  temp_v0 = g_mapIf;
  *(unsigned char *)(g_mapIf + 0xcbdc) = 1;
  *(unsigned int *)(temp_v0 + 0xcbe0) = 0;
  *(unsigned int *)(temp_v0 + 0xcbe4) = 0;
  *(unsigned int *)(temp_v0 + 0xcbe8) = in_s0;
  *(unsigned int *)(temp_v0 + 0xcbec) = in_s1;
  *(unsigned int *)(temp_v0 + 0xcbf0) = in_s2;
  *(unsigned int *)(temp_v0 + 0xcbf4) = in_s3;
  if (g_gameState != 0x18) {
    textFormatBuffer(temp_v3,&LAB_00234250);
  }
  else {
    textFormatBuffer(temp_v3,&LAB_00234268);
  }
  if ((g_gameState == 0x2c || g_gameState == 0x2d) ||
     (g_gameState == 0x2e || g_gameState == 0x2f)) {
    textFormatBuffer(temp_v3,&LAB_00234250,0x2b);
  }
  temp_v1 = 0x20;
  FUN_00178b04(0x20,&LAB_00234284,0x16ee);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = modelListInit();
  }
  *(unsigned int *)(temp_v0 + 0xcbf8) = temp_v2;
  FUN_0040aa6c();
  FUN_0040aad4(*(unsigned int *)(temp_v0 + 0xcbf8),0);
  temp_v2 = *(unsigned int *)(*(int *)(temp_v0 + 0xcbf8) + 4);
  handleRegistryRegisterObject(g_handleRegistry,temp_v2);
  controllerSetDestination(temp_v2,temp_v0 + 0xcbe8);
  controllerSetRotationEulerDegrees(temp_v2);
  FUN_003fe86c(temp_v2,0,2);
  return;
}

} /* extern "C" */
