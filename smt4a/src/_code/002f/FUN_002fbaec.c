/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fbaec` (_code @ 0x2fbaec, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern unsigned char DAT_005595f0; /* 0x5595f0 */

/* Supplied declaration required: FUN_00113d14. */
extern int FUN_002f8728(unsigned int *);
extern int FUN_002fbada(unsigned int **, unsigned int *);


int FUN_002fbaec(unsigned int *param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *temp_v2;
  int temp_v3;
  
  *param_1 = (unsigned int)&DAT_005595f0;
  temp_v2 = param_3;
  temp_v3 = param_4;
  temp_v0 = FUN_002f8728(param_1 + 2);
  *(unsigned int *)(temp_v0 - 4) = 0;
  temp_v2 = (unsigned int *)**(unsigned int **)(param_2 + 0x10);
  while( 1 ) {
    temp_v3 = *(unsigned int *)(param_2 + 0x10);
    temp_v1 = FUN_002fbada(&temp_v2,(unsigned int *)&temp_v3);
    if (temp_v1 == 0) break;
    FUN_00113d14(temp_v0 - 8,temp_v2 + 2);
    temp_v2 = (unsigned int *)*temp_v2;
  }
  return temp_v0 - 8;
}
