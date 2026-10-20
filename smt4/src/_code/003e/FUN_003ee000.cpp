/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ee000` (_code @ 0x3ee000, 0x44 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned char *, unsigned char *, int, int);

typedef int romwright_code(...);
/* stack frame of param_3: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_3_stack;

extern unsigned char LAB_0033b614; /* 0x33b614 */
extern unsigned int DAT_00447a40; /* 0x447a40 */
extern unsigned int DAT_00447a44; /* 0x447a44 */
extern unsigned char DAT_004a1264; /* 0x4a1264 */

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


unsigned int FUN_003ee000(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  unsigned char temp_v2;
  
  *(unsigned int *)(param_3 + 0x10) = param_1;
  *(unsigned int *)(param_3 + 0x14) = param_2;
  DAT_00447a40 = 0;
  DAT_00447a44 = 0;
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_004a1264,&LAB_0033b614,0x178,0xa0);
  temp_v0 = 0xa0;
  temp_v1 = 0x4afd64;
  while (temp_v2 = temp_v0 != 0, temp_v0 = temp_v0 - 1, temp_v2) {
    (*(romwright_code *)0x3494ec)(temp_v1);
    temp_v1 = temp_v1 + 0x8c;
  }
  return 0x4afd64;
}

} /* extern "C" */
