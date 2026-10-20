/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003752f4` (_code @ 0x3752f4, 0x4c4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a1e08(int *, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004720e0; /* 0x4720e0 */
extern unsigned int DAT_004720e4; /* 0x4720e4 */
extern unsigned int DAT_004720e8; /* 0x4720e8 */

/* Supplied declaration required: FUN_002a1e08. */


void FUN_003752f4(unsigned int *param_1,int *param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  int *piVar2;
  int *piVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char temp_v3;
  
  temp_v1 = *param_1;
  temp_v0 = param_1[2];
  temp_v3 = (~temp_v1 & 0x20) == 0;
  if (*param_2 != 0) {
    piVar3 = (int *)(*param_2 + (int)param_2);
  }
  else {
    piVar3 = (int *)0x0;
  }
  if (piVar3 != (int *)0x0 && temp_v3) {
    if (piVar3[2] != 0) {
      piVar2 = (int *)((int)piVar3 + piVar3[2] + 8);
    }
    else {
      piVar2 = (int *)0x0;
    }
    if (*piVar2 != -0x80000000) {
      if (*piVar2 != 0x40000000) {
        piVar2 = (int *)0x0;
      }
      else {
        temp_v2 = piVar2[3];
        if (temp_v2 != 0) {
          piVar2 = (int *)((int)(piVar2 + 3) + temp_v2);
        }
        else {
          piVar2 = (int *)0x0;
        }
      }
    }
    if ((char)piVar2[2] != '\0') {
      DAT_004720e0 = DAT_004720e0 & 0xfdffffff;
    }
    else {
      DAT_004720e0 = DAT_004720e0 | 0x2000000;
    }
    DAT_004720e4 = (DAT_004720e4 & 0xf8ffffff) | (*piVar3 << 0x18);
    DAT_004720e8 = (DAT_004720e8 & 0xf8ffffff) | (piVar3[1] << 0x18);
    FUN_002a1e08(piVar2,6);
  }
  if (param_2[1] != 0) {
    puVar4 = (unsigned int *)((int)param_2 + param_2[1] + 4);
  }
  else {
    puVar4 = (unsigned int *)0x0;
  }
  if (puVar4 != (unsigned int *)0x0 && temp_v3) {
    if (puVar4[2] != 0) {
      piVar3 = (int *)((int)puVar4 + puVar4[2] + 8);
    }
    else {
      piVar3 = (int *)0x0;
    }
    if (*piVar3 != -0x80000000) {
      if (*piVar3 != 0x40000000) {
        piVar3 = (int *)0x0;
      }
      else {
        temp_v2 = piVar3[3];
        if (temp_v2 != 0) {
          piVar3 = (int *)((int)(piVar3 + 3) + temp_v2);
        }
        else {
          piVar3 = (int *)0x0;
        }
      }
    }
    if ((char)piVar3[2] != '\0') {
      DAT_004720e0 = DAT_004720e0 & 0xffdfffff;
    }
    else {
      DAT_004720e0 = DAT_004720e0 | 0x200000;
    }
    DAT_004720e4 = (DAT_004720e4 & 0xff8fffff) | ((*puVar4 & 0xff) << 0x14);
    DAT_004720e8 = (DAT_004720e8 & 0xff8fffff) | ((puVar4[1] & 0xff) << 0x14);
    FUN_002a1e08(piVar3,5);
  }
  if (param_2[2] != 0) {
    puVar4 = (unsigned int *)((int)param_2 + param_2[2] + 8);
  }
  else {
    puVar4 = (unsigned int *)0x0;
  }
  if (puVar4 != (unsigned int *)0x0 && temp_v3) {
    if (puVar4[2] != 0) {
      piVar3 = (int *)((int)puVar4 + puVar4[2] + 8);
    }
    else {
      piVar3 = (int *)0x0;
    }
    if (*piVar3 != -0x80000000) {
      if (*piVar3 != 0x40000000) {
        piVar3 = (int *)0x0;
      }
      else {
        temp_v2 = piVar3[3];
        if (temp_v2 != 0) {
          piVar3 = (int *)((int)(piVar3 + 3) + temp_v2);
        }
        else {
          piVar3 = (int *)0x0;
        }
      }
    }
    if ((char)piVar3[2] != '\0') {
      DAT_004720e0 = DAT_004720e0 & 0xfffdffff;
    }
    else {
      DAT_004720e0 = DAT_004720e0 | 0x20000;
    }
    DAT_004720e4 = (DAT_004720e4 & 0xfff8ffff) | ((*puVar4 & 0xff) << 0x10);
    DAT_004720e8 = (DAT_004720e8 & 0xfff8ffff) | ((puVar4[1] & 0xff) << 0x10);
    FUN_002a1e08(piVar3,4);
  }
  if (param_2[3] != 0) {
    puVar4 = (unsigned int *)((int)param_2 + param_2[3] + 0xc);
  }
  else {
    puVar4 = (unsigned int *)0x0;
  }
  if (puVar4 != (unsigned int *)0x0 && (~temp_v1 & 2) == 0) {
    if (puVar4[2] != 0) {
      piVar3 = (int *)((int)puVar4 + puVar4[2] + 8);
    }
    else {
      piVar3 = (int *)0x0;
    }
    if (*piVar3 != -0x80000000) {
      if (*piVar3 != 0x40000000) {
        piVar3 = (int *)0x0;
      }
      else {
        temp_v2 = piVar3[3];
        if (temp_v2 != 0) {
          piVar3 = (int *)((int)(piVar3 + 3) + temp_v2);
        }
        else {
          piVar3 = (int *)0x0;
        }
      }
    }
    if ((char)piVar3[2] != '\0') {
      DAT_004720e0 = DAT_004720e0 & 0xfffffffd;
    }
    else {
      DAT_004720e0 = DAT_004720e0 | 2;
    }
    DAT_004720e4 = (*puVar4 & 0xff) | (DAT_004720e4 & 0xfffffff8);
    DAT_004720e8 = (puVar4[1] & 0xff) | (DAT_004720e8 & 0xfffffff8);
    FUN_002a1e08(piVar3,0);
  }
  if (param_2[4] != 0) {
    puVar4 = (unsigned int *)((int)param_2 + param_2[4] + 0x10);
  }
  else {
    puVar4 = (unsigned int *)0x0;
  }
  if (puVar4 != (unsigned int *)0x0 && (~temp_v1 & 4) == 0) {
    if (puVar4[2] != 0) {
      piVar3 = (int *)((int)puVar4 + puVar4[2] + 8);
    }
    else {
      piVar3 = (int *)0x0;
    }
    if (*piVar3 != -0x80000000) {
      if (*piVar3 != 0x40000000) {
        piVar3 = (int *)0x0;
      }
      else {
        temp_v2 = piVar3[3];
        if (temp_v2 != 0) {
          piVar3 = (int *)((int)(piVar3 + 3) + temp_v2);
        }
        else {
          piVar3 = (int *)0x0;
        }
      }
    }
    if ((char)piVar3[2] != '\0') {
      DAT_004720e0 = DAT_004720e0 & 0xffffffdf;
    }
    else {
      DAT_004720e0 = DAT_004720e0 | 0x20;
    }
    DAT_004720e4 = (DAT_004720e4 & 0xffffff8f) | ((*puVar4 & 0xff) << 4);
    DAT_004720e8 = (DAT_004720e8 & 0xffffff8f) | ((puVar4[1] & 0xff) << 4);
    FUN_002a1e08(piVar3,1);
  }
  temp_v1 = param_2[5];
  if (temp_v1 != 0) {
    puVar4 = (unsigned int *)(temp_v1 + (int)(param_2 + 5));
  }
  else {
    puVar4 = (unsigned int *)0x0;
  }
  if (puVar4 != (unsigned int *)0x0) {
    temp_v1 = (unsigned int)((temp_v0 & 0xff) != 0);
  }
  if (puVar4 != (unsigned int *)0x0 && temp_v1 != 0) {
    if (puVar4[2] != 0) {
      piVar3 = (int *)((int)puVar4 + puVar4[2] + 8);
    }
    else {
      piVar3 = (int *)0x0;
    }
    piVar2 = piVar3;
    if (*piVar3 != -0x80000000) {
      if (*piVar3 != 0x40000000) {
        piVar2 = (int *)0x0;
      }
      else {
        temp_v2 = piVar3[3];
        piVar2 = (int *)0x0;
        if (temp_v2 != 0) {
          piVar2 = (int *)(temp_v2 + (int)(piVar3 + 3));
        }
      }
    }
    if ((char)piVar2[2] != '\0') {
      DAT_004720e0 = DAT_004720e0 & 0xffffdfff;
    }
    else {
      DAT_004720e0 = DAT_004720e0 | 0x2000;
    }
    DAT_004720e4 = (DAT_004720e4 & 0xffff8fff) | ((*puVar4 & 0xff) << 0xc);
    DAT_004720e8 = (DAT_004720e8 & 0xffff8fff) | ((puVar4[1] & 0xff) << 0xc);
    FUN_002a1e08(piVar2,3);
  }
  temp_v1 = DAT_004720e8;
  temp_v0 = DAT_004720e4;
  *DAT_004652a0 = DAT_004720e0;
  DAT_004652a0[1] = 0x802f01d0;
  DAT_004652a0[2] = temp_v0;
  DAT_004652a0[3] = temp_v1;
  DAT_004652a0 = DAT_004652a0 + 4;
  return;
}

} /* extern "C" */
