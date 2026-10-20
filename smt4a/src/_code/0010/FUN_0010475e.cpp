/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010475e` (_code @ 0x10475e, 0x32 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea668(unsigned char [88]);
int FUN_002ea680(unsigned int, unsigned int, unsigned int, unsigned int, unsigned char [88]);
int FUN_002ea6ae(unsigned int, unsigned char [24], int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp88; /* 0x88: local_88 */
} param_5_stack;

/* Supplied declaration required: FUN_002ea668. */
/* Supplied declaration required: FUN_002ea680. */
/* Supplied declaration required: FUN_002ea6ae. */


unsigned int
FUN_0010475e(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,
            unsigned int param_5)

{
/* irregular: 3 native warning(s); review required */
  unsigned char temp_v0 [88];
  unsigned char temp_v1 [24];
  
  FUN_002ea668(temp_v0);
  FUN_002ea680(param_1,param_2,param_3,param_4,temp_v0);
  FUN_002ea6ae(param_5,temp_v1,0x10);
  return 1;
}

} /* extern "C" */
