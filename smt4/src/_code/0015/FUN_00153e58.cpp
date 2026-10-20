/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00153e58` (_code @ 0x153e58, 0xd0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a1828(...);

extern unsigned int *g_commandBufferCursor; /* 0x4652a0 */
extern unsigned int DAT_00476634; /* 0x476634 */
extern unsigned int DAT_004efd6c; /* 0x4efd6c */
extern unsigned int DAT_004efd70; /* 0x4efd70 */
extern unsigned int DAT_004efd74; /* 0x4efd74 */
extern unsigned int DAT_004efd78; /* 0x4efd78 */
extern unsigned int DAT_004efd7c; /* 0x4efd7c */
extern unsigned int DAT_004efd80; /* 0x4efd80 */
extern unsigned int DAT_004efd84; /* 0x4efd84 */
extern unsigned int DAT_004efd88; /* 0x4efd88 */
extern unsigned int DAT_004efd8c; /* 0x4efd8c */
extern unsigned int DAT_004efd90; /* 0x4efd90 */
extern unsigned int DAT_004efd94; /* 0x4efd94 */
extern unsigned int DAT_004efd98; /* 0x4efd98 */

/* Supplied declaration required: FUN_002a1828. */
extern int FUN_002bfefc(unsigned int *);


void FUN_00153e58(int param_1,int param_2)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  
  if (((DAT_00476634 & 1) == 0) && (temp_v0 = FUN_002bfefc(&DAT_00476634), temp_v0 != 0)) {
    DAT_004efd6c = 0x3f800000;
    DAT_004efd70 = 0;
    DAT_004efd74 = 0;
    DAT_004efd78 = 0;
    DAT_004efd7c = 0;
    DAT_004efd80 = 0x3f800000;
    DAT_004efd84 = 0;
    DAT_004efd88 = 0;
    DAT_004efd8c = 0;
    DAT_004efd90 = 0;
    DAT_004efd94 = 0x3f800000;
    DAT_004efd98 = 0;
  }
  puVar1 = g_commandBufferCursor;
  *g_commandBufferCursor = 0x80000000;
  puVar1[1] = 0xf02c0;
  FUN_002a1828(puVar1 + 2,&DAT_004efd6c,0xbf02c1);
  puVar1 = g_commandBufferCursor;
  g_commandBufferCursor = g_commandBufferCursor + 0x10;
  *g_commandBufferCursor = 0x80000003;
  puVar1[0x11] = 0xf02c0;
  FUN_002a1828(puVar1 + 0x12,param_2 + 0x1bc,0xbf02c1);
  g_commandBufferCursor = g_commandBufferCursor + 0x10;
  *(int *)(param_1 + 0x1c) = param_2;
  return;
}

} /* extern "C" */
