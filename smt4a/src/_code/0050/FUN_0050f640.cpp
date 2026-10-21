/* NON_MATCHING: release-build finalizer-registration NOP has no call relocation; registration target needs identification. */
#include "common.h"
struct Vector3 {f32 x,y,z;};
extern "C" {
void floatPairClear();extern Vector3 DAT_005f15d8;
/* Initializes the module's default vector after its base initializer. */
void FUN_0050f640(){floatPairClear();DAT_005f15d8.x=310.0f;DAT_005f15d8.y=45.0f;DAT_005f15d8.z=0.0f;}
}
