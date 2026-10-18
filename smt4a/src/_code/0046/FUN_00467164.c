/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00467164` (_code @ 0x467164, 0x40 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

/* Unsupported intrinsic, declaration required: VectorFloatToUnsigned (CALLOTHER). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
/* Supplied declaration required: FUN_00467840. */


float FUN_00467164(int param_1)

{
/* irregular: irregular input(s): in_fpscr, in_s0; 4 native warning(s); review required */
  unsigned char temp_v0;
  float *pfVar2;
  unsigned short *puVar3;
  unsigned short *puVar4;
  float *pfVar5;
  unsigned int in_fpscr;
  float in_s0;
  int temp_v1;
  unsigned int temp_v2;
  float temp_v3;
  
  FUN_00467840();
  if ((*(unsigned int *)(param_1 + 0xc) & 1) != 0) {
    return *(float *)(param_1 + 0x10);
  }
  puVar3 = (unsigned short *)(param_1 + 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((*(unsigned int *)(param_1 + 0xc) & 0x38) >> 3) {
  case 0:
    pfVar5 = (float *)(param_1 + 0x18);
    if (*pfVar5 <= in_s0) {
      pfVar5 = (float *)(puVar3 + (unsigned int)*puVar3 * 4);
      temp_v2 = (in_fpscr & 0xfffffff) | ((unsigned int)(*pfVar5 == in_s0) << 0x1e) |
              ((unsigned int)(in_s0 <= *pfVar5) << 0x1d);
      temp_v0 = (unsigned char)(temp_v2 >> 0x18);
      if ((unsigned char)((temp_v0 >> 5) & 1) && !(unsigned char)(temp_v0 >> 6)) {
        temp_v3 = (float)VectorSignedToFloat(*puVar3 - 1,(unsigned char)(temp_v2 >> 0x16) & 3);
        temp_v1 = VectorFloatToUnsigned(*(float *)(param_1 + 0x14) * temp_v3 * in_s0,3);
        pfVar5 = (float *)(puVar3 + temp_v1 * 4 + 4);
        pfVar2 = pfVar5;
        if (*pfVar5 > in_s0) {
          do {
            pfVar5 = pfVar5 + -2;
          } while (in_s0 < *pfVar5);
        }
        else {
          do {
            pfVar5 = pfVar2;
            pfVar2 = pfVar5 + 2;
          } while (pfVar5[2] <= in_s0);
        }
      }
    }
    break;
  case 1:
    temp_v2 = VectorFloatToUnsigned(in_s0,3);
    puVar4 = (unsigned short *)(param_1 + 0x18);
    if (*puVar4 <= temp_v2) {
      puVar4 = puVar3 + (unsigned int)*puVar3 * 2 + 2;
      if (temp_v2 < *puVar4) {
        temp_v3 = (float)VectorSignedToFloat(*puVar3 - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v1 = VectorFloatToUnsigned(*(float *)(param_1 + 0x14) * temp_v3 * in_s0,3);
        puVar4 = puVar3 + temp_v1 * 2 + 4;
        puVar3 = puVar4;
        if (temp_v2 < *puVar4) {
          do {
            puVar4 = puVar4 + -2;
          } while (temp_v2 < *puVar4);
        }
        else {
          do {
            puVar4 = puVar3;
            puVar3 = puVar4 + 2;
          } while (puVar4[2] <= temp_v2);
        }
      }
    }
    return (float)(int)(short)puVar4[1];
  case 2:
    temp_v2 = VectorFloatToUnsigned(in_s0,3);
    puVar4 = (unsigned short *)(param_1 + 0x18);
    if (*(unsigned char *)puVar4 <= temp_v2) {
      puVar4 = puVar3 + *puVar3 + 3;
      if (temp_v2 < (unsigned char)*puVar4) {
        temp_v3 = (float)VectorSignedToFloat(*puVar3 - 1,(unsigned char)(in_fpscr >> 0x16) & 3);
        temp_v1 = VectorFloatToUnsigned(*(float *)(param_1 + 0x14) * temp_v3 * in_s0,3);
        puVar4 = puVar3 + temp_v1 + 4;
        puVar3 = puVar4;
        if (temp_v2 < (unsigned char)*puVar4) {
          do {
            puVar4 = puVar4 + -1;
          } while (temp_v2 < (unsigned char)*puVar4);
        }
        else {
          do {
            puVar4 = puVar3;
            puVar3 = puVar4 + 1;
          } while ((unsigned char)puVar4[1] <= temp_v2);
        }
      }
    }
    return (float)(int)(char)*(unsigned char *)((int)puVar4 + 1);
  }
  return pfVar5[1];
}
