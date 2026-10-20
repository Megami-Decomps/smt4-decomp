/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0013f0f4` (_code @ 0x13f0f4, 0x54 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001630d4(int, int, int, int, int);
int FUN_0030f220(int, unsigned char *, unsigned int, unsigned int, unsigned int);

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_4_stack;

extern unsigned char LAB_0013f148; /* 0x13f148 */
extern unsigned int DAT_005b3bc0; /* 0x5b3bc0 */
extern int DAT_005b3bc4; /* 0x5b3bc4 */

/* Supplied declaration required: FUN_001630d4. */
/* Supplied declaration required: FUN_0030f220. */


void FUN_0013f0f4(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  
  FUN_0030f220(2,&LAB_0013f148,param_3,param_4,param_4);
  temp_v0 = 0x100;
  DAT_005b3bc4 = param_1;
  FUN_001630d4(0x100,0x100,0,param_1 * 0x2c,1);
  DAT_005b3bc0 = temp_v0;
  return;
}

} /* extern "C" */
