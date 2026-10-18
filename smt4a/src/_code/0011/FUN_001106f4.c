/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001106f4` (_code @ 0x1106f4, 0x72 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_1: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char DAT_005593a0; /* 0x5593a0 */

extern int FUN_002fb3b6(int *, unsigned int *);
/* Supplied declaration required: FUN_002fb444. */
/* Supplied declaration required: FUN_002fb474. */


unsigned int * FUN_001106f4(unsigned int *param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  *param_1 = (unsigned int)&DAT_005593a0;
  temp_v1 = *(int *)(param_1[5] + 8);
  while( 1 ) {
    temp_v2 = param_1[5];
    temp_v0 = FUN_002fb3b6(&temp_v1,(unsigned int *)&temp_v2);
    if (temp_v0 == 0) break;
    if (*(int **)(temp_v1 + 0x14) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v1 + 0x14) + 4))();
    }
    FUN_002fb444(&temp_v1);
  }
  temp_v1 = *(int *)(param_1[0xc] + 8);
  while( 1 ) {
    temp_v2 = param_1[0xc];
    temp_v0 = FUN_002fb3b6(&temp_v1,(unsigned int *)&temp_v2);
    if (temp_v0 == 0) break;
    if (*(int **)(temp_v1 + 0x14) != (int *)0x0) {
      (**(romwright_code **)(**(int **)(temp_v1 + 0x14) + 4))();
    }
    FUN_002fb444(&temp_v1);
  }
  param_1 = param_1 + 8;
  FUN_002fb474(param_1);
  param_1 = param_1 + -7;
  FUN_002fb474(param_1);
  return param_1 + -1;
}
