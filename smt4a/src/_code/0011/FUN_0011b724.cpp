/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011b724` (_code @ 0x11b724, 0x4e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002f3b58(unsigned int, int, unsigned int);
int FUN_00311780(...);

typedef struct fn_0011b724_arg0 fn_0011b724_arg0;
struct fn_0011b724_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xc];
    undefined4 field_0x10; /* +0x10 */
    undefined1 field_0x14; /* +0x14 */
    unsigned char pad_0x15[0x23];
    undefined2 field_0x38; /* +0x38 */
};

extern unsigned char DAT_0055a5d0; /* 0x55a5d0 */
extern unsigned char DAT_0055a6d8; /* 0x55a6d8 */

extern unsigned int FUN_00123a44(int);
extern int FUN_002e760a(unsigned int);
/* Supplied declaration required: FUN_002f3b58. */
extern unsigned int *FUN_00300ae8(fn_0011b724_arg0 *, unsigned int);
/* Supplied declaration required: FUN_00311780. */
extern void nn_cfg_CTR_Initialize(void);


int FUN_0011b724(fn_0011b724_arg0 *param_1)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  puVar1 = (unsigned int *)FUN_00300ae8(param_1,0x73);
  puVar1[4] = (unsigned int)&DAT_0055a6d8;
  *puVar1 = (unsigned int)&DAT_0055a5d0;
  temp_v0 = FUN_00311780(puVar1 + 6,0);
  *(unsigned short *)(temp_v0 + 0x20) = 0x73;
  temp_v1 = FUN_002e760a(0x44);
  temp_v2 = 0;
  if (temp_v1 != 0) {
    temp_v2 = FUN_00311780(temp_v1,0);
  }
  temp_v3 = FUN_00123a44(temp_v0 - 0x18);
  FUN_002f3b58(temp_v3,0x73,temp_v2);
  *(unsigned char *)(temp_v0 - 4) = 0;
  nn_cfg_CTR_Initialize();
  return temp_v0 - 0x18;
}

} /* extern "C" */
