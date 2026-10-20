/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00401798` (_code @ 0x401798, 0x220 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int VectorSignedToFloat(...);
int VectorUnsignedToFloat(unsigned int, int);

/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorUnsignedToFloat (CALLOTHER). */
extern unsigned int dataTableGet(unsigned int, unsigned int);
extern int dataTableGetCount(unsigned int);
extern unsigned short *dataTableGetEntries(void);


void FUN_00401798(int param_1,int param_2)

{
/* irregular: irregular input(s): in_fpscr; 3 native warning(s); review required */
  short temp_v0;
  unsigned short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned short *puVar5;
  int temp_v4;
  int temp_v5;
  unsigned int in_fpscr;
  float temp_v6;
  float temp_v7;
  float temp_v8;
  
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 0;
  temp_v8 = 0.5f;
  *(unsigned short *)(param_1 + 0x24) = 0;
  *(unsigned short *)(param_1 + 0x26) = 0;
  if (param_2 != 0) {
    temp_v0 = *(short *)(param_2 + 0x94);
    if (temp_v0 != 0) {
      *(short *)(param_1 + 0x24) = temp_v0;
      temp_v5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
      temp_v8 = (float)VectorSignedToFloat(*(unsigned int *)
                                           (*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x14),
                                          (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (float)VectorUnsignedToFloat
                               ((unsigned int)*(unsigned short *)(temp_v5 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v6 = (float)VectorSignedToFloat((int)((temp_v8 - temp_v6) * 0.5f) +
                                         ((int)temp_v0 - (int)*(short *)(temp_v5 + 0x20)),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x1c) = temp_v6 - temp_v8 * 0.5f;
    }
    temp_v0 = *(short *)(param_2 + 0x96);
    if (temp_v0 == 0) {
      return;
    }
    *(short *)(param_1 + 0x26) = temp_v0;
    temp_v5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    temp_v8 = (float)VectorSignedToFloat(*(unsigned int *)
                                         (*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x18),
                                        (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v5 + 0x26),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat((int)((temp_v8 - temp_v6) * 0.5f) +
                                       ((int)temp_v0 - (int)*(short *)(temp_v5 + 0x22)),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = -(temp_v6 - temp_v8 * 0.5f);
  }
  else {
    temp_v2 = *(unsigned int *)(*(int *)(param_1 + 4) + 4);
    temp_v3 = dataTableGet(0x3b,0);
    puVar5 = (unsigned short *)dataTableGetEntries();
    temp_v5 = dataTableGetCount(temp_v3);
    temp_v4 = 0;
    if (temp_v5 < 1) {
      return;
    }
    while ((unsigned int)*puVar5 != (temp_v2 & 0xffff)) {
      temp_v4 = temp_v4 + 1;
      puVar5 = puVar5 + 4;
      if (temp_v5 <= temp_v4) {
        return;
      }
    }
    if (puVar5 == (unsigned short *)0x0) {
      return;
    }
    temp_v1 = puVar5[1];
    if ((short)temp_v1 != 0) {
      *(unsigned short *)(param_1 + 0x24) = temp_v1;
      temp_v5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
      temp_v6 = (float)VectorSignedToFloat(*(unsigned int *)
                                          (*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x14),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = (float)VectorUnsignedToFloat
                               ((unsigned int)*(unsigned short *)(temp_v5 + 0x24),(unsigned char)(in_fpscr >> 0x16) & 3);
      temp_v7 = (float)VectorSignedToFloat((int)((temp_v6 - temp_v7) * temp_v8) +
                                         ((int)(short)temp_v1 - (int)*(short *)(temp_v5 + 0x20)),
                                         (unsigned char)(in_fpscr >> 0x16) & 3);
      *(float *)(param_1 + 0x1c) = temp_v7 - temp_v6 * temp_v8;
    }
    temp_v1 = puVar5[2];
    if ((short)temp_v1 == 0) {
      return;
    }
    *(unsigned short *)(param_1 + 0x26) = temp_v1;
    temp_v5 = *(int *)(*(int *)(param_1 + 4) + 0x10);
    temp_v7 = (float)VectorSignedToFloat(*(unsigned int *)(*(int *)(*(int *)(param_1 + 8) + 0xc) + 0x18)
                                       ,(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorUnsignedToFloat
                             ((unsigned int)*(unsigned short *)(temp_v5 + 0x26),(unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = (float)VectorSignedToFloat((int)((temp_v7 - temp_v6) * temp_v8) +
                                       ((int)(short)temp_v1 - (int)*(short *)(temp_v5 + 0x22)),
                                       (unsigned char)(in_fpscr >> 0x16) & 3);
    temp_v6 = temp_v7 * temp_v8 - temp_v6;
  }
  *(float *)(param_1 + 0x20) = temp_v6;
  return;
}

} /* extern "C" */
