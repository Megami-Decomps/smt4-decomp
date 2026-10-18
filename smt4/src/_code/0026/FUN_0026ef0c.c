/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026ef0c` (_code @ 0x26ef0c, 0xc4 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp5C; /* 0x5c: local_5c */
    unsigned int sp60; /* 0x60: local_60 */
} param_2_stack;

extern unsigned char LAB_0026efd0; /* 0x26efd0 */
extern unsigned char LAB_0026efd8; /* 0x26efd8 */

/* Supplied declaration required: FUN_0024ee4c. */
/* Supplied declaration required: FUN_00296b3c. */
/* Supplied declaration required: FUN_002bcfc0. */
extern unsigned int FUN_002bd06c(void);
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0026ef0c(unsigned int *param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char temp_v1 [68];
  
  FUN_00296b3c(*param_1,2,0xffffffff,0,0,param_2 + 0xe);
  if (*(short *)(param_2 + 0x48) != 0) {
    temp_v0 = FUN_002bd06c();
    FUN_002bcfc0(temp_v0,temp_v1);
  }
  else {
    FUN_0024ee4c(temp_v1,&LAB_0026efd0);
  }
  FUN_00296b3c(param_1[1],2,0xffffffff,0,0,temp_v1);
  if ((*(unsigned char *)(param_2 + 0x20) & 2) != 0) {
    rt_memcpy_w(temp_v1,&LAB_0026efd8,0x13);
    FUN_00296b3c(param_1[2],2,0xffffffff,0,0,temp_v1);
  }
  *(unsigned char *)(param_1 + 3) = 1;
  return;
}
