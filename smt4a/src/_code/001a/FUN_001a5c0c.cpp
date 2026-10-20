/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001a5c0c` (_code @ 0x1a5c0c, 0x34 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_001a5c0c_arg0 fn_001a5c0c_arg0;
struct fn_001a5c0c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x118];
    undefined4 field_0x11c; /* +0x11c */
    undefined1 field_0x120; /* +0x120 */
    undefined1 field_0x121; /* +0x121 */
};

extern unsigned char DAT_0055bfc4; /* 0x55bfc4 */

extern unsigned int *FUN_001b18cc(void);
extern int FUN_001b23cc(unsigned int *);


int FUN_001a5c0c(fn_001a5c0c_arg0 *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int temp_v0;
  
  puVar1 = (unsigned int *)FUN_001b18cc();
  *puVar1 = (unsigned int)&DAT_0055bfc4;
  puVar1[0x47] = param_2;
  *(unsigned char *)(puVar1 + 0x48) = 0;
  *(unsigned char *)((int)puVar1 + 0x121) = 0;
  temp_v0 = FUN_001b23cc(puVar1 + 0x4a);
  return temp_v0 - 0x128;
}

} /* extern "C" */
