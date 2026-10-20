/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028850c` (_code @ 0x28850c, 0x100 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002be61c(...);
int FUN_002be624(unsigned int, unsigned char *, unsigned char *);
int rt_memcpy_w(unsigned char *[4], unsigned char *, int);

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp60; /* 0x60: local_60 */
} param_4_stack;

extern unsigned char LAB_0028862c; /* 0x28862c */
extern unsigned char DAT_0040333c; /* 0x40333c */
extern unsigned char DAT_00423ce8; /* 0x423ce8 */
extern unsigned char DAT_00423e8a; /* 0x423e8a */
extern unsigned char DAT_00423fb1; /* 0x423fb1 */
extern unsigned char DAT_004242de; /* 0x4242de */
extern unsigned char DAT_004246e9; /* 0x4246e9 */
extern unsigned char DAT_00424adc; /* 0x424adc */
extern unsigned char DAT_00424e55; /* 0x424e55 */
extern unsigned char DAT_00424f04; /* 0x424f04 */

extern unsigned int FUN_0028e934(unsigned int, unsigned int);
extern unsigned int FUN_002bce00(unsigned int);
extern unsigned int FUN_002bd068(unsigned int);
/* Supplied declaration required: FUN_002be61c. */
/* Supplied declaration required: FUN_002be624. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0028850c(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 3 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned char *temp_v1 [4];
  unsigned char *puStack_50;
  unsigned char *puStack_4c;
  unsigned char *puStack_48;
  unsigned char *puStack_44;
  
  if ((int)param_3 < 0) {
    FUN_002be61c(param_4,0x28860c);
    return;
  }
  if ((param_2 == 0 || param_2 == 0xd) || param_2 == 1) {
    temp_v0 = FUN_002bd068(param_3 & 0xffff);
    FUN_002be61c(param_4,&LAB_0028862c,temp_v0);
    return;
  }
  if (param_2 == 2) {
    temp_v0 = FUN_0028e934(param_3,0);
    FUN_002be61c(param_4,&LAB_0028862c,temp_v0);
    return;
  }
  if (param_2 != 3) {
    if (param_2 != 4) {
      if (param_2 != 5) {
        return;
      }
      temp_v1[0] = &DAT_00424e55;
      temp_v1[1] = &DAT_00424adc;
      temp_v1[2] = &DAT_004242de;
      temp_v1[3] = &DAT_00423e8a;
      puStack_50 = &DAT_00423ce8;
      puStack_4c = &DAT_00423fb1;
      puStack_48 = &DAT_00424f04;
      puStack_44 = &DAT_004246e9;
      puVar2 = temp_v1[param_3];
    }
    else {
      rt_memcpy_w(temp_v1,&DAT_0040333c,0x54);
      puVar2 = temp_v1[param_3];
    }
    FUN_002be624(param_4,&LAB_0028862c,puVar2);
    return;
  }
  temp_v0 = FUN_002bce00(param_3);
  FUN_002be61c(param_4,&LAB_0028862c,temp_v0);
  return;
}

} /* extern "C" */
