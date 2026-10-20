/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00105e0c` (_code @ 0x105e0c, 0x78 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ecb32(int);
int FUN_002ecccc(int, int);
int FUN_002ecda8(int, int);
int FUN_002ecdcc(int, int *);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_4_stack;

extern int operatorNew(unsigned int);
/* Supplied declaration required: FUN_002ecb32. */
/* Supplied declaration required: FUN_002ecccc. */
extern int FUN_002ecd54(void);
/* Supplied declaration required: FUN_002ecda8. */
/* Supplied declaration required: FUN_002ecdcc. */


void FUN_00105e0c(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  unsigned int uStack_18;
  
  if (*(char *)(param_1 + 0x68) != '\0') {
    temp_v3 = param_2;
    temp_v4 = param_3;
    uStack_18 = param_4;
    FUN_002ecccc(param_1 + 4,param_2 + 1);
    temp_v4 = param_1 + 0x10;
    FUN_002ecccc(temp_v4,param_2 + 1);
    for (temp_v2 = 0; temp_v2 < param_2; temp_v2 = temp_v2 + 1) {
      temp_v0 = operatorNew(0x230);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ecd54();
      }
      FUN_002ecda8(temp_v1,0);
      temp_v3 = temp_v1;
      FUN_002ecdcc(param_1 + 4,&temp_v3);
      temp_v0 = operatorNew(0x230);
      temp_v1 = 0;
      if (temp_v0 != 0) {
        temp_v1 = FUN_002ecd54();
      }
      FUN_002ecda8(temp_v1,0);
      temp_v3 = temp_v1;
      FUN_002ecdcc(temp_v4,&temp_v3);
    }
    FUN_002ecb32(param_1);
  }
  return;
}

} /* extern "C" */
