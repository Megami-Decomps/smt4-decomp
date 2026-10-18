/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0031c344` (_code @ 0x31c344, 0x314 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int FUN_00295d08(unsigned int);
extern int FUN_0029ebac(int, unsigned int);
extern int FUN_002a8740(void);
extern int FUN_002b63ac(void);
extern unsigned int FUN_0031c658(void);


/* WARNING: Removing unreachable block (ram,0x0031c66c) */
/* WARNING: Removing unreachable block (ram,0x0031c688) */
/* WARNING: Removing unreachable block (ram,0x0031c674) */

unsigned int FUN_0031c344(int param_1,int param_2,int param_3)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v3 = 0;
  temp_v2 = 0;
  if (param_1 < 0) {
    temp_v3 = FUN_002b63ac();
    temp_v0 = FUN_00295d08(1);
  }
  else {
    temp_v2 = FUN_002a8740();
    if (temp_v2 == 0) {
      return 1;
    }
    temp_v0 = FUN_0029ebac(temp_v2,1);
  }
  if (temp_v0 != 0) {
    return 1;
  }
  switch(*(unsigned short *)(param_2 + 0x60)) {
  case 0x1f:
    if (temp_v3 != 0) {
      if (*(short *)(temp_v3 + 0x12) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v3 + 0x12) = *(short *)(temp_v3 + 0x12) + 3;
        }
        if (*(short *)(temp_v3 + 0x12) >= 1000) {
          *(unsigned short *)(temp_v3 + 0x12) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    else {
      if (*(short *)(temp_v2 + 4) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 4) = *(short *)(temp_v2 + 4) + 3;
        }
        if (*(short *)(temp_v2 + 4) >= 1000) {
          *(unsigned short *)(temp_v2 + 4) = 999;
        }
      }
      if (*(short *)(temp_v2 + 0x20) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 0x20) = *(short *)(temp_v2 + 0x20) + 3;
        }
        if (*(short *)(temp_v2 + 0x20) >= 1000) {
          *(unsigned short *)(temp_v2 + 0x20) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    break;
  case 0x20:
    if (temp_v3 != 0) {
      if (*(short *)(temp_v3 + 0x16) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v3 + 0x16) = *(short *)(temp_v3 + 0x16) + 3;
        }
        if (*(short *)(temp_v3 + 0x16) >= 1000) {
          *(unsigned short *)(temp_v3 + 0x16) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    else {
      if (*(short *)(temp_v2 + 8) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 8) = *(short *)(temp_v2 + 8) + 3;
        }
        if (*(short *)(temp_v2 + 8) >= 1000) {
          *(unsigned short *)(temp_v2 + 8) = 999;
        }
      }
      if (*(short *)(temp_v2 + 0x24) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 0x24) = *(short *)(temp_v2 + 0x24) + 3;
        }
        if (*(short *)(temp_v2 + 0x24) >= 1000) {
          *(unsigned short *)(temp_v2 + 0x24) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    break;
  case 0x21:
    if (temp_v3 != 0) {
      if (*(short *)(temp_v3 + 0x14) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v3 + 0x14) = *(short *)(temp_v3 + 0x14) + 3;
        }
        if (*(short *)(temp_v3 + 0x14) >= 1000) {
          *(unsigned short *)(temp_v3 + 0x14) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    else {
      if (*(short *)(temp_v2 + 6) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 6) = *(short *)(temp_v2 + 6) + 3;
        }
        if (*(short *)(temp_v2 + 6) >= 1000) {
          *(unsigned short *)(temp_v2 + 6) = 999;
        }
      }
      if (*(short *)(temp_v2 + 0x22) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 0x22) = *(short *)(temp_v2 + 0x22) + 3;
        }
        if (*(short *)(temp_v2 + 0x22) >= 1000) {
          *(unsigned short *)(temp_v2 + 0x22) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    break;
  case 0x22:
    if (temp_v3 != 0) {
      if (*(short *)(temp_v3 + 0x18) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v3 + 0x18) = *(short *)(temp_v3 + 0x18) + 3;
        }
        if (*(short *)(temp_v3 + 0x18) >= 1000) {
          *(unsigned short *)(temp_v3 + 0x18) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    else {
      if (*(short *)(temp_v2 + 10) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 10) = *(short *)(temp_v2 + 10) + 3;
        }
        if (*(short *)(temp_v2 + 10) >= 1000) {
          *(unsigned short *)(temp_v2 + 10) = 999;
        }
      }
      if (*(short *)(temp_v2 + 0x26) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 0x26) = *(short *)(temp_v2 + 0x26) + 3;
        }
        if (*(short *)(temp_v2 + 0x26) >= 1000) {
          *(unsigned short *)(temp_v2 + 0x26) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    break;
  case 0x23:
    if (temp_v3 != 0) {
      if (*(short *)(temp_v3 + 0x1a) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v3 + 0x1a) = *(short *)(temp_v3 + 0x1a) + 3;
        }
        if (*(short *)(temp_v3 + 0x1a) >= 1000) {
          *(unsigned short *)(temp_v3 + 0x1a) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    else {
      if (*(short *)(temp_v2 + 0xc) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 0xc) = *(short *)(temp_v2 + 0xc) + 3;
        }
        if (*(short *)(temp_v2 + 0xc) >= 1000) {
          *(unsigned short *)(temp_v2 + 0xc) = 999;
        }
      }
      if (*(short *)(temp_v2 + 0x28) < 999) {
        if (param_3 == 0) {
          *(short *)(temp_v2 + 0x28) = *(short *)(temp_v2 + 0x28) + 3;
        }
        if (*(short *)(temp_v2 + 0x28) >= 1000) {
          *(unsigned short *)(temp_v2 + 0x28) = 999;
        }
        temp_v1 = FUN_0031c658();
        return temp_v1;
      }
    }
    break;
  default:
    return 1;
  }
  return 1;
}
