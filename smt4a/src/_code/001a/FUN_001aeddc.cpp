/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aeddc` (_code @ 0x1aeddc, 0xf0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
} param_2_stack;


void FUN_001aeddc(unsigned int *param_1,unsigned int *param_2)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned char *pbVar5;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned int *unaff_r5;
  unsigned int temp_v5;
  unsigned char *pbVar9;
  int temp_v6;
  int temp_v7;
  unsigned char *temp_v8;
  
  temp_v4 = 0;
  temp_v7 = 0;
  temp_v3 = *param_1 >> 8;
  temp_v1 = *param_1;
  if (temp_v3 != 0) {
    unaff_r5 = param_1 + 1;
  }
  temp_v5 = (unsigned char)temp_v1 & 0xf;
  if (temp_v3 == 0) {
    unaff_r5 = param_1 + 2;
    temp_v3 = param_1[1];
  }
  pbVar9 = (unsigned char *)((int)unaff_r5 + 1);
  temp_v8 = (unsigned char *)((int)unaff_r5 + (unsigned int)(unsigned char)*unaff_r5 * 2 + 2);
  if ((int)temp_v3 < 1) {
    return;
  }
  pbVar5 = pbVar9;
  do {
    temp_v6 = 1;
    temp_v2 = *(int *)temp_v8;
    temp_v8 = temp_v8 + 4;
    puVar4 = param_2;
    do {
      temp_v0 = *pbVar5;
      pbVar5 = (unsigned char *)(-(temp_v2 >> 0x1f) + ((temp_v0 & 0x3f) + ((unsigned int)pbVar5 >> 1) + 1) * 2);
      param_2 = puVar4;
      if ((((unsigned int)temp_v0 << -(temp_v2 >> 0x1f)) & 0x80) != 0) {
        temp_v7 = temp_v7 + 1;
        temp_v4 = (temp_v4 >> temp_v5) | ((unsigned int)*pbVar5 << ((0x20 - temp_v5) & 0xff));
        pbVar5 = pbVar9;
        if (temp_v7 == ((unsigned char)temp_v1 & 7) + 4) {
          temp_v7 = 0;
          temp_v3 = temp_v3 - 4;
          param_2 = puVar4 + 1;
          *puVar4 = temp_v4;
        }
      }
      if ((int)temp_v3 < 1) {
        return;
      }
      temp_v6 = temp_v6 + 1;
      temp_v2 = temp_v2 << 1;
      puVar4 = param_2;
    } while (temp_v6 < 0x21);
  } while( 1 );
}

} /* extern "C" */
