/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5844` (_code @ 0x3b5844, 0x204 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, int, int, int);
int uiSpriteSelectAnim(int, int);
int uiSpriteSetKeyframe(int, int, int);
int FUN_003d2150(int);
int FUN_003e48dc(unsigned int);
int FUN_004bd410(unsigned int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char g_messageMain; /* 0x57f588 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: uiSpriteSelectAnim. */
/* Supplied declaration required: uiSpriteSetKeyframe. */
extern int saveSlotFindById(unsigned int);
extern unsigned int scrGetArg(unsigned int);
extern int scrGetCommandFrame(void);
extern int FUN_00370ecc(unsigned int);
/* Supplied declaration required: FUN_003d2150. */
/* Supplied declaration required: FUN_003e48dc. */
/* Supplied declaration required: FUN_004bd410. */


unsigned int FUN_003b5844(void)

{
/* irregular: 6 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  unsigned int temp_v4;
  unsigned int temp_v5;
  
  temp_v0 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
  temp_v1 = scrGetArg(0);
  temp_v2 = scrGetCommandFrame();
  temp_v3 = (*(int *)((unsigned char *)&g_messageMain + 0x8));
  if (temp_v2 == 0) {
    if (*(char *)(temp_v0 + 0x90) != '\0') {
      *(int *)(temp_v0 + 0x9c) = *(int *)(temp_v0 + 0x9c) + 1;
      *(unsigned int *)(temp_v0 + 0x98) = 0x14;
    }
    else {
      temp_v2 = (*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x194;
      *(unsigned char *)((*(int *)((unsigned char *)&g_messageMain + 0x8)) + 0x90) = 1;
      *(unsigned char *)(temp_v3 + 0x8d) = 1;
      FUN_0014e188(temp_v3 + 0xb00,0x14,0xbb9,temp_v2,0xb);
      uiSpriteSelectAnim(temp_v3 + 0xb00,0);
      *(unsigned int *)(temp_v3 + 0xa0) = 0;
      *(unsigned int *)(temp_v3 + 0xa4) = 0;
      *(unsigned int *)(temp_v3 + 0xa8) = 0;
      *(unsigned int *)(temp_v3 + 0xac) = 0;
      *(unsigned int *)(temp_v3 + 0xb0) = 0;
      *(unsigned int *)(temp_v3 + 0xb4) = 0;
      *(unsigned int *)(temp_v3 + 0xb8) = 0;
      *(unsigned int *)(temp_v3 + 0xbc) = 0;
      *(unsigned int *)(temp_v3 + 0xc0) = 0;
      *(unsigned int *)(temp_v3 + 0xc4) = 0;
      *(unsigned int *)(temp_v3 + 200) = 0;
      *(unsigned int *)(temp_v3 + 0xcc) = 0;
      *(unsigned int *)(temp_v3 + 0xd0) = 0;
      *(unsigned int *)(temp_v3 + 0xd4) = 0;
      *(unsigned int *)(temp_v3 + 0xd8) = 0;
      *(unsigned int *)(temp_v0 + 0x9c) = 0;
    }
    temp_v3 = saveSlotFindById(temp_v1 & 0xffff);
    if (temp_v3 == 0) {
      FUN_004bd410(temp_v1 & 0xffff);
      FUN_003e48dc(temp_v1 & 0xffff);
    }
    temp_v3 = FUN_00370ecc(temp_v1 & 0xffff);
    temp_v4 = 0;
    if (temp_v3 != 0) {
      temp_v4 = (unsigned int)*(unsigned short *)(temp_v3 + 4);
    }
    if (temp_v3 != 0 && temp_v4 != temp_v1) {
      FUN_004bd410(temp_v1 & 0xffff);
      FUN_003e48dc(temp_v1 & 0xffff);
    }
    *(unsigned char *)(*(int *)(temp_v0 + 0x9c) + temp_v0 + 0xa0) = 0;
    *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x9c) * 4 + 0xac) = temp_v1;
    *(unsigned char *)(*(int *)(temp_v0 + 0x9c) + temp_v0 + 0xdc) = 1;
  }
  if (*(int *)(temp_v0 + 0x98) == 0x14) {
    FUN_0014e188(temp_v0 + *(int *)(temp_v0 + 0x9c) * 0x8c + 0xdbc,0x14,0xc12,temp_v0 + 0x194,0xb);
    uiSpriteSetKeyframe(temp_v0 + *(int *)(temp_v0 + 0x9c) * 0x8c + 0xdbc,10,0);
    *(unsigned char *)(*(int *)(temp_v0 + 0x9c) + temp_v0 + 0xa0) = 1;
    FUN_003d2150(0x100016e);
  }
  if (((*(char *)(temp_v0 + 0x90) == '\0') || (*(char *)(temp_v0 + 0x8d) != '\x02')) ||
     (*(char *)(*(int *)(temp_v0 + 0x9c) + temp_v0 + 0xa0) != '\x02')) {
    temp_v5 = 0;
  }
  else {
    temp_v5 = 1;
  }
  return temp_v5;
}

} /* extern "C" */
