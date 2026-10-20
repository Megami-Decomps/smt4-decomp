#include "romwright_types.h"

extern "C" {

int nw_gfx_res_ResGraphicsFile_Setup(unsigned int *, unsigned int, unsigned int);

/* stack frame of param_1: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp8; /* 0x8: local_8 */
} param_1_stack;

extern unsigned char DAT_00464af0; /* 0x464af0 */

extern unsigned int asdMemoryGetDefaultAllocator(void);
/* Supplied declaration required: nw_gfx_res_ResGraphicsFile_Setup. */


void FUN_00105494(unsigned int param_1)

{
/* irregular: 1 native warning(s); review required */
  unsigned int temp_v0;
  
  (*(unsigned int *)((unsigned char *)&DAT_00464af0 + 0x7c)) = param_1;
  temp_v0 = asdMemoryGetDefaultAllocator();
  nw_gfx_res_ResGraphicsFile_Setup(&(*(unsigned int *)((unsigned char *)&DAT_00464af0 + 0x7c)),temp_v0,(*(unsigned int *)((unsigned char *)&DAT_00464af0 + 0x7c)));
  return;
}

} /* extern "C" */
