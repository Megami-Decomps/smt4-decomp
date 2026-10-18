/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00350cf4` (_code @ 0x350cf4, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int DAT_005c1fb4; /* 0x5c1fb4 */
extern unsigned int DAT_005c1fb8; /* 0x5c1fb8 */
extern unsigned int DAT_005c1fbc; /* 0x5c1fbc */
extern unsigned int DAT_005c1fc0; /* 0x5c1fc0 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_002b3324. */


unsigned short * FUN_00350cf4(int param_1,unsigned int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  unsigned short *puVar4;
  
  puVar4 = (unsigned short *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x58,0x10,1);
  *puVar4 = 0x300;
  puVar4[1] = 0;
  FUN_002b3324(param_1,param_2,0);
  *(int *)(puVar4 + 6) = param_1;
  temp_v2 = DAT_005c1fc0;
  temp_v1 = DAT_005c1fbc;
  temp_v0 = DAT_005c1fb8;
  if ((param_2 & 0x80000) != 0) {
    *(unsigned int *)(param_1 + 0x40) = DAT_005c1fb4;
    *(unsigned int *)(param_1 + 0x44) = temp_v0;
    *(unsigned int *)(param_1 + 0x48) = temp_v1;
    *(unsigned int *)(param_1 + 0x4c) = temp_v2;
  }
  *(unsigned int *)(*(int *)(puVar4 + 6) + 0x60) = 0;
  return puVar4;
}
