/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002112c4` (_code @ 0x2112c4, 0x138 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp28; /* 0x28: local_28 */
} param_1_stack;

extern int DAT_0043daa8; /* 0x43daa8 */

/* Unsupported intrinsic, declaration required: software_interrupt (CALLOTHER). */
/* Supplied declaration required: FUN_0026f9f4. */
/* Supplied declaration required: FUN_0026fa70. */
/* Supplied declaration required: FUN_002972f8. */
/* Supplied declaration required: FUN_002b2520. */
/* Supplied declaration required: FUN_002c4160. */
/* Supplied declaration required: FUN_002c41e8. */
/* Supplied declaration required: FUN_002c42fc. */
/* Supplied declaration required: FUN_002c4360. */
/* Supplied declaration required: FUN_002c5468. */
/* Supplied declaration required: FUN_002c5918. */
/* Supplied declaration required: FUN_002c5948. */
/* Supplied declaration required: FUN_002e17a8. */


unsigned int FUN_002112c4(int param_1)

{
/* irregular: 13 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  int uStack_20;
  unsigned char temp_v2 [4];
  
  temp_v1 = 0;
  if (*(int *)(param_1 + 0xd68) == 2) {
    temp_v0 = DAT_0043daa8 + 0xa0;
    FUN_0026f9f4();
    if (temp_v0 != 0) {
      *(unsigned char *)(param_1 + 0xd65) = 1;
      uStack_20 = *(unsigned int *)(param_1 + 0xd70);
      puVar2 = temp_v2;
      FUN_002c42fc(puVar2,&uStack_20,1,0,0xffffffff,0xffffffff);
      if ((int)puVar2 < 0) {
        FUN_002c5468();
      }
      *(unsigned char *)(param_1 + 0xd74) = 1;
      FUN_002c41e8(param_1 + 0xd70);
      if (*(int *)(param_1 + 0xd70) != 0) {
        software_interrupt(0x23);
        *(unsigned int *)(param_1 + 0xd70) = 0;
      }
      FUN_002c4160(*(unsigned int *)(param_1 + 0xd6c));
      temp_v0 = *(int *)(param_1 + 0xd6c);
      if (temp_v0 != 0) {
        FUN_002c4160();
        FUN_002b2520(temp_v0);
      }
      *(unsigned int *)(param_1 + 0xd6c) = 0;
      FUN_002c4360(*(unsigned int *)(param_1 + 0xd78));
      *(unsigned int *)(param_1 + 0xd78) = 0;
      FUN_002c5948(2);
      FUN_002c5918(2);
      FUN_002e17a8(DAT_0043daa8 + 0xa0);
      FUN_0026fa70(DAT_0043daa8 + 0xa0,0);
      temp_v0 = *(int *)(param_1 + 0xcf4);
      FUN_002972f8(temp_v0,*(unsigned int *)(param_1 + 0xcf8));
      *(int *)(param_1 + 0xd04) = temp_v0;
      *(unsigned int *)(temp_v0 + 0x108) = 2;
      temp_v1 = 2;
      *(unsigned int *)(param_1 + 0xd2c) = 1;
    }
  }
  return temp_v1;
}
