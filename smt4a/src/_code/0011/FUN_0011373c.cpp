/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011373c` (_code @ 0x11373c, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea668(unsigned char [88]);
int chunkStreamFlush(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char [88]);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp88; /* 0x88: local_88 */
} param_4_stack;

/* Supplied declaration required: FUN_002ea668. */
/* Supplied declaration required: chunkStreamFlush. */


unsigned int FUN_0011373c(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 2 native warning(s); review required */
  unsigned char temp_v0 [88];
  unsigned int temp_v1;
  
  FUN_002ea668(temp_v0);
  chunkStreamFlush(param_1,param_2,param_3,param_4,temp_v0);
  return temp_v1;
}

} /* extern "C" */
