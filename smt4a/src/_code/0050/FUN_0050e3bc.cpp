/* NON_MATCHING: unit begins four bytes late; decoded image has LDR r0 at0x50e3b8 loading global0x64751c before this PUSH, so the input is not a real argument. Needs boundary repair. The draft's garbled string is actually vtable DAT_005583fc. */
#include "romwright_types.h"

extern "C" {

int emptyStub_002f4370(char **, int, int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00558414; /* 0x558414 */
extern char *DAT_00647580; /* 0x647580 */
extern unsigned int DAT_00647584; /* 0x647584 */

/* Supplied declaration required: emptyStub_002f4370. */


void FUN_0050e3bc(unsigned int *param_1)

{
/* irregular: 1 native warning(s); review required */
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[0x15] = 0;
  param_1[0x16] = 0;
  param_1[0x18] = 0xffffffff;
  *param_1 = (unsigned int)&DAT_00558414;
  param_1[0x17] = 0;
  DAT_00647580 = "䰬Q䯼QḘC";
  DAT_00647584 = 0;
  emptyStub_002f4370(&DAT_00647580,0x431e18,0x100000);
  return;
}

} /* extern "C" */
