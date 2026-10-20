/* NON_MATCHING: romwright 0.5.0 decompilation of `nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize` (_code @ 0x178580, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_00178580_arg0 fn_00178580_arg0;
struct fn_00178580_arg0 {
    unsigned char pad_0x0[0x14];
    ushort field_0x14; /* +0x14 */
    unsigned char pad_0x16[0xa];
    unsigned char field_0x20; /* +0x20 */
    unsigned char pad_0x21[0xb];
    unsigned char field_0x2c; /* +0x2c */
    unsigned char pad_0x2d[0x7];
    ushort field_0x34; /* +0x34 */
    unsigned char pad_0x36[0x2a];
    ushort field_0x60; /* +0x60 */
};


unsigned int nw_snd_internal_SoundArchiveFile_FileHeader_GetStringBlockSize(fn_00178580_arg0 *param_1)

{
  unsigned short *puVar1;
  
  if (param_1->field_0x14 == 0x2000) {
    puVar1 = &param_1->field_0x14;
  }
  else if (*(short *)&param_1->field_0x20 == 0x2000) {
    puVar1 = (unsigned short *)&param_1->field_0x20;
  }
  else if (*(short *)&param_1->field_0x2c == 0x2000) {
    puVar1 = (unsigned short *)&param_1->field_0x2c;
  }
  else {
    puVar1 = (unsigned short *)0x0;
  }
  return *(unsigned int *)(puVar1 + 4);
}

} /* extern "C" */
