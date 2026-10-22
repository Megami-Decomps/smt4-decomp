/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00385578` (_code @ 0x385578, 0x174 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002d1f40(int, int, int);
int lmapClearExtraFlag(void);
int FUN_003d2158(int, int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
    unsigned int sp40; /* 0x40: local_40 */
} void_stack;

extern int *g_lmapScene; /* 0x581288 */

extern int FUN_00184964(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002d1f40. */
/* Supplied declaration required: lmapClearExtraFlag. */
extern int sysPlayVoice(unsigned int);
/* Supplied declaration required: FUN_003d2158. */


void FUN_00385578(void)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int *piVar2;
  int temp_v0;
  int temp_v1 [4];
  unsigned int uStack_30;
  unsigned int uStack_2c;
  int temp_v2 [4];
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  piVar1 = g_lmapScene;
  temp_v1[0] = 0x960;
  temp_v1[1] = 900;
  temp_v1[2] = 0x960;
  temp_v1[3] = 0x4b0;
  uStack_30 = 0x5dc;
  uStack_2c = 0x4b0;
  temp_v2[0] = 0x5a;
  temp_v2[1] = 0x5a;
  temp_v2[2] = 0x5a;
  temp_v2[3] = 0x5a;
  uStack_18 = 0x5a;
  uStack_14 = 0x5a;
  temp_v0 = g_lmapScene[0xa2];
  if (temp_v0 != 0) {
    if (temp_v0 != 1) {
      if (temp_v0 != 2) {
        if (temp_v0 == 3) {
          if ((*g_lmapScene != 1) && (*g_lmapScene != 3)) {
            lmapClearExtraFlag();
            temp_v0 = g_lmapScene[0xa3];
          }
          else {
            temp_v0 = g_lmapScene[0xa1];
            piVar2 = g_lmapScene + 0xa0;
            g_lmapScene[0xa1] = temp_v0 + 1;
            if (temp_v0 + 1 < *piVar2) {
              return;
            }
            temp_v0 = piVar1[0xa3];
          }
          if (temp_v0 != 0) {
            FUN_003d2158(temp_v0,0);
          }
          piVar1 = g_lmapScene;
          g_lmapScene[0xa1] = 0;
          piVar1[0xa2] = 0;
          return;
        }
      }
      else if (((*g_lmapScene == 1) || (*g_lmapScene == 3)) &&
              (temp_v0 = g_lmapScene[0xa1], piVar1 = g_lmapScene + 0xa0,
              g_lmapScene[0xa1] = temp_v0 + 1, *piVar1 <= temp_v0 + 1)) {
        temp_v0 = FUN_00184964(0,5);
        temp_v0 = temp_v2[temp_v0];
        g_lmapScene[0xa0] = temp_v0;
        FUN_002d1f40(temp_v0,0x28,10);
        temp_v0 = sysPlayVoice(0x100009e);
        piVar1 = g_lmapScene;
        g_lmapScene[0xa1] = 0;
        piVar1[0xa2] = 3;
        piVar1[0xa3] = temp_v0;
        return;
      }
    }
    else {
      temp_v0 = FUN_00184964(0,5);
      piVar1 = g_lmapScene;
      temp_v0 = temp_v1[temp_v0];
      g_lmapScene[0xa2] = 2;
      piVar1[0xa0] = temp_v0;
      piVar1[0xa1] = 0;
    }
  }
  return;
}

} /* extern "C" */
