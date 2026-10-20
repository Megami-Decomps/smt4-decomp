/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0016f864` (_code @ 0x16f864, 0x108 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(...);
int FUN_0019a300(...);
int svcSleepThread(...);

extern signed char DAT_005c0b10; /* 0x5c0b10 */
extern int DAT_005c0b14; /* 0x5c0b14 */
extern unsigned int DAT_005c0b18; /* 0x5c0b18 */
#ifndef ROMWRIGHT_STORAGE_DAT_00646078_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_00646078_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_00646078_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_00646078_1_1_size_check[(sizeof(union romwright_storage_DAT_00646078_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00646078_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_00646078_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00646078_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_00646078_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_00646078_1_1 DAT_00646078; /* 0x646078 */
extern unsigned int DAT_00646084; /* 0x646084 */
#ifndef ROMWRIGHT_STORAGE_DAT_00646088_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_00646088_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_00646088_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_00646088_1_1_size_check[(sizeof(union romwright_storage_DAT_00646088_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00646088_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_00646088_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00646088_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_00646088_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_00646088_1_1 DAT_00646088; /* 0x646088 */
extern unsigned char uRam0064608c; /* 0x64608c */
extern unsigned int DAT_00646090; /* 0x646090 */
#ifndef ROMWRIGHT_STORAGE_DAT_00646094_1_1_DEFINED
#define ROMWRIGHT_STORAGE_DAT_00646094_1_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_DAT_00646094_1_1 {
    unsigned char whole;
    unsigned char u1[1];
    signed char s1[1];
};
typedef char romwright_storage_DAT_00646094_1_1_size_check[(sizeof(union romwright_storage_DAT_00646094_1_1) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00646094_1_1_u1_width_check[(sizeof(((union romwright_storage_DAT_00646094_1_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_DAT_00646094_1_1_s1_width_check[(sizeof(((union romwright_storage_DAT_00646094_1_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_DAT_00646094_1_1 DAT_00646094; /* 0x646094 */

extern unsigned int *FUN_00147268(void);
/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: FUN_0019a300. */
/* Supplied declaration required: svcSleepThread. */
extern void nn_os_CriticalSection_Enter(unsigned int);
extern void nn_os_CriticalSection_Leave(unsigned int);


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int * FUN_0016f864(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  if (DAT_005c0b10 == '\0') {
    DAT_00646078.whole = 0;
    nn_os_CriticalSection_Initialize();
    DAT_00646084 = 0;
    DAT_00646088.whole = 0;
    uRam0064608c = 1;
    DAT_00646090 = 0;
    DAT_00646094.whole = 0;
    nn_os_CriticalSection_Initialize(&DAT_00646094.whole);
    DAT_005c0b10 = '\x01';
  }
  nn_os_CriticalSection_Enter((unsigned int)&DAT_00646078.whole);
  if (0 < DAT_005c0b14) {
    DAT_005c0b14 = DAT_005c0b14 + 1;
    nn_os_CriticalSection_Leave((unsigned int)&DAT_00646078.whole);
    return (unsigned int *)0x82067f9;
  }
  while( 1 ) {
    puVar1 = &DAT_005c0b18;
    FUN_0019a300(&DAT_005c0b18,"srv:");
    temp_v0 = (unsigned int)puVar1 >> 0x1b;
    if (((unsigned int)puVar1 & 0x80000000) != 0) {
      temp_v0 = temp_v0 - 0x20;
    }
    if (temp_v0 != 0xfffffffb) break;
    temp_v0 = ((unsigned int)puVar1 & 0x7e00000) >> 0x15;
    temp_v1 = temp_v0 == 4;
    if (temp_v1) {
      temp_v0 = (unsigned int)puVar1 & 0x3ff;
    }
    if (!temp_v1 || temp_v0 != 0x3fa) break;
    svcSleepThread(500000,0);
  }
  if (-1 < (int)puVar1) {
    puVar1 = (unsigned int *)FUN_00147268();
    DAT_005c0b14 = DAT_005c0b14 + 1;
  }
  nn_os_CriticalSection_Leave((unsigned int)&DAT_00646078.whole);
  return puVar1;
}

} /* extern "C" */
