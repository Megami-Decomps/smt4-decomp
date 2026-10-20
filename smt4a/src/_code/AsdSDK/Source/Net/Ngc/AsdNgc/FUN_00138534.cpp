/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_00138534` (_code @ 0x138534, 0x80 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_00146f68(void);
int FUN_00163060(int, int, int, int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp10; /* 0x10: local_10 */
} void_stack;

extern unsigned int DAT_005b3fb0; /* 0x5b3fb0 */
extern unsigned int DAT_0063d108; /* 0x63d108 */
extern unsigned char DAT_0063d110; /* 0x63d110 */

extern int FUN_00146f0c(unsigned char *, unsigned int);
/* Supplied declaration required: FUN_00146f68. */
/* Supplied declaration required: FUN_00163060. */
extern void nn_cfg_CTR_Initialize(void);


unsigned int FUN_00138534(void)

{
/* irregular: 2 native warning(s); review required */
  unsigned int temp_v0;
  int temp_v1;
  unsigned char *puVar3;
  
  nn_cfg_CTR_Initialize();
  temp_v0 = 0x100;
  FUN_00163060(0x100,0x100,0,0x10000,1);
  DAT_005b3fb0 = temp_v0;
  temp_v1 = FUN_00146f0c(&DAT_0063d110,temp_v0);
  if (-1 < temp_v1) {
    puVar3 = &DAT_0063d110;
    FUN_00146f68();
    if (puVar3 != (unsigned char *)0x0) {
      DAT_0063d108 = DAT_0063d108 | 1;
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
