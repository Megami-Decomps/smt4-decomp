/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003d18e0` (_code @ 0x3d18e0, 0x19c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int qsort(...);
int FUN_00312830(...);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} param_1_stack;

extern int FUN_002417a8(...); /* 0x2417a8 */
extern int FUN_0029093c(...); /* 0x29093c */
extern int FUN_002b2b34(...); /* 0x2b2b34 */
extern int FUN_002fdb20(...); /* 0x2fdb20 */
extern int FUN_002fdc2c(...); /* 0x2fdc2c */
extern int FUN_003370b0(...); /* 0x3370b0 */
extern int FUN_0034f46c(...); /* 0x34f46c */
extern int FUN_003759f0(...); /* 0x3759f0 */
extern int DAT_0057f28c; /* 0x57f28c */

/* Supplied declaration required: qsort. */
extern int FUN_0026140c(void);
extern unsigned int FUN_002c2c68(int);
/* Supplied declaration required: FUN_00312830. */


void FUN_003d18e0(int param_1)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  unsigned char *pbVar3;
  unsigned char temp_v2;
  int temp_v3;
  int temp_v4;
  
  temp_v4 = DAT_0057f28c;
  if (param_1 == 0) {
    temp_v0 = FUN_0026140c();
    pbVar3 = (unsigned char *)(temp_v0 + 0xe);
    temp_v3 = temp_v4 + 0x9ac;
    temp_v4 = temp_v4 + 0xad6;
    temp_v2 = ~(*(unsigned char *)(temp_v0 + 0xe) >> 7) & 1;
    if ((*(unsigned char *)(temp_v0 + 0xe) & 0x7f) == 0x22) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_002c2c68(temp_v3);
        qsort(temp_v4,temp_v1,2,FUN_0029093c);
      }
      else {
        temp_v1 = FUN_002c2c68(temp_v3);
        qsort(temp_v4,temp_v1,2,FUN_003370b0);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x21) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_002c2c68(temp_v3);
        qsort(temp_v4,temp_v1,2,FUN_002b2b34);
      }
      else {
        temp_v1 = FUN_002c2c68(temp_v3);
        qsort(temp_v4,temp_v1,2,FUN_0034f46c);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x18) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_002c2c68(temp_v3);
        qsort(temp_v4,temp_v1,2,FUN_002fdc2c);
      }
      else {
        temp_v1 = FUN_002c2c68(temp_v3);
        qsort(temp_v4,temp_v1,2,FUN_003759f0);
      }
    }
    if ((*pbVar3 & 0x7f) == 0x19) {
      if (temp_v2 != 0) {
        temp_v1 = FUN_002c2c68(temp_v3);
        FUN_00312830(temp_v4,temp_v1,2,FUN_002417a8);
        return;
      }
      temp_v1 = FUN_002c2c68(temp_v3);
      FUN_00312830(temp_v4,temp_v1,2,FUN_002fdb20);
      return;
    }
  }
  return;
}

} /* extern "C" */
