/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00290af8` (_code @ 0x290af8, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);

extern unsigned int DAT_0057113c; /* 0x57113c */

/* Supplied declaration required: FUN_001aba54. */
extern short FUN_003df574(unsigned short);
extern short FUN_004bcbb4(int, unsigned short);
extern int FUN_004ee568(unsigned int);


int FUN_00290af8(unsigned short *param_1,unsigned short *param_2)

{
/* irregular: 1 native warning(s); review required */
  short temp_v0;
  short temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  
  temp_v2 = (unsigned int)*param_1;
  if ((temp_v2 != 0) && (*param_2 != 0)) {
    FUN_001aba54();
    temp_v3 = (unsigned int)*param_2;
    FUN_001aba54();
    if ((temp_v2 != 0) && (temp_v3 != 0)) {
      temp_v4 = FUN_004ee568(DAT_0057113c);
      temp_v4 = *(int *)(*(int *)(temp_v4 + 0x20) + 0x3fc);
      if (temp_v4 != 0) {
        temp_v0 = FUN_004bcbb4(temp_v4,*param_1);
        temp_v1 = FUN_004bcbb4(temp_v4,*param_2);
      }
      else {
        temp_v0 = FUN_003df574(*param_1);
        temp_v1 = FUN_003df574(*param_2);
      }
      return (int)temp_v0 - (int)temp_v1;
    }
  }
  return 0;
}

} /* extern "C" */
