/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003ec854` (_code @ 0x3ec860, 0xcc bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int __aeabi_vec_ctor_nocookie_nodtor(unsigned int *, unsigned char *, int, int);

extern unsigned char LAB_001071c8; /* 0x1071c8 */
extern unsigned char LAB_0034066c; /* 0x34066c */
extern unsigned char DAT_004209c4; /* 0x4209c4 */
extern unsigned char *DAT_00464b58; /* 0x464b58 */
extern unsigned int DAT_00464b5c; /* 0x464b5c */
extern unsigned int DAT_00464b60; /* 0x464b60 */
extern unsigned int DAT_00464b64; /* 0x464b64 */
extern unsigned int DAT_00464b68; /* 0x464b68 */
extern unsigned int DAT_00464b6c; /* 0x464b6c */
extern unsigned int DAT_00464b70; /* 0x464b70 */
extern unsigned int DAT_00464bd0; /* 0x464bd0 */
extern unsigned int DAT_00464bd4; /* 0x464bd4 */
extern unsigned int g_asdLightCount; /* 0x4dad80 */
extern unsigned int DAT_004dadb0; /* 0x4dadb0 */
extern unsigned int DAT_004dae60; /* 0x4dae60 */
extern unsigned char *DAT_004dae64; /* 0x4dae64 */
extern unsigned char *DAT_004dae68; /* 0x4dae68 */
extern unsigned int DAT_004dae6c; /* 0x4dae6c */
extern unsigned char DAT_004dae80; /* 0x4dae80 */

/* Supplied declaration required: __aeabi_vec_ctor_nocookie_nodtor. */


void FUN_003ec854(unsigned int param_1,unsigned int param_2,int param_3)

{
/* irregular: 1 native warning(s); review required */
  unsigned int *puVar1;
  
  *(unsigned int *)(param_3 + 0xd8) = param_1;
  *(unsigned int *)(param_3 + 0xdc) = param_2;
  DAT_00464bd0 = 0;
  DAT_00464bd4 = 0;
  __aeabi_vec_ctor_nocookie_nodtor(&g_asdLightCount,&LAB_0034066c,0x18,2);
  puVar1 = &DAT_004dadb0;
  __aeabi_vec_ctor_nocookie_nodtor(&DAT_004dadb0,&LAB_001071c8,0x3c,2);
  puVar1[0x20] = 0;
  *(unsigned short *)(puVar1 + 0x21) = 0x8058;
  puVar1[0x22] = 0;
  DAT_00464b70 = 0;
  DAT_004dae60 = 0;
  DAT_004dae64 = &DAT_004dae80;
  DAT_004dae68 = &DAT_004dae80;
  DAT_004dae6c = 0x80000002;
  DAT_00464b58 = &DAT_004209c4;
  DAT_00464b5c = 0;
  DAT_00464b60 = 0;
  DAT_00464b64 = 0;
  DAT_00464b68 = 0;
  DAT_00464b6c = 0;
  return;
}

} /* extern "C" */
