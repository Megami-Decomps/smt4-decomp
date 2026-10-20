/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f2b30` (_code @ 0x2f2b30, 0x28 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0030ed94(void);

#ifndef ROMWRIGHT_STORAGE_s______00594975_9_1_DEFINED
#define ROMWRIGHT_STORAGE_s______00594975_9_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s______00594975_9_1 {
    char whole[9];
    unsigned char u1[9];
    signed char s1[9];
};
typedef char romwright_storage_s______00594975_9_1_size_check[(sizeof(union romwright_storage_s______00594975_9_1) == 9) ? 1 : -1];
typedef char romwright_storage_s______00594975_9_1_u1_width_check[(sizeof(((union romwright_storage_s______00594975_9_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s______00594975_9_1_s1_width_check[(sizeof(((union romwright_storage_s______00594975_9_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s______00594975_9_1 s______00594975; /* 0x594975 */

/* Supplied declaration required: FUN_0030ed94. */


unsigned int FUN_002f2b30(int param_1)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((s______00594975.whole[0] != '\0') && (temp_v0 = param_1, FUN_0030ed94(), temp_v0 != 0)) &&
     (*(char *)(param_1 + 0x131) == '\0')) {
    return 1;
  }
  return 0;
}

} /* extern "C" */
