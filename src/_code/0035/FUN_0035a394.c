/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0035a394` (_code @ 0x35a394, 0x68 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef int romwright_code();
extern unsigned char DAT_0044e458; /* 0x44e458 */
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

/* Supplied declaration required: FUN_0013a32c. */


void FUN_0035a394(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned char temp_v0;
  romwright_code *pcVar2;
  int temp_v1;
  
  temp_v0 = 0;
  if ((DAT_0044e459 & ~(unsigned char)DAT_0044e45a.whole) != 0) {
    temp_v1 = 0;
    do {
      pcVar2 = *(romwright_code **)(temp_v1 * 4 + 0x4c6464);
      if (pcVar2 != (romwright_code *)0x0) {
        (*pcVar2)();
      }
      temp_v1 = temp_v1 + 1;
    } while (temp_v1 < 8);
    if (DAT_0044e459 != 0) {
      FUN_0013a32c(DAT_0044e460);
      DAT_0044e459 = 0;
    }
    temp_v0 = 1;
    DAT_0044e45a.u1[0] = 1;
  }
  DAT_0044e458 = temp_v0;
  return;
}
