/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00229754` (_code @ 0x229754, 0x13c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0023c154(int, int, int, int, unsigned int *);
int FUN_0027e3f8(int, int, int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern int DAT_0043427c; /* 0x43427c */
extern int DAT_00435d48; /* 0x435d48 */

/* Supplied declaration required: FUN_0023c154. */
extern int FUN_0027e3b8(int);
/* Supplied declaration required: FUN_0027e3f8. */
extern int FUN_003366f8(int);
extern int FUN_00338584(int);


void FUN_00229754(int *param_1,unsigned int *param_2)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = *param_1;
  if (*(int *)(temp_v0 + 0x88) == 8) {
    *(unsigned char *)(DAT_0043427c + *(int *)(temp_v0 + 0x84) * 0xf1c + 9) = 0x23;
    return;
  }
  if ((*param_2 & 0x10000) != 0) {
    if (*(short *)(temp_v0 + 0x1fc4) >= 1) {
      temp_v0 = FUN_0027e3b8(DAT_00435d48);
      if ((temp_v0 == 0) &&
         (temp_v0 = DAT_00435d48, FUN_0027e3f8(DAT_00435d48,4,(int)*(short *)(param_2[8] + 0x6e),0),
         temp_v0 != 0)) {
        *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x21;
        return;
      }
    }
  }
  else if (((*(unsigned int *)param_2[8] & 1) != 0) && ((*(unsigned int *)param_2[8] & 0x40) == 0)) {
    temp_v0 = FUN_0027e3b8(DAT_00435d48);
    if ((temp_v0 == 0) &&
       (temp_v0 = DAT_00435d48, FUN_0027e3f8(DAT_00435d48,4,(int)*(short *)(param_2[8] + 0x6e),0),
       temp_v0 != 0)) {
      *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x21;
      return;
    }
  }
  temp_v0 = FUN_00338584(*param_1);
  if (temp_v0 != 0) {
    temp_v0 = FUN_003366f8(*param_1);
    FUN_0023c154(*param_1,1,(int)*(short *)(*(int *)(*param_1 + 0x1e98) + 0x60),
                 (int)*(short *)(temp_v0 + 0x6e),param_2);
  }
  *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x23;
  return;
}

} /* extern "C" */
