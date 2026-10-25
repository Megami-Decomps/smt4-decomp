/* NON_MATCHING: linker-folded empty destructors need native-class symbol aliases and relocation aliasing in fdiff/relink. */
#include "romwright_types.h"

extern "C" {

int __aeabi_atexit(unsigned int *, unsigned char *, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char LAB_0042ce3c; /* 0x42ce3c */
extern unsigned int DAT_00618518; /* 0x618518 */
extern unsigned int DAT_0061851c; /* 0x61851c */
extern unsigned int DAT_00618520; /* 0x618520 */

/* Supplied declaration required: __aeabi_atexit. */


void FUN_005124e0(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  *param_1 = 0;
  *(unsigned char *)(param_1 + 1) = 1;
  DAT_00618518 = 0;
  DAT_00618520 = 0xffffffff;
  DAT_0061851c = 0;
  __aeabi_atexit(&DAT_00618518,&LAB_0042ce3c,0x100000);
  return;
}

} /* extern "C" */
