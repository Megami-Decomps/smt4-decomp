/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b89e4` (_code @ 0x2b89e4, 0x168 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002af5c0(int, int, int);
int FUN_002bee58(int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

/* Supplied declaration required: FUN_002af5c0. */
/* Supplied declaration required: FUN_002bee58. */


void FUN_002b89e4(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  switch(param_2) {
  default:
    return;
  case 1:
  case 10:
    FUN_002af5c0(param_1 + 0xc4,2,0);
    return;
  case 2:
  case 3:
  case 4:
  case 5:
  case 0x10:
  case 0x11:
  case 0x12:
    FUN_002af5c0(param_1 + 0xc4,2,0);
    FUN_002af5c0(param_1 + 0x1dc,2,0);
    param_1 = param_1 + 0x150;
    break;
  case 6:
    if (*(int *)(param_1 + 0xe4) != 0x3f800000) {
      return;
    }
    FUN_002af5c0(param_1 + 0xc4,2,0);
    return;
  case 7:
  case 8:
  case 9:
    FUN_002af5c0(param_1 + 0xc4,2,0);
    FUN_002af5c0(param_1 + 0x40c,2,0);
    return;
  case 0xb:
    FUN_002bee58(param_1 + 0xc4,7);
    FUN_002bee58(param_1 + 0x268,7);
    param_1 = param_1 + 0x380;
    break;
  case 0xc:
    temp_v0 = 0;
    do {
      if (*(char *)(param_1 + temp_v0 + 0x37) != '\0') {
        FUN_002af5c0(param_1 + temp_v0 * 0x8c + 0x498,5,0);
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 5);
    *(unsigned int *)(param_1 + 0x28) = 0;
    return;
  }
  *(unsigned char *)(param_1 + 0x85) = 0;
  return;
}

} /* extern "C" */
