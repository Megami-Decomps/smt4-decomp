/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00470164` (_code @ 0x470164, 0x70 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001b2ebc(unsigned int, unsigned char [132], unsigned int, int, int, int, int);
int sysMemClear(unsigned char [132], int);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_3_stack;

extern unsigned int g_aocDisplay; /* 0x57027c */

extern int FUN_001b2bd8(unsigned int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_001b2ebc. */
/* Supplied declaration required: sysMemClear. */


void FUN_00470164(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [132];
  
  sysMemClear(temp_v1,0x80);
  temp_v0 = FUN_001b2bd8(param_1,0x10,param_2,temp_v1);
  if (temp_v0 != 0) {
    FUN_001b2ebc(g_aocDisplay,temp_v1,param_3,temp_v0 + 8,1,0x80,temp_v0);
  }
  return;
}

} /* extern "C" */
