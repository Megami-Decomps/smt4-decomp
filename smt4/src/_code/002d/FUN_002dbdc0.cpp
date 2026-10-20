/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002dbdc0` (_code @ 0x2dbdc0, 0xf8 bytes) from smt4_v1.2.0.cxi.
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

extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int FUN_00249a54(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_002dbdc0(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int *puVar1;
  unsigned int temp_v0;
  int temp_v1;
  unsigned int *puVar4;
  unsigned int temp_v2;
  int temp_v3;
  unsigned char temp_v4;
  int temp_v5;
  int temp_v6 [4];
  
  puVar1 = (unsigned int *)scrGetArg(0);
  scrGetArg(1);
  temp_v0 = FUN_00249a54();
  FUN_002499fc(temp_v0,temp_v6,&temp_v5);
  temp_v3 = temp_v6[0];
  if (temp_v6[0] < temp_v5 + temp_v6[0]) {
    do {
      temp_v1 = btlGetMainState();
      puVar4 = (unsigned int *)(*(int *)(temp_v1 + 0x1fc0) + temp_v3 * 0x288);
      temp_v2 = *puVar4;
      if (((temp_v2 & 0x10) == 0) && ((temp_v2 & 1) != 0)) {
        temp_v4 = (temp_v2 & 0x40) == 0;
        if (temp_v4) {
          puVar4 = (unsigned int *)(unsigned int)*(unsigned short *)((int)puVar4 + 0xce);
        }
        if (temp_v4 && puVar4 == puVar1) {
          scrSetResult(1);
          return 1;
        }
      }
      temp_v3 = temp_v3 + 1;
    } while (temp_v3 < temp_v6[0] + temp_v5);
  }
  temp_v3 = btlGetMainState();
  if (*(char *)(temp_v3 + 0x49c5) != '\0') {
    btlGetMainState();
    temp_v3 = FUN_002499b4();
    if ((temp_v3 != 0) && ((unsigned int *)(unsigned int)*(unsigned short *)(temp_v3 + 0xce) == puVar1)) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
