/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0026a9fc` (_code @ 0x26a9fc, 0xbc bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 6 byte(s) */
typedef struct {
    unsigned short sp2C; /* 0x2c: local_2c */
    unsigned int sp50; /* 0x50: local_50 */
} param_1_stack;

extern unsigned char LAB_001453fc; /* 0x1453fc */
extern unsigned char *DAT_00433158; /* 0x433158 */

/* Supplied declaration required: FUN_002aa224. */
/* Supplied declaration required: FUN_002ae3f0. */
/* Supplied declaration required: FUN_002b48dc. */
extern unsigned int FUN_002c0e4c(unsigned int);
extern unsigned int FUN_002c0e9c(void);
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);


unsigned int FUN_0026a9fc(unsigned int param_1)

{
/* irregular: 3 native warning(s); review required */
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [32];
  unsigned short temp_v3;
  
  if (param_1 >= 0x191) {
    puVar1 = DAT_00433158;
    FUN_002aa224(DAT_00433158,param_1);
    if (puVar1 == (unsigned char *)0x0) {
      temp_v0 = FUN_002c0ec4(4,1);
      temp_v1 = FUN_002c0e9c();
      temp_v0 = FUN_002c0e4c(temp_v0);
      puVar1 = temp_v2;
      temp_v3 = (unsigned short)param_1;
      FUN_002b48dc(puVar1,temp_v1,temp_v0,0x3c,&LAB_001453fc);
    }
    if (puVar1 != (unsigned char *)0x0) {
      return ~(*(unsigned int *)(puVar1 + 0x38) >> 0x1e) & 1;
    }
  }
  else {
    FUN_002ae3f0();
    if (param_1 != 0) {
      return (*(int *)(param_1 + 0x38) >> 0x1f) + 1;
    }
  }
  return 0;
}
