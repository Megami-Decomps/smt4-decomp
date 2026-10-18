/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_001edc04` (_code @ 0x1edc04, 0x3a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} param_2_stack;

extern unsigned char DAT_0043e310; /* 0x43e310 */
extern signed char DAT_0043e311; /* 0x43e311 */
extern unsigned char DAT_0043e312; /* 0x43e312 */
extern signed char DAT_0043e313; /* 0x43e313 */
extern int DAT_0043e314; /* 0x43e314 */

/* Supplied declaration required: FUN_0019dfbc. */
extern int FUN_00210278(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002237a0. */
/* Supplied declaration required: FUN_002594ac. */
/* Supplied declaration required: FUN_002594cc. */
/* Supplied declaration required: FUN_0026b7ec. */
/* Supplied declaration required: FUN_00289ae8. */
/* Supplied declaration required: FUN_00289b4c. */
/* Supplied declaration required: FUN_00297128. */
/* Supplied declaration required: FUN_002971e4. */
/* Supplied declaration required: FUN_002972f8. */
extern int FUN_0029f0cc(void);
/* Supplied declaration required: FUN_002b8b78. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_002c58cc. */
/* Supplied declaration required: FUN_002c5918. */
/* Supplied declaration required: FUN_002c5948. */
/* Supplied declaration required: FUN_002e2ea0. */


unsigned int FUN_001edc04(unsigned int param_1,int param_2)

{
/* irregular: 17 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int temp_v2;
  int iStack_18;
  unsigned char temp_v3 [8];
  
  temp_v2 = DAT_0043e314;
  temp_v0 = *(int *)(DAT_0043e314 + 0x50);
  if (temp_v0 != 0) {
    param_2 = *(int *)(DAT_0043e314 + 0x54);
  }
  if (temp_v0 == 0 || param_2 == 0) {
    return 0;
  }
  if (*(int *)(DAT_0043e314 + 0x58) == 0) {
    FUN_002972f8();
    *(int *)(temp_v2 + 0x58) = temp_v0;
    *(unsigned int *)(temp_v0 + 0x108) = 2;
  }
  switch(*(unsigned int *)(temp_v2 + 0xc)) {
  case 0:
    temp_v0 = FUN_00210278(6,0);
    if (temp_v0 != 0) {
      if (temp_v0 != 3) {
        if (temp_v0 != 4) {
          temp_v1 = 8;
          DAT_0043e310 = 1;
        }
        else {
          DAT_0043e310 = 1;
          FUN_002971e4(*(unsigned int *)(temp_v2 + 0x58),3);
          temp_v1 = 4;
        }
      }
      else {
        DAT_0043e310 = 1;
        FUN_002971e4(*(unsigned int *)(temp_v2 + 0x58),0);
        temp_v1 = 4;
      }
    }
    else {
      DAT_0043e310 = 0;
      FUN_002971e4(*(unsigned int *)(temp_v2 + 0x58),4);
      temp_v1 = 9;
    }
    break;
  default:
    return 0;
  case 4:
    FUN_002c5948(1);
    FUN_002c5918(1);
    FUN_002c58cc(1);
    FUN_002b8b78(0xe6);
    if (DAT_0043e313 == '\0') {
      FUN_00289b4c();
      FUN_00289ae8();
      DAT_0043e313 = '\x01';
    }
    temp_v0 = FUN_0019dfbc(*(unsigned int *)(temp_v2 + 0x58));
    if (temp_v0 != 2) {
      return 0;
    }
    FUN_0026b7ec(1);
    FUN_002594cc(1);
    FUN_002594ac(1);
    FUN_002971e4(*(unsigned int *)(temp_v2 + 0x58),1);
    temp_v1 = 5;
    break;
  case 5:
    FUN_002b8b78(0xe7);
    FUN_0019dfbc(*(unsigned int *)(temp_v2 + 0x58));
    FUN_002237a0(temp_v2,1);
    temp_v1 = 6;
    break;
  case 6:
    FUN_0019dfbc(*(unsigned int *)(temp_v2 + 0x58));
    temp_v0 = FUN_0029f0cc();
    if (temp_v0 != 0) {
      DAT_0043e312 = 1;
    }
    if (*(int *)(temp_v2 + 0x44) != 0) {
      puVar2 = temp_v3;
      iStack_18 = *(int *)(temp_v2 + 0x44);
      FUN_002c42fc(puVar2,&iStack_18,1,0,0,0);
      if ((int)puVar2 < 0) {
        FUN_002c5468();
      }
      if (((unsigned int)puVar2 & 0x3ff) == 0x3fe) {
        return 0;
      }
    }
    FUN_002e2ea0(temp_v2);
    FUN_002b8b78(0xe6);
    if (DAT_0043e311 != '\0') {
      FUN_002c5948(1);
      FUN_002c5918(1);
      FUN_002c58cc(1);
      FUN_00297128();
      DAT_0043e312 = 0;
      FUN_002971e4(*(unsigned int *)(temp_v2 + 0x58),2);
      temp_v1 = 7;
    }
    else {
      FUN_002c5948(1);
      FUN_002c5918(1);
      FUN_002c58cc(1);
      FUN_00297128();
      DAT_0043e312 = 0;
      FUN_002971e4(*(unsigned int *)(temp_v2 + 0x58),5);
      temp_v1 = 9;
    }
    break;
  case 7:
    temp_v2 = FUN_0019dfbc(*(unsigned int *)(temp_v2 + 0x58));
    if (temp_v2 != 2) {
      return 0;
    }
  case 8:
    return 1;
  case 9:
    FUN_002c5948(1);
    FUN_002c5918(1);
    FUN_002c58cc(1);
    temp_v2 = FUN_0019dfbc(*(unsigned int *)(temp_v2 + 0x58));
    if (temp_v2 != 2) {
      return 0;
    }
    return 1;
  case 0xc:
    *(unsigned int *)(temp_v2 + 0xc) = 6;
    return 0;
  }
  *(unsigned int *)(temp_v2 + 0xc) = temp_v1;
  return 0;
}
