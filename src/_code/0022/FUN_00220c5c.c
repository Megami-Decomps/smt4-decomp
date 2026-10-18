/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00220c5c` (_code @ 0x220c5c, 0x1fc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_1_stack;

extern int FUN_0026f0d8(unsigned int);
extern int FUN_0026f294(int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_00297848. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b902c(unsigned int);
extern int FUN_002bf6d0(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bf9e8. */
extern int FUN_002bffbc(unsigned int);
extern int FUN_002c0144(int, int, int, int, unsigned int);
/* Supplied declaration required: FUN_002ebf64. */


unsigned int FUN_00220c5c(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v3 = 0;
  temp_v0 = 0;
  temp_v1 = FUN_002bf6d0(0x39,0x97);
  temp_v2 = FUN_002c0144((int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),
                       (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1],0);
  if (temp_v2 != 0) {
    *(int *)(param_1 + 0x118) = *(int *)(param_1 + 0x118) + 1;
  }
  else {
    temp_v1 = FUN_002c0144((int)*(short *)(temp_v1 + 8),(int)*(short *)(temp_v1 + 10),
                         (int)**(short **)(temp_v1 + 0xc),(int)(*(short **)(temp_v1 + 0xc))[1],3);
    if ((temp_v1 != 0) && (*(int *)(param_1 + 0x118) - 1U < 0xf)) {
      temp_v0 = 1;
    }
    *(unsigned int *)(param_1 + 0x118) = 0;
  }
  temp_v1 = FUN_002bffbc(0);
  if ((temp_v1 != 0) || (temp_v1 = FUN_0026f0d8(1), temp_v1 != 0)) {
    *(unsigned int *)(param_1 + 0x110) = 2;
    FUN_002bf9e8(0x100016d);
    FUN_002b8b78(0xe2);
    temp_v3 = 2;
  }
  else {
    temp_v1 = FUN_002bffbc(1);
    if ((temp_v1 != 0) || (temp_v1 = FUN_0026f0d8(2), temp_v1 != 0)) {
      *(unsigned int *)(param_1 + 0x110) = 8;
      FUN_002bf9e8(0x100016e);
      temp_v3 = 2;
    }
    else {
      temp_v1 = FUN_002b902c(10);
      if ((temp_v1 != 0) || (temp_v1 = FUN_0026f0d8(4), temp_v1 != 0)) {
        if (*(char *)(param_1 + 0x127) != '\0') {
          *(unsigned char *)(param_1 + 0x127) = 0;
        }
        else {
          *(unsigned char *)(param_1 + 0x127) = 1;
        }
        *(unsigned int *)(param_1 + 0x20) = 0;
        *(unsigned int *)(param_1 + 0x18) = 0x14a;
        FUN_002bf9e8(0x100016d);
      }
      else if (temp_v0) {
        FUN_002bf9e8(0x100016d);
        temp_v3 = 2;
        *(unsigned int *)(param_1 + 0x110) = 2;
      }
    }
  }
  if (*(char *)(param_1 + 0x127) != '\0') {
    temp_v1 = FUN_0026f294(param_1 + 0x18,0x14a,0,4,*(unsigned int *)(param_1 + 0x20),1);
    if (temp_v1 != 0) {
      *(unsigned char *)(param_1 + 0x24) = 1;
    }
    *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
  }
  FUN_00297848(*(unsigned int *)(param_1 + 4));
  FUN_002ebf64(param_1 + 0x78);
  return temp_v3;
}
