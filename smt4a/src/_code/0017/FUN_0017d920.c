/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0017d920` (_code @ 0x17d920, 0x1d8 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int *DAT_005b40e0; /* 0x5b40e0 */
extern signed char DAT_0061a481; /* 0x61a481 */
extern int *DAT_0061a50c; /* 0x61a50c */
extern int *DAT_0061a510; /* 0x61a510 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int *FUN_001a2a5c(void);


int * FUN_0017d920(unsigned int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  piVar2 = DAT_0061a50c;
  switch(param_1) {
  case 0x200:
    piVar2 = (int *)DAT_0061a50c[0xb];
    break;
  case 0x201:
    if ((DAT_0061a510 == DAT_0061a50c) && (DAT_0061a481 != '\0')) {
      piVar2 = (int *)0x1;
    }
    else {
      piVar2 = (int *)0x0;
    }
    break;
  case 0x202:
    temp_v0 = (int)DAT_005b40e0 - DAT_0061a50c[1];
    DAT_0061a50c[3] = temp_v0;
    *param_2 = temp_v0;
    return piVar2;
  case 0x203:
    piVar2 = (int *)DAT_0061a50c[8];
    break;
  case 0x204:
    piVar2 = (int *)DAT_0061a50c[2];
    break;
  case 0x205:
    piVar2 = (int *)DAT_0061a50c[7];
    break;
  case 0x206:
    piVar2 = (int *)DAT_0061a50c[1];
    break;
  case 0x207:
    piVar2 = (int *)0x0;
    if (DAT_0061a50c != (int *)0x0) {
      piVar2 = (int *)*DAT_0061a50c;
    }
    break;
  case 0x208:
    piVar2 = DAT_005b40e0;
    break;
  case 0x209:
    piVar2 = (int *)DAT_0061a50c[4];
    break;
  case 0x20a:
    piVar2 = (int *)DAT_0061a50c[10];
    break;
  case 0x20b:
    piVar2 = (int *)DAT_0061a50c[6];
    break;
  case 0x20c:
    if (DAT_0061a50c[8] <= DAT_0061a50c[10]) {
      return DAT_0061a50c;
    }
    piVar2 = (int *)(unsigned int)*(unsigned char *)(DAT_0061a50c[6] + DAT_0061a50c[10] * 0x1c);
    switch((unsigned int)piVar2) {
    case (unsigned int)0x0:
      piVar2 = (int *)0x310;
      break;
    case (unsigned int)0x1:
      piVar2 = (int *)0x311;
      break;
    case (unsigned int)0x2:
      piVar2 = (int *)0x312;
      break;
    case (unsigned int)0x3:
      piVar2 = (int *)0x313;
      break;
    case (unsigned int)0x4:
      piVar2 = (int *)0x314;
      break;
    default:
      return piVar2;
    }
    break;
  case 0x20d:
    temp_v0 = DAT_0061a50c[10];
    if (DAT_0061a50c[8] <= temp_v0) {
      return DAT_0061a50c;
    }
    if (*(char *)(DAT_0061a50c[6] + temp_v0 * 0x1c) != '\x01') {
      return DAT_0061a50c;
    }
    *param_2 = *(int *)(DAT_0061a50c[6] + temp_v0 * 0x1c + 4);
    piVar2 = *(int **)(piVar2[6] + piVar2[10] * 0x1c + 8);
    param_2[1] = (int)piVar2;
    return piVar2;
  case 0x20e:
    puVar1 = (unsigned int *)FUN_001a2a5c();
    temp_v1 = coproc_movefrom_User_R_Thread_and_Process_ID();
    *(unsigned int *)(temp_v1 + 0x80) = 0x40080;
    *(unsigned int *)(temp_v1 + 0x84) = 0x400058;
    *(unsigned int *)(temp_v1 + 0x88) = 4;
    temp_v0 = coproc_movefrom_User_R_Thread_and_Process_ID();
    puVar4 = (unsigned int *)(temp_v0 + 0x180);
    temp_v2 = *puVar4;
    temp_v3 = *(unsigned int *)(temp_v0 + 0x184);
    *puVar4 = 0x10002;
    *(int **)(temp_v0 + 0x184) = param_2;
    piVar2 = (int *)*puVar1;
    software_interrupt(0x32);
    *puVar4 = temp_v2;
    *(unsigned int *)(temp_v0 + 0x184) = temp_v3;
    if (((unsigned int)piVar2 & 0x80000000) == 0) {
      piVar2 = *(int **)(temp_v1 + 0x84);
    }
    return piVar2;
  default:
    return DAT_0061a50c;
  }
  *param_2 = (int)piVar2;
  return piVar2;
}
