/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d0cf4` (_code @ 0x3d0cf4, 0x120 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern int FUN_00227dc4(int, int);
extern int FUN_00229aa8(int *, unsigned int, int, int, int);
/* Supplied declaration required: FUN_0023c2b0. */
extern int FUN_0023de18(void);
/* Supplied declaration required: FUN_00282b94. */
/* Supplied declaration required: FUN_003bf08c. */


unsigned int FUN_003d0cf4(int *param_1,unsigned int param_2,int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  
  temp_v0 = FUN_00229aa8(param_1,param_2,param_4,param_4,param_4);
  if (temp_v0 == 0) {
    puVar2 = (unsigned int *)*param_1;
    FUN_00282b94(puVar2,param_3);
    if (((*puVar2 & 2) == 0) || (temp_v0 = FUN_0023de18(), temp_v0 == 0)) {
      temp_v4 = 0;
      temp_v0 = 0;
      do {
        temp_v1 = *(unsigned int *)(*(int *)(*param_1 + 0x1e98) + temp_v0 * 0x114 + 0x50);
        if ((((temp_v1 & 1) != 0 && (temp_v1 & 0x80) != 0) && temp_v0 != param_3) &&
           (temp_v2 = FUN_00227dc4(temp_v0,param_3), temp_v2 != 0)) {
          temp_v2 = *param_1;
          FUN_00282b94(temp_v2,temp_v0);
          if (((*(unsigned short *)(temp_v2 + 0x1c6) & 0x1c0) == 0) &&
             (temp_v2 = temp_v0, FUN_003bf08c(), temp_v2 != 0)) {
            temp_v3 = *(int *)(*param_1 + 0x1e98);
            FUN_0023c2b0(*param_1,4,(int)*(short *)(temp_v3 + temp_v0 * 0x114 + 0x60),
                         (int)*(short *)(temp_v3 + param_4 * 0x114 + 0x60),temp_v2);
            temp_v4 = 1;
          }
        }
        temp_v0 = temp_v0 + 1;
      } while (temp_v0 < 0x6d);
      return temp_v4;
    }
  }
  return 0;
}
