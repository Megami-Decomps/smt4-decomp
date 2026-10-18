/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002b5e10` (_code @ 0x2b5e10, 0x15c bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char uRam00000000; /* 0x0 */
extern unsigned char uRam00000001; /* 0x1 */
extern unsigned short uRam00000002; /* 0x2 */
extern unsigned int uRam00000004; /* 0x4 */
extern unsigned int uRam00000008; /* 0x8 */
#ifndef ROMWRIGHT_STORAGE_DAT_004d43e0_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_004d43e0_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_004d43e0_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_004d43e0_1_1_size_check[(sizeof(union romwright_storage_DAT_004d43e0_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004d43e0_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_004d43e0_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_004d43e0_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_004d43e0_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_004d43e0_1_1 DAT_004d43e0; /* 0x4d43e0 */
extern unsigned int uRam004d43e4; /* 0x4d43e4 */
extern unsigned int uRam004d43e8; /* 0x4d43e8 */

extern unsigned int FUN_002b646c(void);
/* Supplied declaration required: FUN_002bce48. */


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x002b6032) */
/* WARNING: Removing unreachable block (ram,0x002b602e) */
/* WARNING: Removing unreachable block (ram,0x002b6036) */
/* WARNING: Removing unreachable block (ram,0x002b603a) */
/* WARNING: Removing unreachable block (ram,0x002b603e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int FUN_002b5e10(int param_1)

{
/* irregular: 1 goto(s); 10 native warning(s); review required */
  unsigned int temp_v0;
  char temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char unaff_r11;
  unsigned int temp_v5;
  unsigned int temp_v6;
  char acStack_20 [12];
  
  temp_v3 = 0;
  while (temp_v1 = *(char *)(param_1 + temp_v3), temp_v1 != '\0' && temp_v1 != ':') {
    acStack_20[temp_v3] = temp_v1;
    temp_v3 = temp_v3 + 1;
    if (temp_v3 >= 8) {
      FUN_002bce48();
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  temp_v5 = 0;
  acStack_20[temp_v3] = ':';
  temp_v6 = 0;
  temp_v3 = 0;
  do {
    temp_v4 = (unsigned int)acStack_20[temp_v3];
    if (temp_v4 == 0x3a) goto LAB_002b5edc;
    temp_v0 = temp_v5 >> 0x18;
    temp_v3 = temp_v3 + 1;
    temp_v5 = temp_v4 | (temp_v5 << 8);
    temp_v6 = temp_v0 | (temp_v6 << 8) | ((int)temp_v4 >> 0x1f);
  } while (temp_v3 < 8);
  temp_v5 = 0;
  temp_v6 = 0;
LAB_002b5edc:
  if (temp_v5 == 0 && temp_v6 == 0) {
    return 0xe0e046bc;
  }
  if (uRam004d43e8 >> 8 == 0) {
    uRam00000002 = 0;
    uRam00000000 = unaff_r11;
    uRam00000001 = 0;
    uRam00000004 = DAT_004d43e0.whole;
    uRam00000008 = uRam004d43e4;
    return 0;
  }
  temp_v2 = FUN_002b646c();
  return temp_v2;
}
