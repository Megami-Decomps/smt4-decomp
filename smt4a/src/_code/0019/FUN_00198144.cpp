/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00198144` (_code @ 0x198144, 0x94 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

extern int FUN_001aae08(int);


int FUN_00198144(unsigned int param_1,int param_2)

{
/* irregular: 1 goto(s) */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  
  temp_v1 = 0;
  if (*(int *)(param_2 + 0x10) == 0) {
    return 1;
  }
  do {
    temp_v0 = FUN_001aae08(*(int *)(param_2 + 0xc) + temp_v1 * 0x40);
    if (temp_v0 != 0) {
      temp_v0 = 1;
      goto LAB_001981b4;
    }
    do {
      temp_v0 = 0;
LAB_001981b4:
      puVar2 = (unsigned int *)(*(int *)(param_2 + 0xc) + temp_v1 * 0x40);
      temp_v1 = temp_v1 + 1;
      *puVar2 = *puVar2 | 2;
      if (*(unsigned int *)(param_2 + 0x10) <= temp_v1) {
        return temp_v0;
      }
    } while (temp_v0 == 0);
  } while( 1 );
}

} /* extern "C" */
