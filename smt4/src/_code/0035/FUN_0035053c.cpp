/* NON_MATCHING: retail branches around `state = 7` (mov r1/str r1); built predicates it (moveq/streq). */
#include "common.h"

extern "C" {

typedef struct Device Device;

/* Device vtable: slot 4 reports how many steps are pending, slot 7 performs one step. */
typedef struct {
    void *slots[4];
    void (*getPending)(Device *self, int *count);   /* 0x10 */
    void *slots5to6[2];
    void (*step)(Device *self);                     /* 0x1c */
} DeviceVtbl;

struct Device {
    const DeviceVtbl *vtbl;
};

/* Owner with a state word at 0xc, a gate object at 0x158, a device table at 0x2ec and two channels' bookkeeping. */
typedef struct {
    u8 unk00[0xc];
    u32 state;              /* 0x00c */
    u8 unk10[0x148];
    u8 gate[0x194];         /* 0x158 */
    Device *devices[96];    /* 0x2ec */
    s32 deviceIndex[2];     /* 0x46c: per channel, index into devices (negative = unused) */
    s32 unk474[2];          /* 0x474 */
    s32 unk47c[2];          /* 0x47c */
} Owner;

int FUN_0023a4f8(u8 *gate);
int FUN_0023a5dc(u8 *gate);
int FUN_00350e30(Owner *owner);

/* Runs the owner's gate logic, then lets each active channel's device finish its pending steps. */
void FUN_0035053c(Owner *owner)
{
    int count;
    int channel;

    if (FUN_0023a5dc(owner->gate) != 0) {
        if (FUN_0023a4f8(owner->gate) == 0) {
            owner->state = 7;
        }
        FUN_00350e30(owner);
    }
    channel = 0;
    do {
        if (owner->deviceIndex[channel] >= 0) {
            int step;

            owner->devices[owner->deviceIndex[channel]]->vtbl->getPending(owner->devices[owner->deviceIndex[channel]], &count);
            step = 0;
            if (count > 0) {
                do {
                    owner->devices[owner->deviceIndex[channel]]->vtbl->step(owner->devices[owner->deviceIndex[channel]]);
                    step++;
                } while (count > step);
            }
            owner->unk474[channel] = 0;
            owner->unk47c[channel] = 0;
        }
        channel++;
    } while (channel < 2);
}

} /* extern "C" */
