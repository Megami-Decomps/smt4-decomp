/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cfe24` (_code @ 0x2cfe24, 0x184 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_4_stack;

/* Supplied declaration required: FUN_0019931c. */
/* Supplied declaration required: FUN_0028d1d4. */
extern int FUN_002934d4(void);
/* Supplied declaration required: FUN_00293c98. */
/* Supplied declaration required: FUN_002983dc. */
/* Supplied declaration required: FUN_0029f10c. */
/* Supplied declaration required: FUN_002af854. */
/* Supplied declaration required: FUN_002b8b78. */
extern int FUN_002b8ccc(void);
/* Supplied declaration required: FUN_002bf030. */


void FUN_002cfe24(int param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4)

{
/* irregular: 8 native warning(s); review required */
  int temp_v0;
  
  *(unsigned char *)(param_1 + 0x307d) = param_3;
  *(char *)(param_1 + 0x307e) = (char)param_4;
  *(unsigned int *)(param_1 + 0x305c) = param_2;
  FUN_0019931c();
  if (*(char *)(param_1 + 0x3080) == '\0') {
    temp_v0 = 0;
    do {
      FUN_002af854(param_1 + temp_v0 * 0x8c + 0xe58,0);
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 6);
    if (*(char *)(param_1 + 0x3080) == '\0') {
      FUN_00293c98();
      temp_v0 = FUN_002934d4();
      if ((temp_v0 == 0) && (temp_v0 = FUN_00293c98(), (*(unsigned int *)(temp_v0 + 0x44a0) & 0x200) == 0)) {
        if (*(int *)(param_1 + 0x3048) == 0x17) {
          FUN_0028d1d4(param_1,*(unsigned int *)(param_1 + 0x305c),param_4);
          return;
        }
        FUN_002bf030(param_1 + 0x20,0);
        temp_v0 = 0;
        do {
          FUN_002bf030(param_1 + temp_v0 * 0x8c + 0x138,0);
          temp_v0 = temp_v0 + 1;
        } while (temp_v0 < 8);
        *(unsigned int *)(param_1 + 0x3054) = 0x11;
        FUN_002983dc(param_1,0x10,1);
        return;
      }
      FUN_0029f10c(0,0x323232ff);
      FUN_002983dc(param_1,0x28,1);
      temp_v0 = FUN_002b8ccc();
      if (temp_v0 != 0x3d) {
        FUN_00293c98();
        temp_v0 = FUN_002934d4();
        if (temp_v0 != 0) {
          FUN_002b8b78(0x3d);
          return;
        }
      }
      return;
    }
  }
  FUN_002983dc(param_1,0x2a,1);
  return;
}
