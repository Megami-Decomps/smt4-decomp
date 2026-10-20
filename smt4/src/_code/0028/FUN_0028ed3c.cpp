/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0028ed3c` (_code @ 0x28ed3c, 0x154 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0026aae8(unsigned int);
int FUN_00295660(...);
int FUN_0029ede8(...);
int dataTable1bOr1cGetRecord(void);
int FUN_002bd06c(unsigned int);
int FUN_002bd158(unsigned char [128], unsigned char [132]);
int FUN_002be650(unsigned int, int);
int libc_strcpy(...);

/* Supplied declaration required: FUN_0026aae8. */
/* Supplied declaration required: FUN_00295660. */
/* Supplied declaration required: FUN_0029ede8. */
/* Supplied declaration required: dataTable1bOr1cGetRecord. */
/* Supplied declaration required: FUN_002bd06c. */
/* Supplied declaration required: FUN_002bd158. */
/* Supplied declaration required: FUN_002be650. */
/* Supplied declaration required: libc_strcpy. */


void FUN_0028ed3c(int param_1,int param_2,int param_3)

{
/* irregular: 8 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned char temp_v4 [128];
  unsigned char temp_v5 [132];
  
  temp_v3 = 0;
  if (param_3 != 0) {
    temp_v2 = param_1;
    dataTable1bOr1cGetRecord();
    if (temp_v2 != 0) {
      temp_v3 = temp_v2 + 0x38;
    }
    libc_strcpy(temp_v4,temp_v3);
    FUN_002bd158(temp_v4,temp_v5);
    FUN_00295660(0x28,temp_v5);
  }
  else {
    temp_v2 = param_1;
    dataTable1bOr1cGetRecord();
    if (temp_v2 != 0) {
      temp_v3 = temp_v2 + 8;
    }
    FUN_00295660(0x28,temp_v3);
  }
  if ((param_2 != 0) && (dataTable1bOr1cGetRecord(), param_1 != 0)) {
    temp_v3 = 0;
    do {
      temp_v2 = param_1 + temp_v3 * 8;
      switch(*(unsigned short *)(temp_v2 + 0x16c)) {
      case 1:
      case 7:
        temp_v0 = (unsigned int)*(unsigned short *)(temp_v2 + 0x16e);
        FUN_002be650(temp_v0,param_3);
        libc_strcpy(temp_v4,temp_v0);
        temp_v1 = temp_v3;
        FUN_00295660(temp_v1,temp_v4);
        FUN_0029ede8(temp_v3 + 0x18,*(unsigned int *)(temp_v2 + 0x170),0xffffffff,0);
        break;
      case 2:
        temp_v0 = (unsigned int)*(unsigned short *)(temp_v2 + 0x16e);
        FUN_002bd06c(temp_v0);
        libc_strcpy(temp_v4,temp_v0);
        temp_v1 = temp_v3 + 8;
        FUN_00295660(temp_v1,temp_v4);
        FUN_0029ede8(temp_v3 + 0x18,*(unsigned int *)(temp_v2 + 0x170),0xffffffff,0);
        break;
      case 5:
        temp_v0 = (unsigned int)*(unsigned short *)(temp_v2 + 0x16e);
        FUN_0026aae8(temp_v0);
        FUN_00295660(temp_v3 + 0x29,temp_v0);
        break;
      case 6:
        FUN_0029ede8(temp_v3 + 0x18,*(unsigned int *)(temp_v2 + 0x170),0xffffffff,0);
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < 6);
  }
  return;
}

} /* extern "C" */
