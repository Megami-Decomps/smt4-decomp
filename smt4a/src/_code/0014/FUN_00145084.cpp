/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00145084` (_code @ 0x145084, 0xc0 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0017ce88(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, unsigned int, int, int);
int FUN_0017d294(void);

/* stack frame of param_1: 4 slot(s), 16 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp2C; /* 0x2c: local_2c */
    unsigned int sp38; /* 0x38: local_38 */
} param_1_stack;

extern unsigned int g_asdGxPresets; /* 0x63fd88 */
extern unsigned int DAT_0063fdb4; /* 0x63fdb4 */
extern unsigned int DAT_0063fde0; /* 0x63fde0 */
extern unsigned char DAT_0063fe10; /* 0x63fe10 */
extern unsigned char DAT_0063fe4c; /* 0x63fe4c */
extern unsigned char DAT_0063fe88; /* 0x63fe88 */
extern int DAT_0063ff7c; /* 0x63ff7c */
extern unsigned int DAT_0063ff84; /* 0x63ff84 */
extern unsigned char DAT_0063ff88; /* 0x63ff88 */

/* Supplied declaration required: FUN_0017ce88. */
/* Supplied declaration required: FUN_0017d294. */


void FUN_00145084(int param_1)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned int temp_v1;
  int temp_v2;
  
  puVar2 = (unsigned int *)0x0;
  puVar3 = (unsigned int *)0x0;
  temp_v0 = 0;
  if (DAT_0063ff7c != 1) {
    if (param_1 == 0x400) {
      puVar2 = (unsigned int *)&DAT_0063fe10;
      puVar3 = &g_asdGxPresets;
    }
    else if (param_1 != 0x401) {
      if (param_1 == 0x410) {
        puVar3 = &DAT_0063fdb4;
        puVar2 = (unsigned int *)&DAT_0063fe4c;
      }
    }
    else {
      temp_v0 = 1;
      puVar3 = &DAT_0063fde0;
      puVar2 = (unsigned int *)&DAT_0063fe88;
    }
    temp_v1 = puVar2[0xe];
    temp_v2 = puVar3[5];
    if ((&DAT_0063ff88)[temp_v0] == '\0') {
      temp_v1 = 0x500;
    }
    FUN_0017d294();
    FUN_0017ce88(puVar2[2],puVar2[0xc],puVar2[0xd],*puVar2,puVar3[temp_v2 + 8],puVar3[6],puVar3[7],
                 DAT_0063ff84,temp_v1,0,8);
  }
  return;
}

} /* extern "C" */
