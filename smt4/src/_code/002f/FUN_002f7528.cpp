/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f7528` (_code @ 0x2f7528, 0x120 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002499fc(unsigned int, int *, int *);
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
extern unsigned int FUN_00249a54(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_002f7528(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned short temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  int temp_v6;
  int temp_v7;
  
  temp_v1 = scrGetArg(0);
  scrGetArg(1);
  temp_v2 = FUN_00249a54();
  FUN_002499fc(temp_v2,&temp_v6,&temp_v7);
  temp_v5 = temp_v6;
  if (temp_v6 < temp_v7 + temp_v6) {
    do {
      temp_v3 = btlGetMainState();
      puVar5 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + temp_v5 * 0x288);
      temp_v4 = *puVar5;
      if (((((temp_v4 & 0x10) == 0) && ((temp_v4 & 1) != 0)) && ((temp_v4 & 0x40) == 0)) &&
         ((temp_v0 = *(unsigned short *)((int)puVar5 + temp_v1 * 2 + 0x1f2), (temp_v0 & 0xfc00) == 0 ||
          (temp_v0 >> 10 == 2)))) {
        scrSetResult(1);
        return 1;
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v6 + temp_v7);
  }
  temp_v5 = btlGetMainState();
  if (*(char *)(temp_v5 + 0x49c5) != '\0') {
    btlGetMainState();
    temp_v5 = btlMainFindActiveEntry();
    if ((temp_v5 != 0) &&
       (temp_v0 = *(unsigned short *)(temp_v5 + temp_v1 * 2 + 0x1f2), (temp_v0 & 0xfc00) == 0 || temp_v0 >> 10 == 2))
    {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
