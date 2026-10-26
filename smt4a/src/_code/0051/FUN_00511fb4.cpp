/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00511fb4` (_code @ 0x511fb8, 0xd8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int nn_os_CriticalSection_Initialize(...);
int nn_os_LightEvent_Initialize(...);
int __aeabi_atexit(...);
int __aeabi_vec_ctor_nocookie_nodtor(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern unsigned char FUN_0042d1c0; /* 0x42d1c0 */
extern int FUN_0042d1cc(...); /* 0x42d1cc */
extern unsigned char DAT_0055b40c; /* 0x55b40c */
extern unsigned char DAT_0055b428; /* 0x55b428 */
extern unsigned int DAT_005c0b04; /* 0x5c0b04 */
extern unsigned int DAT_005c0b08; /* 0x5c0b08 */
extern unsigned char *DAT_0064602c; /* 0x64602c */
extern unsigned int DAT_00646030; /* 0x646030 */
extern unsigned int DAT_00646034; /* 0x646034 */
extern unsigned int DAT_00646038; /* 0x646038 */
extern unsigned int DAT_0064603c; /* 0x64603c */
extern unsigned int DAT_00646048; /* 0x646048 */
extern unsigned int DAT_0064604c; /* 0x64604c */
extern unsigned int DAT_00646050; /* 0x646050 */
extern unsigned int DAT_00646054; /* 0x646054 */
extern unsigned int DAT_00646058; /* 0x646058 */
extern unsigned int DAT_0064605c; /* 0x64605c */
extern unsigned char DAT_0064606d; /* 0x64606d */
extern unsigned char DAT_0064606e; /* 0x64606e */
extern unsigned int DAT_00646070; /* 0x646070 */
extern unsigned int DAT_00646074; /* 0x646074 */

/* Supplied declaration required: nn_os_CriticalSection_Initialize. */
/* Supplied declaration required: nn_os_LightEvent_Initialize. */
/* Supplied declaration required: __aeabi_atexit. */
/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_00511fb4(unsigned int *param_1)

{
/* irregular: 5 native warning(s); review required */
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(unsigned char *)(param_1 + 4) = 0;
  param_1[5] = 0;
  *(unsigned char *)(param_1 + 6) = 0;
  DAT_005c0b04 = 0;
  DAT_0064602c = &DAT_0055b40c;
  DAT_00646030 = 0;
  DAT_00646034 = 0;
  DAT_00646038 = 0;
  DAT_0064603c = 0;
  nn_os_CriticalSection_Initialize(&DAT_0064603c,FUN_0042d1cc,0x100000);
  DAT_00646048 = 0;
  DAT_0064604c = 0;
  nn_os_LightEvent_Initialize(&DAT_00646048,0);
  DAT_00646050 = 0;
  DAT_00646054 = 0;
  DAT_00646058 = 0;
  DAT_0064605c = 0;
  DAT_0064606d = 0;
  DAT_0064606e = 0;
  DAT_0064602c = &DAT_0055b428;
  DAT_00646070 = 0;
  DAT_00646074 = 0;
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_005c0b08,&FUN_0042d1c0,4,2);
  __aeabi_atexit(0,0x1f3ddc,0x100000);
  return;
}

} /* extern "C" */
