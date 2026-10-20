/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002cf5bc` (_code @ 0x2cf5bc, 0xd4 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int g_btlMain; /* 0x573920 */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */


int FUN_002cf5bc(void)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  
  if (g_btlMain == 0) {
    return 0;
  }
  puVar1 = *(unsigned int **)(g_btlMain + 0x1ffc);
  if (puVar1 == (unsigned int *)0x0) {
    return 0;
  }
  if (((puVar1[1] & DAT_0057397c) != 0 || (*puVar1 & DAT_00573978) != 0) &&
     ((*puVar1 & DAT_005739a0) == 0 && (puVar1[1] & DAT_005739a4) == 0)) {
    temp_v1 = 1;
    *(unsigned char *)((int)puVar1 + 0x30a) = (unsigned char)((unsigned short)*(unsigned short *)((int)puVar1 + 0x2b6) >> 10);
    temp_v0 = 1;
    do {
      *(unsigned char *)((int)puVar1 + temp_v0 + 0x30a) =
           (unsigned char)((unsigned short)*(unsigned short *)((int)puVar1 + temp_v0 * 2 + 0x2b6) >> 10);
      temp_v1 = temp_v1 + 2;
      *(unsigned char *)((int)puVar1 + temp_v0 + 0x30b) =
           (unsigned char)((unsigned short)*(unsigned short *)((int)puVar1 + (temp_v0 + 1) * 2 + 0x2b6) >> 10);
      temp_v0 = temp_v0 + 2;
    } while (temp_v1 < 0x15);
    return (int)puVar1 + 0x30a;
  }
  return 0;
}

} /* extern "C" */
