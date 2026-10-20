/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004713ec` (_code @ 0x4713ec, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int sysMemClear(unsigned char [128], int);
int FUN_00472078(unsigned int, unsigned char [128], unsigned int, unsigned int, int, int, int);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA4; /* 0xa4: local_a4 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_4_stack;

extern unsigned int g_aocDisplay; /* 0x57027c */

extern int FUN_001b2bd8(unsigned int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: sysMemClear. */
/* Supplied declaration required: FUN_00472078. */


void FUN_004713ec(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [128];
  
  sysMemClear(temp_v1,0x80);
  temp_v0 = FUN_001b2bd8(param_1,0x10,param_2,temp_v1);
  if (temp_v0 != 0) {
    FUN_00472078(g_aocDisplay,temp_v1,param_4,param_3,0,0x80,temp_v0);
  }
  return;
}

} /* extern "C" */
