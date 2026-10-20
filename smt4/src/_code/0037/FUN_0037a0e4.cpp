/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0037a0e4` (_code @ 0x37a0e4, 0x60 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002b4f40(int, int);
int FUN_002b4f64(int, int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_002b4f40. */
/* Supplied declaration required: FUN_002b4f64. */
extern int FUN_002baed8(void);


void FUN_0037a0e4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  *(unsigned int *)(param_1 + 0x1d64) = param_4;
  temp_v0 = FUN_002baed8();
  temp_v1 = temp_v0;
  FUN_002b4f64(temp_v0,8);
  *(unsigned int *)(temp_v1 + 0xc) = *(unsigned int *)(temp_v0 + 0x184);
  *(unsigned char *)(temp_v1 + 4) = 0x29;
  *(int *)(temp_v1 + 0x10) = param_1 + 0xf4;
  *(int *)(temp_v1 + 0x14) = param_1 + 0x1d50;
  *(unsigned int *)(temp_v1 + 0x18) = param_2;
  *(unsigned int *)(temp_v1 + 0x1c) = param_3;
  FUN_002b4f40(temp_v0,temp_v1);
  return;
}

} /* extern "C" */
