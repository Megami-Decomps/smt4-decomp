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

extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int FUN_00249a54(void);
/* Supplied declaration required: scrSetResult. */
/* Supplied declaration required: btlGetMainState. */
/* Supplied declaration required: scrGetArg. */


unsigned int FUN_002ff3f0(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned int *puVar4;
  unsigned int temp_v3;
  int temp_v4;
  int temp_v5;
  int temp_v6;
  
  temp_v0 = scrGetArg(0);
  scrGetArg(1);
  temp_v1 = FUN_00249a54();
  FUN_002499fc(temp_v1,&temp_v5,&temp_v6);
  temp_v4 = temp_v5;
  if (temp_v5 < temp_v6 + temp_v5) {
    do {
      temp_v2 = btlGetMainState();
      temp_v2 = *(int *)(temp_v2 + 0x1fc0) + temp_v4 * 0x288;
      puVar4 = (unsigned int *)temp_v2;
      temp_v3 = *puVar4;
      if (((((temp_v3 & 0x10) == 0) && ((temp_v3 & 1) != 0)) && ((temp_v3 & 0x40) == 0)) &&
         (*(unsigned short *)((int)puVar4 + temp_v0 * 2 + 0x1f2) >> 10 == 3)) {
        scrSetResult(1);
        return 1;
      }
      temp_v4 = temp_v4 + 1;
    } while (temp_v4 < temp_v5 + temp_v6);
  }
  temp_v4 = btlGetMainState() + 0x4900;
  if (*(char *)(temp_v4 + 0xc5) != '\0') {
    btlGetMainState();
    temp_v4 = FUN_002499b4();
    if ((temp_v4 != 0) && (*(unsigned short *)(temp_v4 + temp_v0 * 2 + 0x1f2) >> 10 == 3)) {
      scrSetResult(1);
      return 1;
    }
  }
  scrSetResult(0);
  return 1;
}

} /* extern "C" */
