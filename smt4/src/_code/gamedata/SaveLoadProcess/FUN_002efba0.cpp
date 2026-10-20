/* NON_MATCHING: romwright 0.5.0 decompilation of `FUN_002efba0` (_code @ 0x2efba0, 0x180 bytes) from smt4_v1.2.0.cxi.
 * build.py compiles it with the retail compiler and objdiff compares it with the retail bytes: remove this marker once it matches. */
#include "romwright_types.h"

extern "C" {

int FUN_001a1d08(void);
int FUN_00247af8(int, int, unsigned int, unsigned int, unsigned int);
int FUN_0026b4cc(void);
int FUN_002ad8b4(int, unsigned int);
int FUN_002c09bc(void);
int FUN_002c415c(unsigned int);
int FUN_002c498c(int, int, int, unsigned int, int);
int FUN_002e0cc8(void);
int rt_memcpy(unsigned int, unsigned int, int);
int rt_memcpy_w(unsigned short *, unsigned int, int);

/* stack frame of void: 1 slot(s), 4 byte(s) */
typedef struct {
    unsigned int sp18; /* 0x18: local_18 */
} void_stack;

extern unsigned char DAT_0043e2f1; /* 0x43e2f1 */
extern unsigned char DAT_0043e2f4; /* 0x43e2f4 */

/* Supplied declaration required: FUN_001a1d08. */
/* Supplied declaration required: FUN_00247af8. */
/* Supplied declaration required: FUN_0026b4cc. */
extern unsigned int FUN_0026b5c8(void);
extern unsigned int FUN_0026b5dc(void);
/* Supplied declaration required: FUN_002ad8b4. */
extern int FUN_002c08f0(void);
/* Supplied declaration required: FUN_002c09bc. */
/* Supplied declaration required: FUN_002c415c. */
/* Supplied declaration required: FUN_002c498c. */
extern int FUN_002cedbc(void);
/* Supplied declaration required: FUN_002e0cc8. */
/* Supplied declaration required: rt_memcpy. */
/* Supplied declaration required: rt_memcpy_w. */


unsigned int FUN_002efba0(void)

{
/* irregular: 10 native warning(s); review required */
  int temp_v0;
  unsigned int temp_v1;
  int temp_v2;
  unsigned short *puVar4;
  
  temp_v0 = FUN_002c08f0();
  temp_v2 = *(int *)(temp_v0 + 4);
  if (temp_v2 != 0) {
    if (temp_v2 != 1) {
      if (temp_v2 == 2) {
        DAT_0043e2f4 = 1;
      }
      else {
        if (temp_v2 != 3) {
          return 0;
        }
        DAT_0043e2f4 = 0;
      }
      DAT_0043e2f1 = 1;
      return 0xffffffff;
    }
    temp_v2 = temp_v0;
    FUN_001a1d08();
    if (temp_v2 == 1) {
      temp_v2 = FUN_002cedbc();
      if (temp_v2 != 0) {
        FUN_002c415c(*(unsigned int *)(temp_v0 + 8));
        *(unsigned int *)(temp_v0 + 4) = 3;
        *(unsigned int *)(temp_v0 + 8) = 0;
      }
      else {
        FUN_002c415c(*(unsigned int *)(temp_v0 + 8));
        *(unsigned int *)(temp_v0 + 4) = 2;
        *(unsigned int *)(temp_v0 + 8) = 0;
      }
    }
  }
  else {
    *(unsigned int *)(temp_v0 + 0xc) = 0x24db0;
    temp_v1 = 0x100;
    FUN_002c498c(0x100,0x100,0,*(unsigned int *)(temp_v0 + 0xc),1);
    *(unsigned int *)(temp_v0 + 8) = temp_v1;
    FUN_002e0cc8();
    temp_v2 = FUN_002c09bc();
    *(char *)(temp_v2 + 3) = (char)*(unsigned int *)(temp_v0 + 0x10);
    temp_v1 = FUN_0026b5dc();
    rt_memcpy(*(unsigned int *)(temp_v0 + 8),temp_v1,0x80);
    temp_v1 = FUN_0026b5c8();
    FUN_002ad8b4(*(int *)(temp_v0 + 8) + 0x80,temp_v1);
    temp_v2 = *(int *)(temp_v0 + 8);
    puVar4 = (unsigned short *)(temp_v2 + 0x88);
    temp_v1 = FUN_002c09bc();
    rt_memcpy_w(puVar4,temp_v1,0x24d28);
    *puVar4 = 3;
    *(unsigned char *)(temp_v2 + 0x8a) = *(unsigned char *)(temp_v0 + 0x14);
    FUN_0026b4cc();
    FUN_00247af8(2,0,*(unsigned int *)(temp_v0 + 0x10),*(unsigned int *)(temp_v0 + 8),
                 *(unsigned int *)(temp_v0 + 0xc));
    *(unsigned int *)(temp_v0 + 4) = 1;
  }
  return 0;
}

} /* extern "C" */
