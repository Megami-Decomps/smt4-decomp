/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004bfa30` (_code @ 0x4bfa30, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001568f8(unsigned int *, int);
int dataTable8FindRecord(void);
int dataTable04FindById(void);
int FUN_003e8bb0(unsigned char [42], unsigned int *, unsigned int *);
int FUN_003f0e20(unsigned int *, unsigned int);

/* stack frame of param_4: 1 slot(s), 1 byte(s) */
typedef struct {
    unsigned char sp26; /* 0x26: local_26 */
} param_4_stack;

extern unsigned int DAT_00571408; /* 0x571408 */
extern unsigned int DAT_0057140c; /* 0x57140c */

extern unsigned int *btlGetMainState(void);
/* Supplied declaration required: FUN_001568f8. */
/* Supplied declaration required: dataTable8FindRecord. */
extern int gameGetSlotRecord(int);
/* Supplied declaration required: dataTable04FindById. */
/* Supplied declaration required: FUN_003e8bb0. */
/* Supplied declaration required: FUN_003f0e20. */
extern int FUN_004bd098(unsigned int, int);


unsigned int FUN_004bfa30(int param_1,int param_2,unsigned int param_3,int param_4)

{
/* irregular: 5 native warning(s); review required */
  unsigned short temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned char temp_v5 [42];
  char temp_v6;
  
  temp_v3 = param_1;
  dataTable04FindById();
  dataTable8FindRecord();
  if (temp_v3 == 0 && param_2 == 0) {
    return 0;
  }
  if ((temp_v3 != 0) && ((*(unsigned int *)(temp_v3 + 0x3c) & 0x7f) == 0)) {
    return 0;
  }
  if (((param_2 != 0) && ((*(unsigned char *)(param_2 + 0x3a) & 0x7f) == 0)) &&
     ((*(unsigned int *)(param_2 + 0x68) & 4) == 0)) {
    return 0;
  }
  puVar2 = (unsigned int *)btlGetMainState();
  puVar3 = puVar2;
  FUN_003f0e20(puVar2,param_3);
  FUN_003e8bb0(temp_v5,puVar2,puVar3);
  if (temp_v6 != '\0') {
    if ((puVar3[0x9d] & 0x10) == 0) {
      return 0;
    }
    if (((puVar3[1] & DAT_0057140c) != 0 || (DAT_00571408 & *puVar3) != 0) &&
       (temp_v1 = FUN_004bd098(puVar3[0xff],param_1), temp_v1 < 0)) {
      return 0;
    }
  }
  temp_v2 = 0;
  if (temp_v3 != 0) {
    temp_v4 = *(unsigned int *)(temp_v3 + 0x3c);
    if ((temp_v4 & 0x7f) != 0) {
      temp_v2 = temp_v4 & 0x7f;
    }
  }
  else if (param_2 != 0) {
    temp_v4 = (unsigned int)*(unsigned char *)(param_2 + 0x3a);
    if ((*(unsigned char *)(param_2 + 0x3a) & 0x7f) != 0) {
      temp_v2 = temp_v4 & 0x7f;
    }
    else if ((*(unsigned int *)(param_2 + 0x68) & 4) != 0) {
      temp_v2 = 0x25;
    }
  }
  if (temp_v2 == 0x1c) {
    temp_v2 = 0x39c0;
  }
  else if (temp_v2 < 0x1c) {
    if (temp_v2 == 0x16) {
      temp_v2 = 0x3be0;
    }
    else if (temp_v2 == 0x18) {
      temp_v2 = 0x3fe2;
    }
    else if (temp_v2 == 0x1b) {
      temp_v2 = 0x3be2;
    }
    else {
      temp_v2 = 1 << temp_v2;
    }
  }
  else if (temp_v2 == 0x1f) {
    temp_v2 = 0x220;
  }
  else if (temp_v2 == 0x25) {
    temp_v2 = 0x3bea;
  }
  else {
    temp_v2 = 1 << temp_v2;
  }
  if (param_4 < 0x6d) {
    FUN_001568f8(puVar2,param_4);
    temp_v0 = (unsigned short)puVar2[0x44];
  }
  else {
    temp_v3 = gameGetSlotRecord(param_4 - 0x6d);
    temp_v0 = *(unsigned short *)(temp_v3 + 0x60);
  }
  if ((temp_v0 & temp_v2) != 0) {
    return temp_v2;
  }
  return 0;
}

} /* extern "C" */
