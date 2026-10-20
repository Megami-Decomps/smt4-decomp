/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004fea44` (_code @ 0x4fea44, 0xf4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int libc_strcmp(unsigned char *, int);
int FUN_004102d8(int, int, int, unsigned int);

extern unsigned char LAB_004feb40; /* 0x4feb40 */
extern unsigned char LAB_004feb48; /* 0x4feb48 */
extern int g_btlActionReflect; /* 0x5712f0 */
extern unsigned int DAT_00573808; /* 0x573808 */

/* Supplied declaration required: libc_strcmp. */
/* Supplied declaration required: FUN_004102d8. */
extern int FUN_004f5710(unsigned int, int);


int FUN_004fea44(short param_1,unsigned int param_2,unsigned short param_3,unsigned int param_4,int param_5,
                unsigned int param_6,int param_7)

{
/* irregular: irregular input(s): in_d0; 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned long long in_d0;
  
  temp_v0 = FUN_004f5710(DAT_00573808,param_5);
  if (temp_v0 != 0) {
    temp_v0 = g_btlActionReflect;
    FUN_004102d8(g_btlActionReflect,(int)param_1,0,param_2);
    *(unsigned char *)(temp_v0 + 4) = 4;
    return temp_v0;
  }
  temp_v0 = g_btlActionReflect;
  FUN_004102d8(g_btlActionReflect,(int)param_1,0,param_2);
  *(unsigned char *)(temp_v0 + 4) = 1;
  *(unsigned short *)(temp_v0 + 0x24) = 0;
  *(unsigned short *)(temp_v0 + 0x26) = 0;
  *(unsigned short *)(temp_v0 + 0x48) = param_3;
  *(unsigned short *)(temp_v0 + 0x4a) = 0;
  *(unsigned int *)(temp_v0 + 0x28) = param_4;
  *(unsigned int *)(temp_v0 + 0x50) = param_6;
  *(int *)(temp_v0 + 0x34) = (int)in_d0;
  *(int *)(temp_v0 + 0x38) = (int)((unsigned long long)in_d0 >> 0x20);
  if (param_7 != 0) {
    *(unsigned int *)(temp_v0 + 0x4c) = 1;
  }
  else {
    *(unsigned int *)(temp_v0 + 0x4c) = 0;
  }
  if (param_5 != 0) {
    puVar2 = &LAB_004feb40;
    libc_strcmp(&LAB_004feb40,param_5);
    if (puVar2 != (unsigned char *)0x0) {
      puVar2 = &LAB_004feb48;
      libc_strcmp(&LAB_004feb48,param_5);
      if (puVar2 != (unsigned char *)0x0) {
        return temp_v0;
      }
    }
    *(unsigned char *)(temp_v0 + 0x20) = 1;
  }
  return temp_v0;
}

} /* extern "C" */
