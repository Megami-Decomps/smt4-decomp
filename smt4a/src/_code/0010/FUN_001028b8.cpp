/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001028b8` (_code @ 0x1028b8, 0x36 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002e31ba(unsigned int, int *, int *, unsigned char *);
int libcFormatAppendByte(int, int *);

/* stack frame of param_4: 3 slot(s), 12 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} param_4_stack;

extern unsigned char LAB_00100d79; /* 0x100d79 */

/* Supplied declaration required: FUN_002e31ba. */
/* Supplied declaration required: libcFormatAppendByte. */


unsigned int FUN_001028b8(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  int uStack_4;
  
  temp_v1 = param_1;
  if (param_2 != 0) {
    temp_v1 = (param_1 + param_2) - 1;
  }
  temp_v0 = param_1;
  uStack_4 = param_4;
  FUN_002e31ba(param_3,&temp_v0,&uStack_4,&LAB_00100d79);
  if (param_2 != 0) {
    libcFormatAppendByte(0,&temp_v0);
  }
                    /* WARNING: Treating indirect jump as return */
  return param_3;
}

} /* extern "C" */
