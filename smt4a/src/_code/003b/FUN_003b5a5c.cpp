/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003b5a5c` (_code @ 0x3b5a5c, 0x1e4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0014e188(int, int, int, int, int);
int FUN_001846d0(int, int);
int FUN_00184758(int, int, int);
int saveSlotFindById(unsigned int);
int FUN_003d2150(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char DAT_0057f588; /* 0x57f588 */

/* Supplied declaration required: FUN_0014e188. */
/* Supplied declaration required: FUN_001846d0. */
/* Supplied declaration required: FUN_00184758. */
/* Supplied declaration required: saveSlotFindById. */
extern int FUN_00187168(void);
extern unsigned int scrGetArg(unsigned int);
extern int FUN_002deb84(void);
/* Supplied declaration required: FUN_003d2150. */


unsigned int FUN_003b5a5c(void)

{
/* irregular: 5 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  temp_v0 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
  temp_v1 = scrGetArg(0);
  saveSlotFindById(temp_v1 & 0xffff);
  temp_v2 = FUN_00187168();
  if (temp_v2 != 0) {
    temp_v3 = FUN_002deb84();
    temp_v2 = (*(int *)((unsigned char *)&DAT_0057f588 + 0x8));
    if (temp_v3 == 0) {
      if (*(char *)(temp_v0 + 0x90) != '\0') {
        *(int *)(temp_v0 + 0x9c) = *(int *)(temp_v0 + 0x9c) + 1;
        *(unsigned int *)(temp_v0 + 0x98) = 0x14;
      }
      else {
        *(unsigned char *)((*(int *)((unsigned char *)&DAT_0057f588 + 0x8)) + 0x90) = 1;
        *(unsigned char *)(temp_v2 + 0x8d) = 1;
        FUN_0014e188(temp_v2 + 0xb00,0x14,0xbb9,temp_v2 + 0x194,0xb);
        FUN_001846d0(temp_v2 + 0xb00,0);
        *(unsigned int *)(temp_v2 + 0xa0) = 0;
        *(unsigned int *)(temp_v2 + 0xa4) = 0;
        *(unsigned int *)(temp_v2 + 0xa8) = 0;
        *(unsigned int *)(temp_v2 + 0xac) = 0;
        *(unsigned int *)(temp_v2 + 0xb0) = 0;
        *(unsigned int *)(temp_v2 + 0xb4) = 0;
        *(unsigned int *)(temp_v2 + 0xb8) = 0;
        *(unsigned int *)(temp_v2 + 0xbc) = 0;
        *(unsigned int *)(temp_v2 + 0xc0) = 0;
        *(unsigned int *)(temp_v2 + 0xc4) = 0;
        *(unsigned int *)(temp_v2 + 200) = 0;
        *(unsigned int *)(temp_v2 + 0xcc) = 0;
        *(unsigned int *)(temp_v2 + 0xd0) = 0;
        *(unsigned int *)(temp_v2 + 0xd4) = 0;
        *(unsigned int *)(temp_v2 + 0xd8) = 0;
        *(unsigned int *)(temp_v0 + 0x9c) = 0;
      }
      *(unsigned char *)(*(int *)(temp_v0 + 0x9c) + temp_v0 + 0xa0) = 2;
      *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x9c) * 4 + 0xac) = 0;
      *(unsigned char *)(*(int *)(temp_v0 + 0x9c) + temp_v0 + 0xdc) = 0;
    }
    if (*(int *)(temp_v0 + 0x98) == 0x14) {
      *(unsigned int *)(temp_v0 + *(int *)(temp_v0 + 0x9c) * 4 + 0xac) = temp_v1;
      FUN_0014e188(temp_v0 + *(int *)(temp_v0 + 0x9c) * 0x8c + 0xdbc,0x14,0xc12,temp_v0 + 0x194,0xb);
      FUN_00184758(temp_v0 + *(int *)(temp_v0 + 0x9c) * 0x8c + 0xdbc,0xb,0);
      *(unsigned char *)(*(int *)(temp_v0 + 0x9c) + temp_v0 + 0xa0) = 4;
      FUN_003d2150(0x100016f);
    }
    if (((*(char *)(temp_v0 + 0x90) == '\0') || (*(char *)(temp_v0 + 0x8d) != '\x02')) ||
       (*(char *)(*(int *)(temp_v0 + 0x9c) + temp_v0 + 0xa0) != '\0')) {
      return 0;
    }
  }
  return 1;
}

} /* extern "C" */
