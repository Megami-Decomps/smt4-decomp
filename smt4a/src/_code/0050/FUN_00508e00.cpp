/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00508e00` (_code @ 0x508e00, 0xe4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00508e00_arg1 fn_00508e00_arg1;
struct fn_00508e00_arg1 {
    undefined1 field_0x0; /* +0x0 */
    undefined1 field_0x1; /* +0x1 */
    undefined1 field_0x2; /* +0x2 */
    undefined1 field_0x3; /* +0x3 */
    undefined4 field_0x4; /* +0x4 */
    undefined4 field_0x8; /* +0x8 */
    undefined4 field_0xc; /* +0xc */
    undefined4 field_0x10; /* +0x10 */
    undefined4 field_0x14; /* +0x14 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
    undefined4 field_0x28; /* +0x28 */
    undefined4 field_0x2c; /* +0x2c */
    undefined4 field_0x30; /* +0x30 */
    undefined4 field_0x34; /* +0x34 */
    undefined2 field_0x38; /* +0x38 */
    unsigned char pad_0x3a[0x2];
    undefined4 field_0x3c; /* +0x3c */
    undefined4 field_0x40; /* +0x40 */
    undefined4 field_0x44; /* +0x44 */
    undefined4 field_0x48; /* +0x48 */
};

extern unsigned char *nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(int);


unsigned int FUN_00508e00(int *param_1,fn_00508e00_arg1 *param_2)

{
  unsigned char *puVar1;
  unsigned int temp_v0;
  unsigned char temp_v1;
  
  puVar1 = (unsigned char *)
           nw_snd_internal_StreamSoundFile_InfoBlockBody_GetStreamSoundInfo(param_1[1]);
  param_2->field_0x0 = *puVar1;
  param_2->field_0x1 = puVar1[1];
  param_2->field_0x2 = puVar1[2];
  param_2->field_0x3 = puVar1[3];
  param_2->field_0x4 = *(unsigned int *)(puVar1 + 4);
  param_2->field_0x8 = *(unsigned int *)(puVar1 + 8);
  param_2->field_0xc = *(unsigned int *)(puVar1 + 0xc);
  param_2->field_0x10 = *(unsigned int *)(puVar1 + 0x10);
  param_2->field_0x14 = *(unsigned int *)(puVar1 + 0x14);
  param_2->field_0x18 = *(unsigned int *)(puVar1 + 0x18);
  param_2->field_0x1c = *(unsigned int *)(puVar1 + 0x1c);
  param_2->field_0x20 = *(unsigned int *)(puVar1 + 0x20);
  param_2->field_0x24 = *(unsigned int *)(puVar1 + 0x24);
  param_2->field_0x28 = *(unsigned int *)(puVar1 + 0x28);
  param_2->field_0x2c = *(unsigned int *)(puVar1 + 0x2c);
  temp_v0 = *(unsigned int *)(puVar1 + 0x34);
  param_2->field_0x30 = *(unsigned int *)(puVar1 + 0x30);
  param_2->field_0x34 = temp_v0;
  param_2->field_0x38 = *(unsigned short *)(puVar1 + 0x38);
  temp_v0 = *(unsigned int *)(puVar1 + 0x40);
  param_2->field_0x3c = *(unsigned int *)(puVar1 + 0x3c);
  param_2->field_0x40 = temp_v0;
  temp_v1 = *(unsigned int *)(*param_1 + 8) >= 0x2030000;
  if (temp_v1) {
    temp_v0 = *(unsigned int *)(puVar1 + 0x44);
  }
  else {
    temp_v0 = *(unsigned int *)(puVar1 + 8);
  }
  param_2->field_0x44 = temp_v0;
  if (temp_v1) {
    temp_v0 = *(unsigned int *)(puVar1 + 0x48);
  }
  else {
    temp_v0 = *(unsigned int *)(puVar1 + 0xc);
  }
  param_2->field_0x48 = temp_v0;
  return 1;
}

} /* extern "C" */
