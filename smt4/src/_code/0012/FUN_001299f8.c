/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001299f8` (_code @ 0x1299f8, 0xf0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_00431c40; /* 0x431c40 */
extern unsigned int DAT_00431c44; /* 0x431c44 */
extern unsigned int DAT_00431c48; /* 0x431c48 */
extern unsigned int DAT_00431c6c; /* 0x431c6c */
extern unsigned int DAT_00431c70; /* 0x431c70 */
extern unsigned int DAT_00431c74; /* 0x431c74 */
extern unsigned int DAT_00431c78; /* 0x431c78 */
extern unsigned int DAT_00431c7c; /* 0x431c7c */
extern unsigned int DAT_00431c80; /* 0x431c80 */
extern unsigned int DAT_00431c84; /* 0x431c84 */
extern unsigned char DAT_00431c88; /* 0x431c88 */
extern unsigned int DAT_00431c8c; /* 0x431c8c */
extern unsigned char DAT_00431c90; /* 0x431c90 */
extern unsigned int DAT_00431c98; /* 0x431c98 */
extern unsigned int DAT_00431c9c; /* 0x431c9c */
extern unsigned int DAT_00431ca4; /* 0x431ca4 */
extern unsigned int DAT_00431ca8; /* 0x431ca8 */
extern unsigned int DAT_00431cac; /* 0x431cac */
extern unsigned char DAT_00431cb0; /* 0x431cb0 */
extern signed char DAT_00471a70; /* 0x471a70 */
extern signed char DAT_00471a72; /* 0x471a72 */
#ifndef ROMWRIGHT_STORAGE_s_______00471a73_15_1_DEFINED
#define ROMWRIGHT_STORAGE_s_______00471a73_15_1_DEFINED
/* Storage views; not a recovered source structure. */
union romwright_storage_s_______00471a73_15_1 {
    char whole[15];
    unsigned char u1[15];
    signed char s1[15];
};
typedef char romwright_storage_s_______00471a73_15_1_size_check[(sizeof(union romwright_storage_s_______00471a73_15_1) == 15) ? 1 : -1];
typedef char romwright_storage_s_______00471a73_15_1_u1_width_check[(sizeof(((union romwright_storage_s_______00471a73_15_1 *)0)->u1[0]) == 1) ? 1 : -1];
typedef char romwright_storage_s_______00471a73_15_1_s1_width_check[(sizeof(((union romwright_storage_s_______00471a73_15_1 *)0)->s1[0]) == 1) ? 1 : -1];
#endif
extern union romwright_storage_s_______00471a73_15_1 s_______00471a73; /* 0x471a73 */
extern unsigned int DAT_00471a84; /* 0x471a84 */
extern unsigned int *DAT_00471a8c; /* 0x471a8c */
extern unsigned int DAT_004e6c5c; /* 0x4e6c5c */

/* Supplied declaration required: FUN_0013b218. */
/* Supplied declaration required: FUN_002c1364. */
/* Supplied declaration required: FUN_002c1398. */
extern unsigned int FUN_002c30c4(void);
/* Supplied declaration required: nn_gxlow_CTR_Gpu_AcquireRight. */
/* Supplied declaration required: nn_os_CriticalSection_Enter. */
/* Supplied declaration required: nn_os_CriticalSection_Leave. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_001299f8(void)

{
/* irregular: 7 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  
  nn_os_CriticalSection_Enter(&DAT_004e6c5c);
  if (DAT_00471a70 != '\0') {
    nn_os_CriticalSection_Leave(&DAT_004e6c5c);
    return;
  }
  DAT_00471a70 = 1;
  if (s_______00471a73.whole[0] == '\0') {
    FUN_002c1398();
    s_______00471a73.whole[0] = '\x01';
  }
  temp_v0 = (*(unsigned int *)&s_______00471a73.u1[1]);
  temp_v1 = FUN_002c30c4();
  FUN_002c1364(s_______00471a73.whole + 0xd,temp_v0,temp_v1,0);
  DAT_00471a84 = ram0x00471a80.whole;
  nn_gxlow_CTR_Gpu_AcquireRight(&DAT_00471a84,0xffff8001,(int)DAT_00471a72);
  DAT_00431c40 = 0;
  DAT_00431c48 = 0xffffffff;
  DAT_00431c44 = 0;
  DAT_00431c6c = 0;
  DAT_00431c70 = 0;
  DAT_00431c74 = 0;
  DAT_00431c78 = 0;
  DAT_00431c7c = 0;
  DAT_00431c80 = 0;
  DAT_00431c84 = 0;
  DAT_00431c88 = 0;
  DAT_00431c8c = 0;
  DAT_00431c90 = 0;
  DAT_00431c98 = 0;
  DAT_00431c9c = 0;
  DAT_00431ca4 = 0;
  DAT_00431ca8 = 0;
  DAT_00431cac = 0;
  DAT_00431cb0 = 1;
  DAT_00471a8c = &DAT_00431c40;
  FUN_0013b218();
  nn_os_CriticalSection_Leave(&DAT_004e6c5c);
  return;
}
