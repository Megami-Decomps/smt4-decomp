/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dbc94` (_code @ 0x2dbc94, 0x12c bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002499fc(unsigned int, int [4], int *);
int scrSetResult(int);
int btlGetMainState(void);
int scrGetArg(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp1C; /* 0x1c: local_1c */
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int btlMainFindActiveEntry(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int FUN_00249a54(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */
extern int __aeabi_idivmod(int, int);


unsigned int FUN_002dbc94(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6 [4];
  
  temp_v0 = scrGetArg(0);
  scrGetArg(1);
  temp_v1 = FUN_00249a54();
  FUN_002499fc(temp_v1,temp_v6,&temp_v5);
  temp_v4 = temp_v6[0];
  if (temp_v6[0] < temp_v5 + temp_v6[0]) {
    do {
      temp_v2 = btlGetMainState();
      puVar4 = (unsigned int *)(*(int *)(temp_v2 + 0x1fc0) + temp_v4 * 0x288);
      temp_v3 = *puVar4;
      if (((((temp_v3 & 0x10) == 0) && ((temp_v3 & 1) != 0)) && ((temp_v3 & 0x40) == 0)) &&
         (temp_v2 = __aeabi_idivmod((short)puVar4[0x6d] * 100,(int)*(short *)((int)puVar4 + 0x1b6)),
         temp_v2 <= temp_v0)) {
        scrSetResult(1);
        return 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v6[0] + temp_v5);
  }
  temp_v4 = btlGetMainState();
  if (*(char *)(temp_v4 + 0x49c5) != '\0') {
    btlGetMainState();
    temp_v4 = btlMainFindActiveEntry();
    if ((temp_v4 != 0) &&
       (temp_v4 = __aeabi_idivmod(*(short *)(temp_v4 + 0x1b4) * 100,(int)*(short *)(temp_v4 + 0x1b6)),
       temp_v4 <= temp_v0)) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
