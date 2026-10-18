/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00187638` (_code @ 0x187638, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned char LAB_0019eab0; /* 0x19eab0 */

/* Supplied declaration required: FUN_001858ec. */
/* Supplied declaration required: FUN_0019dfe4. */


unsigned int FUN_00187638(int param_1,int param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  
  temp_v0 = *(int *)(param_2 + 0x24);
  temp_v2 = param_2 + 0x2c;
  if (temp_v0 != 0x10) {
    if (temp_v0 != 1) {
      if (temp_v0 != 0x11) {
        temp_v1 = 0x100;
        FUN_001858ec(0x100,0x100,0,*(unsigned int *)(param_2 + 0x18),*(unsigned int *)(param_2 + 0x28),1
                     ,temp_v2);
      }
      else {
        temp_v1 = 0x10000;
        FUN_001858ec(0x10000,0x100,0,*(unsigned int *)(param_2 + 0x18),*(unsigned int *)(param_2 + 0x28)
                     ,0,temp_v2);
      }
    }
    else {
      temp_v1 = 0x10000;
      FUN_001858ec(0x10000,0x100,0,*(unsigned int *)(param_2 + 0x18),*(unsigned int *)(param_2 + 0x28),1
                   ,temp_v2);
    }
  }
  else {
    temp_v1 = 0x100;
    FUN_001858ec(0x100,0x100,0,*(unsigned int *)(param_2 + 0x18),*(unsigned int *)(param_2 + 0x28),0,
                 temp_v2);
  }
  if ((*(unsigned int *)(param_1 + 0x14) & 1) != 0) {
    FUN_0019dfe4(temp_v1,&LAB_0019eab0,param_1);
  }
  return temp_v1;
}
