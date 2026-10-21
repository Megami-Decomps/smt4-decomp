/* NON_MATCHING: retail performs four resultless next-pointer walks from the same head; the original callback/result contract is unresolved. Existing empty-loop draft body is intentionally unchanged. */
#include "romwright_types.h"

extern "C" {

extern unsigned char g_allocationAddressRanges; /* 0x5b4028 */


void FUN_0019a534(void)

{
  int temp_v0;
  int temp_v1;
  int temp_v2;
  
  temp_v1 = *(*(int * *)((unsigned char *)&g_allocationAddressRanges + 0x8));
  for (temp_v2 = temp_v1; temp_v0 = temp_v1, temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 4)) {
  }
  for (; temp_v2 = temp_v1, temp_v0 != 0; temp_v0 = *(int *)(temp_v0 + 4)) {
  }
  for (; temp_v2 != 0; temp_v2 = *(int *)(temp_v2 + 4)) {
  }
  for (; temp_v1 != 0; temp_v1 = *(int *)(temp_v1 + 4)) {
  }
  return;
}

} /* extern "C" */
