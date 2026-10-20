/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012229c` (_code @ 0x12229c, 0x48 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

typedef struct fn_0012229c_arg0 fn_0012229c_arg0;
struct fn_0012229c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0xdc];
    undefined4 field_0xe0; /* +0xe0 */
    undefined4 field_0xe4; /* +0xe4 */
    undefined4 field_0xe8; /* +0xe8 */
    undefined4 field_0xec; /* +0xec */
    undefined4 field_0xf0; /* +0xf0 */
    undefined4 field_0xf4; /* +0xf4 */
    undefined4 field_0xf8; /* +0xf8 */
    unsigned char pad_0xfc[0x4];
    undefined4 field_0x100; /* +0x100 */
    undefined4 field_0x104; /* +0x104 */
};

extern unsigned char DAT_0055b1ec; /* 0x55b1ec */

extern int constructObj0055affc(int);
extern int FUN_002ea2a8(int, unsigned int);
extern unsigned int *FUN_002eca10(fn_0012229c_arg0 *, unsigned int, unsigned int *);
extern int FUN_002fafd8(unsigned int *, unsigned int);


int FUN_0012229c(fn_0012229c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1 [2];
  
  temp_v1[0] = param_4;
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,temp_v1);
  *puVar1 = (unsigned int)&DAT_0055b1ec;
  temp_v0 = FUN_002fafd8(puVar1 + 0x1a,0);
  *(unsigned int *)(temp_v0 + 0x78) = 0;
  *(unsigned int *)(temp_v0 + 0x7c) = 0;
  *(unsigned int *)(temp_v0 + 0x80) = 0;
  *(unsigned int *)(temp_v0 + 0x84) = 0;
  *(unsigned int *)(temp_v0 + 0x88) = 0;
  *(unsigned int *)(temp_v0 + 0x8c) = 0;
  *(unsigned int *)(temp_v0 + 0x90) = 0;
  *(unsigned int *)(temp_v0 + 0x98) = 0;
  *(unsigned int *)(temp_v0 + 0x9c) = 0;
  temp_v0 = FUN_002ea2a8(temp_v0 + 0xa0,0);
  temp_v0 = constructObj0055affc(temp_v0 + 8);
  return temp_v0 - 0x110;
}

} /* extern "C" */
