/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002f4424` (_code @ 0x2f4424, 0x3a bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern unsigned char LAB_0012cec5; /* 0x12cec5 */
extern unsigned char DAT_0055b02c; /* 0x55b02c */
extern unsigned int DAT_00594b08; /* 0x594b08 */
extern unsigned char *DAT_0062d848; /* 0x62d848 */
extern unsigned int DAT_0062d84c; /* 0x62d84c */
extern unsigned int DAT_0062d850; /* 0x62d850 */
extern unsigned int DAT_0062d854; /* 0x62d854 */
extern unsigned int DAT_0062d858; /* 0x62d858 */

extern int FUN_002eba64(unsigned int *);
/* Supplied declaration required: FUN_002f4370. */


unsigned int * FUN_002f4424(void)

{
/* irregular: 1 native warning(s); review required */
  int temp_v0;
  
  if (((DAT_00594b08 & 1) == 0) && (temp_v0 = FUN_002eba64(&DAT_00594b08), temp_v0 != 0)) {
    DAT_0062d84c = 0;
    DAT_0062d850 = 0;
    DAT_0062d854 = 0;
    DAT_0062d858 = 0;
    DAT_0062d848 = &DAT_0055b02c;
    FUN_002f4370(&DAT_0062d848,&LAB_0012cec5,0x100000);
  }
  return (unsigned int *)&DAT_0062d848;
}
