/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00389528` (_code @ 0x389528, 0x70 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002a4584(unsigned int, unsigned char [132], unsigned int, int, int, int, int);
int memClear(unsigned char [132], int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_3_stack;

extern unsigned int g_aocDisplay; /* 0x433130 */

/* Supplied declaration required: FUN_002a4584. */
extern int FUN_002a6e7c(unsigned int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: memClear. */


void FUN_00389528(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [132];
  
  memClear(temp_v1,0x80);
  temp_v0 = FUN_002a6e7c(param_1,0x10,param_2,temp_v1);
  if (temp_v0 != 0) {
    FUN_002a4584(g_aocDisplay,temp_v1,param_3,temp_v0 + 8,1,0x80,temp_v0);
  }
  return;
}

} /* extern "C" */
