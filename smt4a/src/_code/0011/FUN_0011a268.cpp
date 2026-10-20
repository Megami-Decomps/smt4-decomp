/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0011a268` (_code @ 0x11a268, 0x68 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002ea3d0(unsigned int *, unsigned int);
int FUN_002eca44(void);
int FUN_00306d9c(unsigned int, int, int);

typedef struct fn_0011a268_arg0 fn_0011a268_arg0;
struct fn_0011a268_arg0 {
    undefined4 field_0x0; /* +0x0 */
    unsigned char pad_0x4[0x5c];
    undefined4 field_0x60; /* +0x60 */
    undefined4 field_0x64; /* +0x64 */
    undefined4 field_0x68; /* +0x68 */
    undefined4 field_0x6c; /* +0x6c */
    undefined4 field_0x70; /* +0x70 */
    undefined4 field_0x74; /* +0x74 */
};

extern unsigned char LAB_0011a2d4; /* 0x11a2d4 */
extern unsigned char DAT_0055a350; /* 0x55a350 */

extern unsigned int onlineInstanceTableGetCurrent(void);
extern unsigned int FUN_002ea3c0(unsigned char *, unsigned int, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002ea3d0. */
extern unsigned int *FUN_002eca10(fn_0011a268_arg0 *, unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002eca44. */
extern int FUN_002f4d9c(int, unsigned int);
/* Supplied declaration required: FUN_00306d9c. */


unsigned int *
FUN_0011a268(fn_0011a268_arg0 *param_1,unsigned int param_2,unsigned int param_3,int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int *puVar1;
  int temp_v0;
  unsigned int temp_v1;
  unsigned char temp_v2 [16];
  unsigned char temp_v3 [4];
  
  puVar1 = (unsigned int *)FUN_002eca10(param_1,2,temp_v3);
  *puVar1 = (unsigned int)&DAT_0055a350;
  puVar1 = puVar1 + 0x1e;
  FUN_002eca44();
  puVar1[-1] = 0;
  puVar1[-2] = param_4;
  puVar1[-3] = param_3;
  puVar1[-4] = param_2;
  puVar1[-6] = 0x1000;
  puVar1[-5] = 0;
  if ((param_4 != 0) && (temp_v0 = FUN_002f4d9c(param_4,0xb), temp_v0 != 0)) {
    temp_v1 = onlineInstanceTableGetCurrent();
    FUN_00306d9c(temp_v1,temp_v0,0);
  }
  temp_v1 = FUN_002ea3c0(temp_v2,0x11a1f9,0,&LAB_0011a2d4);
  FUN_002ea3d0(puVar1 + -0x1e,temp_v1);
  return puVar1 + -0x1e;
}

} /* extern "C" */
