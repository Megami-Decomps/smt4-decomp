/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00114a30` (_code @ 0x114a30, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00300248(int *);
int FUN_00300252(int, int *);
int FUN_003002ae(int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

extern int DAT_00594b28; /* 0x594b28 */
extern int DAT_00594b2c; /* 0x594b2c */

/* Supplied declaration required: FUN_00300248. */
/* Supplied declaration required: FUN_00300252. */
/* Supplied declaration required: FUN_003002ae. */


void FUN_00114a30(unsigned int param_1,int param_2,int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  unsigned int uStack_10;
  
  temp_v1 = param_2;
  temp_v2 = param_3;
  uStack_10 = param_4;
  if (DAT_00594b28 != 0) {
    FUN_00300248(&temp_v1);
    FUN_00300252(DAT_00594b28,&temp_v1);
    for (temp_v0 = temp_v1; temp_v2 != temp_v0; temp_v0 = temp_v0 + 0x20) {
    }
    FUN_003002ae(&temp_v1);
  }
  if (DAT_00594b2c != 0) {
    FUN_00300248(&temp_v1);
    FUN_00300252(DAT_00594b2c,&temp_v1);
    for (temp_v0 = temp_v1; temp_v2 != temp_v0; temp_v0 = temp_v0 + 0x20) {
    }
    FUN_003002ae(&temp_v1);
  }
  return;
}

} /* extern "C" */
