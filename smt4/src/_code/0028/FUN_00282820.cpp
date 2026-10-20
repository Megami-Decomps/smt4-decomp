/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00282820` (_code @ 0x282820, 0xec bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0022699c(int, int, int, unsigned int);
int libc_strcmp(unsigned char *, int);

extern unsigned char LAB_00282914; /* 0x282914 */
extern unsigned char LAB_0028291c; /* 0x28291c */
extern int g_btlActionReflect; /* 0x434290 */
extern unsigned int DAT_00435d18; /* 0x435d18 */

/* Supplied declaration required: FUN_0022699c. */
/* Supplied declaration required: libc_strcmp. */
extern int FUN_003d98a0(unsigned int, int);


int FUN_00282820(short param_1,unsigned int param_2,unsigned short param_3,int param_4,unsigned short param_5,
                unsigned short param_6,unsigned int param_7,int param_8)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  
  temp_v0 = FUN_003d98a0(DAT_00435d18,param_8);
  if (temp_v0 != 0) {
    temp_v0 = g_btlActionReflect;
    FUN_0022699c(g_btlActionReflect,(int)param_1,0,param_2);
    *(unsigned char *)(temp_v0 + 4) = 3;
  }
  else {
    if (param_4 < 0x6d) {
      temp_v0 = g_btlActionReflect;
      FUN_0022699c(g_btlActionReflect,(int)param_1,0,param_2);
      *(unsigned char *)(temp_v0 + 4) = 0;
      *(unsigned short *)(temp_v0 + 0x24) = param_3;
      *(short *)(temp_v0 + 0x26) = (short)param_4;
      *(unsigned short *)(temp_v0 + 0x48) = param_5;
      *(unsigned short *)(temp_v0 + 0x4a) = param_6;
      *(unsigned int *)(temp_v0 + 0x28) = param_7;
      if (param_8 != 0) {
        puVar2 = &LAB_00282914;
        libc_strcmp(&LAB_00282914,param_8);
        if (puVar2 != (unsigned char *)0x0) {
          puVar2 = &LAB_0028291c;
          libc_strcmp(&LAB_0028291c,param_8);
          if (puVar2 != (unsigned char *)0x0) {
            return temp_v0;
          }
        }
        *(unsigned char *)(temp_v0 + 0x20) = 1;
      }
      return temp_v0;
    }
    temp_v0 = 0;
  }
  return temp_v0;
}

} /* extern "C" */
