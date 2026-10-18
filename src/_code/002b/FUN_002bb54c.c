/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bb54c` (_code @ 0x2bb54c, 0x62 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0044e459; /* 0x44e459 */
#ifndef ROMWRIGHT_STORAGE_DAT_0044e45a_2_2_DEFINED
#define ROMWRIGHT_STORAGE_DAT_0044e45a_2_2_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_0044e45a_2_2 {
    unsigned short whole;
    unsigned char u1[2];
    signed char s1[2];
    unsigned short u2[1];
    short s2[1];
};
typedef char romwright_storage_DAT_0044e45a_2_2_size_check[(sizeof(union romwright_storage_DAT_0044e45a_2_2) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_u1_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_s1_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->s1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_u2_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->u2[0]) == 2) ? 1 : -1];
typedef char romwright_storage_DAT_0044e45a_2_2_s2_width_check[(sizeof(((union romwright_storage_DAT_0044e45a_2_2 *)0)->s2[0]) == 2) ? 1 : -1];
#endif
extern union romwright_storage_DAT_0044e45a_2_2 DAT_0044e45a; /* 0x44e45a */
extern unsigned int DAT_0044e460; /* 0x44e460 */

/* Supplied declaration required: FUN_00139c9c. */


/* WARNING: Control flow encountered bad instruction data */

void FUN_002bb54c(void)

{
/* irregular: 3 native warning(s); review required */
  romwright_code *pcVar1;
  int temp_v0;
  
  if ((DAT_0044e459 & ~(unsigned char)DAT_0044e45a.whole) == 0) {
    DAT_0044e45a.whole = 0;
    return;
  }
  temp_v0 = 0;
  do {
    pcVar1 = *(romwright_code **)(temp_v0 * 4 + 0x4c6464);
    if (pcVar1 != (romwright_code *)0x0) {
      (*pcVar1)();
    }
    temp_v0 = temp_v0 + 1;
  } while (temp_v0 < 8);
  if (DAT_0044e459 != 0) {
    FUN_00139c9c(DAT_0044e460);
    DAT_0044e459 = 0;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}
