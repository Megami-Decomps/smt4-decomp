/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00471d94` (_code @ 0x471d94, 0xc4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(void);
int asdOperatorNewE(void);
int FUN_00429f38(void);
int FUN_00471468(int, int, unsigned int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int g_aocMain; /* 0x570260 */

extern int objGetFlagBit16(void);
extern int asdOperatorDeleteB(void);
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */
/* Supplied declaration required: asdOperatorNewE. */
/* Supplied declaration required: FUN_00429f38. */
extern int FUN_0046bc7c(int, unsigned int);
/* Supplied declaration required: FUN_00471468. */


void FUN_00471d94(int param_1)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  
  temp_v0 = 0;
  if (*(int *)(param_1 + 0x450) != 0) {
    temp_v0 = asdOperatorDeleteB();
    *(unsigned int *)(param_1 + 0x450) = 0;
  }
  *(unsigned int *)(param_1 + 0x448) = 0;
  FUN_00429f38();
  if (temp_v0 != 0) {
    temp_v0 = objGetFlagBit16();
    if (temp_v0 != 0) {
      temp_v0 = FUN_0046bc7c(param_1,0x34);
      *(int *)(param_1 + 0x448) = temp_v0;
      if (0 < *(int *)(param_1 + 0x448)) {
        temp_v0 = temp_v0 << 4;
        asdOperatorNewE();
        if (temp_v0 != 0) {
          __aeabi_vec_ctor_nocookie_nodtor();
        }
        *(int *)(param_1 + 0x450) = temp_v0;
        FUN_00471468(param_1,0x34,*(unsigned int *)(param_1 + 0x448),temp_v0);
        return;
      }
    }
  }
  else {
    *(unsigned int *)(g_aocMain + 0x754) = *(unsigned int *)(g_aocMain + 0x754) & 0xfffeffff;
  }
  return;
}

} /* extern "C" */
