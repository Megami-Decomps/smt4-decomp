/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002fa474` (_code @ 0x2fa474, 0x66 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int FUN_002e9af4(void);
/* Supplied declaration required: FUN_002e9ec8. */
/* Supplied declaration required: FUN_002ea43c. */
/* Supplied declaration required: FUN_002f3dc4. */
/* Supplied declaration required: FUN_002f3dde. */
/* Supplied declaration required: FUN_002f4e86. */


void FUN_002fa474(int param_1,unsigned int *param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *temp_v2;
  unsigned int temp_v3;
  unsigned int temp_v4;
  unsigned char uStack_14;
  
  temp_v2 = param_2;
  temp_v3 = param_3;
  temp_v4 = param_4;
  temp_v0 = FUN_002e9af4();
  FUN_002e9ec8(temp_v0,*(unsigned int *)(param_1 + 0x68));
  if (temp_v0 != 0) {
    temp_v1 = FUN_002f4e86(param_2);
    if ((temp_v1 != 0) && (temp_v1 = FUN_002f4e86(param_1 + 200), temp_v1 != 0)) {
      temp_v2 = (unsigned int *)*param_2;
      temp_v3 = param_2[1];
      temp_v4 = param_2[2];
      FUN_002f3dc4(temp_v0,&temp_v2,temp_v4,&uStack_14);
    }
    else {
      temp_v1 = FUN_002f4e86(param_2);
      if (temp_v1 != 0) {
        temp_v2 = *(unsigned int **)(param_1 + 200);
        temp_v3 = *(unsigned int *)(param_1 + 0xcc);
        temp_v4 = *(unsigned int *)(param_1 + 0xd0);
      }
      else {
        temp_v2 = (unsigned int *)*param_2;
        temp_v3 = param_2[1];
        temp_v4 = param_2[2];
      }
      FUN_002f3dde(temp_v0,&temp_v2);
    }
  }
  FUN_002ea43c(param_1);
  return;
}
