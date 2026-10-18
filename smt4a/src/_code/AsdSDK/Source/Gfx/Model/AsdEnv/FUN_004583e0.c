/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004583e0` (_code @ 0x4583e0, 0x4c4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int *DAT_005b40e0; /* 0x5b40e0 */
extern unsigned int DAT_005c0edc; /* 0x5c0edc */
extern unsigned int DAT_005c0ee0; /* 0x5c0ee0 */
extern unsigned int DAT_005c0ee4; /* 0x5c0ee4 */

/* Supplied declaration required: FUN_001cefe0. */


void FUN_004583e0(unsigned int *param_1,int *param_2)

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
      DAT_005c0edc = DAT_005c0edc & 0xfdffffff;
    }
    else {
      DAT_005c0edc = DAT_005c0edc | 0x2000000;
    }
    DAT_005c0ee0 = (DAT_005c0ee0 & 0xf8ffffff) | (*piVar3 << 0x18);
    DAT_005c0ee4 = (DAT_005c0ee4 & 0xf8ffffff) | (piVar3[1] << 0x18);
    FUN_001cefe0(piVar2,6);
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
      DAT_005c0edc = DAT_005c0edc & 0xffdfffff;
    }
    else {
      DAT_005c0edc = DAT_005c0edc | 0x200000;
    }
    DAT_005c0ee0 = (DAT_005c0ee0 & 0xff8fffff) | ((*puVar4 & 0xff) << 0x14);
    DAT_005c0ee4 = (DAT_005c0ee4 & 0xff8fffff) | ((puVar4[1] & 0xff) << 0x14);
    FUN_001cefe0(piVar3,5);
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
      DAT_005c0edc = DAT_005c0edc & 0xfffdffff;
    }
    else {
      DAT_005c0edc = DAT_005c0edc | 0x20000;
    }
    DAT_005c0ee0 = (DAT_005c0ee0 & 0xfff8ffff) | ((*puVar4 & 0xff) << 0x10);
    DAT_005c0ee4 = (DAT_005c0ee4 & 0xfff8ffff) | ((puVar4[1] & 0xff) << 0x10);
    FUN_001cefe0(piVar3,4);
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
      DAT_005c0edc = DAT_005c0edc & 0xfffffffd;
    }
    else {
      DAT_005c0edc = DAT_005c0edc | 2;
    }
    DAT_005c0ee0 = (*puVar4 & 0xff) | (DAT_005c0ee0 & 0xfffffff8);
    DAT_005c0ee4 = (puVar4[1] & 0xff) | (DAT_005c0ee4 & 0xfffffff8);
    FUN_001cefe0(piVar3,0);
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
      DAT_005c0edc = DAT_005c0edc & 0xffffffdf;
    }
    else {
      DAT_005c0edc = DAT_005c0edc | 0x20;
    }
    DAT_005c0ee0 = (DAT_005c0ee0 & 0xffffff8f) | ((*puVar4 & 0xff) << 4);
    DAT_005c0ee4 = (DAT_005c0ee4 & 0xffffff8f) | ((puVar4[1] & 0xff) << 4);
    FUN_001cefe0(piVar3,1);
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
      DAT_005c0edc = DAT_005c0edc & 0xffffdfff;
    }
    else {
      DAT_005c0edc = DAT_005c0edc | 0x2000;
    }
    DAT_005c0ee0 = (DAT_005c0ee0 & 0xffff8fff) | ((*puVar4 & 0xff) << 0xc);
    DAT_005c0ee4 = (DAT_005c0ee4 & 0xffff8fff) | ((puVar4[1] & 0xff) << 0xc);
    FUN_001cefe0(piVar2,3);
  }
  temp_v1 = DAT_005c0ee4;
  temp_v0 = DAT_005c0ee0;
  *DAT_005b40e0 = DAT_005c0edc;
  DAT_005b40e0[1] = 0x802f01d0;
  DAT_005b40e0[2] = temp_v0;
  DAT_005b40e0[3] = temp_v1;
  DAT_005b40e0 = DAT_005b40e0 + 4;
  return;
}
