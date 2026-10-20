#include "romwright_types.h"

extern "C" {

int FUN_002c1c0c(...);
int FUN_002c58c8(...);
int FUN_002c5914(int, int);

extern unsigned char DAT_00447a78; /* 0x447a78 */

/* Supplied declaration required: FUN_002c1c0c. */
/* Supplied declaration required: FUN_002c58c8. */
/* Supplied declaration required: FUN_002c5914. */


void FUN_0020d088(void)

{
/* irregular: 3 native warning(s); review required */
  int *piVar1;
  int temp_v0;
  
  FUN_002c5914(10,0);
  FUN_002c58c8(10,0x1f);
  temp_v0 = FUN_002c1c0c(10,0x1f);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x22] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x22] + 0x40) = 1;
  FUN_002c58c8(10,0x22);
  temp_v0 = FUN_002c1c0c(10,0x22);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x1e] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x1e] + 0x40) = 1;
  FUN_002c58c8(10,0x21);
  temp_v0 = FUN_002c1c0c(10,0x21);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x20] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x20] + 0x40) = 1;
  FUN_002c58c8(10,0x23);
  temp_v0 = FUN_002c1c0c(10,0x23);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x1f] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x1f] + 0x40) = 1;
  FUN_002c58c8(10,0x24);
  temp_v0 = FUN_002c1c0c(10,0x24);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x21] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x21] + 0x40) = 1;
  FUN_002c58c8(10,0x19);
  temp_v0 = FUN_002c1c0c(10,0x19);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x16] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x16] + 0x40) = 1;
  FUN_002c58c8(10,0x1c);
  temp_v0 = FUN_002c1c0c(10,0x1c);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x1b] = temp_v0;
  FUN_002c58c8(10,0x1e);
  temp_v0 = FUN_002c1c0c(10,0x1e);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x1c] = temp_v0;
  FUN_002c58c8(10,0x1d);
  temp_v0 = FUN_002c1c0c(10,0x1d);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x1d] = temp_v0;
  FUN_002c58c8(10,0);
  FUN_002c58c8(10,1);
  FUN_002c58c8(10,0xe);
  temp_v0 = FUN_002c1c0c(10,0xe);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  *(*(int * *)((unsigned char *)&DAT_00447a78 + 0x4)) = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(*piVar1 + 0x40) = 1;
  FUN_002c58c8(10,0x11);
  temp_v0 = FUN_002c1c0c(10,0x11);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[1] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[1] + 0x40) = 1;
  FUN_002c58c8(10,0xf);
  temp_v0 = FUN_002c1c0c(10,0xf);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[2] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[2] + 0x40) = 1;
  FUN_002c58c8(10,0x10);
  temp_v0 = FUN_002c1c0c(10,0x10);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[3] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[3] + 0x40) = 1;
  FUN_002c58c8(10,0xd);
  temp_v0 = FUN_002c1c0c(10,0xd);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[4] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[4] + 0x40) = 1;
  FUN_002c58c8(10,0xc);
  temp_v0 = FUN_002c1c0c(10,0xc);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[5] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[5] + 0x40) = 1;
  FUN_002c58c8(10,0x16);
  temp_v0 = FUN_002c1c0c(10,0x16);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0xd] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0xd] + 0x40) = 1;
  FUN_002c58c8(10,0x13);
  temp_v0 = FUN_002c1c0c(10,0x13);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0xe] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0xe] + 0x40) = 1;
  FUN_002c58c8(10,0x15);
  temp_v0 = FUN_002c1c0c(10,0x15);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0xc] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0xc] + 0x40) = 1;
  FUN_002c58c8(10,0x12);
  temp_v0 = FUN_002c1c0c(10,0x12);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0xf] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0xf] + 0x40) = 1;
  FUN_002c58c8(10,0x14);
  temp_v0 = FUN_002c1c0c(10,0x14);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x10] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x10] + 0x40) = 1;
  FUN_002c58c8(10,0x26);
  temp_v0 = FUN_002c1c0c(10,0x26);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x11] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x11] + 0x40) = 1;
  FUN_002c58c8(10,0x1b);
  temp_v0 = FUN_002c1c0c(10,0x1b);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x12] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x12] + 0x40) = 1;
  FUN_002c58c8(10,8);
  temp_v0 = FUN_002c1c0c(10,8);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[6] = temp_v0;
  FUN_002c58c8(10,9);
  temp_v0 = FUN_002c1c0c(10,9);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[9] = temp_v0;
  FUN_002c58c8(10,0xb);
  temp_v0 = FUN_002c1c0c(10,0xb);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[10] = temp_v0;
  FUN_002c58c8(10,6);
  temp_v0 = FUN_002c1c0c(10,6);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0xb] = temp_v0;
  FUN_002c58c8(10,7);
  temp_v0 = FUN_002c1c0c(10,7);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[7] = temp_v0;
  FUN_002c58c8(10,10);
  temp_v0 = FUN_002c1c0c(10,10);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[8] = temp_v0;
  FUN_002c58c8(10,2);
  temp_v0 = FUN_002c1c0c(10,2);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x18] = temp_v0;
  FUN_002c58c8(10,0x17);
  temp_v0 = FUN_002c1c0c(10,0x17);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x13] = temp_v0;
  FUN_002c58c8(10,5);
  temp_v0 = FUN_002c1c0c(10,5);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x1a] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x1a] + 0x40) = 1;
  FUN_002c58c8(10,0x18);
  temp_v0 = FUN_002c1c0c(10,0x18);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x14] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x14] + 0x40) = 1;
  FUN_002c58c8(10,0x1a);
  temp_v0 = FUN_002c1c0c(10,0x1a);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x15] = temp_v0;
  *(unsigned int *)(temp_v0 + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x15] + 0x40) = 1;
  temp_v0 = FUN_002c1c0c(10,0);
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x19] = temp_v0;
  temp_v0 = FUN_002c1c0c(10,1);
  piVar1 = (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4));
  (*(int * *)((unsigned char *)&DAT_00447a78 + 0x4))[0x17] = temp_v0;
  *(unsigned int *)(piVar1[0x19] + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x19] + 0x40) = 1;
  *(unsigned int *)(piVar1[0x17] + 0x3c) = 1;
  *(unsigned int *)(piVar1[0x17] + 0x40) = 1;
  return;
}

} /* extern "C" */
