/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028d090` (_code @ 0x28d090, 0x13c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 2 slot(s), 4 byte(s) */
typedef struct {
    unsigned short sp14; /* 0x14: local_14 */
    unsigned short sp18; /* 0x18: local_18 */
} param_1_stack;

/* Supplied declaration required: FUN_002623ec. */
/* Supplied declaration required: FUN_0028cde4. */
extern int FUN_0029eba8(int);
extern int FUN_002a8a08(void);
/* Supplied declaration required: FUN_002ae3f0. */


unsigned int FUN_0028d090(int param_1)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  short temp_v2 [2];
  unsigned short temp_v3 [2];
  
  temp_v3[0] = 0;
  temp_v2[0] = 0;
  FUN_0028cde4(param_1,temp_v3,temp_v2);
  temp_v0 = FUN_0029eba8(param_1 + 0x33a8);
  if (temp_v0 != 0) {
    temp_v1 = FUN_002a8a08();
    FUN_002623ec(*(int *)(param_1 + 0x305c) - 1,(int)*(char *)(temp_v1 + temp_v0 + 0x9107),
                 (int)temp_v2[0],param_1 + temp_v0 * 4 + 0x3460);
    temp_v1 = FUN_002a8a08();
    if (*(char *)(temp_v1 + temp_v0 + 0x9107) < '\0') {
      temp_v0 = (int)temp_v2[0];
      FUN_002ae3f0();
      if ((((temp_v0 != 0) && ((*(unsigned int *)(temp_v0 + 0x28) & 0x1ff) >> 5 == 2)) &&
          (*(char *)(temp_v0 + 0x23) == '\x03')) ||
         (*(short *)(temp_v0 + 0x20) == 0x8b || *(short *)(temp_v0 + 0x20) == 0x136)) {
        return 0;
      }
    }
  }
  else {
    FUN_002623ec(*(int *)(param_1 + 0x305c) - 1,0xffffffff,(int)temp_v2[0],param_1 + 0x3460);
  }
  temp_v0 = (int)temp_v2[0];
  FUN_002ae3f0();
  if ((((*(unsigned int *)(temp_v0 + 0x38) & 0x600) != 0) && (*(unsigned int *)(param_1 + 0x305c) < 4)) &&
     (*(int *)(param_1 + 0x3504) < 0)) {
    *(int *)(param_1 + *(unsigned int *)(param_1 + 0x305c) * 4 + 0x3460) = *(int *)(param_1 + 0x3504);
  }
  return 1;
}
