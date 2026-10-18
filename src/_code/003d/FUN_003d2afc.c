/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d2afc` (_code @ 0x3d2afc, 0x5a8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_2_stack;

extern unsigned int DAT_00434260; /* 0x434260 */
extern int DAT_0043427c; /* 0x43427c */
extern unsigned int DAT_00434290; /* 0x434290 */
extern int DAT_00435d18; /* 0x435d18 */
extern unsigned int DAT_00435d48; /* 0x435d48 */
extern unsigned int DAT_00439ca8; /* 0x439ca8 */

/* Supplied declaration required: FUN_002298e8. */
extern int FUN_00229a34(void);
/* Supplied declaration required: FUN_00229c68. */
/* Supplied declaration required: FUN_00229ca4. */
/* Supplied declaration required: FUN_0024c828. */
extern int FUN_0027e5c0(unsigned int);
extern int FUN_0027e628(unsigned int);
extern int FUN_0027e92c(unsigned int, unsigned int *);
/* Supplied declaration required: FUN_002ae3f0. */
extern int FUN_002bf41c(unsigned int);
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_003358e0(unsigned int);
/* Supplied declaration required: FUN_003ae9dc. */
extern int FUN_003aed14(unsigned int);
extern int *FUN_003ca184(int *, unsigned int *);
extern int *FUN_003cadc8(int *, unsigned int *);
/* Supplied declaration required: FUN_003cb098. */
extern int *FUN_003cb470(int *, unsigned int *);
/* Supplied declaration required: FUN_003cb610. */
extern int *FUN_003cbda4(int *, unsigned int *);
/* Supplied declaration required: FUN_003cbf10. */
/* Supplied declaration required: FUN_003cc16c. */
/* Supplied declaration required: FUN_003cf454. */
/* Supplied declaration required: FUN_003cfd8c. */
/* Supplied declaration required: FUN_003d1968. */
extern int *FUN_003d1e48(int *, unsigned int *);
/* Supplied declaration required: FUN_003d30cc. */
/* Supplied declaration required: FUN_003d33a8. */
/* Supplied declaration required: FUN_003dc6dc. */
/* Supplied declaration required: FUN_003dce20. */
extern int FUN_003dd1f4(int);


int * FUN_003d2afc(int *param_1,unsigned int param_2)

{
/* irregular: 18 native warning(s); review required */
  char temp_v0;
  int *piVar2;
  unsigned char temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int *puVar6;
  unsigned char temp_v4;
  
  temp_v3 = *param_1;
  temp_v2 = DAT_0043427c + *(int *)(temp_v3 + 0x84) * 0xf1c;
  puVar6 = (unsigned int *)(temp_v2 + 4);
  switch(param_2) {
  case 0:
    FUN_003d33a8(param_1,puVar6);
    return param_1;
  case 1:
    piVar2 = (int *)FUN_003ca184(param_1,puVar6);
    return piVar2;
  case 2:
    temp_v3 = FUN_003358e0(DAT_00434260);
    if (temp_v3 == 0) {
      return (int *)0x0;
    }
    temp_v3 = FUN_002bf41c(*(unsigned int *)(*param_1 + 0x5c));
    if (temp_v3 != 0) {
      return (int *)0x0;
    }
    temp_v3 = *param_1;
    if ((((*(unsigned int *)(temp_v3 + 0x44a0) & 4) != 0) && (*(short *)(temp_v3 + 0x496c) == 0)) &&
       (*(short *)(temp_v3 + 0x496e) == 0)) {
      *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) = 0x10;
      *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14e) = 0;
      FUN_002c4b30(temp_v2 + 0x3c,0x85);
    }
    FUN_00229ca4(param_1,puVar6);
    return (int *)0x1;
  case 3:
    temp_v3 = FUN_002bf41c(*(unsigned int *)(temp_v3 + 0x5c));
    if (temp_v3 != 0) {
      return (int *)0x0;
    }
    temp_v2 = *(int *)(temp_v2 + 0x2c);
    *(unsigned short *)(temp_v2 + 0x14c) = 2;
    *(short *)(temp_v2 + 0x14e) = (short)*(unsigned int *)(*param_1 + 0x49c8);
    FUN_0024c828(param_1,1,0);
    FUN_00229ca4(param_1,puVar6);
    return (int *)0x1;
  case 4:
    FUN_003d30cc(param_1,puVar6);
    return param_1;
  case 5:
    FUN_003cc16c(param_1,puVar6);
    return param_1;
  default:
    return (int *)0x0;
  case 7:
    FUN_003cb098(param_1,puVar6);
    return param_1;
  case 8:
    temp_v1 = 9;
    break;
  case 9:
    temp_v3 = FUN_0027e92c(DAT_00434290,puVar6);
    if (0 < temp_v3) {
      return (int *)0x0;
    }
    FUN_003ae9dc(DAT_00439ca8);
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) = 10;
    FUN_00229c68(param_1);
    return (int *)0x1;
  case 10:
    if ((*(unsigned int *)(temp_v3 + 0x7c) & 1) != 0) {
      return (int *)0x0;
    }
    temp_v1 = 0xb;
    break;
  case 0xb:
    piVar2 = (int *)FUN_003cadc8(param_1,puVar6);
    return piVar2;
  case 0xc:
    piVar2 = (int *)FUN_003d1e48(param_1,puVar6);
    return piVar2;
  case 0xd:
    FUN_003d1968(param_1,puVar6);
    return param_1;
  case 0xe:
  case 0x12:
  case 0x13:
  case 0x16:
    temp_v1 = 0x1b;
    break;
  case 0xf:
    temp_v2 = FUN_002bf41c(*(unsigned int *)(temp_v3 + 0x20));
    if (temp_v2 != 0) {
      return (int *)0x0;
    }
    temp_v2 = FUN_0027e5c0(DAT_00439ca8);
    if (temp_v2 == 0) {
      return (int *)0x0;
    }
    temp_v1 = 0x10;
    temp_v2 = DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c;
    *(unsigned char *)(temp_v2 + 9) = temp_v1;
    return (int *)0x1;
  case 0x10:
    temp_v2 = FUN_003aed14(DAT_00439ca8);
    if (temp_v2 == 0) {
      return (int *)0x0;
    }
    temp_v4 = *(int *)(*param_1 + 0x225c) == 3;
    if (temp_v4) {
      temp_v1 = 0xb;
    }
    else {
      temp_v1 = 0x1b;
    }
    temp_v2 = DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c;
    if (temp_v4) {
      *(unsigned char *)(temp_v2 + 9) = temp_v1;
      return (int *)0x1;
    }
    *(unsigned char *)(temp_v2 + 9) = temp_v1;
    return (int *)0x1;
  case 0x11:
    FUN_003cf454(param_1,puVar6);
    return param_1;
  case 0x14:
    FUN_003cbf10(param_1,puVar6);
    return param_1;
  case 0x18:
    temp_v3 = FUN_0027e628(DAT_00435d48);
    if (temp_v3 != 0) {
      return (int *)0x0;
    }
    if (*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) == 3) {
      temp_v2 = (int)*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14e);
      FUN_002ae3f0();
      temp_v0 = '\0';
      if (temp_v2 != 0) {
        temp_v0 = *(char *)(temp_v2 + 0x4b);
      }
      if (((*(unsigned int *)(*param_1 + 0x44a8) & 0x800) == 0) && (temp_v2 != 0 && temp_v0 != '\0')) {
        *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0xc;
        return (int *)0x1;
      }
    }
    FUN_00229c68(param_1);
    return (int *)0x1;
  case 0x1b:
    piVar2 = (int *)FUN_003cb470(param_1,puVar6);
    return piVar2;
  case 0x1c:
    FUN_003cfd8c(param_1,puVar6);
    return param_1;
  case 0x1d:
    FUN_003cb610(param_1,puVar6);
    return param_1;
  case 0x1e:
    piVar2 = (int *)FUN_003cbda4(param_1,puVar6);
    return piVar2;
  case 0x1f:
    if (*(int *)(temp_v2 + 0xc) == 0) {
      temp_v3 = DAT_00435d18;
      FUN_003dce20();
      if (temp_v3 == 0) {
        return (int *)0x0;
      }
      FUN_003dc6dc(DAT_00435d18);
      *(int *)(temp_v2 + 0xc) = *(int *)(temp_v2 + 0xc) + 1;
      return (int *)0x0;
    }
    if (*(int *)(temp_v2 + 0xc) != 1) {
      return (int *)0x0;
    }
    temp_v2 = FUN_003dd1f4(DAT_00435d18);
    if (temp_v2 == 0) {
      return (int *)0x0;
    }
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x20;
    return (int *)0x1;
  case 0x20:
    temp_v2 = FUN_0027e92c(DAT_00434290,puVar6);
    if (0 < temp_v2) {
      return (int *)0x0;
    }
    if (((*puVar6 & 0x1080) == 0) && (temp_v2 = FUN_00229a34(), temp_v2 != 0)) {
      return (int *)0x0;
    }
    FUN_002298e8(param_1,puVar6);
    return (int *)0x1;
  case 0x21:
    temp_v2 = FUN_0027e628(DAT_00435d48);
    if (temp_v2 != 0) {
      return (int *)0x0;
    }
    *(unsigned char *)(DAT_0043427c + *(int *)(*param_1 + 0x84) * 0xf1c + 9) = 0x23;
    return (int *)0x1;
  case 0x22:
    temp_v1 = 0x23;
    break;
  case 0x23:
    if (*(short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) != 7) {
      return (int *)0x1;
    }
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14c) = 0;
    *(unsigned short *)(*(int *)(temp_v2 + 0x2c) + 0x14e) = 0;
    *(unsigned int *)(*(int *)(temp_v2 + 0x24) + 0xc0) = 0;
    *(unsigned int *)(temp_v2 + 0xf1c) = 0;
    return (int *)0x1;
  }
  *(unsigned char *)(temp_v2 + 9) = temp_v1;
  return (int *)0x1;
}
