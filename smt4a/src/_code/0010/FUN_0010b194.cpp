/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010b194` (_code @ 0x10b194, 0x3e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f4424(void);
int FUN_002f4484(unsigned int **, unsigned int, unsigned int **);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_00558ce4; /* 0x558ce4 */

/* Supplied declaration required: FUN_002f4424. */
/* Supplied declaration required: FUN_002f4484. */


unsigned int *
FUN_0010b194(unsigned int *param_1,unsigned int param_2,unsigned int *param_3,unsigned int *param_4)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *temp_v2;
  unsigned int *temp_v3;
  
  *param_1 = (unsigned int)&DAT_00558ce4;
  temp_v2 = param_3;
  temp_v3 = param_4;
  temp_v0 = FUN_002f4424();
  temp_v2 = *(unsigned int **)(temp_v0 + 4);
  temp_v0 = FUN_002f4424();
  temp_v3 = *(unsigned int **)(temp_v0 + 0xc);
  while( 1 ) {
    if ((temp_v2 == temp_v3) || (temp_v2 == param_1)) break;
    temp_v2 = (unsigned int *)temp_v2[1];
  }
  temp_v1 = FUN_002f4424();
  FUN_002f4484(&temp_v3,temp_v1,&temp_v2);
  return param_1;
}

} /* extern "C" */
