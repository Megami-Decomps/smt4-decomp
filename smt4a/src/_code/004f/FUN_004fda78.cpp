/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fda78` (_code @ 0x4fda78, 0x9c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014aa78(void);
int FUN_004102d8(int, int, int, unsigned int);

extern int DAT_005712f0; /* 0x5712f0 */

/* Supplied declaration required: FUN_0014aa78. */
extern int FUN_003e8430(void);
/* Supplied declaration required: FUN_004102d8. */
extern short FUN_004c3a98(int, unsigned int);


int FUN_004fda78(short param_1,short param_2,unsigned int param_3,int param_4,int param_5,
                unsigned short param_6)

{
/* irregular: 2 native warning(s); review required */
  short temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = DAT_005712f0;
  FUN_004102d8(DAT_005712f0,(int)param_1,(int)param_2,param_3);
  *(unsigned char *)(temp_v1 + 4) = 8;
  *(int *)(temp_v1 + 0x28) = param_5;
  *(int *)(temp_v1 + 0x14) = param_4;
  temp_v0 = FUN_004c3a98((int)*(short *)(param_4 + 0x6a),1);
  *(short *)(temp_v1 + 0x24) = temp_v0 - 1;
  *(unsigned short *)(temp_v1 + 0x48) = param_6;
  if (param_5 != 4) {
    if (param_5 == 3) {
      FUN_0014aa78();
      temp_v2 = FUN_003e8430();
      if (temp_v2 == 0) {
        return temp_v1;
      }
    }
    *(unsigned char *)(temp_v1 + 5) = *(unsigned char *)(temp_v1 + 5) | 4;
  }
  return temp_v1;
}

} /* extern "C" */
