/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00348c50` (_code @ 0x348c50, 0x64 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp20; /* 0x20: local_20 */
} param_1_stack;

extern unsigned char LAB_00348cbc; /* 0x348cbc */
extern unsigned char LAB_00348cd0; /* 0x348cd0 */
extern unsigned int *DAT_00589144; /* 0x589144 */

/* Supplied declaration required: FUN_0014e38c. */
/* Supplied declaration required: FUN_0016007c. */


void FUN_00348c50(unsigned int param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  unsigned char *puVar2;
  
  puVar1 = (unsigned int *)0x14;
  FUN_0016007c();
  puVar2 = &LAB_00348cbc;
  DAT_00589144 = puVar1;
  FUN_0014e38c(&LAB_00348cbc,4,0,0,&LAB_00348cd0,0,0);
  *puVar1 = (unsigned int)puVar2;
  puVar1[1] = param_1;
  *(unsigned char *)(puVar1 + 2) = 0;
  *(unsigned char *)((int)puVar1 + 9) = 0;
  puVar1[3] = 0;
  return;
}
