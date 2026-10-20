/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011456c` (_code @ 0x11456c, 0x30 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0011456c_arg0 fn_0011456c_arg0;
struct fn_0011456c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xd];
    undefined1 field_0x11; /* +0x11 */
    undefined1 field_0x12; /* +0x12 */
    unsigned char pad_0x13[0x1];
    undefined2 field_0x14; /* +0x14 */
    undefined2 field_0x16; /* +0x16 */
    undefined4 field_0x18; /* +0x18 */
    undefined4 field_0x1c; /* +0x1c */
    undefined4 field_0x20; /* +0x20 */
    undefined4 field_0x24; /* +0x24 */
};

extern unsigned char DAT_005596a4; /* 0x5596a4 */

extern unsigned int *FUN_002ed074(fn_0011456c_arg0 *, unsigned int);
extern unsigned short FUN_002f7270(void);


unsigned int * FUN_0011456c(fn_0011456c_arg0 *param_1)

{
  unsigned short temp_v0;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)FUN_002ed074(param_1,0xb);
  *puVar2 = (unsigned int)&DAT_005596a4;
  *(unsigned char *)((int)puVar2 + 0x11) = 0;
  *(unsigned char *)((int)puVar2 + 0x12) = 1;
  temp_v0 = FUN_002f7270();
  *(unsigned short *)(puVar2 + 5) = temp_v0;
  *(unsigned short *)((int)puVar2 + 0x16) = 0;
  puVar2[6] = 0;
  puVar2[7] = 0;
  puVar2[8] = 0;
  puVar2[9] = 0;
  *(unsigned char *)(puVar2 + 10) = 0;
  return puVar2;
}

} /* extern "C" */
