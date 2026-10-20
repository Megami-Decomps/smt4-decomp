/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00272310` (_code @ 0x272310, 0x110 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} param_1_stack;

extern int DAT_00573920; /* 0x573920 */
extern unsigned int DAT_00573978; /* 0x573978 */
extern unsigned int DAT_0057397c; /* 0x57397c */
extern unsigned int DAT_00573988; /* 0x573988 */
extern unsigned int DAT_0057398c; /* 0x57398c */
extern unsigned int DAT_005739a0; /* 0x5739a0 */
extern unsigned int DAT_005739a4; /* 0x5739a4 */


int FUN_00272310(unsigned int param_1)

{
  unsigned int *puVar1;
  int temp_v0;
  int temp_v1;
  unsigned int temp_v2;
  unsigned int temp_v3;
  
  if (DAT_00573920 != 0) {
    temp_v0 = 0;
    do {
      puVar1 = (unsigned int *)(*(int *)(DAT_00573920 + 0x1ffc) + temp_v0 * 0x408);
      if (puVar1 != (unsigned int *)0x0) {
        temp_v2 = *puVar1;
        temp_v3 = puVar1[1];
        if (((((DAT_00573978 & temp_v2) != 0 || (DAT_0057397c & temp_v3) != 0) &&
             ((DAT_005739a4 & temp_v3) == 0 && (DAT_005739a0 & temp_v2) == 0)) &&
            ((temp_v2 & DAT_00573988) != 0 || (temp_v3 & DAT_0057398c) != 0)) &&
           (*(unsigned short *)((int)puVar1 + 0x166) == param_1)) {
          temp_v1 = 1;
          *(unsigned char *)((int)puVar1 + 0x30a) =
               (unsigned char)((unsigned short)*(unsigned short *)((int)puVar1 + 0x2b6) >> 10);
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
      }
      temp_v0 = temp_v0 + 1;
    } while (temp_v0 < 0x6d);
  }
  return 0;
}

} /* extern "C" */
