/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bf6fc` (_code @ 0x2bf6fc, 0xac bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int textureRequestIndexedFrame(unsigned int, unsigned int, unsigned int, unsigned int, int);

/* stack frame of param_5: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp30; /* 0x30: local_30 */
} param_5_stack;

extern int g_bustupCutAnim; /* 0x43dfc0 */

/* Supplied declaration required: textureRequestIndexedFrame. */
extern int jobWorkGetFirstWord(unsigned int);
extern int jobIsValid(unsigned int);


unsigned int
FUN_002bf6fc(int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned long long temp_v4;
  
  temp_v0 = g_bustupCutAnim;
  temp_v4 = (unsigned long long)param_5;
  if (g_bustupCutAnim != 0) {
    temp_v2 = 1;
    do {
      temp_v3 = temp_v0 + temp_v2 * 4;
      temp_v1 = jobIsValid(*(unsigned int *)(temp_v3 + 0x630));
      if ((temp_v1 != 0) && (temp_v1 = jobWorkGetFirstWord(*(unsigned int *)(temp_v3 + 0x630)), temp_v1 == param_1))
      {
        textureRequestIndexedFrame(*(unsigned int *)(temp_v0 + temp_v2 * 4 + 0x630),param_2,param_3,param_4,(int)temp_v4);
        return 1;
      }
      temp_v2 = temp_v2 + 1;
    } while (temp_v2 < 4);
  }
  return 0;
}

} /* extern "C" */
