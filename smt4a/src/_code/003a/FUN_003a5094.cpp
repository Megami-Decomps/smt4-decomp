/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_003a5094` (_code @ 0x3a5094, 0xcc bytes) from smt4a.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

/* stack frame of void: 4 slot(s), 14 byte(s) */
typedef struct {
    unsigned short spC; /* 0xc: local_c */
    unsigned int sp10; /* 0x10: local_10 */
    unsigned int sp14; /* 0x14: local_14 */
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern int DAT_0057f118; /* 0x57f118 */

extern unsigned int *FUN_001801a4(void);


unsigned int FUN_003a5094(void)

{
  int temp_v0;
  unsigned int *puVar2;
  
  temp_v0 = DAT_0057f118;
  if (DAT_0057f118 != 0) {
    puVar2 = (unsigned int *)FUN_001801a4();
    if (((((*puVar2 & 0xffff) != (*(unsigned int *)(temp_v0 + 0x17a) & 0xffff)) ||
         (*puVar2 >> 0x10 != *(unsigned int *)(temp_v0 + 0x17a) >> 0x10)) ||
        ((puVar2[1] & 0xffff) != (*(unsigned int *)(temp_v0 + 0x17e) & 0xffff))) ||
       (((puVar2[1] >> 0x10 != *(unsigned int *)(temp_v0 + 0x17e) >> 0x10 ||
         ((puVar2[2] & 0xffff) != (*(unsigned int *)(temp_v0 + 0x182) & 0xffff))) ||
        ((puVar2[2] >> 0x10 != *(unsigned int *)(temp_v0 + 0x182) >> 0x10 ||
         ((puVar2[3] & 0xffff) != (unsigned int)*(unsigned short *)(temp_v0 + 0x186))))))) {
      return 1;
    }
  }
  return 0;
}

} /* extern "C" */
