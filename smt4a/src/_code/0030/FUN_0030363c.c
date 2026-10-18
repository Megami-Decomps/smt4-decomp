/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0030363c` (_code @ 0x30363c, 0x52 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp10; /* 0x10: local_10 */
} param_4_stack;

extern int FUN_002e7328(int, unsigned int);
extern int FUN_002e76b6(void);
/* Supplied declaration required: FUN_002ee9ce. */
/* Supplied declaration required: FUN_002ee9da. */
/* Supplied declaration required: FUN_002eea8a. */
/* Supplied declaration required: FUN_002f4cac. */
/* Supplied declaration required: FUN_002f4cd6. */


unsigned int FUN_0030363c(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  
  temp_v2 = param_4;
  FUN_002eea8a(param_1,&temp_v2);
  temp_v0 = FUN_002e7328(param_1,temp_v2 & 0xffff);
  temp_v1 = 0;
  if (temp_v0 != 0) {
    FUN_002f4cac(param_2);
    if ((short)temp_v2 != 0) {
      FUN_002ee9ce(param_1);
      temp_v0 = FUN_002e76b6();
      FUN_002f4cd6(param_2,temp_v0 + *(int *)(param_1 + 0xc),temp_v2 & 0xffff);
      FUN_002ee9da(param_1,*(int *)(param_1 + 0xc) + (temp_v2 & 0xffff));
    }
    temp_v1 = 1;
  }
  return temp_v1;
}
