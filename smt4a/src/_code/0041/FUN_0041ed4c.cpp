/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0041ed4c` (_code @ 0x41ed4c, 0x194 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00168980(int);
int FUN_0019de98(int, unsigned int);
int ptrListRemoveClearOwner(unsigned int, unsigned int);
int FUN_0022e774(void);
int FUN_0023b45c(int);
int FUN_002c8538(int);
int FUN_002f0384(int);
int FUN_0033449c(int);
int FUN_0038b5fc(int, int);
int FUN_0041dcc0(int);
int rt_memcpy_w(unsigned int, int, int);

typedef int romwright_code(...);
extern unsigned int g_handleRegistry; /* 0x56fcc0 */
extern signed char g_saveLoadUIBase; /* 0x588e14 */

/* Supplied declaration required: FUN_00168980. */
extern unsigned int gameGetPlayerData(void);
/* Supplied declaration required: FUN_0019de98. */
/* Supplied declaration required: ptrListRemoveClearOwner. */
/* Supplied declaration required: FUN_0022e774. */
/* Supplied declaration required: FUN_0023b45c. */
/* Supplied declaration required: FUN_002c8538. */
/* Supplied declaration required: FUN_002f0384. */
extern int byte1IsZero(void);
extern int objBStateAllowsAction(void);
/* Supplied declaration required: FUN_0033449c. */
/* Supplied declaration required: FUN_0038b5fc. */
/* Supplied declaration required: FUN_0041dcc0. */
/* Supplied declaration required: rt_memcpy_w. */


void FUN_0041ed4c(int param_1)

{
/* irregular: 11 native warning(s); review required */
  char temp_v0;
  unsigned char temp_v1;
  int temp_v2;
  unsigned int temp_v3;
  
  temp_v2 = objBStateAllowsAction();
  temp_v0 = '\0';
  if (temp_v2 != 0) {
    temp_v0 = *(char *)(param_1 + 0x5c);
  }
  if (temp_v2 != 0 && temp_v0 != '\0') {
    *(unsigned char *)(param_1 + 0x5c) = 0;
    FUN_002f0384(1);
    *(unsigned char *)(param_1 + 0x68) = 1;
  }
  FUN_0041dcc0(param_1);
  if ((g_saveLoadUIBase == '\0') || (*(char *)(param_1 + 0x5c) != '\0')) {
    if (*(char *)(param_1 + 0x11) == '\0') {
      return;
    }
    if (*(char *)(param_1 + 0x5c) != '\0') {
      return;
    }
    temp_v2 = byte1IsZero();
    if (temp_v2 == 0) {
      return;
    }
    FUN_0033449c(0);
    FUN_0023b45c(1);
    FUN_002c8538(1);
    FUN_002f0384(0);
    *(unsigned char *)(param_1 + 0x68) = 0;
    if (*(char *)(*(int *)(param_1 + 0x2f8) + param_1 + 0x2ec) == '\0') {
      FUN_0023b45c(0);
    }
    temp_v3 = gameGetPlayerData();
    rt_memcpy_w(temp_v3,param_1 + 0x28,0xe);
    FUN_0038b5fc(1,*(unsigned short *)(param_1 + 0x30));
    FUN_0038b5fc(2,*(unsigned short *)(param_1 + 0x32));
    FUN_0038b5fc(0,*(unsigned short *)(param_1 + 0x2e));
    *(unsigned char *)(param_1 + 0x5c) = 1;
    FUN_0019de98(0,0xf4f4f4ff);
    temp_v1 = *(unsigned char *)(param_1 + 7);
    *(unsigned char *)(param_1 + 7) = 5;
    *(unsigned char *)(param_1 + 0xd) = temp_v1;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  else {
    if (*(int *)(param_1 + 0x58) != 0) {
      ptrListRemoveClearOwner(g_handleRegistry,*(unsigned int *)(*(int *)(param_1 + 0x58) + 4));
      if (*(int **)(param_1 + 0x58) != (int *)0x0) {
        (**(romwright_code **)(**(int **)(param_1 + 0x58) + 4))(*(int **)(param_1 + 0x58));
        *(unsigned int *)(param_1 + 0x58) = 0;
      }
    }
    FUN_0022e774();
    FUN_00168980(3);
    temp_v1 = *(unsigned char *)(param_1 + 7);
    *(unsigned int *)(param_1 + 8) = 0;
    *(unsigned char *)(param_1 + 7) = 9;
    *(unsigned char *)(param_1 + 0xd) = temp_v1;
  }
  *(unsigned char *)(param_1 + 0xc) = 0;
  return;
}

} /* extern "C" */
