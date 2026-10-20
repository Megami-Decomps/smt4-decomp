/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035c11c` (_code @ 0x35c11c, 0x320 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00238998(...);

typedef struct fn_0035c11c_arg2 fn_0035c11c_arg2;
struct fn_0035c11c_arg2 {
    unsigned char pad_0x0[0x4];
    void *field_0x4; /* +0x4 */
    byte field_0x8; /* +0x8 */
    unsigned char pad_0x9[0x1];
    byte field_0xa; /* +0xa */
};

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_00238998. */
extern unsigned int FUN_002b5a48(fn_0035c11c_arg2 *);


unsigned int FUN_0035c11c(unsigned int *param_1,int param_2,fn_0035c11c_arg2 *param_3,int param_4)

{
/* irregular: 1 native warning(s); review required */
  char temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  
  *param_1 = (unsigned int)param_3;
  temp_v7 = param_4;
  temp_v1 = FUN_002b5a48(param_3);
  param_1[1] = temp_v1;
  temp_v7 = *(int *)(param_2 + 4);
  temp_v0 = *(char *)(temp_v7 + 8);
  if (temp_v0 == '\0') {
    temp_v4 = 1;
    for (temp_v2 = *(int *)(temp_v7 + 4); temp_v0 = *(char *)(temp_v2 + 8), temp_v0 == '\0';
        temp_v2 = *(int *)(temp_v2 + 4)) {
      temp_v4 = temp_v4 + 1;
    }
    if (temp_v0 != '\a') {
      if (temp_v0 != '\x11') {
        if (temp_v0 != '\x12') {
          return 0;
        }
        if (temp_v1 != temp_v4) {
          return 2;
        }
        temp_v2 = FUN_00238998(param_1,&temp_v7,0);
      }
      else {
        if (*(char *)(temp_v2 + 10) != '\x01') {
          return 0;
        }
        if (*(char *)(*(int *)(temp_v2 + 4) + 8) != '\x12') {
          return 0;
        }
        if (temp_v1 != temp_v4) {
          return 2;
        }
        temp_v2 = FUN_00238998(param_1,&temp_v7,0);
      }
    }
    else {
      if (*(char *)(temp_v2 + 10) != '\0') {
        return 0;
      }
      if (*(char *)(*(int *)(temp_v2 + 4) + 8) != '\f') {
        return 0;
      }
      if (*(char *)(*(int *)(*(int *)(temp_v2 + 4) + 4) + 8) != '\x12') {
        return 0;
      }
      if (temp_v1 < temp_v4) {
        return 2;
      }
      temp_v2 = FUN_00238998(param_1,&temp_v7,0);
    }
  }
  else if (temp_v0 != '\a') {
    temp_v6 = temp_v0 == '\x11';
    if (temp_v6) {
      temp_v0 = *(char *)(temp_v7 + 10);
    }
    if (!temp_v6 || temp_v0 != '\0') {
      return 0;
    }
    temp_v4 = 0;
    temp_v7 = *(int *)(temp_v7 + 4);
    for (temp_v2 = temp_v7; temp_v0 = *(char *)(temp_v2 + 8), temp_v0 == '\0'; temp_v2 = *(int *)(temp_v2 + 4))
    {
      temp_v4 = temp_v4 + 1;
    }
    if (temp_v0 != '\x11') {
      if (temp_v0 != '\x12') {
        return 0;
      }
      if (temp_v4 == 0) {
        return 0;
      }
      if (temp_v1 != temp_v4) {
        return 2;
      }
      temp_v2 = FUN_00238998(param_1,&temp_v7,0);
    }
    else {
      if (temp_v4 == 0) {
        return 0;
      }
      if (*(char *)(temp_v2 + 10) != '\x01') {
        return 0;
      }
      if (*(char *)(*(int *)(temp_v2 + 4) + 8) != '\x12') {
        return 0;
      }
      if (temp_v1 != temp_v4) {
        return 2;
      }
      temp_v2 = FUN_00238998(param_1,&temp_v7,0);
    }
  }
  else {
    if ((*(char *)(temp_v7 + 10) != '\0') || (*(char *)(*(int *)(temp_v7 + 4) + 8) != '\f')) {
      return 0;
    }
    temp_v4 = 0;
    temp_v5 = *(int *)(*(int *)(temp_v7 + 4) + 4);
    for (temp_v2 = temp_v5; temp_v0 = *(char *)(temp_v2 + 8), temp_v0 == '\0'; temp_v2 = *(int *)(temp_v2 + 4)) {
      temp_v4 = temp_v4 + 1;
    }
    if (temp_v0 == '\a') {
      if (temp_v4 == 0) {
        return 0;
      }
      if (*(char *)(temp_v2 + 10) != '\0') {
        return 0;
      }
      if (*(char *)(*(int *)(temp_v2 + 4) + 8) != '\f') {
        return 0;
      }
      if (*(char *)(*(int *)(*(int *)(temp_v2 + 4) + 4) + 8) == '\x12') {
        temp_v2 = 0;
        if (temp_v1 < temp_v4) {
          return 2;
        }
        do {
          temp_v7 = temp_v5;
          temp_v3 = FUN_00238998(param_1,&temp_v7,temp_v2,temp_v4);
          if (temp_v3 != 0) {
            return 1;
          }
          temp_v2 = temp_v2 + 1;
        } while (temp_v2 + temp_v4 <= (unsigned int)param_1[1]);
        return 2;
      }
      return 0;
    }
    if (temp_v0 != '\x12') {
      return 0;
    }
    if (temp_v4 == 0) {
      return 0;
    }
    if (temp_v1 < temp_v4) {
      return 2;
    }
    temp_v7 = temp_v5;
    temp_v2 = FUN_00238998(param_1,&temp_v7,temp_v1 - temp_v4);
  }
  if (temp_v2 == 0) {
    return 2;
  }
  return 1;
}

} /* extern "C" */
