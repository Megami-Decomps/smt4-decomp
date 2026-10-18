/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0015a4e8` (_code @ 0x15a4e8, 0x2c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned char DAT_004e6f64; /* 0x4e6f64 */
extern unsigned short uRam004e827e; /* 0x4e827e */

/* Supplied declaration required: FUN_0015a414. */
/* Supplied declaration required: FUN_0015d494. */
extern int FUN_002bb274(void);


unsigned int * FUN_0015a4e8(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  
  *(char *)(param_1 + 4) = (char)param_2;
  if (param_2 == 1) {
    FUN_0015a414(*(unsigned int *)(param_1 + 0x68));
  }
  puVar1 = *(unsigned int **)(param_1 + 0x68);
  *(char *)((int)puVar1 + 0xd) = (char)param_2;
  if (param_2 != 0) {
    if (param_2 == 1) {
      FUN_0015d494(&DAT_004e6f64,*puVar1 & 0xff);
      *(unsigned char *)(puVar1 + 3) = 0;
      temp_v0 = *puVar1;
      temp_v1 = FUN_002bb274();
      if (temp_v1 != 0) {
        puVar1 = *(unsigned int **)((uRam004e827e & 1) * 0x60 + (temp_v0 & 0xff) * 4 + 0x4e8014);
        *puVar1 = *puVar1 | 0x20000000;
      }
      return (unsigned int *)(unsigned int)(temp_v1 != 0);
    }
    if (param_2 == 2) {
      temp_v0 = *puVar1;
      temp_v1 = FUN_002bb274();
      if (temp_v1 != 0) {
        puVar1 = *(unsigned int **)((uRam004e827e & 1) * 0x60 + (temp_v0 & 0xff) * 4 + 0x4e8014);
        *(unsigned short *)(puVar1 + 0x28) = (unsigned short)puVar1[0x28] & 0xff00;
        *puVar1 = *puVar1 | 0x10000;
      }
      return (unsigned int *)(unsigned int)(temp_v1 != 0);
    }
  }
  return puVar1;
}
