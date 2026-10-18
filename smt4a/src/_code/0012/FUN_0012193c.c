/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0012193c` (_code @ 0x12193c, 0x46 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

typedef struct fn_0012193c_arg0 fn_0012193c_arg0;
struct fn_0012193c_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x64];
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    unsigned char pad_0x70[0x18];
    undefined1 field_0x88; /* +0x88 */
    unsigned char pad_0x89[0x3];
    undefined4 field_0x8c; /* +0x8c */
    undefined4 field_0x90; /* +0x90 */
    undefined4 field_0x94; /* +0x94 */
};

extern unsigned char LAB_00121988; /* 0x121988 */
extern unsigned char DAT_0055b09c; /* 0x55b09c */
extern signed char DAT_00594967; /* 0x594967 */

extern int FUN_002e9300(unsigned int *, unsigned char *);
extern unsigned int *FUN_002eca10(fn_0012193c_arg0 *, unsigned int, unsigned int *);
extern int FUN_002ed912(int);


void FUN_0012193c(fn_0012193c_arg0 *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4
                 )

{
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  int uStack_10;
  
  uStack_10 = param_4;
  puVar1 = (unsigned int *)FUN_002eca10(param_1,0,(unsigned int *)&uStack_10);
  puVar1[0x1a] = 0;
  puVar1[0x1b] = 0;
  *puVar1 = (unsigned int)&DAT_0055b09c;
  temp_v0 = FUN_002e9300(puVar1 + 0x1c,&LAB_00121988);
  *(unsigned char *)(temp_v0 + 8) = 0;
  temp_v0 = FUN_002ed912(temp_v0 + 0xc);
  *(unsigned char *)(temp_v0 + 0xc) = 0;
  *(unsigned int *)(temp_v0 + 0x10) = 0;
  *(unsigned int *)(temp_v0 + 0x14) = 0;
  if (DAT_00594967 == '\0') {
    temp_v1 = 5;
  }
  else {
    temp_v1 = 10;
  }
  *(unsigned int *)(temp_v0 + 0x18) = temp_v1;
  return;
}
