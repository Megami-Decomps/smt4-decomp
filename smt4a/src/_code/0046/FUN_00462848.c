/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00462848` (_code @ 0x462848, 0x11c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00462848_arg0 fn_00462848_arg0;
struct fn_00462848_arg0 {
    unsigned char pad_0x0[0x1c];
    unsigned char field_0x1c; /* +0x1c */
    unsigned char pad_0x1d[0x3];
    undefined4 field_0x20; /* +0x20 */
    unsigned char pad_0x24[0x4];
    int field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    unsigned char field_0x30; /* +0x30 */
    unsigned char pad_0x31[0x3];
    undefined4 field_0x34; /* +0x34 */
    int field_0x38; /* +0x38 */
    void *field_0x3c; /* +0x3c */
    undefined1 field_0x40; /* +0x40 */
};

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp280; /* 0x280: local_280 */
} param_1_stack;

/* Supplied declaration required: FUN_001753d4. */
/* Supplied declaration required: FUN_00461470. */
/* Supplied declaration required: FUN_004614b4. */
/* Supplied declaration required: FUN_004619b0. */
/* Supplied declaration required: FUN_00508a6c. */
/* Supplied declaration required: nw_snd_internal_PlayerHeapDataManager_Finalize. */
/* Supplied declaration required: nw_snd_internal_PlayerHeapDataManager_Initialize. */
extern int nw_snd_internal_SoundArchiveLoader_detail_LoadWaveArchiveByWaveSoundFile(unsigned char *, unsigned int, unsigned int, void *);


void FUN_00462848(fn_00462848_arg0 *param_1)

{
/* irregular: 7 native warning(s); review required */
  unsigned char *puVar1;
  int temp_v0;
  unsigned char temp_v1 [12];
  unsigned char temp_v2 [600];
  
  FUN_00461470(temp_v1);
  nw_snd_internal_PlayerHeapDataManager_Initialize(temp_v1,*(unsigned int *)&param_1->field_0x1c);
  if ((param_1->field_0x2c == 0) && (temp_v0 = param_1->field_0x28, temp_v0 != -1)) {
    puVar1 = temp_v2;
    FUN_001753d4(puVar1,temp_v0,param_1->field_0x3c,2,0);
    if (puVar1 == (unsigned char *)0x0) {
      *(unsigned char *)((int)param_1->field_0x3c + 0x18) = 2;
      param_1->field_0x40 = 0;
      FUN_004614b4(temp_v1);
      return;
    }
    puVar1 = temp_v2;
    FUN_00508a6c(puVar1,temp_v0);
    param_1->field_0x2c = puVar1;
  }
  temp_v0 = param_1->field_0x2c;
  FUN_004619b0(temp_v0,*(unsigned int *)&param_1->field_0x30,*(unsigned int *)&param_1->field_0x1c);
  if (temp_v0 == 0) {
    temp_v0 = nw_snd_internal_SoundArchiveLoader_detail_LoadWaveArchiveByWaveSoundFile
                      (temp_v2,param_1->field_0x2c,*(unsigned int *)&param_1->field_0x30,
                       param_1->field_0x3c);
    if (temp_v0 == 0) {
      *(unsigned char *)((int)param_1->field_0x3c + 0x18) = 2;
      param_1->field_0x40 = 0;
      FUN_004614b4(temp_v1);
      return;
    }
    temp_v0 = param_1->field_0x2c;
    FUN_004619b0(temp_v0,*(unsigned int *)&param_1->field_0x30,*(unsigned int *)&param_1->field_0x1c,
                 temp_v2);
  }
  param_1->field_0x38 = temp_v0;
  param_1->field_0x34 = param_1->field_0x2c;
  *(unsigned char *)((int)param_1->field_0x3c + 0x18) = 2;
  nw_snd_internal_PlayerHeapDataManager_Finalize(temp_v1);
  param_1->field_0x40 = 1;
  FUN_004614b4(temp_v1);
  return;
}
