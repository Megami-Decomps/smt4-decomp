/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001b57a8` (_code @ 0x1b57a8, 0x29c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00189a38(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

/* Supplied declaration required: FUN_00189a38. */
extern int FUN_001bd5b8(unsigned int *);


/* WARNING: Removing unreachable block (ram,0x001b5810) */

unsigned int * FUN_001b57a8(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  
  temp_v3 = param_2 & 0x3fc00;
  *param_1 = param_2;
  temp_v4 = 0;
  temp_v0 = param_2 & 0x3ff;
  temp_v2 = 0x164a3;
  if (temp_v3 == 0xd000) {
    if ((temp_v0 >= 100) && (temp_v0 < 300)) {
      if (param_2 != 0xe0a0d0a9) {
        temp_v4 = param_4;
        temp_v1 = FUN_001bd5b8(&temp_v4);
        if (temp_v1 < 0) {
          FUN_00189a38(temp_v1,0x1b5848);
        }
        if (temp_v4 == 0xd909) {
          param_1[1] = temp_v2;
          return param_1;
        }
      }
      temp_v2 = temp_v4;
      param_1[1] = temp_v2;
      return param_1;
    }
    if (param_2 == 0xc920d019) {
      temp_v2 = 0x16afa;
      param_1[1] = temp_v2;
      return param_1;
    }
    if ((int)param_2 < -0x36df2fe7) {
      if (param_2 == 0xc8a0d018) {
        temp_v2 = 0x17ffe;
        param_1[1] = temp_v2;
        return param_1;
      }
      if (param_2 == 0xc920d017) {
        temp_v2 = 0x16afb;
        param_1[1] = temp_v2;
        return param_1;
      }
    }
    else {
      if (param_2 == 0xc960d00c) {
        temp_v2 = 0x16afd;
        param_1[1] = temp_v2;
        return param_1;
      }
      if (param_2 == 0xc960d01b) {
        temp_v2 = 0x16afc;
        param_1[1] = temp_v2;
        return param_1;
      }
    }
    temp_v2 = 0;
    param_1[1] = temp_v2;
    return param_1;
  }
  if (temp_v3 == 0xa000) {
    temp_v2 = temp_v0 + 0x169b8;
  }
  else if (temp_v3 == 0xb800) {
    temp_v2 = temp_v0 + 0x16a1c;
  }
  else if (param_2 == 0xc8a08035) {
    temp_v2 = 0x17f36;
  }
  else if (temp_v3 != 0x4400) {
    if ((temp_v3 != 0x13800) || (temp_v0 < 0x100)) {
      temp_v2 = 0;
      param_1[1] = temp_v2;
      return param_1;
    }
    if (param_2 == 0xc8a13908) {
      temp_v2 = 0x16b43;
    }
    else if ((int)param_2 < -0x375ec6f8) {
      switch(param_2) {
      case 0xc8a13900:
        temp_v2 = 0x16440;
        break;
      case 0xc8a13901:
        temp_v2 = 0x16441;
        break;
      case 0xc8a13902:
        temp_v2 = 0x16442;
        break;
      default:
        temp_v2 = 0;
        break;
      case 0xc8a13904:
        temp_v2 = 0x16443;
        break;
      case 0xc8a13905:
        break;
      case 0xc8a13906:
        temp_v2 = 0x16446;
      }
    }
    else if (param_2 == 0xc9413912) {
      temp_v2 = 0x16957;
    }
    else {
      if ((int)param_2 < -0x36bec6ee) {
        if (param_2 == 0xc9413910) {
          temp_v2 = 0x16379;
          param_1[1] = temp_v2;
          return param_1;
        }
        if (param_2 == 0xc9413911) {
          temp_v2 = 0x167c4;
          param_1[1] = temp_v2;
          return param_1;
        }
      }
      else {
        if (param_2 == 0xc961391a) {
          temp_v2 = 0x17fff;
          param_1[1] = temp_v2;
          return param_1;
        }
        if (param_2 == 0xf9613903) {
          temp_v2 = 0x16447;
          param_1[1] = temp_v2;
          return param_1;
        }
      }
      temp_v2 = 0;
    }
  }
  else if ((temp_v0 >= 0x104) && (0x117 >= temp_v0)) {
    temp_v2 = 0x16f79;
  }
  else if ((temp_v0 >= 0x118) && (0x14e >= temp_v0)) {
    temp_v2 = 0x16f7a;
  }
  else if ((temp_v0 >= 0x186) && (399 >= temp_v0)) {
    temp_v2 = 0x17f3f;
  }
  else {
    temp_v2 = 0x16f78;
    if (((temp_v0 < 0xdc) || (temp_v0 >= 0xe6)) && ((temp_v0 < 100 || (temp_v0 >= 0xb4)))) {
      temp_v2 = 0x16f7f;
    }
  }
  param_1[1] = temp_v2;
  return param_1;
}

} /* extern "C" */
