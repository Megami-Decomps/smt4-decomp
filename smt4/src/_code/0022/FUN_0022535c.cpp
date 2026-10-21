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
extern int g_btlTalkBustUp; /* 0x434210 */
extern int g_titleScene; /* 0x44ea00 */

/* Unsupported intrinsic, declaration required: CONCAT44 (PIECE). */
/* Unsupported intrinsic, declaration required: VectorSignedToFloat (CALLOTHER). */
extern int aocJobIsValid(void);
/* Supplied declaration required: FUN_002ba12c. */
/* Supplied declaration required: FUN_002c18e4. */
/* Supplied declaration required: FUN_002c198c. */
/* Supplied declaration required: FUN_002c39a4. */
extern int FUN_002c5d80(unsigned int, unsigned int);
extern int btlMainIsSecondJobValid(void);
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
  
  temp_v0 = g_btlTalkBustUp;
  if (g_btlTalkBustUp != 0) {
    FUN_002c39a4(g_titleScene);
    temp_v2 = g_titleScene;
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
      FUN_002ba12c(g_titleScene);
      temp_v7 = CONCAT44(temp_v5,(int)temp_v6);
      temp_v2 = aocJobIsValid();
      if ((temp_v2 != 0) || (temp_v2 = btlMainIsSecondJobValid(), temp_v2 != 0)) {
        temp_v5 = (float)(temp_v7 >> 0x20);
        FUN_002ba12c(g_titleScene);
        temp_v7 = (unsigned long long)(unsigned int)(int)temp_v5;
      }
      VectorSignedToFloat((int)temp_v7,(unsigned char)(in_fpscr >> 0x16) & 3);
      FUN_0032fe34(temp_v0);
    }
    temp_v0 = g_titleScene;
    piVar6 = (int *)(g_titleScene + 0x124c);
    temp_v2 = *piVar6;
    temp_v1 = piVar6[temp_v2 + 2];
    *piVar6 = temp_v2 - 1;
    if (*(char *)(temp_v0 + 0x1264) != '\0' || temp_v1 != piVar6[temp_v2 + 1]) {
      (**(romwright_code **)(temp_v0 + 0x1268))();
      *(unsigned char *)(temp_v0 + 0x1264) = 0;
    }
    FUN_002c198c(g_titleScene);
    FUN_002c18e4(g_titleScene);
  }
  return 0;
}

} /* extern "C" */
