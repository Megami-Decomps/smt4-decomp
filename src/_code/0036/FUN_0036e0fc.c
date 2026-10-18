/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0036e0fc` (_code @ 0x36e0fc, 0xf8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
/* stack frame of param_2: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned int FUN_002378c4(void);
extern unsigned int FUN_0036e1f4(int, int *);
extern unsigned int FUN_0036e390(int, int *);


unsigned int FUN_0036e0fc(int param_1,int *param_2)

{
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  int temp_v2;
  unsigned char *temp_v3;
  int *temp_v4;
  
  temp_v0 = FUN_002378c4();
  if ((temp_v0 & 0x80000000) == 0) {
    puVar2 = (unsigned char *)(**(romwright_code **)(*param_2 + 8))(param_2,0x10,4);
    temp_v2 = 0x10;
    puVar3 = puVar2;
    do {
      temp_v2 = temp_v2 - 1;
      *puVar3 = 0;
      puVar3 = puVar3 + 1;
    } while (temp_v2 != 0);
    if (puVar2 == (unsigned char *)0x0) {
      temp_v0 = temp_v0 | 0x80000000;
    }
    else {
      puVar4 = (unsigned int *)(param_1 + 0x150);
      temp_v3 = puVar2;
      temp_v4 = param_2;
      if ((unsigned char **)puVar4 != &temp_v3) {
        temp_v3 = (unsigned char *)*puVar4;
        temp_v4 = *(int **)(param_1 + 0x154);
        *puVar4 = (unsigned int)puVar2;
        *(int **)(param_1 + 0x154) = param_2;
      }
      if (temp_v3 != (unsigned char *)0x0) {
        (**(romwright_code **)(*temp_v4 + 0xc))(temp_v4,temp_v3);
      }
    }
    if (-1 < (int)temp_v0) {
      temp_v1 = FUN_0036e390(param_1,param_2);
      temp_v0 = temp_v1 | temp_v0;
      if (-1 < (int)temp_v0) {
        temp_v1 = FUN_0036e1f4(param_1,param_2);
        temp_v0 = temp_v1 | temp_v0;
      }
    }
  }
  return temp_v0;
}
