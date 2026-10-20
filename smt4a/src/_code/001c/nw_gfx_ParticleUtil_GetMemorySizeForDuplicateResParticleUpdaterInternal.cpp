/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_gfx_ParticleUtil_GetMemorySizeForDuplicateResParticleUpdaterInternal` (_code @ 0x1ce330, 0x4a8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int wstrlen(int);


void nw_gfx_ParticleUtil_GetMemorySizeForDuplicateResParticleUpdaterInternal
               (int *param_1,int *param_2)

{
/* irregular: 14 goto(s) */
  unsigned int temp_v0;
  unsigned int *puVar2;
  int temp_v1;
  int *piVar4;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  int temp_v7;
  int temp_v8;
  int temp_v9;
  unsigned int *puVar13;
  int *piVar14;
  int temp_v10;
  unsigned char temp_v11;
  
  piVar14 = (int *)0x0;
  puVar13 = (unsigned int *)*param_2;
  temp_v5 = 0;
  temp_v4 = 0;
  temp_v0 = *puVar13;
  temp_v7 = 0;
  temp_v8 = 0;
  temp_v1 = temp_v0 - 0x800001;
  if (temp_v0 != 0x800001) {
    if ((int)temp_v0 < 0x800001) {
      if (temp_v0 == 0x100000) {
        temp_v5 = 0x54;
      }
      else {
        if ((int)temp_v0 < 0x100001) {
          if (temp_v0 == 0x20000) {
            temp_v5 = 0x24;
            goto LAB_001ce540;
          }
          if ((int)temp_v0 < 0x20001) {
            if (temp_v0 != 0x80000000) {
              if (temp_v0 != 0) goto LAB_001ce540;
              goto LAB_001ce438;
            }
          }
          else {
            if (temp_v0 == 0x40000) goto LAB_001ce53c;
            if (temp_v0 != 0x80000) goto LAB_001ce540;
          }
        }
        else {
          if (temp_v0 == 0x200000) {
            temp_v5 = 0x2c;
            goto LAB_001ce540;
          }
          temp_v11 = temp_v0 == 0x400000;
          if (!temp_v11) {
            temp_v0 = temp_v0 - 0x400001;
            temp_v11 = temp_v0 == 0;
          }
          if (!temp_v11) {
            if (temp_v0 != 0x3fffff) goto LAB_001ce540;
            goto LAB_001ce53c;
          }
        }
LAB_001ce440:
        temp_v5 = 0x14;
      }
      goto LAB_001ce540;
    }
    if (temp_v1 == 0x37fffff) {
      temp_v5 = 0x20;
      if ((puVar13 != (unsigned int *)0x0) && ((*puVar13 & 0x4000000) == 0)) {
        puVar13 = (unsigned int *)0x0;
      }
      if (puVar13[4] != 0) {
        temp_v4 = (int)puVar13 + puVar13[4] + 0x10;
      }
      else {
        temp_v4 = 0;
      }
      temp_v4 = wstrlen(temp_v4);
      temp_v0 = puVar13[5];
      temp_v4 = temp_v4 + 1;
      puVar2 = puVar13 + 5;
      if (temp_v0 != 0) {
        puVar2 = (unsigned int *)((int)puVar2 + temp_v0);
      }
      temp_v6 = puVar13[6];
      if (temp_v0 == 0) {
        puVar2 = (unsigned int *)0x0;
      }
      if (temp_v6 != 0) {
        piVar4 = (int *)(temp_v6 + (int)(puVar13 + 6));
      }
      else {
        piVar4 = (int *)0x0;
      }
      if (puVar2 != (unsigned int *)0x0) {
        temp_v0 = *puVar2;
        if (temp_v0 == 0x8000000) {
          temp_v7 = 0x18;
        }
        else if ((int)temp_v0 < 0x8000000) {
          if (temp_v0 == 0x80000000) {
            temp_v7 = 0x1c;
          }
          else if (temp_v0 != 0) {
            if (temp_v0 == 0x4000000) {
              temp_v7 = 0x28;
            }
          }
          else {
            temp_v7 = 8;
          }
        }
        else if (temp_v0 != 0x10000000) {
          if (temp_v0 == 0x20000000) {
            temp_v7 = 0x24;
          }
          else if (temp_v0 == 0x40000000) {
            temp_v7 = 0x28;
          }
        }
        else {
          temp_v7 = 8;
        }
      }
      if (piVar4 != (int *)0x0) {
        temp_v1 = *piVar4;
        if (temp_v1 != -0x80000000) {
          if (temp_v1 == 0x10000000 || temp_v1 == 0x20000000) {
            temp_v8 = 0x10;
          }
          else if (temp_v1 == 0x40000000) {
            temp_v8 = 4;
          }
        }
        else {
          temp_v8 = 4;
        }
      }
      goto LAB_001ce540;
    }
    if (temp_v1 >= 0x37fffff) {
      if ((temp_v1 == 0x77fffff || temp_v1 == 0xf7fffff) || temp_v1 == 0x1f7fffff) {
        temp_v5 = 0x20;
      }
      else if (temp_v1 == 0x3f7fffff) {
LAB_001ce438:
        temp_v5 = 0x10;
      }
      goto LAB_001ce540;
    }
    if (temp_v1 != 1 && temp_v1 != 3) {
      if (temp_v1 == 0x7fffff) {
        temp_v5 = 0x18;
        goto LAB_001ce540;
      }
      if (temp_v1 != 0x17fffff) goto LAB_001ce540;
      goto LAB_001ce440;
    }
  }
LAB_001ce53c:
  temp_v5 = 0x1c;
LAB_001ce540:
  temp_v10 = 0;
  temp_v3 = 0;
  temp_v1 = 0;
  temp_v9 = *(int *)(*param_2 + 0xc);
  temp_v2 = 0;
  if (temp_v9 != 0) {
    temp_v9 = *param_2 + 0xc + temp_v9;
  }
  else {
    temp_v9 = 0;
  }
  if (temp_v9 != 0) {
    temp_v1 = *(int *)(temp_v9 + 4);
    temp_v3 = *(int *)(temp_v9 + 0x14);
    if (temp_v1 != 0) {
      piVar14 = (int *)(temp_v1 + temp_v9 + 4);
    }
    temp_v1 = *(int *)(temp_v9 + 0x1c) << 2;
    if (piVar14 != (int *)0x0) {
      temp_v10 = *piVar14;
      if ((temp_v10 == -0x80000000 || temp_v10 == 0) || temp_v10 == 0x20000000) {
        temp_v2 = 8;
      }
      if (((temp_v10 != -0x80000000 && temp_v10 != 0) && temp_v10 != 0x20000000) && (temp_v10 == 0x40000000)
         ) {
        temp_v2 = 0x10;
      }
    }
    temp_v10 = temp_v3 * 4 + 0x24 + *(int *)(temp_v9 + 0x1c) * 4;
  }
  temp_v0 = param_1[1];
  param_1[1] = 4;
  temp_v6 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v6 = param_1[2];
  }
  param_1[2] = temp_v6;
  param_1[1] = temp_v0;
  *param_1 = temp_v5 + ((*param_1 + 3U) & 0xfffffffc);
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  temp_v0 = param_1[1];
  param_1[1] = 4;
  temp_v6 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v6 = param_1[2];
  }
  param_1[2] = temp_v6;
  param_1[1] = temp_v0;
  *param_1 = temp_v10 + ((*param_1 + 3U) & 0xfffffffc);
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  temp_v0 = param_1[1];
  param_1[1] = 4;
  temp_v6 = param_1[2];
  if (temp_v6 < 4) {
    temp_v6 = 4;
  }
  param_1[2] = temp_v6;
  param_1[1] = temp_v0;
  *param_1 = temp_v3 + ((*param_1 + 3U) & 0xfffffffc);
  if (temp_v0 <= temp_v6) {
    temp_v0 = temp_v6;
  }
  param_1[2] = temp_v0;
  temp_v0 = param_1[1];
  param_1[1] = 4;
  temp_v6 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v6 = param_1[2];
  }
  param_1[2] = temp_v6;
  param_1[1] = temp_v0;
  *param_1 = ((*param_1 + 3U) & 0xfffffffc) + temp_v1;
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  temp_v0 = param_1[1];
  param_1[1] = 4;
  temp_v6 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v6 = param_1[2];
  }
  param_1[2] = temp_v6;
  param_1[1] = temp_v0;
  *param_1 = temp_v2 + ((*param_1 + 3U) & 0xfffffffc);
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  temp_v0 = param_1[1];
  param_1[1] = 4;
  temp_v6 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v6 = param_1[2];
  }
  param_1[2] = temp_v6;
  param_1[1] = temp_v0;
  *param_1 = ((*param_1 + 3U) & 0xfffffffc) + temp_v4;
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  temp_v0 = param_1[1];
  param_1[1] = 4;
  temp_v6 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v6 = param_1[2];
  }
  param_1[2] = temp_v6;
  param_1[1] = temp_v0;
  *param_1 = ((*param_1 + 3U) & 0xfffffffc) + temp_v7;
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  temp_v0 = param_1[1];
  param_1[1] = 4;
  temp_v6 = 4;
  if ((unsigned int)param_1[2] >= 4) {
    temp_v6 = param_1[2];
  }
  param_1[2] = temp_v6;
  param_1[1] = temp_v0;
  *param_1 = ((*param_1 + 3U) & 0xfffffffc) + temp_v8;
  if (temp_v0 <= (unsigned int)param_1[2]) {
    temp_v0 = param_1[2];
  }
  param_1[2] = temp_v0;
  return;
}

} /* extern "C" */
