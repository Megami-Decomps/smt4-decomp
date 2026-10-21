/* NON_MATCHING: retail uses push {r4, lr} where the compiled block uses add r1, r0, #768. */
#include "common.h"

struct StatusData {
    u8 unk00[0x50];
    s16 mode;             // 0x50
    u8 unk52[2];
    u8 flag;              // 0x54
    u8 unk55[0x35];
    s8 value;             // 0x8A
};

struct StatusObject {
    u8 unk00[0x2DC];
    StatusData status;    // 0x2DC
};

extern "C" s32 FUN_00280030(StatusObject* object)
{
    if (object->status.mode == 3 && object->status.flag == 0) {
        return object->status.value;
    }
    return 1;
}
