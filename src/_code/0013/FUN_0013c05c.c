/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013c05c` (_code @ 0x13c05c, 0x8c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_3_stack;

extern unsigned char DAT_00420c2c; /* 0x420c2c */

/* Supplied declaration required: FUN_00148388. */


unsigned int * FUN_0013c05c(int param_1,int param_2,unsigned int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = (param_2 + param_1) & 0xfffffffc;
  puVar2 = (unsigned int *)((param_1 + 3U) & 0xfffffffc);
  if (((int)((int)puVar2 - temp_v0) < 1) && (temp_v0 - (int)puVar2 >= 0x34)) {
    if (puVar2 != (unsigned int *)0x0) {
      puVar2[1] = 0;
      puVar2[2] = 0;
      puVar2[7] = (unsigned int)(puVar2 + 7);
      puVar2[6] = 0;
      *puVar2 = (unsigned int)&DAT_00420c2c;
      puVar2[8] = (unsigned int)(puVar2 + 7);
    }
    FUN_00148388(puVar2,0x46524d48,puVar2 + 0xd,temp_v0,param_3);
    puVar2[10] = puVar2[3];
    puVar2[0xb] = puVar2[4];
    puVar2[0xc] = 0;
    return puVar2;
  }
  return (unsigned int *)0x0;
}
