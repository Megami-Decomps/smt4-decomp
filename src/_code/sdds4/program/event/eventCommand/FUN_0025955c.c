/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0025955c` (_code @ 0x25955c, 0x188 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp34; /* 0x34: local_34 */
    unsigned int sp38; /* 0x38: local_38 */
} param_3_stack;

extern unsigned char LAB_0025972c; /* 0x25972c */
extern unsigned char LAB_00259748; /* 0x259748 */
extern int FUN_002e2074(); /* 0x2e2074 */
extern int FUN_002e21dc(); /* 0x2e21dc */
extern unsigned char LAB_00317eb8; /* 0x317eb8 */
extern unsigned int *DAT_0043e088; /* 0x43e088 */

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
#ifndef ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define ROMWRIGHT_SUBPIECE_4_1_0_DEFINED
#define romwright_subpiece_4_1_0(value, offset) ((unsigned char)(unsigned int)(value))
#endif
extern unsigned int *FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4c00. */
/* Supplied declaration required: FUN_002c5978. */


void FUN_0025955c(unsigned int param_1,int param_2,int param_3)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  unsigned char *puVar3;
  unsigned int in_fpscr;
  float in_s0;
  float temp_v1;
  
  temp_v1 = 0.0f;
  if (DAT_0043e088 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)FUN_002c4b84(0x100,0x100,0,0x18,1);
    DAT_0043e088 = puVar2;
    *(float *)&puVar2[2] = temp_v1;
    puVar2[5] = 0;
    puVar2[4] = 0;
    puVar3 = &LAB_0025972c;
    FUN_002c5978(&LAB_0025972c,2,0,0,FUN_002e21dc,&LAB_00317eb8,puVar2);
    *puVar2 = (unsigned int)puVar3;
    FUN_002c4c00(&LAB_00259748,0x80,0,0,FUN_002e2074,0,puVar2,puVar3);
    FUN_002c4c00(&LAB_00259748,0xde,0,0,FUN_002e2074,0,puVar2,*puVar2);
  }
  puVar2 = DAT_0043e088;
  DAT_0043e088[5] = param_2;
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
    puVar2[3] = -(in_s0 / temp_v1);
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
    puVar2[3] = in_s0 / temp_v1;
  }
  return;
}
