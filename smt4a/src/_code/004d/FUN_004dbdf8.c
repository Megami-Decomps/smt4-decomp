/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004dbdf8` (_code @ 0x4dbdf8, 0x100 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

/* stack frame of void: 1 slot(s), 2 byte(s) */
typedef struct {
    unsigned short sp32; /* 0x32: local_32 */
} void_stack;

/* Supplied declaration required: FUN_00184310. */
extern int FUN_0018719c(void);
extern int FUN_001ab888(void);
extern int FUN_00239234(unsigned short, unsigned char *);
extern int FUN_002a4b28(unsigned short);
/* Supplied declaration required: FUN_0035dd74. */
/* Supplied declaration required: FUN_0038b7d8. */


short FUN_004dbdf8(void)

{
/* irregular: 3 native warning(s); review required */
  unsigned short temp_v0;
  short temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  unsigned int temp_v3;
  unsigned short temp_v4;
  unsigned char temp_v5 [54];
  unsigned short temp_v6;
  
  temp_v1 = 0;
  temp_v2 = FUN_001ab888();
  temp_v4 = 0;
  FUN_0038b7d8();
  if (temp_v2 != 0) {
    do {
      temp_v3 = temp_v4;
      FUN_0035dd74();
      if (temp_v3 != 0) {
        puVar4 = (unsigned short *)(unsigned int)*(unsigned short *)(temp_v3 + 0x1a);
        FUN_00184310();
        if ((puVar4[0x1f] == 0) || (temp_v2 = FUN_0018719c(), temp_v2 != 0)) {
          temp_v0 = puVar4[0x1e];
          if ((temp_v0 & 1) != 0) {
            if ((temp_v0 & 0xfffe) != 0) {
              temp_v2 = FUN_00239234(temp_v0 >> 1,temp_v5);
            }
            else {
              temp_v2 = FUN_00239234(*puVar4,temp_v5);
            }
            if ((temp_v2 != 0) && ((temp_v6 & 0xfc) != 0)) {
              if (((puVar4[5] & 1) != 0) &&
                 (temp_v2 = FUN_002a4b28(*(unsigned short *)(temp_v3 + 0x1a)), temp_v2 != 0)) {
                temp_v1 = temp_v1 + 1;
              }
            }
          }
          else if (((puVar4[5] & 1) != 0) &&
                  (temp_v2 = FUN_002a4b28(*(unsigned short *)(temp_v3 + 0x1a)), temp_v2 != 0)) {
            temp_v1 = temp_v1 + 1;
          }
        }
      }
      temp_v3 = temp_v4 + 1;
      temp_v4 = temp_v3;
      FUN_0038b7d8();
    } while (temp_v4 < temp_v3);
  }
  return temp_v1;
}
