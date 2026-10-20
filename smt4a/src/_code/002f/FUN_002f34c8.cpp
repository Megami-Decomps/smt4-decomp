/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f34c8` (_code @ 0x2f34c8, 0x38 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(unsigned int, unsigned char *, int);

extern unsigned char LAB_00104069; /* 0x104069 */
extern unsigned char LAB_002f3504; /* 0x2f3504 */
extern unsigned int DAT_00594b0c; /* 0x594b0c */
extern unsigned char DAT_0062d85c; /* 0x62d85c */
extern unsigned int DAT_0062d864; /* 0x62d864 */

extern int __cxa_guard_acquire(unsigned int *);
extern unsigned int FUN_002f32ac(unsigned char *, unsigned char *, unsigned int);
/* Supplied declaration required: emptyStub_002f4370. */


unsigned int FUN_002f34c8(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  
  if (((DAT_00594b0c & 1) == 0) && (temp_v0 = __cxa_guard_acquire(&DAT_00594b0c), temp_v0 != 0)) {
    temp_v1 = FUN_002f32ac(&DAT_0062d85c,&LAB_002f3504,0);
    emptyStub_002f4370(temp_v1,&LAB_00104069,0x100000);
  }
  return (DAT_0062d864 << 0x18) | (((DAT_0062d864 >> 8) & 0xff) << 0x10) |
         (((DAT_0062d864 >> 0x10) & 0xff) << 8) | (DAT_0062d864 >> 0x18);
}

} /* extern "C" */
