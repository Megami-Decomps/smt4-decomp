/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00325048` (_code @ 0x325048, 0x130 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_0024579c(...);
int FUN_002499fc(unsigned int, int *, int *);
int FUN_0028dcb0(int);
int FUN_002939f4(void);
int FUN_00296cc8(int);

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

/* Supplied declaration required: FUN_0024579c. */
extern int FUN_002499b4(void);
/* Supplied declaration required: FUN_002499fc. */
extern unsigned int FUN_00249a54(void);
/* Supplied declaration required: FUN_0028dcb0. */
/* Supplied declaration required: FUN_002939f4. */
/* Supplied declaration required: FUN_00296cc8. */


unsigned int FUN_00325048(void)

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
  
  temp_v0 = FUN_00296cc8(0);
  temp_v1 = FUN_00296cc8(1);
  FUN_00296cc8(2);
  temp_v2 = FUN_00249a54();
  FUN_002499fc(temp_v2,&temp_v7,&temp_v8);
  temp_v5 = temp_v7;
  if (temp_v7 < temp_v8 + temp_v7) {
    do {
      temp_v3 = FUN_002939f4();
      puVar5 = (unsigned int *)(*(int *)(temp_v3 + 0x1fc0) + temp_v5 * 0x288);
      temp_v4 = *puVar5;
      if (((temp_v4 & 0x10) == 0) && ((temp_v4 & 1) != 0)) {
        temp_v6 = (temp_v4 & 0x40) == 0;
        if (temp_v6) {
          temp_v4 = (unsigned int)*(unsigned short *)((int)puVar5 + 0xce);
        }
        if ((temp_v6 && temp_v4 == temp_v0) && (temp_v3 = FUN_0024579c(puVar5,temp_v1), temp_v3 != 0)) {
          FUN_0028dcb0(1);
          return 1;
        }
      }
      temp_v5 = temp_v5 + 1;
    } while (temp_v5 < temp_v8 + temp_v7);
  }
  temp_v5 = FUN_002939f4();
  if (*(char *)(temp_v5 + 0x49c5) != '\0') {
    FUN_002939f4();
    temp_v5 = FUN_002499b4();
    if (((temp_v5 != 0) && (*(unsigned short *)(temp_v5 + 0xce) == temp_v0)) &&
       (temp_v5 = FUN_0024579c(temp_v5,temp_v1), temp_v5 != 0)) {
      FUN_0028dcb0(1);
      return 1;
    }
  }
  FUN_0028dcb0(0);
  return 1;
}

} /* extern "C" */
