/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002ff964` (_code @ 0x2ff964, 0x124 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002499fc(unsigned int, int [5], int *);
int scrSetResult(int);
int btlGetMainState(void);
int scrGetArg(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern int btlMainFindActiveEntry(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int btlScriptResolveGroupArg(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_002ff964(void)

{
/* irregular: 4 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  int temp_v3;
  unsigned int *puVar5;
  unsigned int temp_v4;
  int temp_v5;
  unsigned char temp_v6;
  int temp_v7;
  int temp_v8 [5];
  
  temp_v0 = scrGetArg(0);
  temp_v1 = scrGetArg(1);
  scrGetArg(2);
  temp_v2 = btlScriptResolveGroupArg();
  FUN_002499fc(temp_v2,temp_v8,&temp_v7);
  temp_v5 = temp_v8[0];
  if (temp_v8[0] < temp_v7 + temp_v8[0]) {
    do {
      temp_v3 = btlGetMainState();
      puVar5 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + temp_v5 * 0x288);
      temp_v4 = *puVar5;
      if (((temp_v4 & 0x10) == 0) && ((temp_v4 & 1) != 0)) {
        temp_v6 = (temp_v4 & 0x40) == 0;
        if (temp_v6) {
          temp_v4 = (unsigned int)*(unsigned short *)((int)puVar5 + 0xce);
        }
        if ((temp_v6 && temp_v4 == temp_v0) && (temp_v1 <= (int)(unsigned int)(unsigned short)puVar5[0x73])) {
          scrSetResult(1);
          return 1;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v8[0] + temp_v7);
  }
  temp_v5 = btlGetMainState();
  if (*(char *)(temp_v5 + 0x49c5) != '\0') {
    btlGetMainState();
    temp_v5 = btlMainFindActiveEntry();
    if (((temp_v5 != 0) && (*(unsigned short *)(temp_v5 + 0xce) == temp_v0)) &&
       (temp_v1 <= (int)(unsigned int)*(unsigned short *)(temp_v5 + 0x1cc))) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
