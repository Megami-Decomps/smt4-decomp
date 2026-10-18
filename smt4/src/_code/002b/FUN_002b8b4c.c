/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b8b4c` (_code @ 0x2b8b4c, 0x174 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 5 slot(s), 20 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp30; /* 0x30: local_30 */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

/* Supplied declaration required: FUN_002b2650. */
extern int FUN_002bf4f8(unsigned int, unsigned int);


void FUN_002b8b4c(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3 [9];
  
  temp_v2 = 0;
  temp_v1 = 0;
  if (*(char *)(param_1 + 9) != '\v') {
    if (*(char *)(param_1 + 9) == '\x13') {
      return;
    }
  }
  else {
    temp_v0 = *(int *)(param_1 + 0x20);
    if (temp_v0 != 2) {
      if (temp_v0 != 3) {
        if (temp_v0 == 4) {
          temp_v3[4] = 0xb8;
          temp_v3[5] = 0xb9;
          temp_v3[6] = 0xba;
          temp_v3[7] = 0xbb;
          temp_v2 = FUN_002bf4f8(0xe,temp_v3[*(int *)(param_1 + 0x18) + 4]);
          temp_v3[0] = 0xbc;
          temp_v3[1] = 0xbd;
          temp_v3[2] = 0xbe;
          temp_v3[3] = 0xbf;
          temp_v1 = FUN_002bf4f8(0xe,temp_v3[*(int *)(param_1 + 0x18)]);
        }
      }
      else {
        temp_v3[3] = 0xa2;
        temp_v3[4] = 0xa3;
        temp_v3[5] = 0xa4;
        temp_v2 = FUN_002bf4f8(0xe,temp_v3[*(int *)(param_1 + 0x18) + 3]);
        temp_v3[0] = 0xa5;
        temp_v3[1] = 0xa6;
        temp_v3[2] = 0xa7;
        temp_v1 = FUN_002bf4f8(0xe,temp_v3[*(int *)(param_1 + 0x18)]);
      }
    }
    else {
      temp_v3[2] = 0xac;
      temp_v3[3] = 0xad;
      temp_v2 = FUN_002bf4f8(0xe,temp_v3[*(int *)(param_1 + 0x18) + 2]);
      temp_v3[0] = 0xae;
      temp_v3[1] = 0xaf;
      temp_v1 = FUN_002bf4f8(0xe,temp_v3[*(int *)(param_1 + 0x18)]);
    }
  }
  FUN_002b2650(param_1 + 0x268,(int)*(short *)(temp_v2 + 8),(int)*(short *)(temp_v2 + 10));
  FUN_002b2650(param_1 + 0x380,(int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10));
  return;
}
