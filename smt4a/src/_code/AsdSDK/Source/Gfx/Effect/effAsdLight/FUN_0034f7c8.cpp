/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0034f7c8` (_code @ 0x34f7c8, 0xd0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00167ab4(int, int, int, int, int, int);
int FUN_0018cfe4(int, unsigned int);
int FUN_002e6354(void);
int rt_memcpy(unsigned int *, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int DAT_005b3c80; /* 0x5b3c80 */
extern unsigned int DAT_005b3c88; /* 0x5b3c88 */

/* Supplied declaration required: FUN_00167ab4. */
/* Supplied declaration required: FUN_0018cfe4. */
extern unsigned int FUN_002b41c4(int);
/* Supplied declaration required: FUN_002e6354. */
/* Supplied declaration required: rt_memcpy. */


unsigned int * FUN_0034f7c8(int param_1)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = (unsigned int *)0x10000;
  FUN_00167ab4(0x10000,0x100,0,0x120,0x10,1);
  FUN_002e6354();
  *puVar1 = 0;
  puVar1[1] = 0;
  puVar1[2] = 0;
  puVar1[3] = 0;
  puVar1[3] = 0x3f800000;
  puVar1[4] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[7] = 0;
  puVar1[7] = 0x3f800000;
  puVar1[9] = 0xffffffff;
  puVar1[8] = 0x3f800000;
  if (param_1 != 0) {
    puVar1[10] = (unsigned int)*(unsigned short *)(param_1 + 0xc);
    temp_v0 = FUN_002b41c4(param_1);
    rt_memcpy(puVar1 + 0xc,temp_v0,0xb4);
    if (DAT_005b3c80 != 0) {
      FUN_0018cfe4(DAT_005b3c80,DAT_005b3c88);
    }
  }
  return puVar1;
}

} /* extern "C" */
