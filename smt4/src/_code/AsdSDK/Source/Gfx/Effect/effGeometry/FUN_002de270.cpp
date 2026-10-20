/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002de270` (_code @ 0x2de270, 0x94 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001f6998(int, unsigned int, int);
int FUN_002c32a0(int, int, int, int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int DAT_00473808; /* 0x473808 */
extern unsigned int DAT_0047380c; /* 0x47380c */
extern unsigned int DAT_00473810; /* 0x473810 */
extern unsigned int DAT_00473814; /* 0x473814 */

/* Supplied declaration required: FUN_001f6998. */
/* Supplied declaration required: FUN_002c32a0. */


unsigned short * FUN_002de270(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  
  puVar4 = (unsigned short *)0x10000;
  FUN_002c32a0(0x10000,0x100,0,0x58,0x10,1);
  *puVar4 = 0x300;
  puVar4[1] = 0;
  FUN_001f6998(param_1,param_2,0);
  *(int *)(puVar4 + 6) = param_1;
  temp_v2 = DAT_00473814;
  temp_v1 = DAT_00473810;
  temp_v0 = DAT_0047380c;
  if ((param_2 & 0x80000) != 0) {
    *(unsigned int *)(param_1 + 0x40) = DAT_00473808;
    *(unsigned int *)(param_1 + 0x44) = temp_v0;
    *(unsigned int *)(param_1 + 0x48) = temp_v1;
    *(unsigned int *)(param_1 + 0x4c) = temp_v2;
  }
  *(unsigned int *)(*(int *)(puVar4 + 6) + 0x60) = 0;
  return puVar4;
}

} /* extern "C" */
