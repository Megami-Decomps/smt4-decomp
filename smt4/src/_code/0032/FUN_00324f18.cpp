/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00324f18` (_code @ 0x324f18, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00245854(...);
int FUN_002499fc(unsigned int, int *, int *);
int scrSetResult(int);
int btlGetMainState(void);
int scrGetArg(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_00245854. */
extern int btlMainFindActiveEntry(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int btlScriptResolveGroupArg(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_00324f18(void)

{
/* irregular: 5 native warning(s); review required */
  unsigned int temp_v0;
  unsigned int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  int temp_v8;
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  scrGetArg(2);
  temp_v2 = btlScriptResolveGroupArg();
  FUN_002499fc(temp_v2,&temp_v7,&temp_v8);
  temp_v5 = temp_v7;
  if (temp_v7 < temp_v8 + temp_v7) {
    do {
      temp_v3 = btlGetMainState();
      puVar5 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + temp_v5 * 0x288);
      temp_v4 = *puVar5;
      if (((temp_v4 & 0x10) == 0) && ((temp_v4 & 1) != 0)) {
        temp_v6 = (temp_v4 & 0x40) == 0;
        if (temp_v6) {
          temp_v4 = (unsigned int)*(unsigned short *)((int)puVar5 + 0xce);
        }
        if ((temp_v6 && temp_v4 == temp_v0) && (temp_v3 = FUN_00245854(puVar5,temp_v1), temp_v3 != 0)) {
          scrSetResult(1);
          return 1;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v8 + temp_v7);
  }
  temp_v5 = btlGetMainState();
  if (*(char *)(temp_v5 + 0x49c5) != '\0') {
    btlGetMainState();
    temp_v5 = btlMainFindActiveEntry();
    if (((temp_v5 != 0) && (*(unsigned short *)(temp_v5 + 0xce) == temp_v0)) &&
       (temp_v5 = FUN_00245854(temp_v5,temp_v1), temp_v5 != 0)) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
