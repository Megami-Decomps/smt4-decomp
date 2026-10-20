#include "romwright_types.h"

extern "C" {

int FUN_001631d0(unsigned int, int);
int FUN_0019a5a0(int);
int FUN_002c2358(void);
int FUN_0040132c(int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0057a4f4; /* 0x57a4f4 */

/* Supplied declaration required: FUN_001631d0. */
extern int FUN_00163e40(unsigned int);
extern int FUN_00164a9c(void);
/* Supplied declaration required: FUN_0019a5a0. */
/* Supplied declaration required: FUN_002c2358. */
/* Supplied declaration required: FUN_0040132c. */


void FUN_00315080(void)

{
/* irregular: 4 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = FUN_00164a9c();
  temp_v1 = (*(int *)((unsigned char *)&DAT_0057a4f4 + 0x4));
  if ((*(int *)((unsigned char *)&DAT_0057a4f4 + 0x4)) != 0) {
    if (*(int *)((*(int *)((unsigned char *)&DAT_0057a4f4 + 0x4)) + 0xc0) != 0) {
      *(unsigned int *)((*(int *)((unsigned char *)&DAT_0057a4f4 + 0x4)) + 0xc0) = 0;
    }
    FUN_002c2358();
    FUN_0040132c(temp_v1);
    *(unsigned int *)(temp_v1 + 0xa0) = 0;
    FUN_0019a5a0((*(int *)((unsigned char *)&DAT_0057a4f4 + 0x4)));
    (*(int *)((unsigned char *)&DAT_0057a4f4 + 0x4)) = 0;
  }
  temp_v1 = FUN_00163e40(*(unsigned int *)(temp_v0 + 0x54));
  if (temp_v1 != 0) {
    FUN_001631d0(*(unsigned int *)(temp_v0 + 0x54),0);
    return;
  }
  return;
}

} /* extern "C" */
