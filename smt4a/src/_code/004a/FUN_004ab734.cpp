/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_004ab734` (_code @ 0x4ab734, 0x4c bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00184748(int);
int FUN_00321500(int);
int FUN_0039ebcc(void);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} void_stack;

extern int DAT_0057a9c8; /* 0x57a9c8 */

/* Supplied declaration required: FUN_00184748. */
/* Supplied declaration required: FUN_00321500. */
extern int FUN_0038e704(int);
/* Supplied declaration required: FUN_0039ebcc. */


void FUN_004ab734(void)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  int temp_v1;
  
  temp_v0 = DAT_0057a9c8;
  temp_v1 = FUN_0038e704(DAT_0057a9c8 + 8);
  if (temp_v1 != 0) {
    temp_v1 = temp_v0 + 0x24bc;
    FUN_0039ebcc();
    if (temp_v1 != 0) {
      FUN_00321500(temp_v0 + 8);
      FUN_00184748(temp_v0 + 0x24bc);
      return;
    }
  }
  return;
}

} /* extern "C" */
