/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002e93ec` (_code @ 0x2e93ec, 0x74 bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_002e9460; /* 0x2e9460 */
extern unsigned char LAB_002e9480; /* 0x2e9480 */
extern signed char DAT_00594964; /* 0x594964 */

extern unsigned int FUN_00104038(int);
/* Supplied declaration required: FUN_00104048. */
/* Supplied declaration required: FUN_001107ec. */
extern int FUN_002e92e4(unsigned int, unsigned char *);
/* Supplied declaration required: FUN_002e97b4. */
extern int FUN_0043d568(unsigned char *);


unsigned int FUN_002e93ec(int param_1,unsigned int param_2)

{
/* irregular: 3 native warning(s); review required */
  int temp_v0;
  unsigned char *puVar2;
  unsigned int temp_v1;
  unsigned char temp_v2 [256];
  unsigned char temp_v3 [68];
  
  puVar2 = temp_v2;
  temp_v0 = FUN_002e92e4(param_2,&LAB_002e9460);
  if (temp_v0 != 0) {
    temp_v0 = FUN_002e92e4(param_2,&LAB_002e9480);
    if (temp_v0 == 0) {
      temp_v1 = FUN_00104038(param_1);
      return temp_v1;
    }
    FUN_001107ec(param_2,temp_v2,0x100);
    FUN_00104048();
    *(unsigned char **)(param_1 + 8) = puVar2;
    if ((DAT_00594964 != '\0') && (puVar2 == (unsigned char *)0x0)) {
      temp_v0 = FUN_0043d568(temp_v2);
      if (temp_v0 == 0) {
        return 0;
      }
      *(unsigned int *)(param_1 + 8) = *(unsigned int *)**(unsigned int **)(temp_v0 + 0xc);
      FUN_002e97b4(param_1,temp_v3,0x40);
    }
  }
  else {
    *(unsigned int *)(param_1 + 8) = 0xffffffff;
  }
  return 1;
}
