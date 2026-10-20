/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002eba78` (_code @ 0x2eba78, 0x1e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001146d8(unsigned int, int);

typedef int romwright_code(...);
#ifndef ROMWRIGHT_STORAGE_s_______00594983_15_1_DEFINED
#define ROMWRIGHT_STORAGE_s_______00594983_15_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s_______00594983_15_1 {
    char whole[15];
    unsigned char u1[15];
    signed char s1[15];
};
typedef char romwright_storage_s_______00594983_15_1_size_check[(sizeof(union romwright_storage_s_______00594983_15_1) == 15) ? 1 : -1];
typedef char romwright_storage_s_______00594983_15_1_u1_width_check[(sizeof(((union romwright_storage_s_______00594983_15_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s_______00594983_15_1_s1_width_check[(sizeof(((union romwright_storage_s_______00594983_15_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s_______00594983_15_1 s_______00594983; /* 0x594983 */
extern unsigned char DAT_005949d8; /* 0x5949d8 */

/* Supplied declaration required: FUN_001146d8. */


void FUN_002eba78(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  if ((*(int * *)((unsigned char *)&DAT_005949d8 + 0x8)) != (int *)0x0) {
    (**(romwright_code **)(*(*(int * *)((unsigned char *)&DAT_005949d8 + 0x8)) + 8))();
    return;
  }
  FUN_001146d8(param_1,s_______00594983.whole[0]);
  return;
}

} /* extern "C" */
