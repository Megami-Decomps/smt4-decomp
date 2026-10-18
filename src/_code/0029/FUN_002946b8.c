/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002946b8` (_code @ 0x2946b8, 0x3c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0029482c; /* 0x29482c */

extern unsigned int FUN_0023d04c(unsigned int, unsigned int, unsigned short, unsigned short, unsigned int);
/* Supplied declaration required: FUN_0023f440. */
/* Supplied declaration required: FUN_002946f4. */
extern int FUN_002b47cc(unsigned short);
extern int FUN_002b66ec(void);
/* Supplied declaration required: FUN_002be7fc. */


/* WARNING: Removing unreachable block (ram,0x00294774) */
/* WARNING: Removing unreachable block (ram,0x0029472c) */

void FUN_002946b8(int param_1)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned char temp_v3 [68];
  
  FUN_002946f4(*(unsigned int *)(param_1 + 0x4394),0,7);
  FUN_002946f4(*(unsigned int *)(param_1 + 0x4394),1,7);
  temp_v0 = *(unsigned int *)(param_1 + 0x4394);
  temp_v1 = FUN_002b66ec();
  temp_v1 = FUN_002b47cc(*(unsigned short *)(temp_v1 + 10));
  temp_v2 = FUN_0023d04c(temp_v0,2,*(unsigned short *)(temp_v1 + 0x70),*(unsigned short *)(temp_v1 + 0x72),0);
  FUN_002be7fc(temp_v3,&LAB_0029482c,*(unsigned short *)(temp_v1 + 0x70),*(unsigned short *)(temp_v1 + 0x72),
               temp_v2);
  FUN_0023f440(temp_v0,2,temp_v3,7);
  return;
}
