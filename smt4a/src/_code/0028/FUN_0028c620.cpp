/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028c620` (_code @ 0x28c620, 0x140 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_002c7bb0(...);
int FUN_002ccde8(int, unsigned short [2], short [2]);

/* stack frame of param_1: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
    unsigned short sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001aba54. */
extern int FUN_002a4878(int);
/* Supplied declaration required: FUN_002c7bb0. */
/* Supplied declaration required: FUN_002ccde8. */


unsigned int FUN_0028c620(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  short temp_v2 [2];
  unsigned short temp_v3 [2];
  
  temp_v3[0] = 0;
  temp_v2[0] = 0;
  FUN_002ccde8(param_1,temp_v3,temp_v2);
  temp_v0 = FUN_002a4878(param_1 + 0x3bdc);
  puVar3 = (unsigned int *)(param_1 + 0x3890);
  if (temp_v0 != 0) {
    temp_v1 = FUN_001ab888();
    FUN_002c7bb0(*puVar3 - 1,(int)*(char *)(temp_v1 + temp_v0 + 0x1c9f),(int)temp_v2[0],
                 param_1 + temp_v0 * 4 + 0x3c88);
    temp_v1 = FUN_001ab888();
    if (*(char *)(temp_v1 + temp_v0 + 0x1c9f) < '\0') {
      temp_v0 = (int)temp_v2[0];
      FUN_001aba54();
      if ((((temp_v0 != 0) && ((*(unsigned int *)(temp_v0 + 0x28) & 0x1ff) >> 5 == 2)) &&
          (*(char *)(temp_v0 + 0x23) == '\x03')) ||
         (*(short *)(temp_v0 + 0x20) == 0x8b || *(short *)(temp_v0 + 0x20) == 0x136)) {
        return 0;
      }
    }
  }
  else {
    FUN_002c7bb0(*puVar3 - 1,0xffffffff,(int)temp_v2[0],param_1 + 0x3c88);
  }
  temp_v0 = (int)temp_v2[0];
  FUN_001aba54();
  if ((((*(unsigned int *)(temp_v0 + 0x3c) & 0x600) != 0) && (*puVar3 < 4)) &&
     (*(int *)(param_1 + 0x3dac) < 0)) {
    *(int *)(param_1 + *puVar3 * 4 + 0x3c88) = *(int *)(param_1 + 0x3dac);
  }
  return 1;
}

} /* extern "C" */
