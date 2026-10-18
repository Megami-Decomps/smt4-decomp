/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00387c18` (_code @ 0x387c18, 0x70 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spA0; /* 0xa0: local_a0 */
    unsigned int spA8; /* 0xa8: local_a8 */
} param_3_stack;

extern unsigned int DAT_00433130; /* 0x433130 */

/* Supplied declaration required: FUN_002a4828. */
extern int FUN_002a71c0(unsigned int, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002c4b30. */


void FUN_00387c18(unsigned int param_1,unsigned int param_2,unsigned int param_3)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [132];
  
  FUN_002c4b30(temp_v1,0x80);
  temp_v0 = FUN_002a71c0(param_1,0xc,param_2,temp_v1);
  if (temp_v0 != 0) {
    FUN_002a4828(DAT_00433130,temp_v1,param_3,temp_v0 + 8,1,0x80,temp_v0);
  }
  return;
}
