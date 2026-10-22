/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003183ac` (_code @ 0x3183ac, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002499fc(unsigned int, int *, int [2]);
int scrSetResult(int);
int btlGetMainState(void);
int scrGetArg(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int btlMainFindActiveEntry(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int btlScriptResolveGroupArg(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_003183ac(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6 [2];
  
  temp_v0 = scrGetArg(0);
  temp_v4 = 0;
  if (temp_v0 == 0) {
    temp_v4 = 7;
  }
  else if (temp_v0 == 1) {
    temp_v4 = 10;
  }
  else if (temp_v0 == 2) {
    temp_v4 = 0xb;
  }
  scrGetArg(1);
  temp_v1 = btlScriptResolveGroupArg();
  FUN_002499fc(temp_v1,&temp_v5,temp_v6);
  temp_v0 = temp_v5;
  if (temp_v5 < temp_v6[0] + temp_v5) {
    do {
      temp_v2 = btlGetMainState();
      puVar4 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v0 * 0x288);
      temp_v3 = *puVar4;
      if (((((temp_v3 & 0x10) == 0) && ((temp_v3 & 1) != 0)) && ((temp_v3 & 0x40) == 0)) &&
         (*(short *)((int)puVar4 + temp_v4 * 2 + 0x72) < 0)) {
        scrSetResult(1);
        return 1;
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < temp_v5 + temp_v6[0]);
  }
  temp_v0 = btlGetMainState();
  if (*(char *)(temp_v0 + 0x49c5) != '\0') {
    btlGetMainState();
    temp_v0 = btlMainFindActiveEntry();
    if ((temp_v0 != 0) && (0x7fffffff < (unsigned int)(int)*(short *)(temp_v0 + temp_v4 * 2 + 0x72))) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
