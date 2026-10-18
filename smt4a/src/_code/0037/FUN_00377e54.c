/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00377e54` (_code @ 0x377e54, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned int DAT_0056fcc0; /* 0x56fcc0 */

/* Supplied declaration required: FUN_001aea28. */


void FUN_00377e54(int param_1,unsigned int param_2,int *param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = 0;
  while( 1 ) {
    temp_v1 = *param_3 + temp_v0 * 0x18;
    if ((*(char *)(temp_v1 + 0x8c4) != '\0') && (*(short *)(temp_v1 + 0x8c8) == param_1)) break;
    temp_v0 = temp_v0 + 1;
    if (temp_v0 >= 10) {
      return;
    }
  }
  FUN_001aea28(DAT_0056fcc0,*(unsigned int *)(*(int *)(temp_v1 + 0x8cc) + 4));
  if (*(int **)(temp_v1 + 0x8cc) != (int *)0x0) {
    (**(romwright_code **)(**(int **)(temp_v1 + 0x8cc) + 4))();
    *(unsigned int *)(temp_v1 + 0x8cc) = 0;
  }
  *(char *)(temp_v1 + 0x8c4) = '\0';
  *(unsigned short *)(temp_v1 + 0x8c6) = 0;
  *(unsigned short *)(temp_v1 + 0x8c8) = 0;
  return;
}
