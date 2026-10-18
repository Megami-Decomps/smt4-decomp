/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00116f6c` (_code @ 0x116f6c, 0x6e bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_00116f6c_arg0 fn_00116f6c_arg0;
struct fn_00116f6c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x64];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0xc];
    undefined4 field_0x7c; /* +0x7c */
    unsigned char pad_0x80[0x64];
    undefined4 field_0xe4; /* +0xe4 */
    undefined4 field_0xe8; /* +0xe8 */
};

extern unsigned char LAB_00116fe0; /* 0x116fe0 */
extern unsigned char DAT_00559dd4; /* 0x559dd4 */
extern unsigned char DAT_00559e24; /* 0x559e24 */

extern int FUN_00103884(int);
/* Supplied declaration required: FUN_002e9300. */
extern unsigned int *FUN_002eca10(fn_00116f6c_arg0 *, unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002eca44. */
extern int FUN_002ed912(int);
/* Supplied declaration required: FUN_002f5020. */


int FUN_00116f6c(fn_00116f6c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  int uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,(unsigned int *)&uStack_10);
  puVar1[0x1b] = 0;
  *puVar1 = (unsigned int)&DAT_00559dd4;
  puVar1[0x1a] = (unsigned int)&DAT_00559e24;
  temp_v0 = FUN_002e9300(puVar1 + 0x1c,&LAB_00116fe0);
  *(unsigned char *)(temp_v0 + 8) = 0;
  *(unsigned int *)(temp_v0 + 0xc) = 0;
  temp_v0 = temp_v0 + 0x10;
  FUN_002eca44(temp_v0);
  temp_v0 = FUN_00103884(temp_v0 + 0x60);
  *(unsigned int *)(temp_v0 + 4) = 0;
  *(unsigned int *)(temp_v0 + 8) = 0;
  temp_v0 = FUN_002ed912(temp_v0 + 0xc);
  *(unsigned char *)(temp_v0 + 0xc) = 0;
  temp_v0 = FUN_002e9300(temp_v0 + 0x10,&LAB_00116fe0);
  *(unsigned int *)(temp_v0 + 8) = 0;
  temp_v0 = temp_v0 + 0xc;
  FUN_002f5020(temp_v0,0x2ed913,0xc,4);
  return temp_v0 - 0x108;
}
