/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0022535c` (_code @ 0x22535c, 0x14c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int CONCAT44(double, int);
int FUN_002ba12c(int);
int FUN_002c18e4(int);
int FUN_002c198c(int);
int FUN_002c39a4(int);
int FUN_0032fe34(int);
int VectorSignedToFloat(int, int);

typedef int romwright_code(...);
extern int DAT_00434210; /* 0x434210 */
extern int DAT_0044ea00; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int FUN_002b8804(void);
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int FUN_002e3894(void);
/* Supplied declaration required: FUN_0032fe34. */


unsigned int FUN_0022535c(void)

{
/* irregular: irregular input(s): in_fpscr; 7 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  int temp_v4;
  int *piVar6;
  unsigned int in_fpscr;
  float temp_v5;
  float temp_v6;
  unsigned long long temp_v7;
  
  temp_v0 = DAT_00434210;
  if (DAT_00434210 != 0) {
    FUN_002c39a4(DAT_0044ea00);
    temp_v2 = DAT_0044ea00;
    temp_v1 = FUN_002c5d80(1,0);
    piVar6 = (int *)(temp_v2 + 0x124c);
    temp_v3 = *piVar6;
    temp_v4 = piVar6[temp_v3 + 2];
    *piVar6 = temp_v3 + 1;
    piVar6[temp_v3 + 3] = temp_v1;
    if (*(char *)(temp_v2 + 0x1264) != '\0' || temp_v4 != temp_v1) {
      (**(romwright_code **)(temp_v2 + 0x1268))();
      *(unsigned char *)(temp_v2 + 0x1264) = 0;
    }
    if ((*(char *)(temp_v0 + 0x2f4) != '\0') && (*(int *)(temp_v0 + 0x2e8) == 2)) {
      temp_v6 = 0.3f;
      temp_v5 = temp_v6;
      FUN_002ba12c(DAT_0044ea00);
      temp_v7 = CONCAT44(temp_v5,(int)temp_v6);
      temp_v2 = FUN_002b8804();
      if ((temp_v2 != 0) || (temp_v2 = FUN_002e3894(), temp_v2 != 0)) {
        temp_v5 = (float)(temp_v7 >> 0x20);
        FUN_002ba12c(DAT_0044ea00);
        temp_v7 = (unsigned long long)(unsigned int)(int)temp_v5;
      }
      VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0032fe34(temp_v0);
    }
    temp_v0 = DAT_0044ea00;
    piVar6 = (int *)(DAT_0044ea00 + 0x124c);
    temp_v2 = *piVar6;
    temp_v1 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v1 != piVar6[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002c198c(DAT_0044ea00);
    FUN_002c18e4(DAT_0044ea00);
  }
  return 0;
}

} /* extern "C" */
