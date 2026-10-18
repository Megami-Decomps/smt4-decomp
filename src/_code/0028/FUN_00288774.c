/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00288774` (_code @ 0x288774, 0x100 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_4: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int spC; /* 0xc: local_c */
    unsigned int sp60; /* 0x60: local_60 */
} param_4_stack;

extern unsigned char LAB_00288894; /* 0x288894 */
extern unsigned char DAT_00403390; /* 0x403390 */
extern unsigned char DAT_00423930; /* 0x423930 */
extern unsigned char DAT_00423ad2; /* 0x423ad2 */
extern unsigned char DAT_00423bf9; /* 0x423bf9 */
extern unsigned char DAT_00423f26; /* 0x423f26 */
extern unsigned char DAT_00424331; /* 0x424331 */
extern unsigned char DAT_00424724; /* 0x424724 */
extern unsigned char DAT_00424a9d; /* 0x424a9d */
extern unsigned char DAT_00424b4c; /* 0x424b4c */

extern unsigned int FUN_0028ebd8(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002bcf58. */
/* Supplied declaration required: FUN_002bcff0. */
extern unsigned int FUN_002bd258(unsigned int);
/* Supplied declaration required: FUN_002be7f4. */
/* Supplied declaration required: FUN_002be7fc. */


void FUN_00288774(unsigned int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  unsigned char *puVar2;
  unsigned char *temp_v1 [4];
  unsigned char *puStack_50;
  unsigned char *puStack_4c;
  unsigned char *puStack_48;
  unsigned char *puStack_44;
  
  if ((int)param_3 < 0) {
    FUN_002be7f4(param_4,0x288874);
    return;
  }
  if ((param_2 == 0 || param_2 == 0xd) || param_2 == 1) {
    temp_v0 = FUN_002bd258(param_3 & 0xffff);
    FUN_002be7f4(param_4,&LAB_00288894,temp_v0);
    return;
  }
  if (param_2 == 2) {
    temp_v0 = FUN_0028ebd8(param_3,0);
    FUN_002be7f4(param_4,&LAB_00288894,temp_v0);
    return;
  }
  if (param_2 != 3) {
    if (param_2 != 4) {
      if (param_2 != 5) {
        return;
      }
      temp_v1[0] = &DAT_00424a9d;
      temp_v1[1] = &DAT_00424724;
      temp_v1[2] = &DAT_00423f26;
      temp_v1[3] = &DAT_00423ad2;
      puStack_50 = &DAT_00423930;
      puStack_4c = &DAT_00423bf9;
      puStack_48 = &DAT_00424b4c;
      puStack_44 = &DAT_00424331;
      puVar2 = temp_v1[param_3];
    }
    else {
      FUN_002bcf58(temp_v1,&DAT_00403390,0x54);
      puVar2 = temp_v1[param_3];
    }
    FUN_002be7fc(param_4,&LAB_00288894,puVar2);
    return;
  }
  FUN_002bcff0(param_3);
  FUN_002be7f4(param_4,&LAB_00288894,param_3);
  return;
}
