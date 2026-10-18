/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0010c936` (_code @ 0x10c936, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 2 byte(s) */
typedef struct {
    unsigned char sp18; /* 0x18: local_18 */
    unsigned char sp1C; /* 0x1c: local_1c */
} param_2_stack;

/* Supplied declaration required: FUN_001221e4. */
/* Supplied declaration required: FUN_002e9afe. */
/* Supplied declaration required: FUN_002ea6fc. */


void FUN_0010c936(unsigned int param_1,int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int *piVar2;
  unsigned char temp_v1 [12];
  unsigned char temp_v2 [4];
  unsigned char temp_v3 [8];
  
  FUN_001221e4();
  temp_v2[0] = 0;
  temp_v0 = FUN_002ea6fc(param_1,temp_v2);
  if ((temp_v0 == 0) && (piVar2 = *(int **)(param_2 + 0x90), piVar2 != (int *)0x0)) {
    (**(romwright_code **)(*piVar2 + 0x5c))(temp_v1,piVar2,*(unsigned int *)(param_2 + 0x70));
    FUN_002e9afe(param_1,temp_v1);
    temp_v3[0] = 0;
    FUN_002ea6fc(param_1,temp_v3);
  }
  return;
}
