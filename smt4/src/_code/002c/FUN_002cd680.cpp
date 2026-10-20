/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cd680` (_code @ 0x2cd680, 0xc8 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_002c40f8(unsigned char *, int *, int, int, int, int);
int FUN_002c526c(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp20; /* 0x20: local_20 */
} void_stack;

extern int DAT_0043de68; /* 0x43de68 */

/* Supplied declaration required: FUN_002c40f8. */
/* Supplied declaration required: FUN_002c526c. */
extern void nn_os_CriticalSection_Leave(unsigned int);
extern unsigned char nn_os_CriticalSection_TryEnter(unsigned int);


unsigned int FUN_002cd680(void)

{
/* irregular: 2 native warning(s); review required */
  int temp_v0;
  unsigned char temp_v1;
  unsigned char *puVar3;
  unsigned int temp_v2;
  int iStack_18;
  unsigned char temp_v3 [4];
  
  temp_v0 = DAT_0043de68;
  temp_v2 = 0;
  if (DAT_0043de68 != 0) {
    iStack_18 = *(int *)(DAT_0043de68 + 0x42c);
    if (iStack_18 != 0) {
      puVar3 = temp_v3;
      FUN_002c40f8(puVar3,&iStack_18,1,0,0,0);
      if ((int)puVar3 < 0) {
        FUN_002c526c();
      }
      if (((unsigned int)puVar3 & 0x3ff) == 0x3fe) {
        temp_v1 = nn_os_CriticalSection_TryEnter(temp_v0 + 0x420);
        if (!temp_v1) {
          return 0;
        }
        if (*(int *)(temp_v0 + 0x78) != *(int *)(temp_v0 + 0x7c)) {
          *(int *)(temp_v0 + 0x7c) = *(int *)(temp_v0 + 0x7c) + 1;
        }
        nn_os_CriticalSection_Leave(temp_v0 + 0x420);
        return 0;
      }
    }
    temp_v2 = 1;
    while (*(int *)(temp_v0 + 0x78) != *(int *)(temp_v0 + 0x7c)) {
      *(int *)(temp_v0 + 0x7c) = *(int *)(temp_v0 + 0x7c) + 1;
    }
  }
  return temp_v2;
}

} /* extern "C" */
