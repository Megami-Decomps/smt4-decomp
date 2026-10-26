/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0050e788` (_code @ 0x50e798, 0xa8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(...);

extern unsigned char FUN_0013ba98; /* 0x13ba98 */
extern unsigned char DAT_00557e68; /* 0x557e68 */
extern unsigned char *DAT_005b3c5c; /* 0x5b3c5c */
extern unsigned int DAT_005b3c60; /* 0x5b3c60 */
extern unsigned int DAT_005b3c64; /* 0x5b3c64 */
extern unsigned int DAT_005b3c68; /* 0x5b3c68 */
extern unsigned int DAT_005b3c6c; /* 0x5b3c6c */
extern unsigned int DAT_005b3c70; /* 0x5b3c70 */
extern unsigned int DAT_005b3c74; /* 0x5b3c74 */
extern unsigned int DAT_00636e30; /* 0x636e30 */
extern unsigned int DAT_00636ee0; /* 0x636ee0 */
extern unsigned char *DAT_00636ee4; /* 0x636ee4 */
extern unsigned char *DAT_00636ee8; /* 0x636ee8 */
extern unsigned int DAT_00636eec; /* 0x636eec */
extern unsigned char DAT_00636f00; /* 0x636f00 */

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_0050e788(void)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  __aeabi_vec_ctor_nocookie_nodtor();
  puVar1 = &DAT_00636e30;
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_00636e30,&FUN_0013ba98,0x3c,2);
  puVar1[0x20] = 0;
  *(unsigned short *)(puVar1 + 0x21) = 0x8058;
  puVar1[0x22] = 0;
  DAT_005b3c74 = 0;
  DAT_00636ee4 = &DAT_00636f00;
  DAT_00636ee0 = 0;
  DAT_00636ee8 = &DAT_00636f00;
  DAT_00636eec = 0x80000002;
  DAT_005b3c5c = &DAT_00557e68;
  DAT_005b3c60 = 0;
  DAT_005b3c64 = 0;
  DAT_005b3c68 = 0;
  DAT_005b3c6c = 0;
  DAT_005b3c70 = 0;
  return;
}

} /* extern "C" */
