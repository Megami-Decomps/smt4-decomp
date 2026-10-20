/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00472568` (_code @ 0x472568, 0x2b0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(unsigned int *, int, unsigned int, unsigned int *, int);
int FUN_00163aa4(...);
int pairSetSecondResetFirst(...);
int uiSpriteSelectAnim(...);
int pairSetFirstResetSecond(...);
int FUN_00387240(...);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_00163aa4. */
extern unsigned int *jobGetWork(void);
/* Supplied declaration required: pairSetSecondResetFirst. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: pairSetFirstResetSecond. */
/* Supplied declaration required: FUN_00387240. */


unsigned int FUN_00472568(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  unsigned int temp_v1;
  
  puVar2 = (unsigned int *)jobGetWork();
  temp_v0 = (puVar2[0x106] + 1) * -0x33333333;
  temp_v1 = (puVar2[0x106] + 1) % 0x28;
  puVar2[0x106] = temp_v1;
  switch(puVar2[2]) {
  case 0:
    *puVar2 = *puVar2 & 0xffffffdf;
    puVar2[2] = 1;
    FUN_0014e188(puVar2 + 0x110,8,0xffffffff,puVar2 + 0x108,0xb);
    puVar3 = puVar2 + 0x133;
    FUN_0014e188(puVar3,8,0xffffffff,puVar2 + 0x108,0xb);
    puVar4 = puVar2 + 0x156;
    FUN_0014e188(puVar4,8,0xffffffff,puVar2 + 0x108,0xb);
    if ((int)puVar2[4] < 5) {
      pairSetSecondResetFirst(puVar2 + 0x110,6);
      uiSpriteSelectAnim(puVar2 + 0x110,3);
      FUN_00387240(puVar2 + 0x110,8,0x36);
      pairSetSecondResetFirst(puVar4,7);
      uiSpriteSelectAnim(puVar4,3);
      FUN_00387240(puVar4,8,0x36);
    }
    else {
      pairSetSecondResetFirst(puVar2 + 0x110,4);
      uiSpriteSelectAnim(puVar2 + 0x110,3);
      FUN_00387240(puVar2 + 0x110,8,0x22);
      pairSetSecondResetFirst(puVar4,5);
      uiSpriteSelectAnim(puVar4,3);
      FUN_00387240(puVar4,8,0x22);
    }
    *(unsigned char *)(puVar2 + 0x11f) = 1;
    *(unsigned char *)(puVar2 + 0x165) = 1;
    pairSetFirstResetSecond(puVar3,7);
    uiSpriteSelectAnim(puVar3,4);
    FUN_00387240(puVar3,8,0x47);
    puVar2 = puVar2 + 0x110;
    break;
  case 1:
    FUN_00163aa4(puVar2 + 0x110,temp_v1,temp_v0);
    FUN_00163aa4(puVar2 + 0x156);
    if (*(char *)((int)puVar2 + 0x4ca) == '\0') {
      return 0;
    }
    *puVar2 = *puVar2 | 0x20;
    temp_v1 = 2;
    puVar2[2] = temp_v1;
    return 0;
  case 2:
    FUN_00163aa4(puVar2 + 0x110,temp_v1,temp_v0);
    FUN_00163aa4(puVar2 + 0x156);
    puVar2 = puVar2 + 0x133;
    break;
  case 3:
    FUN_00163aa4(puVar2 + 0x110,temp_v1,temp_v0);
    FUN_00163aa4(puVar2 + 0x156);
    if (*(char *)((int)puVar2 + 0x4ca) == '\0') {
      return 0;
    }
    temp_v1 = 4;
    puVar2[2] = temp_v1;
    return 0;
  case 4:
    *puVar2 = *puVar2 & 0xffffffcf;
  default:
    return 0;
  }
  FUN_00163aa4(puVar2);
  return 0;
}

} /* extern "C" */
