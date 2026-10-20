/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a3f10` (_code @ 0x1a3f10, 0x26c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
} param_2_stack;


unsigned int FUN_001a3f10(int *param_1,int param_2)

{
/* irregular: 1 goto(s) */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned int temp_v2;
  int *piVar4;
  int temp_v3;
  unsigned int *puVar6;
  int temp_v4;
  int temp_v5;
  unsigned int temp_v6;
  
  temp_v3 = *param_1;
  temp_v2 = 1;
  puVar6 = (unsigned int *)(temp_v3 + 0x10);
  piVar4 = (int *)(*param_1 + 0x28);
  temp_v5 = *piVar4;
  if (temp_v5 != 0) {
    piVar4 = (int *)((int)piVar4 + temp_v5);
  }
  temp_v6 = *puVar6;
  if (temp_v5 == 0) {
    piVar4 = (int *)0x0;
  }
  if ((~temp_v6 & 2) == 0) {
    temp_v5 = piVar4[3];
    if (temp_v5 != 0) {
      temp_v4 = (int)piVar4 + temp_v5 + 0xc;
    }
    else {
      temp_v4 = 0;
    }
    if (temp_v4 != 0) {
      if (temp_v5 == 0) {
        temp_v5 = 0;
      }
      else {
        temp_v5 = (int)piVar4 + temp_v5 + 0xc;
      }
      temp_v4 = *(int *)(temp_v5 + 8);
      if (temp_v4 != 0) {
        temp_v4 = temp_v5 + 8 + temp_v4;
      }
      else {
        temp_v4 = 0;
      }
      if (temp_v4 == 0) {
        temp_v6 = temp_v6 & 0xfffffffd;
        temp_v2 = 0;
      }
    }
    else {
      temp_v6 = temp_v6 & 0xfffffffd;
      temp_v2 = 0;
    }
  }
  if ((~temp_v6 & 4) == 0) {
    temp_v5 = piVar4[4];
    if (temp_v5 != 0) {
      temp_v4 = (int)piVar4 + temp_v5 + 0x10;
    }
    else {
      temp_v4 = 0;
    }
    if (temp_v4 != 0) {
      if (temp_v5 == 0) {
        temp_v5 = 0;
      }
      else {
        temp_v5 = (int)piVar4 + temp_v5 + 0x10;
      }
      temp_v4 = *(int *)(temp_v5 + 8);
      if (temp_v4 != 0) {
        temp_v4 = temp_v5 + 8 + temp_v4;
      }
      else {
        temp_v4 = 0;
      }
      if (temp_v4 == 0) {
        temp_v6 = temp_v6 & 0xfffffffb;
        temp_v2 = 0;
      }
    }
    else {
      temp_v6 = temp_v6 & 0xfffffffb;
      temp_v2 = 0;
    }
  }
  if ((*(unsigned int *)(temp_v3 + 0x18) & 0xff) != 0) {
    temp_v5 = piVar4[5];
    if (temp_v5 != 0) {
      temp_v4 = (int)piVar4 + temp_v5 + 0x14;
    }
    else {
      temp_v4 = 0;
    }
    if (temp_v4 != 0) {
      if (temp_v5 == 0) {
        temp_v5 = 0;
      }
      else {
        temp_v5 = (int)piVar4 + temp_v5 + 0x14;
      }
      temp_v4 = *(int *)(temp_v5 + 8);
      if (temp_v4 != 0) {
        temp_v4 = temp_v5 + 8 + temp_v4;
      }
      else {
        temp_v4 = 0;
      }
      if (temp_v4 == 0) {
        temp_v2 = 0;
        *(unsigned int *)(temp_v3 + 0x18) = 0;
      }
    }
    else {
      temp_v2 = 0;
      *(unsigned int *)(temp_v3 + 0x18) = 0;
    }
  }
  if ((~temp_v6 & 0x20) == 0) {
    temp_v1 = 0;
    temp_v0 = *(unsigned char *)((*(unsigned int *)(temp_v3 + 0x14) & 0xff) + 0x55cc04);
    if ((~temp_v0 & 1) == 0) {
      if (*piVar4 != 0) {
        temp_v3 = *piVar4 + (int)piVar4;
      }
      else {
        temp_v3 = 0;
      }
      if (temp_v3 != 0) {
        if (*piVar4 == 0) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = *piVar4 + (int)piVar4;
        }
        temp_v5 = *(int *)(temp_v3 + 8);
        if (temp_v5 != 0) {
          temp_v5 = temp_v3 + 8 + temp_v5;
        }
        else {
          temp_v5 = 0;
        }
        if (temp_v5 == 0) {
          temp_v1 = 1;
        }
      }
      else {
        temp_v1 = 1;
      }
    }
    if ((~temp_v0 & 2) == 0) {
      temp_v3 = piVar4[1];
      if (temp_v3 != 0) {
        temp_v5 = (int)piVar4 + temp_v3 + 4;
      }
      else {
        temp_v5 = 0;
      }
      if (temp_v5 != 0) {
        if (temp_v3 == 0) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = (int)piVar4 + temp_v3 + 4;
        }
        temp_v5 = *(int *)(temp_v3 + 8);
        if (temp_v5 != 0) {
          temp_v5 = temp_v3 + 8 + temp_v5;
        }
        else {
          temp_v5 = 0;
        }
        if (temp_v5 == 0) {
          temp_v1 = 1;
        }
      }
      else {
        temp_v1 = 1;
      }
    }
    if ((~temp_v0 & 4) == 0) {
      temp_v3 = piVar4[2];
      if (temp_v3 != 0) {
        temp_v5 = (int)piVar4 + temp_v3 + 8;
      }
      else {
        temp_v5 = 0;
      }
      if (temp_v5 != 0) {
        if (temp_v3 == 0) {
          temp_v3 = 0;
        }
        else {
          temp_v3 = (int)piVar4 + temp_v3 + 8;
        }
        temp_v5 = *(int *)(temp_v3 + 8);
        if (temp_v5 != 0) {
          temp_v5 = temp_v3 + 8 + temp_v5;
        }
        else {
          temp_v5 = 0;
        }
        if (temp_v5 != 0) goto LAB_001a4154;
      }
    }
    else {
LAB_001a4154:
      if (!temp_v1) {
        if (*puVar6 != temp_v6) {
          *puVar6 = temp_v6;
          *(unsigned int *)(param_2 + 700) = 0;
        }
        return temp_v2;
      }
    }
    temp_v6 = temp_v6 & 0xffffffdf;
    temp_v2 = 0;
  }
  if (*puVar6 != temp_v6) {
    *puVar6 = temp_v6;
    *(unsigned int *)(param_2 + 700) = 0;
  }
  return temp_v2;
}

} /* extern "C" */
