/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0038a1d4` (_code @ 0x38a1d4, 0x188 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int asdProcessCreateSimple(...);
int taskCreateDraw(...);
int asdMemoryAllocTracked(...);
int VectorSignedToFloat(...);

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern int FUN_0035bf60(...); /* 0x35bf60 */
extern int FUN_0035c0c8(...); /* 0x35c0c8 */
extern unsigned char LAB_0038a3a4; /* 0x38a3a4 */
extern unsigned char LAB_0038a3c0; /* 0x38a3c0 */
extern unsigned char LAB_003b01c8; /* 0x3b01c8 */
extern unsigned int *g_eventCommand; /* 0x57f554 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
/* Supplied declaration required: asdProcessCreateSimple. */
/* Supplied declaration required: taskCreateDraw. */
/* Supplied declaration required: asdMemoryAllocTracked. */


void FUN_0038a1d4(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 6 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v1;
  
  temp_v1 = 0.0f;
  if (g_eventCommand == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x100;
    asdMemoryAllocTracked(0x100,0x100,0,0x18,1);
    g_eventCommand = puVar2;
    *(float *)&puVar2[2] = temp_v1;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar3 = &LAB_0038a3a4;
    asdProcessCreateSimple(&LAB_0038a3a4,4,0,0,FUN_0035c0c8,&LAB_003b01c8,puVar2);
    *puVar2 = (unsigned int)puVar3;
    taskCreateDraw(&LAB_0038a3c0,0x85,0,0,FUN_0035bf60,0,puVar2,puVar3);
    taskCreateDraw(&LAB_0038a3c0,0xe1,0,0,FUN_0035bf60,0,puVar2,*puVar2);
  }
  puVar2 = g_eventCommand;
  g_eventCommand[5] = param_2;
  puVar2[4] = 0;
  if (param_3 == 0) {
    if (param_2 == 0) {
      puVar2[1] = param_1;
      *(float *)&puVar2[2] = temp_v1;
      *(float *)&puVar2[3] = temp_v1;
      return;
    }
    temp_v0 = (in_fpscr & 0xfffffff) | ((unsigned int)((float)puVar2[2] == temp_v1) << 0x1e);
    if (romwright_subpiece_4_1_0(temp_v0 >> 0x1e,0)) {
      puVar2[1] = param_1;
    }
    *(float *)&puVar2[2] = in_s0;
    temp_v1 = (float)VectorSignedToFloat(param_2,(unsigned char)(temp_v0 >> 0x16) & 3);
    *(float *)&puVar2[3] = -(in_s0 / temp_v1);
    return;
  }
  puVar2[1] = param_1;
  if (param_2 == 0) {
    *(float *)&puVar2[2] = in_s0;
    *(float *)&puVar2[3] = temp_v1;
  }
  else {
    *(float *)&puVar2[2] = temp_v1;
    temp_v1 = (float)VectorSignedToFloat(param_2,(unsigned char)(in_fpscr >> 0x16) & 3);
    *(float *)&puVar2[3] = in_s0 / temp_v1;
  }
  return;
}

} /* extern "C" */
