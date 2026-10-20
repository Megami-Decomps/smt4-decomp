/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013764c` (_code @ 0x13764c, 0x7c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern unsigned int *DAT_004652a0; /* 0x4652a0 */
extern unsigned int DAT_004652a4; /* 0x4652a4 */
extern unsigned char DAT_004c62a3; /* 0x4c62a3 */
extern int DAT_004c632c; /* 0x4c632c */
extern int DAT_004c63f8; /* 0x4c63f8 */
extern unsigned int DAT_004c63fc; /* 0x4c63fc */


void FUN_0013764c(void)

{
  unsigned int *puVar1;
  unsigned int temp_v0;
  
  puVar1 = DAT_004652a0;
  temp_v0 = (int)DAT_004652a0 - *(int *)(DAT_004c632c + 4);
  *(unsigned int *)(DAT_004c632c + 0xc) = temp_v0;
  if (((temp_v0 & 8) != 0) && ((unsigned int)puVar1 < DAT_004652a4)) {
    DAT_004652a0 = puVar1 + 2;
    puVar1[1] = 0x8025e;
    *puVar1 = 0;
  }
  DAT_004c62a3 = 1;
  DAT_004c63f8 = (int)DAT_004652a0 - *(int *)(DAT_004c632c + 4);
  DAT_004c63fc = *(unsigned int *)(DAT_004c632c + 0x20);
  return;
}

} /* extern "C" */
