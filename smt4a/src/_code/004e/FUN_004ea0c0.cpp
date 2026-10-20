/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ea0c0` (_code @ 0x4ea0c0, 0x138 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_004d7a70(int, int, int, int);

extern unsigned int DAT_00571148; /* 0x571148 */
extern unsigned int DAT_0057114c; /* 0x57114c */
extern unsigned int DAT_00571170; /* 0x571170 */
extern unsigned int DAT_00571174; /* 0x571174 */
extern unsigned int DAT_00571178; /* 0x571178 */
extern unsigned int DAT_0057117c; /* 0x57117c */
extern int g_btlEvent; /* 0x573898 */

extern int FUN_003eb1cc(int);
/* Supplied declaration required: FUN_004d7a70. */
extern int isEntryUsable(int);


unsigned int FUN_004ea0c0(int *param_1,unsigned int *param_2)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned int *puVar3;
  unsigned int temp_v2;
  
  if ((*param_2 & 0x10000) != 0) {
    if (*(short *)(*param_1 + 0x2000) < 1) {
      return 0;
    }
  }
  else {
    temp_v1 = *(unsigned int *)param_2[8];
    temp_v2 = ((unsigned int *)param_2[8])[1];
    if ((DAT_0057114c & temp_v2) == 0 && (DAT_00571148 & temp_v1) == 0) {
      return 0;
    }
    if ((temp_v2 & DAT_0057117c) != 0 || (DAT_00571178 & temp_v1) != 0) {
      return 0;
    }
  }
  temp_v0 = isEntryUsable(g_btlEvent);
  if (((temp_v0 == 0) && (temp_v0 = FUN_003eb1cc(*param_1), temp_v0 == 0)) &&
     ((temp_v0 = g_btlEvent, FUN_004d7a70(g_btlEvent,4,(int)*(short *)(param_2[8] + 0x6e),0),
      temp_v0 != 0 ||
      ((((temp_v0 = FUN_003eb1cc(*param_1), temp_v0 == 0 && (*(int *)(*param_1 + 0x4d6c) < 1)) &&
        (puVar3 = (unsigned int *)param_2[8],
        (*puVar3 & DAT_00571170) != 0 || (puVar3[1] & DAT_00571174) != 0)) &&
       (temp_v0 = g_btlEvent, FUN_004d7a70(g_btlEvent,10,(int)*(short *)((int)puVar3 + 0x6e),0),
       temp_v0 != 0)))))) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
