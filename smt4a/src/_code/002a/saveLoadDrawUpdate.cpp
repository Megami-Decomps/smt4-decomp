#include "common.h"

extern "C" {

typedef struct Target Target;
typedef struct TargetVtbl {
    /* 0x00 */ void *unk00[5];
    /* 0x14 */ void (*run)(Target *target);
} TargetVtbl;
struct Target {
    /* 0x00 */ const TargetVtbl *vtbl;
};

typedef struct Holder {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ Target *target;
} Holder;

extern Holder *DAT_00588e2c;

/* Draw-update task of the save/load screen; invoke the child's update phase. */
s32 saveLoadDrawUpdate(u32 job)
{
    Holder *holder = DAT_00588e2c;

    if (holder == NULL)
        return 0;
    holder->target->vtbl->run(holder->target);
    return 0;
}

} /* extern "C" */
