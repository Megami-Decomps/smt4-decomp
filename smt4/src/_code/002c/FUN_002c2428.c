/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002c2428` (_code @ 0x2c2428, 0x84 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern int DAT_004652a0; /* 0x4652a0 */
extern int DAT_004652a4; /* 0x4652a4 */
extern int DAT_004c632c; /* 0x4c632c */

/* Supplied declaration required: FUN_002c4938. */


void FUN_002c2428(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = DAT_004c632c;
  if ((DAT_004c632c != 0) &&
     ((*(int *)(DAT_004c632c + 4) != 0 || (*(int *)(DAT_004c632c + 0x18) != 0)))) {
    FUN_002c4938(*(unsigned int *)(DAT_004c632c + 0x18),*(int *)(DAT_004c632c + 0x20) * 0x1c);
    *(unsigned int *)(temp_v0 + 0xc) = 0;
    *(unsigned int *)(temp_v0 + 0x10) = 0;
    *(unsigned int *)(temp_v0 + 0x20) = 0;
    *(unsigned int *)(temp_v0 + 0x28) = 0;
    *(unsigned int *)(temp_v0 + 0x14) = 0;
    *(unsigned int *)(temp_v0 + 0x24) = 0;
    *(unsigned int *)(temp_v0 + 0x34) = 0;
    *(unsigned int *)(temp_v0 + 0x30) = 0;
    DAT_004652a0 = *(int *)(temp_v0 + 4);
    DAT_004652a4 = DAT_004652a0 + *(int *)(temp_v0 + 8);
  }
  return;
}
