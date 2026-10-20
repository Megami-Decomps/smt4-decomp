/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004009d0` (_code @ 0x4009d0, 0x390 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001aba54(void);
int FUN_003ff998(...);
int FUN_00400564(int, int, int);
int SCARRY4(unsigned int, int);

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_2_stack;

extern unsigned int DAT_0057113c; /* 0x57113c */
extern unsigned int DAT_00573c90; /* 0x573c90 */
extern unsigned int DAT_00573c94; /* 0x573c94 */
extern unsigned int DAT_00573c98; /* 0x573c98 */
extern unsigned int DAT_00573c9c; /* 0x573c9c */
extern unsigned int DAT_00573ca8; /* 0x573ca8 */
extern unsigned int DAT_00573cac; /* 0x573cac */
extern unsigned int DAT_00573cb8; /* 0x573cb8 */
extern unsigned int DAT_00573cbc; /* 0x573cbc */

/* Unsupported intrinsic, declaration required: SCARRY4 (INT_SCARRY). */
extern int FUN_0014aa78(int);
extern int FUN_001ab888(void);
/* Supplied declaration required: FUN_001aba54. */
/* Supplied declaration required: FUN_003ff998. */
/* Supplied declaration required: FUN_00400564. */
extern int FUN_004ee568(unsigned int);


unsigned int FUN_004009d0(int param_1,int param_2)

{
/* irregular: 4 native warning(s); review required */
  unsigned char temp_v0;
  unsigned char temp_v1;
  unsigned char temp_v2;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  unsigned int temp_v7;
  unsigned int *puVar9;
  unsigned char temp_v8;
  
  if ((param_1 == 0) || (FUN_001aba54(), param_1 == 0)) {
    return 1;
  }
  temp_v3 = *(unsigned int *)(param_1 + 0x28);
  temp_v7 = 2;
  temp_v8 = (temp_v3 & 0x7ff) >> 9 != 2;
  if (temp_v8) {
    temp_v7 = 3;
  }
  if (temp_v8 && temp_v7 != (temp_v3 & 0x7ff) >> 9) {
    return 2;
  }
  temp_v4 = FUN_0014aa78(temp_v3 << 0x15);
  temp_v5 = FUN_004ee568(DAT_0057113c);
  temp_v6 = 0;
  if (temp_v5 != 0) {
    temp_v6 = *(int *)(temp_v5 + 0x20);
  }
  if (temp_v5 != 0 && temp_v6 != 0) {
    if ((param_2 == 0) && ((*(unsigned short *)(temp_v6 + 0x274) & 0x2000) != 0)) {
      if ((*(unsigned int *)(temp_v4 + 0x45a8) & DAT_00573cb8) == 0 &&
          (DAT_00573cbc & *(unsigned int *)(temp_v4 + 0x45ac)) == 0) {
        return 4;
      }
      return 0;
    }
    if ((*(unsigned char *)(param_1 + 0x39) & 0x40) != 0) {
      if ((*(unsigned int *)(temp_v4 + 0x45a8) & DAT_00573cb8) != 0 ||
          (*(unsigned int *)(temp_v4 + 0x45ac) & DAT_00573cbc) != 0) {
        return 0;
      }
      if ((*(unsigned short *)(temp_v6 + 0x274) & 0x10) == 0) {
        return 3;
      }
    }
  }
  switch(*(unsigned char *)(param_1 + 0x23)) {
  case 0:
  case 1:
  case 5:
  case 6:
  case 10:
    return 0;
  case 2:
    if (*(char *)(param_1 + 0x45) == '\0') {
      return 0;
    }
  }
  if ((*(unsigned int *)(temp_v4 + 0x45ac) & DAT_00573cbc) != 0 ||
      (*(unsigned int *)(temp_v4 + 0x45a8) & DAT_00573cb8) != 0) {
    return 0;
  }
  temp_v1 = 0;
  temp_v8 = 0;
  temp_v0 = 0;
  temp_v2 = 0;
  switch((*(unsigned int *)(param_1 + 0x28) & 0x1ff) >> 5) {
  case 0:
  case 1:
    temp_v8 = 1;
    temp_v1 = 0;
    break;
  case 2:
  case 3:
    temp_v1 = 1;
    break;
  case 4:
    temp_v0 = 1;
    temp_v1 = 0;
    break;
  case 5:
  case 6:
    temp_v8 = 1;
    temp_v1 = 1;
    break;
  case 7:
  case 8:
    temp_v2 = 1;
    temp_v1 = 1;
  }
  temp_v6 = 0;
  if (temp_v1) {
    do {
      puVar9 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + temp_v6 * 0x408);
      temp_v7 = *puVar9;
      temp_v3 = puVar9[1];
      if ((((DAT_00573c98 & temp_v7) != 0 || (DAT_00573c9c & temp_v3) != 0) ||
          (((DAT_00573c90 & temp_v7) != 0 || (DAT_00573c94 & temp_v3) != 0 &&
           ((temp_v7 & DAT_00573ca8) == 0 && (temp_v3 & DAT_00573cac) == 0)))) &&
         (FUN_003ff998(puVar9,param_1,0), puVar9 == (unsigned int *)0x0)) {
        return 0;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 4);
  }
  if (temp_v8) {
    temp_v6 = 4;
    do {
      puVar9 = (unsigned int *)(*(int *)(temp_v4 + 0x1ffc) + temp_v6 * 0x408);
      if ((((DAT_00573c90 & *puVar9) != 0 || (DAT_00573c94 & puVar9[1]) != 0) &&
          ((puVar9[1] & DAT_00573cac) == 0 && (*puVar9 & DAT_00573ca8) == 0)) &&
         (FUN_003ff998(puVar9,param_1,0), puVar9 == (unsigned int *)0x0)) {
        return 0;
      }
      temp_v6 = temp_v6 + 1;
    } while (temp_v6 < 0x36);
  }
  if (temp_v0) {
    temp_v4 = FUN_004ee568(DAT_0057113c);
    temp_v6 = 0;
    if (temp_v4 != 0) {
      temp_v6 = *(int *)(temp_v4 + 0x20);
    }
    if ((temp_v4 != 0 && temp_v6 != 0) && (FUN_003ff998(temp_v6,param_1,1), temp_v6 == 0)) {
      return 0;
    }
  }
  if (temp_v2) {
    temp_v6 = FUN_001ab888();
    temp_v4 = -1;
    temp_v7 = (unsigned int)*(unsigned char *)(temp_v6 + 0x1ca3);
    if (temp_v7 != 0xffffffff && !SCARRY4(temp_v7,1)) {
      do {
        temp_v5 = temp_v4;
        FUN_00400564(temp_v4,0,param_1);
        if (temp_v5 == 0) {
          return 0;
        }
        temp_v4 = temp_v4 + 1;
      } while (temp_v4 < (int)(unsigned int)*(unsigned char *)(temp_v6 + 0x1ca3));
    }
  }
  return 3;
}

} /* extern "C" */
