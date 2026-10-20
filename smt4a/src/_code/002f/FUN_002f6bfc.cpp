/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f6bfc` (_code @ 0x2f6bfc, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e74c4(unsigned int, unsigned char [20], int, unsigned int);
int FUN_002ea668(unsigned char [88]);
int FUN_002ea6bc(unsigned char [88], int, unsigned int);
int FUN_002ea6cc(unsigned char [88]);

/* Supplied declaration required: FUN_002e74c4. */
/* Supplied declaration required: FUN_002ea668. */
/* Supplied declaration required: FUN_002ea6bc. */
/* Supplied declaration required: FUN_002ea6cc. */


unsigned int FUN_002f6bfc(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0 [88];
  unsigned char temp_v1 [20];
  
  FUN_002ea668(temp_v0);
  FUN_002ea6bc(temp_v0,*(int *)(param_2 + 0xc) + *(int *)(param_2 + 0x18),
               *(unsigned int *)(param_2 + 0x10));
  FUN_002ea6cc(temp_v0);
  FUN_002e74c4(param_3,temp_v1,0x10,0xffffffff);
  return 1;
}

} /* extern "C" */
