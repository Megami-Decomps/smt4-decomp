/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002bc7f4` (_code @ 0x2bc7f4, 0x1c0 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_2: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_2_stack;

extern int *DAT_004652a0; /* 0x4652a0 */
extern signed char DAT_004c62a1; /* 0x4c62a1 */
extern int *DAT_004c632c; /* 0x4c632c */
extern int *DAT_004c6330; /* 0x4c6330 */

/* Unsupported intrinsic, declaration required: coproc_movefrom_User_R_Thread_and_Process_ID (CALLOTHER). */
/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
extern unsigned int *FUN_002ad264(void);


int * FUN_002bc7f4(unsigned int param_1,int *param_2)

{
/* irregular: 2 native warning(s); review required */
  unsigned int *puVar1;
  int *piVar2;
  int temp_v0;
  unsigned int *puVar4;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  piVar2 = DAT_004c632c;
  switch(param_1) {
  case 0x200:
    piVar2 = (int *)DAT_004c632c[0xb];
    break;
  case 0x201:
    if ((DAT_004c6330 == DAT_004c632c) && (DAT_004c62a1 != '\0')) {
      piVar2 = (int *)0x1;
    }
    else {
      piVar2 = (int *)0x0;
    }
    break;
  case 0x202:
    temp_v0 = (int)DAT_004652a0 - DAT_004c632c[1];
    DAT_004c632c[3] = temp_v0;
    *param_2 = temp_v0;
    return piVar2;
  case 0x203:
    piVar2 = (int *)DAT_004c632c[8];
    break;
  case 0x204:
    piVar2 = (int *)DAT_004c632c[2];
    break;
  case 0x205:
    piVar2 = (int *)DAT_004c632c[7];
    break;
  case 0x206:
    piVar2 = (int *)DAT_004c632c[1];
    break;
  case 0x207:
    piVar2 = (int *)0x0;
    if (DAT_004c632c != (int *)0x0) {
      piVar2 = (int *)*DAT_004c632c;
    }
    break;
  case 0x208:
    piVar2 = DAT_004652a0;
    break;
  case 0x209:
    piVar2 = (int *)DAT_004c632c[4];
    break;
  case 0x20a:
    piVar2 = (int *)DAT_004c632c[10];
    break;
  case 0x20b:
    piVar2 = (int *)DAT_004c632c[6];
    break;
  case 0x20c:
    if (DAT_004c632c[8] <= DAT_004c632c[10]) {
      return DAT_004c632c;
    }
    piVar2 = (int *)(unsigned int)*(unsigned char *)(DAT_004c632c[6] + DAT_004c632c[10] * 0x1c);
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
    temp_v0 = DAT_004c632c[10];
    if (DAT_004c632c[8] <= temp_v0) {
      return DAT_004c632c;
    }
    if (*(char *)(DAT_004c632c[6] + temp_v0 * 0x1c) != '\x01') {
      return DAT_004c632c;
    }
    *param_2 = *(int *)(DAT_004c632c[6] + temp_v0 * 0x1c + 4);
    piVar2 = *(int **)(piVar2[6] + piVar2[10] * 0x1c + 8);
    param_2[1] = (int)piVar2;
    return piVar2;
  case 0x20e:
    puVar1 = (unsigned int *)FUN_002ad264();
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
    return DAT_004c632c;
  }
  *param_2 = (int)piVar2;
  return piVar2;
}
