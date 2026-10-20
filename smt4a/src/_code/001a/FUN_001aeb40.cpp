/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001aeb40` (_code @ 0x1aeb40, 0x15c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_2_stack;


void FUN_001aeb40(unsigned int *param_1,unsigned char *param_2)

{
  unsigned char temp_v0;
  unsigned int temp_v1;
  unsigned char *pbVar3;
  unsigned char *pbVar4;
  unsigned char *pbVar5;
  unsigned char *pbVar6;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned char temp_v4;
  int unaff_r7;
  int temp_v5;
  unsigned int *puVar11;
  unsigned int *puVar12;
  unsigned char temp_v6;
  
  temp_v6 = (*param_1 & 0xf) != 0;
  if (temp_v6) {
    unaff_r7 = 1;
  }
  temp_v1 = ((*param_1 & 0xffffff) | ((unsigned int)*(unsigned char *)((int)param_1 + 3) << 0x18)) >> 8;
  if (!temp_v6) {
    unaff_r7 = 0;
  }
  puVar11 = param_1 + 1;
  if (temp_v1 == 0) {
    temp_v1 = *puVar11;
    puVar11 = param_1 + 2;
    temp_v1 = (temp_v1 & 0xffffff) | ((unsigned int)*(unsigned char *)((int)param_1 + 7) << 0x18);
    if (temp_v1 == 0) {
      return;
    }
  }
  do {
    temp_v4 = (unsigned char)*puVar11;
    temp_v5 = 0;
    pbVar5 = param_2;
    puVar12 = (unsigned int *)((int)puVar11 + 1);
    do {
      if ((temp_v4 & 0x80) != 0) {
        temp_v0 = (unsigned char)*puVar12;
        temp_v3 = (unsigned int)(temp_v0 >> 4);
        if (unaff_r7 == 0) {
          temp_v3 = temp_v3 + 3;
        }
        else if (temp_v3 != 1) {
          if (temp_v3 != 0) {
            temp_v3 = temp_v3 + 1;
          }
          else {
            puVar12 = (unsigned int *)((int)puVar12 + 1);
            temp_v3 = (((temp_v0 & 0xf) << 4) | (unsigned int)(*(unsigned char *)puVar12 >> 4)) + 0x11;
          }
        }
        else {
          pbVar3 = (unsigned char *)((int)puVar12 + 1);
          puVar12 = (unsigned int *)((int)puVar12 + 2);
          temp_v3 = (((temp_v0 & 0xf) << 0xc) | ((unsigned int)*pbVar3 << 4) | (unsigned int)(*(unsigned char *)puVar12 >> 4)) +
                  0x111;
        }
        puVar11 = (unsigned int *)((int)puVar12 + 2);
        if (temp_v1 < temp_v3) {
          temp_v3 = temp_v1;
        }
        temp_v1 = temp_v1 - temp_v3;
        pbVar3 = pbVar5 + -(((unsigned int)*(unsigned char *)((int)puVar12 + 1) | (((unsigned char)*puVar12 & 0xf) << 8)) + 1)
        ;
        param_2 = pbVar5;
        if (temp_v3 != 0) {
          pbVar4 = pbVar3 + -1;
          pbVar6 = pbVar5 + -1;
          if ((temp_v3 & 1) != 0) {
            *pbVar5 = *pbVar3;
            pbVar4 = pbVar3;
            pbVar6 = pbVar5;
          }
          for (temp_v2 = temp_v3 >> 1; temp_v2 != 0; temp_v2 = temp_v2 - 1) {
            pbVar6[1] = pbVar4[1];
            pbVar4 = pbVar4 + 2;
            pbVar6 = pbVar6 + 2;
            *pbVar6 = *pbVar4;
          }
          param_2 = pbVar5 + temp_v3;
        }
      }
      else {
        puVar11 = (unsigned int *)((int)puVar12 + 1);
        temp_v1 = temp_v1 - 1;
        param_2 = pbVar5 + 1;
        *pbVar5 = (unsigned char)*puVar12;
      }
      if (temp_v1 == 0) {
        return;
      }
      temp_v5 = temp_v5 + 1;
      temp_v4 = temp_v4 << 1;
      pbVar5 = param_2;
      puVar12 = puVar11;
    } while (temp_v5 < 8);
  } while( 1 );
}

} /* extern "C" */
