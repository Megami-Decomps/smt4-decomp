/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00321af0` (_code @ 0x321af0, 0xa8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_0026f024(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);


unsigned int FUN_00321af0(int param_1)

{
  int temp_v0;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  temp_v0 = FUN_0026f024(param_1 + 0x90,0,0xfffffeb6,4,*(unsigned int *)(param_1 + 0x98),1);
  if (temp_v0 != 0) {
    *(unsigned char *)(param_1 + 0x9c) = 1;
  }
  else {
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
  }
  if (*(char *)(param_1 + 0x9c) == '\x01') {
    *(unsigned int *)(param_1 + 0x104) = 3;
    *(unsigned int *)(param_1 + 0x48) = 0;
    *(unsigned int *)(param_1 + 0x110) = 4;
    *(unsigned char *)(param_1 + 0x4c) = 0;
    *(unsigned int *)(param_1 + 0x5c) = 0;
    *(unsigned char *)(param_1 + 0x60) = 0;
    *(unsigned int *)(param_1 + 0x70) = 0;
    *(unsigned char *)(param_1 + 0x74) = 0;
    *(unsigned int *)(param_1 + 0x20) = 0;
    *(unsigned char *)(param_1 + 0x24) = 0;
    *(unsigned int *)(param_1 + 0x34) = 0;
    *(unsigned char *)(param_1 + 0x38) = 0;
    *(unsigned char *)(param_1 + 0x128) = 1;
    temp_v1 = 2;
    *(unsigned char *)(param_1 + 0x12a) = 0;
  }
  return temp_v1;
}
