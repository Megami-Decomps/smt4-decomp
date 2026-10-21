#include "common.h"

extern "C" {

int bgmStopNoForce(int id, int arg);
int soundChannelRequestIfEnabled(int id, int a, int b);

typedef struct Obj {
    /* 0x0000 */ u8 unk0000[0x49D8];
    /* 0x49D8 */ int current;
} Obj;

/* Switches the current id: stops the old one, starts the new one. */
void bgmSwitchCurrent(Obj *obj, int id)
{
    if (id < 0) return;

    int current = obj->current;

    if (current != id) {
        if (current != -1) {
            bgmStopNoForce(current, 0);
        }
        soundChannelRequestIfEnabled(id, 0, 10);
        obj->current = id;
    }
}

} /* extern "C" */
