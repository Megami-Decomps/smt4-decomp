/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003cbb78` (_code @ 0x3cbb78, 0x15c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00229754(int *, unsigned int *);

extern int g_btlScriptUnit; /* 0x43427c */
extern unsigned int DAT_00434290; /* 0x434290 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_00229754. */
extern int FUN_002298a0(void);
extern int FUN_0027e6bc(unsigned int);
extern int FUN_003ae838(unsigned int, int);
extern int FUN_003aef88(unsigned int);


unsigned int FUN_003cbb78(int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  int temp_v3;
  
  temp_v0 = FUN_0027e6bc(DAT_00434290);
  if (0 < temp_v0) {
    return 0;
  }
  temp_v0 = 0;
  do {
    temp_v1 = FUN_003ae838(DAT_00439ca8,temp_v0);
    if (temp_v1 == 0) {
      return 0;
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 4);
  temp_v0 = FUN_003aef88(DAT_00439ca8);
  if (temp_v0 != 0) {
    if (((*param_2 & 0x1080) == 0) && (temp_v0 = FUN_002298a0(), temp_v0 != 0)) {
      return 0;
    }
    temp_v1 = *param_1;
    temp_v3 = 0;
    temp_v0 = 0;
    do {
      puVar3 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v0 * 0x288);
      temp_v2 = *puVar3;
      if ((((temp_v2 & 1) != 0) && ((temp_v2 & 0x40) == 0)) &&
         ((*(unsigned short *)((int)puVar3 + 0x1c6) & 0x10) != 0)) {
        temp_v3 = temp_v3 + 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 4);
    if (temp_v3 != 4) {
      *(unsigned int *)(temp_v1 + 0x44a0) = *(unsigned int *)(temp_v1 + 0x44a0) & 0xefffffff;
    }
    else {
      puVar3 = (unsigned int *)(temp_v1 + 0x44a0);
      if ((*puVar3 & 0x10000000) == 0) {
        *puVar3 = *puVar3 | 0x10000000;
        *(unsigned char *)(g_btlScriptUnit + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x1f;
        return 1;
      }
    }
    FUN_00229754(param_1,param_2);
    return 1;
  }
  return 0;
}

} /* extern "C" */
