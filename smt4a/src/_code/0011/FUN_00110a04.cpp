/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00110a04` (_code @ 0x110a04, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00123f1e(unsigned char [32], unsigned char [8]);
int FUN_002f8728(unsigned char [24]);
int FUN_002f8760(unsigned char [24]);
int FUN_002fbac6(unsigned char [24], unsigned int *);
int FUN_002fbaec(...);
int FUN_002fbb38(unsigned int, unsigned char [24]);
int FUN_002fbb44(...);

/* stack frame of param_3: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_3_stack;

/* Supplied declaration required: FUN_00123f1e. */
/* Supplied declaration required: FUN_002f8728. */
/* Supplied declaration required: FUN_002f8760. */
/* Supplied declaration required: FUN_002fbac6. */
extern int wordRefsDiffer_002fbada(unsigned int **, unsigned int *);
/* Supplied declaration required: FUN_002fbaec. */
/* Supplied declaration required: FUN_002fbb38. */
/* Supplied declaration required: FUN_002fbb44. */


void FUN_00110a04(unsigned int param_1,int param_2,unsigned int param_3)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1 [8];
  unsigned char temp_v2 [24];
  unsigned char temp_v3 [24];
  unsigned char temp_v4 [32];
  unsigned int *temp_v5;
  unsigned int temp_v6 [2];
  
  temp_v5 = (unsigned int *)**(unsigned int **)(param_2 + 0x44);
  FUN_002f8728(temp_v3);
  while( 1 ) {
    temp_v6[0] = *(unsigned int *)(param_2 + 0x44);
    temp_v0 = wordRefsDiffer_002fbada(&temp_v5,temp_v6);
    if (temp_v0 == 0) break;
    FUN_002fbac6(temp_v3,temp_v5 + 2);
    temp_v5 = (unsigned int *)*temp_v5;
  }
  FUN_002fbaec(temp_v4,temp_v3);
  FUN_002fbaec(temp_v1,param_3);
  FUN_00123f1e(temp_v4,temp_v1);
  FUN_002fbb38(param_3,temp_v2);
  FUN_002fbb44(temp_v1);
  FUN_002fbb44(temp_v4);
  FUN_002f8760(temp_v3);
  return;
}

} /* extern "C" */
