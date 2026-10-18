/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_0018b660` (_code @ 0x18b660, 0x1b8 bytes) from smt4.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 2 slot(s), 8 byte(s) */
typedef struct {
    unsigned int sp24; /* 0x24: local_24 */
    unsigned int sp28; /* 0x28: local_28 */
} void_stack;

extern unsigned char LAB_0018b854; /* 0x18b854 */
extern unsigned char LAB_0018b864; /* 0x18b864 */
extern int DAT_0043dc58; /* 0x43dc58 */

extern int FUN_00297688(void);
/* Supplied declaration required: FUN_002976ac. */
/* Supplied declaration required: FUN_00297704. */
/* Supplied declaration required: FUN_0029fae8. */
/* Supplied declaration required: FUN_002a6214. */
extern int FUN_002c0ba8(unsigned int);
extern unsigned int FUN_002c0e4c(unsigned int);
/* Supplied declaration required: FUN_002c0e9c. */
extern unsigned int FUN_002c0ec4(unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4b30. */
extern int FUN_002c4b84(unsigned int, unsigned int, unsigned int, unsigned int, unsigned int);
/* Supplied declaration required: FUN_002c4e28. */


void FUN_0018b660(void)

{
/* irregular: 7 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  int temp_v3;
  
  if (DAT_0043dc58 == 0) {
    DAT_0043dc58 = FUN_002c4b84(0x100,0x100,0,0xbc,1);
  }
  temp_v0 = DAT_0043dc58;
  FUN_002c4b30(DAT_0043dc58,0xbc);
  *(unsigned int *)(temp_v0 + 100) = 0;
  *(unsigned char *)(temp_v0 + 0xa8) = 0;
  FUN_002c4e28(0x2f);
  FUN_002a6214(0x2f,0);
  FUN_00297704(&LAB_0018b854,temp_v0 + 0xac,0);
  FUN_00297704(&LAB_0018b864,temp_v0 + 0xb0,0);
  FUN_002976ac(0x36);
  temp_v1 = FUN_002c0ec4(0x36,0);
  FUN_002c0e9c();
  temp_v1 = FUN_002c0e4c(temp_v1);
  FUN_0029fae8(temp_v0,temp_v1,1,1,0,1);
  temp_v2 = FUN_00297688();
  temp_v1 = 1;
  temp_v3 = FUN_002c0ba8(0x555);
  if ((temp_v3 != 0) && (temp_v3 = FUN_002c0ba8(0x557), temp_v3 != 0)) {
    if (temp_v2 != 0) {
      if (temp_v2 != 1) {
        if (temp_v2 == 2) {
          temp_v1 = 2;
        }
      }
      else {
        temp_v1 = 0;
      }
    }
  }
  else {
    temp_v3 = FUN_002c0ba8(0x557);
    if (temp_v3 != 0) {
      if ((temp_v2 != 0) && (temp_v2 == 1)) {
        temp_v1 = 0;
      }
    }
    else {
      temp_v3 = FUN_002c0ba8(0x555);
      if ((temp_v3 != 0) && (temp_v2 == 0)) {
        temp_v1 = 0;
      }
    }
  }
  *(unsigned int *)(temp_v0 + 0x80) = temp_v1;
  temp_v2 = FUN_002c0ba8(0x555);
  if ((temp_v2 != 0) && (temp_v2 = FUN_002c0ba8(0x557), temp_v2 != 0)) {
    *(unsigned char *)(temp_v0 + 0xa8) = 1;
  }
  else {
    *(unsigned char *)(temp_v0 + 0xa8) = 0;
  }
  return;
}
